/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font NotoSansSC-VariableFont_wght.ttf --symbols 一三不中二于云五优低体健六关刷前动助周四在型外多天屏幕应度康当待忘情感手据敏敬数新无日显晴暂暴月期本极染查检模气污湿版用示离紫线络网置自良认记设详语请轻速配重雨雪雷雾音风高默
 --range 32-127 --format lvgl -o aink_12.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef AINK_12
#define AINK_12 1
#endif

#if AINK_12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc, 0x80,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x21, 0x27, 0xd2, 0x4b, 0xf5, 0x14, 0x40,

    /* U+0024 "$" */
    0x21, 0x15, 0x8, 0x60, 0x82, 0x8, 0x74, 0x42,
    0x0,

    /* U+0025 "%" */
    0xe0, 0x24, 0x89, 0x42, 0x56, 0x6a, 0x82, 0x91,
    0x24, 0x89, 0x21, 0x80,

    /* U+0026 "&" */
    0x30, 0x91, 0x43, 0x2, 0x1c, 0x65, 0x44, 0x76,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x2a, 0xaa, 0xa9,

    /* U+0029 ")" */
    0x2a, 0x55, 0xa8,

    /* U+002A "*" */
    0x5f, 0x0,

    /* U+002B "+" */
    0x21, 0x9, 0xf2, 0x10, 0x80,

    /* U+002C "," */
    0x58,

    /* U+002D "-" */
    0xc0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x8, 0x84, 0x22, 0x10, 0x88, 0x42, 0x21, 0x8,
    0x0,

    /* U+0030 "0" */
    0x74, 0xa3, 0x18, 0xc6, 0x32, 0x70,

    /* U+0031 "1" */
    0x61, 0x8, 0x42, 0x10, 0x84, 0x70,

    /* U+0032 "2" */
    0x74, 0x42, 0x11, 0x8, 0x88, 0xf0,

    /* U+0033 "3" */
    0x70, 0x42, 0x61, 0x4, 0x22, 0xf0,

    /* U+0034 "4" */
    0x8, 0x62, 0x8a, 0x4a, 0x2f, 0xc2, 0x8,

    /* U+0035 "5" */
    0x71, 0x4, 0x1c, 0x8, 0x10, 0x42, 0x78,

    /* U+0036 "6" */
    0x39, 0x8, 0x2c, 0x8a, 0x18, 0x62, 0x78,

    /* U+0037 "7" */
    0x78, 0x44, 0x22, 0x10, 0x84, 0x20,

    /* U+0038 "8" */
    0x31, 0x24, 0x94, 0x72, 0x28, 0x61, 0x78,

    /* U+0039 "9" */
    0x72, 0x28, 0x61, 0x74, 0x10, 0x82, 0x70,

    /* U+003A ":" */
    0x82,

    /* U+003B ";" */
    0x40, 0x5, 0x80,

    /* U+003C "<" */
    0x9, 0xc8, 0x18, 0x1c,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x40, 0xc0, 0xce, 0xc0,

    /* U+003F "?" */
    0xe1, 0x12, 0x44, 0x40, 0x40,

    /* U+0040 "@" */
    0x6, 0xc, 0x64, 0xa, 0x11, 0x9a, 0x64, 0x99,
    0x26, 0x4a, 0x8d, 0x20, 0x4, 0x0, 0xb0,

    /* U+0041 "A" */
    0x10, 0x60, 0xa2, 0x44, 0x8f, 0xa1, 0x42, 0x82,

    /* U+0042 "B" */
    0xfa, 0x18, 0x7e, 0x8a, 0x18, 0x62, 0xf8,

    /* U+0043 "C" */
    0x3d, 0x8, 0x20, 0x82, 0x8, 0x10, 0x3c,

    /* U+0044 "D" */
    0xf2, 0x28, 0xa1, 0x86, 0x18, 0xa2, 0xf0,

    /* U+0045 "E" */
    0xf4, 0x21, 0xe8, 0x42, 0x10, 0xf0,

    /* U+0046 "F" */
    0xf4, 0x21, 0xf, 0x42, 0x10, 0x80,

    /* U+0047 "G" */
    0x3c, 0x82, 0x4, 0x8, 0xf0, 0x60, 0xa1, 0x3c,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x61, 0x84,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x11, 0xe0,

    /* U+004B "K" */
    0x8a, 0x49, 0x28, 0xd2, 0x48, 0xa2, 0x84,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf0,

    /* U+004D "M" */
    0x83, 0x87, 0x1e, 0x5a, 0xb5, 0x6c, 0xc9, 0x82,

    /* U+004E "N" */
    0x87, 0x1c, 0x69, 0xa6, 0x59, 0x63, 0x84,

    /* U+004F "O" */
    0x3c, 0x42, 0x82, 0x81, 0x81, 0x81, 0x82, 0x42,
    0x3c,

    /* U+0050 "P" */
    0xfa, 0x18, 0x62, 0xf2, 0x8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x3c, 0x42, 0x82, 0x81, 0x81, 0x81, 0x82, 0x42,
    0x3c, 0x8, 0x7,

    /* U+0052 "R" */
    0xfa, 0x18, 0x62, 0xf2, 0x49, 0x22, 0x84,

    /* U+0053 "S" */
    0x7a, 0x8, 0x10, 0x30, 0x20, 0x41, 0xf8,

    /* U+0054 "T" */
    0x7c, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x62, 0x78,

    /* U+0056 "V" */
    0x82, 0x18, 0x52, 0x49, 0x23, 0xc, 0x10,

    /* U+0057 "W" */
    0x88, 0x63, 0x28, 0xc9, 0x52, 0x54, 0x94, 0xc5,
    0x31, 0x8c, 0x21, 0x0,

    /* U+0058 "X" */
    0x5, 0x25, 0xc, 0x20, 0xc4, 0x92, 0x4,

    /* U+0059 "Y" */
    0x4, 0x64, 0xa6, 0x10, 0x84, 0x20,

    /* U+005A "Z" */
    0x78, 0x21, 0x4, 0x21, 0x4, 0x20, 0xf8,

    /* U+005B "[" */
    0xaa, 0xaa, 0xaa, 0xc0,

    /* U+005C "\\" */
    0x84, 0x20, 0x84, 0x20, 0x84, 0x20, 0x84, 0x20,
    0x80,

    /* U+005D "]" */
    0x55, 0x55, 0x55, 0xc0,

    /* U+005E "^" */
    0x6, 0x6a, 0x98,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xa4,

    /* U+0061 "a" */
    0x70, 0x42, 0xf8, 0xc5, 0xe0,

    /* U+0062 "b" */
    0x82, 0x8, 0x20, 0xbb, 0x28, 0x61, 0x86, 0x2f,
    0x0,

    /* U+0063 "c" */
    0x3e, 0x21, 0x8, 0x41, 0xe0,

    /* U+0064 "d" */
    0x4, 0x10, 0x41, 0x3f, 0x18, 0x61, 0x86, 0x17,
    0xc0,

    /* U+0065 "e" */
    0x3b, 0x28, 0x7f, 0x82, 0x7, 0x80,

    /* U+0066 "f" */
    0x34, 0x44, 0x44, 0x44, 0x44, 0x40,

    /* U+0067 "g" */
    0x7a, 0x28, 0xa4, 0xa2, 0x4, 0x2f, 0x85, 0xe0,

    /* U+0068 "h" */
    0x84, 0x21, 0xb, 0x66, 0x31, 0x8c, 0x62,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x45, 0x55, 0x56,

    /* U+006B "k" */
    0x84, 0x21, 0x9, 0x52, 0x9c, 0xa4, 0xa2,

    /* U+006C "l" */
    0xff, 0xe0,

    /* U+006D "m" */
    0xb3, 0x66, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0xc6, 0x20,

    /* U+006F "o" */
    0x33, 0x28, 0x61, 0x86, 0x27, 0x0,

    /* U+0070 "p" */
    0xbb, 0x28, 0x61, 0x86, 0x2f, 0x20, 0x82, 0x0,

    /* U+0071 "q" */
    0x3f, 0x18, 0x61, 0x86, 0x17, 0xc1, 0x4, 0x10,

    /* U+0072 "r" */
    0xd2, 0x49, 0x20,

    /* U+0073 "s" */
    0x74, 0x20, 0xc1, 0x87, 0xc0,

    /* U+0074 "t" */
    0x44, 0x64, 0x44, 0x44, 0x30,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xc5, 0xe0,

    /* U+0076 "v" */
    0x84, 0x62, 0xa5, 0x28, 0x80,

    /* U+0077 "w" */
    0x88, 0x4c, 0xa6, 0x4a, 0xa6, 0x63, 0x30, 0x88,

    /* U+0078 "x" */
    0xa, 0x98, 0x45, 0x2a, 0x20,

    /* U+0079 "y" */
    0x84, 0x52, 0xa5, 0x18, 0x84, 0x26, 0x0,

    /* U+007A "z" */
    0x70, 0x88, 0x44, 0x43, 0xc0,

    /* U+007B "{" */
    0x49, 0x24, 0xa2, 0x49, 0x22,

    /* U+007C "|" */
    0xff, 0xfe,

    /* U+007D "}" */
    0x89, 0x24, 0x8a, 0x49, 0x28,

    /* U+007E "~" */
    0xc1, 0x80,

    /* U+4E00 "一" */
    0xff, 0xe0,

    /* U+4E09 "三" */
    0x7f, 0x80, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xc0,

    /* U+4E0D "不" */
    0xff, 0xc2, 0x0, 0x80, 0x68, 0x29, 0x32, 0x20,
    0x80, 0x20, 0x8, 0x0, 0x0,

    /* U+4E2D "中" */
    0x8, 0x2, 0xf, 0xfe, 0x21, 0x88, 0x62, 0x1f,
    0xfe, 0x21, 0x8, 0x2, 0x0, 0x80,

    /* U+4E8C "二" */
    0x7f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xe0,

    /* U+4E8E "于" */
    0x7f, 0xc0, 0x80, 0x10, 0x2, 0xf, 0xfe, 0x8,
    0x1, 0x0, 0x20, 0x4, 0x3, 0x80,

    /* U+4E91 "云" */
    0x7f, 0x80, 0x0, 0x3, 0xff, 0x10, 0x8, 0x2,
    0x11, 0x4, 0x3, 0x8f, 0x10,

    /* U+4E94 "五" */
    0x7f, 0xc1, 0x0, 0x20, 0x1f, 0xc1, 0x8, 0x21,
    0x4, 0x20, 0x88, 0xff, 0xe0,

    /* U+4F18 "优" */
    0x2, 0x2, 0x20, 0x22, 0x3, 0xfe, 0x62, 0xa,
    0x40, 0x25, 0x2, 0x50, 0x29, 0x13, 0x11, 0x20,
    0xf0,

    /* U+4F4E "低" */
    0x0, 0x21, 0x7c, 0x24, 0x82, 0x48, 0xe7, 0xf2,
    0x48, 0x24, 0xc2, 0x44, 0x24, 0x42, 0x4f, 0x2e,
    0x30,

    /* U+4F53 "体" */
    0x1, 0x2, 0x10, 0x3f, 0xf2, 0x10, 0x63, 0x82,
    0x58, 0x25, 0x42, 0x92, 0x37, 0xe2, 0x11, 0x21,
    0x0,

    /* U+5065 "健" */
    0x21, 0xb, 0xf9, 0x45, 0x29, 0xed, 0xfc, 0x92,
    0x12, 0xe2, 0xff, 0x49, 0xa, 0xa1, 0x8f, 0x80,

    /* U+516D "六" */
    0x8, 0x0, 0x0, 0x3, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x84, 0x40, 0xa0, 0x28, 0x4,

    /* U+5173 "关" */
    0x0, 0x8, 0x40, 0x21, 0xfe, 0x8, 0x2, 0xf,
    0xfc, 0x30, 0x14, 0x4, 0x86, 0x12, 0x3,

    /* U+5237 "刷" */
    0x0, 0x2f, 0xc5, 0xc, 0xbf, 0x94, 0x92, 0xf6,
    0x5a, 0xcb, 0x59, 0xea, 0x31, 0xc4, 0x23, 0x80,

    /* U+524D "前" */
    0x10, 0x0, 0x23, 0xff, 0x80, 0x1, 0x50, 0x8a,
    0x95, 0x52, 0x2a, 0x55, 0x48, 0x88, 0x33, 0x0,

    /* U+52A8 "动" */
    0x1, 0x1f, 0x20, 0x4, 0x1, 0xff, 0x92, 0x84,
    0x50, 0x8c, 0x91, 0xbc, 0x28, 0x84, 0x7, 0x0,

    /* U+52A9 "助" */
    0x1, 0xf, 0x21, 0x24, 0x3d, 0xf4, 0x92, 0x92,
    0x5e, 0x4a, 0x51, 0x4a, 0x2e, 0x84, 0x17, 0x80,

    /* U+5468 "周" */
    0x3f, 0xcf, 0xf2, 0x24, 0xff, 0x20, 0x4b, 0xf3,
    0xd, 0x43, 0x4f, 0xe0, 0x30,

    /* U+56DB "四" */
    0xff, 0xe4, 0x99, 0x26, 0x49, 0x92, 0x68, 0xfc,
    0x6, 0x1, 0xff, 0xe0, 0x10,

    /* U+5728 "在" */
    0x0, 0x4, 0xf, 0xfc, 0x88, 0x42, 0x17, 0xfc,
    0x21, 0x8, 0x42, 0x10, 0x81, 0xfc,

    /* U+578B "型" */
    0x0, 0x2f, 0xa4, 0xa4, 0xff, 0x92, 0x92, 0x90,
    0x62, 0x39, 0xfe, 0x4, 0x0, 0x81, 0xff, 0x80,

    /* U+5916 "外" */
    0x21, 0x8, 0x20, 0xe4, 0x24, 0x88, 0x99, 0x12,
    0x8c, 0x48, 0x88, 0x21, 0x8, 0x22, 0x4, 0x0,

    /* U+591A "多" */
    0x8, 0x7, 0xc2, 0x10, 0x8, 0xe, 0x5, 0xfe,
    0x84, 0xc2, 0x1, 0x1, 0x87, 0x80,

    /* U+5929 "天" */
    0xff, 0xc2, 0x0, 0x80, 0x20, 0xff, 0xc5, 0x1,
    0x40, 0x88, 0x41, 0x0, 0x30,

    /* U+5C4F "屏" */
    0x3f, 0xe3, 0xfe, 0x28, 0x42, 0x48, 0x3f, 0xe2,
    0x48, 0x3f, 0xf4, 0x48, 0x48, 0x81, 0x8,

    /* U+5E55 "幕" */
    0x0, 0x83, 0xfe, 0x3f, 0xc2, 0x4, 0x3f, 0xc3,
    0xfc, 0xff, 0xe1, 0xfc, 0x64, 0x42, 0x44, 0x4,
    0xc0,

    /* U+5E94 "应" */
    0x0, 0x0, 0x41, 0xff, 0xa0, 0x4, 0x20, 0x84,
    0x94, 0x92, 0x44, 0x40, 0x98, 0x2, 0x7f, 0x80,
    0x0,

    /* U+5EA6 "度" */
    0x0, 0xf, 0xfd, 0x22, 0x3f, 0xf4, 0x88, 0x9f,
    0x10, 0x3, 0xfe, 0x40, 0x91, 0x22, 0x18, 0xc,
    0xf0,

    /* U+5EB7 "康" */
    0x2, 0x7, 0xff, 0x42, 0x4, 0xfc, 0x7f, 0xf4,
    0x24, 0x7f, 0xc5, 0x22, 0x47, 0x4b, 0xae, 0x8e,
    0x0,

    /* U+5F53 "当" */
    0x8, 0x44, 0x52, 0x41, 0xf, 0xf8, 0x4, 0x3,
    0xff, 0x0, 0x80, 0x7f, 0xe0,

    /* U+5F85 "待" */
    0x1, 0x4, 0xfe, 0x81, 0x2, 0x10, 0x3f, 0xfe,
    0x4, 0xaf, 0xf2, 0x4, 0x20, 0x42, 0x4, 0x21,
    0xc0,

    /* U+5FD8 "忘" */
    0x0, 0x0, 0x3, 0xff, 0x90, 0x2, 0x0, 0x40,
    0xf, 0xf8, 0x0, 0x0, 0x42, 0x6, 0x42, 0xf,
    0xc0,

    /* U+60C5 "情" */
    0x42, 0x9, 0xf1, 0x7f, 0x61, 0x5, 0xdc, 0x9f,
    0x92, 0x12, 0x7e, 0x4f, 0xc9, 0x9, 0x23, 0x0,

    /* U+611F "感" */
    0x0, 0x8f, 0xfd, 0x8, 0x2d, 0x7, 0xd8, 0x8a,
    0x2e, 0x6c, 0x13, 0x24, 0x14, 0x10, 0xfe, 0x0,

    /* U+624B "手" */
    0xf, 0x86, 0x80, 0x10, 0x3f, 0xf0, 0x40, 0x8,
    0x3f, 0xf8, 0x20, 0x4, 0x0, 0x80, 0xf0, 0x0,

    /* U+636E "据" */
    0x20, 0x2, 0x7e, 0x24, 0x27, 0x7e, 0x24, 0x82,
    0x7f, 0x34, 0x86, 0x7e, 0x2c, 0x22, 0xc2, 0x6b,
    0xe0,

    /* U+654F "敏" */
    0x0, 0x4, 0x10, 0x3e, 0x4, 0x1e, 0x7a, 0x5,
    0x94, 0x7f, 0x44, 0x94, 0x98, 0x87, 0xc8, 0x9,
    0x41, 0x82,

    /* U+656C "敬" */
    0x1, 0x7, 0xd0, 0x2, 0x7, 0xec, 0x86, 0x47,
    0x54, 0x55, 0x45, 0x48, 0x74, 0x84, 0x54, 0x38,
    0x20,

    /* U+6570 "数" */
    0x81, 0xc, 0x43, 0xe7, 0xa9, 0x8, 0x68, 0x43,
    0x3e, 0x42, 0x48, 0x52, 0x86, 0x8b, 0x0, 0x80,

    /* U+65B0 "新" */
    0x20, 0xdf, 0x20, 0x10, 0x2a, 0xf, 0xbe, 0x49,
    0x3f, 0x21, 0x24, 0xa4, 0x85, 0x11, 0x82, 0x0,

    /* U+65E0 "无" */
    0xff, 0xc2, 0x0, 0x83, 0xff, 0xc, 0x5, 0x1,
    0x40, 0x91, 0x24, 0x71, 0xf0,

    /* U+65E5 "日" */
    0xff, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81,
    0xff, 0x81,

    /* U+663E "显" */
    0x3f, 0xc2, 0x4, 0x3f, 0xc3, 0xfc, 0x9, 0x0,
    0x90, 0x29, 0x40, 0x90, 0xff, 0xf0,

    /* U+6674 "晴" */
    0x1, 0x1c, 0x22, 0xbf, 0xd0, 0x8e, 0x6d, 0x5f,
    0xaa, 0x15, 0x7e, 0xcf, 0xc1, 0x8, 0x23, 0x0,

    /* U+6682 "暂" */
    0x0, 0x5f, 0x72, 0x10, 0x7d, 0xf2, 0x48, 0xe9,
    0x1f, 0xe2, 0x4, 0x7f, 0x88, 0x11, 0xfe, 0x0,

    /* U+66B4 "暴" */
    0x7f, 0xd0, 0x17, 0xfc, 0x44, 0x7f, 0xbf, 0xf2,
    0x3, 0x56, 0x24, 0x83, 0x0,

    /* U+6708 "月" */
    0x3f, 0x90, 0x4f, 0xe4, 0x12, 0x9, 0xfc, 0x82,
    0x81, 0x40, 0xc1, 0xc0,

    /* U+671F "期" */
    0x48, 0x9, 0x7d, 0xe8, 0xbd, 0xf4, 0xa2, 0xf4,
    0x52, 0xff, 0xf1, 0x2, 0x29, 0x46, 0x13, 0x80,

    /* U+672C "本" */
    0x4, 0x0, 0x40, 0xff, 0xe0, 0xc0, 0x16, 0x1,
    0x50, 0x24, 0x84, 0x44, 0xbf, 0xa0, 0x40, 0x4,
    0x0,

    /* U+6781 "极" */
    0x20, 0x5, 0xfb, 0xe9, 0x11, 0x47, 0x27, 0x4c,
    0x69, 0x55, 0x2a, 0x28, 0x85, 0x28, 0x88, 0x0,

    /* U+67D3 "染" */
    0x40, 0x3, 0xf2, 0x12, 0x4, 0x49, 0xa, 0x8,
    0xbf, 0xf8, 0xa0, 0x25, 0x8, 0x98, 0x10, 0x0,

    /* U+67E5 "查" */
    0x0, 0x3f, 0xf1, 0x80, 0xac, 0xc0, 0x8f, 0xc4,
    0x10, 0xfc, 0x41, 0xf, 0x8f, 0xfc,

    /* U+68C0 "检" */
    0x21, 0x4, 0x61, 0xd2, 0x15, 0xe3, 0x0, 0xc2,
    0x29, 0x51, 0x2, 0x20, 0x85, 0xfc, 0x80, 0x0,

    /* U+6A21 "模" */
    0x22, 0x42, 0x7e, 0xf2, 0x42, 0xda, 0x2f, 0xe7,
    0x82, 0xa7, 0xca, 0xff, 0x22, 0x82, 0x24, 0x24,
    0x30,

    /* U+6C14 "气" */
    0x20, 0x10, 0x3, 0xff, 0x0, 0x9f, 0x1f, 0xc0,
    0x10, 0x4, 0x1, 0x0, 0x20, 0xc, 0x1,

    /* U+6C61 "污" */
    0x80, 0x9, 0xf8, 0x0, 0x4f, 0xf0, 0x80, 0x10,
    0xb, 0xe2, 0x4, 0x40, 0x90, 0x12, 0xe, 0x0,

    /* U+6E7F "湿" */
    0x2f, 0xe0, 0xfe, 0x88, 0x26, 0xfe, 0x2, 0x80,
    0x28, 0x2a, 0xa4, 0x28, 0x42, 0x89, 0xff,

    /* U+7248 "版" */
    0x53, 0xe5, 0x20, 0x52, 0x7, 0xbf, 0x42, 0x24,
    0x32, 0x73, 0x25, 0x34, 0x52, 0x89, 0x54, 0x84,
    0x20,

    /* U+7528 "用" */
    0x3f, 0xe4, 0x44, 0xff, 0x91, 0x12, 0x22, 0x7f,
    0xc8, 0x89, 0x11, 0x42, 0x30, 0x5c,

    /* U+793A "示" */
    0x7f, 0x80, 0x0, 0x3, 0xff, 0x8, 0xa, 0x44,
    0x88, 0x20, 0x8, 0x6, 0x0,

    /* U+79BB "离" */
    0x0, 0x3f, 0xf4, 0x29, 0x32, 0x40, 0x8f, 0xc7,
    0xfe, 0x41, 0xa2, 0x63, 0x10, 0xc,

    /* U+7D2B "紫" */
    0x10, 0xb, 0xb1, 0x48, 0x29, 0x17, 0x9e, 0x8,
    0x6, 0x81, 0xfc, 0x2, 0x4, 0x59, 0x38, 0x0,

    /* U+7EBF "线" */
    0x1, 0x2, 0x10, 0x41, 0xc5, 0x30, 0xa1, 0x24,
    0x7c, 0x51, 0x22, 0xc, 0x10, 0x86, 0x79, 0x0,
    0x70,

    /* U+7EDC "络" */
    0x4, 0x8, 0xfa, 0x21, 0x41, 0x4a, 0x10, 0x8d,
    0xe9, 0xf6, 0x22, 0x14, 0x4c, 0xf8, 0x11, 0x0,

    /* U+7F51 "网" */
    0xff, 0xe0, 0x19, 0x16, 0xd5, 0x92, 0x6c, 0x9a,
    0xd7, 0x11, 0x80, 0x60, 0x70,

    /* U+7F6E "置" */
    0x7f, 0xdf, 0xff, 0xfc, 0xfc, 0x41, 0x17, 0xc3,
    0xf1, 0x4, 0x5f, 0x3f, 0xf0,

    /* U+81EA "自" */
    0x0, 0x10, 0xff, 0x81, 0x81, 0xff, 0x81, 0x81,
    0xff, 0x81, 0xff, 0x81,

    /* U+826F "良" */
    0x0, 0x1f, 0xe4, 0x9, 0xfe, 0x40, 0x9f, 0xe4,
    0x85, 0x16, 0x42, 0x12, 0x4b, 0x8,

    /* U+8BA4 "认" */
    0x41, 0x4, 0x20, 0x4, 0x0, 0x8e, 0x10, 0x42,
    0x8, 0x41, 0x14, 0x22, 0x86, 0x49, 0x11, 0x4,
    0x10,

    /* U+8BB0 "记" */
    0x47, 0xc4, 0x8, 0x1, 0x30, 0x22, 0x7c, 0x48,
    0x89, 0x1, 0x21, 0x24, 0x20, 0xfc,

    /* U+8BBE "设" */
    0x3, 0x84, 0x90, 0x10, 0x34, 0x2, 0xfc, 0x40,
    0x89, 0x21, 0x18, 0x23, 0x8, 0x98,

    /* U+8BE6 "详" */
    0x0, 0x8, 0x88, 0x1, 0x7, 0xf0, 0x10, 0xc2,
    0xb, 0xf9, 0x8, 0x2f, 0xe4, 0x20, 0x84, 0x0,
    0x80,

    /* U+8BED "语" */
    0x2f, 0xe0, 0xf8, 0x9, 0x31, 0x22, 0xfe, 0x40,
    0x9, 0xf9, 0x41, 0x38, 0x24, 0xfc,

    /* U+8BF7 "请" */
    0x41, 0x0, 0xf8, 0x3f, 0x80, 0x86, 0x6c, 0x4f,
    0x89, 0x11, 0x3e, 0x37, 0xc4, 0x88, 0x13, 0x0,

    /* U+8F7B "轻" */
    0x0, 0x1e, 0xf9, 0x2, 0x40, 0x4c, 0x35, 0xc8,
    0x11, 0xf2, 0x8, 0xe1, 0x8, 0x20, 0x3f, 0x80,

    /* U+901F "速" */
    0x81, 0x4, 0xff, 0x21, 0x0, 0xfe, 0xe9, 0x22,
    0xfe, 0x21, 0x82, 0x74, 0x29, 0x27, 0x10, 0x9f,
    0xf0,

    /* U+914D "配" */
    0xff, 0xdf, 0xb, 0x61, 0x6d, 0xed, 0xa5, 0x14,
    0x3e, 0x84, 0x51, 0xfa, 0x30, 0x78,

    /* U+91CD "重" */
    0x0, 0x4f, 0xf3, 0xff, 0xbf, 0xe4, 0x44, 0xff,
    0x91, 0x11, 0xfc, 0x7f, 0xc0, 0x83, 0xff, 0x80,

    /* U+96E8 "雨" */
    0xff, 0xe0, 0x81, 0xff, 0xa2, 0x15, 0x52, 0x88,
    0x51, 0x4a, 0x21, 0x44, 0x28, 0x9c,

    /* U+96EA "雪" */
    0x7f, 0xdf, 0xff, 0xde, 0xc2, 0x12, 0x58, 0xff,
    0x0, 0x23, 0xfc, 0x0, 0x8f, 0xf0,

    /* U+96F7 "雷" */
    0x7f, 0xdf, 0xff, 0xde, 0xc2, 0x12, 0x58, 0xff,
    0x21, 0x23, 0xfc, 0x84, 0x8f, 0xf0,

    /* U+96FE "雾" */
    0x7f, 0xe8, 0x45, 0xef, 0x85, 0x1, 0xfc, 0xd4,
    0xd, 0x71, 0xfe, 0x8, 0x46, 0x18,

    /* U+97F3 "音" */
    0x0, 0xf, 0xf8, 0x42, 0x0, 0x8f, 0xfe, 0x0,
    0x7, 0xf1, 0x2, 0x1f, 0xc4, 0x8, 0x7f, 0x0,

    /* U+98CE "风" */
    0x3f, 0xc2, 0x14, 0x32, 0x42, 0xa4, 0x26, 0x42,
    0x64, 0x2a, 0x47, 0x15, 0x40, 0x58, 0x3,

    /* U+9AD8 "高" */
    0x0, 0x3f, 0xf0, 0x1, 0xfc, 0x3f, 0x0, 0xf,
    0xfe, 0xf9, 0xa2, 0x6f, 0x9a, 0xc,

    /* U+9ED8 "默" */
    0x0, 0x87, 0xc8, 0x7c, 0x85, 0x7f, 0x38, 0x87,
    0xc8, 0x10, 0x8f, 0xd4, 0x1, 0x44, 0x12, 0x86,
    0x10
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 42, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 53, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 72, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 5, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 100, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 21, .adv_w = 169, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 44, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 42, .adv_w = 57, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 45, .adv_w = 57, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 48, .adv_w = 82, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 50, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 55, .adv_w = 44, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 56, .adv_w = 62, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 57, .adv_w = 44, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 76, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 67, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 44, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 136, .adv_w = 100, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 140, .adv_w = 100, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 143, .adv_w = 100, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 147, .adv_w = 84, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 170, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 167, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 119, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 127, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 127, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 134, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 49, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 97, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 148, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 134, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 285, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 110, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 133, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 102, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 162, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 100, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 114, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 57, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 357, .adv_w = 76, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 366, .adv_w = 57, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 370, .adv_w = 100, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 373, .adv_w = 106, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 374, .adv_w = 113, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 375, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 114, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 114, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 54, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 423, .adv_w = 110, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 47, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 47, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 435, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 49, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 171, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 111, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 113, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 114, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 471, .adv_w = 114, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 479, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 64, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 111, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 142, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 83, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 522, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 57, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 532, .adv_w = 47, .box_w = 1, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 534, .adv_w = 57, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 539, .adv_w = 100, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 541, .adv_w = 192, .box_w = 11, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 543, .adv_w = 192, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 555, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 568, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 582, .adv_w = 192, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 609, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 622, .adv_w = 192, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 652, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 669, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 686, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 702, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 716, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 731, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 747, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 763, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 779, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 795, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 808, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 821, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 835, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 851, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 867, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 881, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 894, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 909, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 926, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 943, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 960, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 977, .adv_w = 192, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 990, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1007, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1024, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1040, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1056, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1072, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1089, .adv_w = 192, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1107, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1124, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1140, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1156, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1169, .adv_w = 192, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1179, .adv_w = 192, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1193, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1209, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1225, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1238, .adv_w = 192, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1250, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1266, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1283, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1299, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1315, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1329, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1345, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1362, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1377, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1393, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1408, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1425, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1439, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1452, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1466, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1482, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1499, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1515, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1528, .adv_w = 192, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1541, .adv_w = 192, .box_w = 8, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1553, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1567, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1584, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1598, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1612, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1629, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1643, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1659, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1675, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1692, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1706, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1722, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1736, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1750, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1764, .adv_w = 192, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1778, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1794, .adv_w = 192, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1809, .adv_w = 192, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1823, .adv_w = 192, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x9, 0xd, 0x2d, 0x8c, 0x8e, 0x91, 0x94,
    0x118, 0x14e, 0x153, 0x265, 0x36d, 0x373, 0x437, 0x44d,
    0x4a8, 0x4a9, 0x668, 0x8db, 0x928, 0x98b, 0xb16, 0xb1a,
    0xb29, 0xe4f, 0x1055, 0x1094, 0x10a6, 0x10b7, 0x1153, 0x1185,
    0x11d8, 0x12c5, 0x131f, 0x144b, 0x156e, 0x174f, 0x176c, 0x1770,
    0x17b0, 0x17e0, 0x17e5, 0x183e, 0x1874, 0x1882, 0x18b4, 0x1908,
    0x191f, 0x192c, 0x1981, 0x19d3, 0x19e5, 0x1ac0, 0x1c21, 0x1e14,
    0x1e61, 0x207f, 0x2448, 0x2728, 0x2b3a, 0x2bbb, 0x2f2b, 0x30bf,
    0x30dc, 0x3151, 0x316e, 0x33ea, 0x346f, 0x3da4, 0x3db0, 0x3dbe,
    0x3de6, 0x3ded, 0x3df7, 0x417b, 0x421f, 0x434d, 0x43cd, 0x48e8,
    0x48ea, 0x48f7, 0x48fe, 0x49f3, 0x4ace, 0x4cd8, 0x50d8
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 19968, .range_length = 20697, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 87, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 0,
    1, 2, 0, 0, 0, 3, 4, 3,
    5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 6, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 0, 0, 14, 15, 16, 0, 0,
    10, 17, 10, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 2, 27, 0, 0,
    0, 0, 28, 29, 30, 0, 31, 32,
    33, 34, 0, 0, 35, 36, 34, 34,
    29, 29, 37, 38, 39, 40, 37, 41,
    42, 43, 44, 45, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 0, 0, 0,
    2, 0, 3, 4, 0, 5, 6, 5,
    7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 8, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 0, 0,
    11, 0, 0, 12, 0, 0, 0, 0,
    11, 0, 11, 0, 13, 14, 15, 16,
    17, 18, 19, 20, 0, 21, 3, 0,
    0, 0, 22, 0, 23, 23, 23, 24,
    25, 0, 26, 27, 0, 0, 28, 28,
    23, 28, 23, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, -21, 0, 0, 0,
    0, -9, 0, -17, -2, 0, 0, 0,
    0, -2, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, -24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -21, -3, -12,
    -6, 0, -16, 0, 0, 0, -2, 0,
    0, 0, 4, 0, 0, -7, 0, -3,
    -2, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -2, -8, 0, -4, -2, -4, -12, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, -2, -17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -9, 0,
    -2, 8, 8, 0, 0, 4, -4, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -22, 0, 0, 0, 0,
    -4, -2, -2, 0, 0, -9, -4, -2,
    0, 2, -2, -2, -8, 6, 0, -2,
    0, 0, 0, 0, 6, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, -3,
    -2, -4, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -2, -2, -2, -2, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, -5, -2, -4, -5, -2, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -4, -2, -2,
    -2, 0, -2, 0, 0, 0, 0, -9,
    0, 0, -5, 0, 0, -2, 0, -6,
    0, -4, 0, -2, -2, -2, -4, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -4, 0, -2,
    0, -4, -2, 0, 0, 0, 0, 0,
    -12, 0, -18, 0, 0, -8, -2, -30,
    -3, 0, 0, 2, 2, -4, 3, -6,
    0, -6, -2, 0, -4, 0, 0, -4,
    -3, -2, -3, -2, -2, -4, -2, -3,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -8, 0, -3, 0, 0,
    0, -2, -3, 0, 0, -2, -2, -2,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -4, -3, -2,
    -2, -2, -2, -2, 0, -11, 0, -29,
    0, -13, 0, 0, -4, 2, -4, 0,
    -4, -25, -5, -16, -11, 0, -14, 0,
    -17, 0, -2, -2, 0, 0, 0, 0,
    0, -3, -2, -5, -6, 0, -5, 0,
    0, 0, 0, 0, -21, -8, -20, 0,
    0, -11, 0, -32, -2, -7, 0, 0,
    0, -4, -2, -21, 0, -11, -6, 0,
    -9, 0, 0, 0, -2, 0, 0, 0,
    0, -2, 0, -4, 0, 0, 0, -2,
    0, -7, 0, 0, 0, 0, 0, -5,
    -3, -2, 0, 4, 2, 0, 2, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 2, 0, 0,
    0, 0, 0, -2, -2, -4, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    -21, -17, -22, -4, 0, -8, -4, -27,
    -11, 0, 0, 0, 0, -4, -2, -13,
    0, -17, -12, -5, -17, 0, 0, -11,
    -12, -5, -11, -8, -9, -11, -8, -18,
    0, 0, 0, 0, -2, 0, -9, 0,
    0, -4, 0, -8, -2, 0, 0, 0,
    0, -2, -2, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, -4, -13, 0, 0, -2, -2, -17,
    -2, 0, -2, 2, 0, 0, 0, -4,
    0, -2, -2, 0, -5, 0, 0, -4,
    -2, 0, -6, -2, -2, -2, -2, -6,
    0, 0, 0, 0, -6, -2, -10, 0,
    0, 0, -2, -17, -2, 0, 0, 0,
    0, 0, 0, -2, 0, -4, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, 0, -2,
    0, -4, 0, 0, 0, 2, -2, 2,
    -2, -4, -2, 0, 0, 0, 0, 0,
    0, -2, 0, -2, 0, 0, 0, 0,
    0, -2, -2, -2, -2, -2, -2, -2,
    0, 0, 0, 0, -16, -12, -17, -3,
    0, -2, -2, -21, -3, -2, -2, 0,
    0, 0, 0, -6, 0, -13, -7, 0,
    -13, 0, 0, -8, -7, -2, -6, -2,
    -4, -6, -2, -8, 0, 0, 0, 0,
    0, -9, 0, 0, 0, -2, -4, -8,
    -6, 0, -2, -2, -2, 0, -2, -4,
    0, -4, -6, -4, -3, 0, 0, 0,
    0, -2, -6, -4, -4, -4, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -21, -8, -13,
    -8, 0, -17, 0, 0, 0, 0, 0,
    8, 0, 17, 0, 0, 0, 0, -4,
    -2, 0, 4, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, -4, 0, -2, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -8, -2, 2, 0, 0,
    1, 0, 0, 0, 0, -12, 0, -4,
    0, 0, -8, 0, -4, -3, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -2, 0, 0, -4, 0,
    0, -2, -3, 0, -2, 0, 0, 0,
    0, -2, 0, 2, 2, 4, 2, 0,
    0, 0, 0, -9, 0, 2, 0, 0,
    0, 0, 0, -4, -4, -4, 0, -2,
    -2, 0, -4, 0, -2, -3, 0, 0,
    -2, 0, 0, 0, 0, -2, 0, 3,
    3, 0, 3, 1, 5, 8, 13, 0,
    -8, -2, -5, 0, 6, 0, 0, 0,
    0, 11, 0, 15, 11, 8, 15, 0,
    18, -4, -2, 0, -3, 0, -2, 0,
    0, 0, 0, 4, 0, 0, 0, -2,
    0, 0, 5, -8, 0, 0, 13, 0,
    -6, 0, 0, 0, 0, -4, 0, 0,
    0, 0, -2, 0, 0, -3, -2, 0,
    0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 5, -2, 0, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, -2, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 4, -3, 0, 4,
    1, 0, 0, 0, 0, -4, 0, 0,
    0, 0, -1, 0, 0, -2, -2, 0,
    -2, 0, -2, 0, 0, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, -2,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, -4, -9, 8, 0, -2, 0, -9,
    0, 0, 0, 0, 0, 0, 0, -2,
    4, -4, -2, 0, -2, 0, 0, 0,
    0, 0, 0, 8, 6, 0, 8, 0,
    0, 0, 0, -14, 0, 2, 0, 0,
    0, 0, 0, 0, 0, -4, 0, -2,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    4, -4, 4, 5, -4, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, -5, -2, 0, -2, 0, 0, 0,
    -2, -4, 0, 0, 0, -4, 0, 0,
    0, 0, 0, -2, -3, 0, -4, 0,
    0, -2, 0, -8, 0, -4, 0, -2,
    0, 0, -2, -2, 0, -4, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, -2,
    -2, 0, -2, 0, 0, 0, 0, -6,
    0, -4, 0, -2, 0, -2, -4, 0,
    0, -2, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, 0, 0, -5, 0, -2, 0, 0,
    0, 0, -2, 0, 0, -8, 0, -2,
    0, -2, -6, 0, 0, -2, -2, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0,
    -3, 0, -5, 0, 0, 0, 0, -8,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, -2, 0, -4,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, -8, 0, 0, -6, -2, 0,
    -2, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 45,
    .right_class_cnt     = 36,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t aink_12 = {
#else
lv_font_t aink_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if AINK_12*/
