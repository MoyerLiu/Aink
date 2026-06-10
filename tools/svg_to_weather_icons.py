#!/usr/bin/env python3
"""Rasterize wi-*.svg Weather Icons into 1-bit C bitmask headers for ESP32."""

from __future__ import annotations

import glob
import io
import os
import sys

try:
    import cairosvg
    from PIL import Image
except ImportError:
    print("Install deps: pip install cairosvg pillow", file=sys.stderr)
    sys.exit(1)

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_DIR = os.path.dirname(SCRIPT_DIR)
OUTPUT_PATH = os.path.join(PROJECT_DIR, "weather_icons.h")

ICON_FILES = [
    ("WEATHER_ICON_SUNNY", "wi-day-sunny.svg"),
    ("WEATHER_ICON_CLOUDY", "wi-cloudy.svg"),
    ("WEATHER_ICON_RAIN", "wi-rain.svg"),
    ("WEATHER_ICON_SNOW", "wi-snow.svg"),
    ("WEATHER_ICON_LIGHTNING", "wi-lightning.svg"),
    ("WEATHER_ICON_FOG", "wi-fog.svg"),
]

ICON_SIZE = 16


def rasterize(svg_path: str, size: int) -> Image.Image:
    png = cairosvg.svg2png(url=svg_path, output_width=size, output_height=size)
    img = Image.open(io.BytesIO(png)).convert("RGBA")
    bg = Image.new("RGBA", img.size, (255, 255, 255, 255))
    img = Image.alpha_composite(bg, img)
    gray = img.convert("L")
    return gray.point(lambda p: 0 if p < 200 else 255, "1")


def row_masks(img: Image.Image) -> list[int]:
    size = img.size[0]
    rows: list[int] = []
    for y in range(size):
        mask = 0
        for x in range(size):
            if img.getpixel((x, y)) == 0:
                mask |= 1 << (size - 1 - x)
        rows.append(mask)
    return rows


def main() -> None:
    lines: list[str] = [
        "#ifndef WEATHER_ICONS_H",
        "#define WEATHER_ICONS_H",
        "",
        "#include <stdint.h>",
        "",
        f"#define WEATHER_ICON_SIZE {ICON_SIZE}",
        "",
        "enum WeatherIconKind {",
    ]

    for enum_name, _ in ICON_FILES:
        lines.append(f"  {enum_name},")
    lines.append("  WEATHER_ICON_COUNT")
    lines.append("};")
    lines.append("")
    lines.append(
        f"static const uint16_t weather_icon_bitmaps[WEATHER_ICON_COUNT][WEATHER_ICON_SIZE] = {{"
    )

    for enum_name, filename in ICON_FILES:
        svg_path = os.path.join(PROJECT_DIR, filename)
        if not os.path.isfile(svg_path):
            print(f"Missing {svg_path}", file=sys.stderr)
            sys.exit(1)
        img = rasterize(svg_path, ICON_SIZE)
        masks = row_masks(img)
        lines.append(f"  // {filename}")
        lines.append("  {")
        for mask in masks:
            lines.append(f"    0b{mask:016b},")
        lines.append("  },")

    lines.append("};")
    lines.append("")
    lines.append("#endif")
    lines.append("")

    with open(OUTPUT_PATH, "w", encoding="utf-8", newline="\n") as f:
        f.write("\n".join(lines))

    print(f"Wrote {OUTPUT_PATH} ({len(ICON_FILES)} icons, {ICON_SIZE}x{ICON_SIZE})")


if __name__ == "__main__":
    main()
