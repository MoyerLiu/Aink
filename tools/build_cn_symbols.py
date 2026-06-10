#!/usr/bin/env python3
"""Rebuild tools/cn_font_symbols.txt from the UI string inventory below."""

from __future__ import annotations

# Proposed Chinese copy for every static LVGL string in the project.
UI_STRINGS = [
    # ui_home.cpp — launcher tiles
    "天气",
    "应用2",
    "应用3",
    "设置",
    "在线",
    "离线",
    "详情",
    "敬请期待",
    # ui_settings.cpp — root
    "设置",
    "无线",
    "模型",
    "显示",
    "关于",
    # ui_settings.cpp — WiFi submenu
    "网络",
    "重新配网",
    "忘记网络",
    # ui_settings.cpp — Model submenu
    "当前",
    "默认",
    "语音助手",
    "敬请期待",
    # ui_settings.cpp — Display submenu
    "屏幕",
    "刷新",
    "自动",
    # ui_settings.cpp — About submenu
    "版本",
    # ui_weather.cpp — empty / error
    "暂无数据",
    "请检查网络",
    # ui_weather.cpp — labels (prefixes)
    "体感",
    "湿度",
    "风速",
    "紫外线",
    # weather_service.cpp — condition labels
    "晴",
    "多云",
    "雨",
    "雪",
    "雷暴",
    "雾",
    # weather_service.cpp — UV levels
    "低",
    "中",
    "高",
    "极",
    # weather_service.cpp — AQI levels
    "优",
    "良",
    "敏感",
    "不健康",
    "轻度污染",
    "中度污染",
    "重度污染",
    # ui_weather.cpp / weather_service — weekday (if localized)
    "周日",
    "周一",
    "周二",
    "周三",
    "周四",
    "周五",
    "周六",
    "月",
    "日",
    "数",
]

HEADER = """# Aink LVGL 中文字体 Symbols 字表（第一步）
# 用法：复制下面「SYMBOLS 一行」到 https://lvgl.io/tools/fontconverter
# Range 另填：0x20-0x7F（保留英文、数字、标点）
# Size：12 与 14 各生成一份；Bpp：1；Format：C array
#
# 不含：动态城市名、WiFi SSID、Portal 网页文案（网页走浏览器字体）
# 第二步再扩：常用城市/省份字或 GB2312 一级字表

"""


def main() -> None:
    chars: set[str] = set()
    for text in UI_STRINGS:
        for ch in text:
            if ord(ch) > 127:
                chars.add(ch)
    symbols = "".join(sorted(chars))
    output = HEADER + f"# --- SYMBOLS 一行（去重，{len(symbols)} 字）---\n{symbols}\n"
    path = __file__.replace("build_cn_symbols.py", "cn_font_symbols.txt")
    with open(path, "w", encoding="utf-8", newline="\n") as f:
        f.write(output)
    print(f"Wrote {len(symbols)} chars to cn_font_symbols.txt")


if __name__ == "__main__":
    main()
