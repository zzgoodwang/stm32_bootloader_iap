

#include "tft.h"
#include "delay.h"
const unsigned char zifu816[]={

/*                 sp                 */

/*空格*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


/*--  文字:  !  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x18,0x18,0x00,0x00,

/*--  文字:  "  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x12,0x36,0x24,0x48,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  #  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x24,0x24,0x24,0xFE,0x48,0x48,0x48,0xFE,0x48,0x48,0x48,0x00,0x00,

/*--  文字:  $  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x10,0x38,0x54,0x54,0x50,0x30,0x18,0x14,0x14,0x54,0x54,0x38,0x10,0x10,

/*--  文字:  %  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x44,0xA4,0xA8,0xA8,0xA8,0x54,0x1A,0x2A,0x2A,0x2A,0x44,0x00,0x00,

/*--  文字:  &  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x50,0x6E,0xA4,0x94,0x88,0x89,0x76,0x00,0x00,

/*--  文字:  '  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x60,0x60,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  (  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x02,0x04,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x08,0x04,0x02,0x00,

/*--  文字:  )  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x40,0x20,0x10,0x10,0x08,0x08,0x08,0x08,0x08,0x08,0x10,0x10,0x20,0x40,0x00,

/*--  文字:  *  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x10,0x10,0xD6,0x38,0x38,0xD6,0x10,0x10,0x00,0x00,0x00,0x00,

/*--  文字:  +  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x10,0x00,0x00,0x00,

/*--  文字:  ,  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x20,0xC0,

/*--  文字:  -  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  .  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x00,0x00,

/*--  文字:  /  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x01,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x40,0x40,0x00,



/*                 0123456789                */


/*--  文字:  0  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x24,0x18,0x00,0x00,

/*--  文字:  1  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x10,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,

/*--  文字:  2  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x04,0x04,0x08,0x10,0x20,0x42,0x7E,0x00,0x00,

/*--  文字:  3  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3C,0x42,0x42,0x04,0x18,0x04,0x02,0x02,0x42,0x44,0x38,0x00,0x00,

/*--  文字:  4  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x04,0x0C,0x14,0x24,0x24,0x44,0x44,0x7E,0x04,0x04,0x1E,0x00,0x00,

/*--  文字:  5  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x7E,0x40,0x40,0x40,0x58,0x64,0x02,0x02,0x42,0x44,0x38,0x00,0x00,

/*--  文字:  6  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x1C,0x24,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x24,0x18,0x00,0x00,

/*--  文字:  7  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x7E,0x44,0x44,0x08,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,

/*--  文字:  8  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x24,0x18,0x24,0x42,0x42,0x42,0x3C,0x00,0x00,

/*--  文字:  9  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x18,0x24,0x42,0x42,0x42,0x26,0x1A,0x02,0x02,0x24,0x38,0x00,0x00,



/*                    :;<=>?@                          */


/*--  文字:  :  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,

/*--  文字:  ;  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,

/*--  文字:  <  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x02,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x02,0x00,0x00,

/*--  文字:  =  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  >  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x40,0x20,0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x20,0x40,0x00,0x00,

/*--  文字:  ?  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3C,0x42,0x42,0x62,0x02,0x04,0x08,0x08,0x00,0x18,0x18,0x00,0x00,

/*--  文字:  @  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x38,0x44,0x5A,0xAA,0xAA,0xAA,0xAA,0xB4,0x42,0x44,0x38,0x00,0x00,



/*               ABCDEFGHIJKLMNOPQRSTUVWXYZ                         */


/*--  文字:  A  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x10,0x10,0x18,0x28,0x28,0x24,0x3C,0x44,0x42,0x42,0xE7,0x00,0x00,

/*--  文字:  B  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xF8,0x44,0x44,0x44,0x78,0x44,0x42,0x42,0x42,0x44,0xF8,0x00,0x00,

/*--  文字:  C  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3E,0x42,0x42,0x80,0x80,0x80,0x80,0x80,0x42,0x44,0x38,0x00,0x00,

/*--  文字:  D  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xF8,0x44,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x44,0xF8,0x00,0x00,

/*--  文字:  E  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xFC,0x42,0x48,0x48,0x78,0x48,0x48,0x40,0x42,0x42,0xFC,0x00,0x00,

/*--  文字:  F  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xFC,0x42,0x48,0x48,0x78,0x48,0x48,0x40,0x40,0x40,0xE0,0x00,0x00,

/*--  文字:  G  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3C,0x44,0x44,0x80,0x80,0x80,0x8E,0x84,0x44,0x44,0x38,0x00,0x00,

/*--  文字:  H  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,

/*--  文字:  I  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,

/*--  文字:  J  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x88,0xF0,

/*--  文字:  K  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xEE,0x44,0x48,0x50,0x70,0x50,0x48,0x48,0x44,0x44,0xEE,0x00,0x00,

/*--  文字:  L  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x42,0xFE,0x00,0x00,

/*--  文字:  M  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xEE,0x6C,0x6C,0x6C,0x6C,0x54,0x54,0x54,0x54,0x54,0xD6,0x00,0x00,

/*--  文字:  N  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xC7,0x62,0x62,0x52,0x52,0x4A,0x4A,0x4A,0x46,0x46,0xE2,0x00,0x00,

/*--  文字:  O  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00,

/*--  文字:  P  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xFC,0x42,0x42,0x42,0x42,0x7C,0x40,0x40,0x40,0x40,0xE0,0x00,0x00,

/*--  文字:  Q  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0xB2,0xCA,0x4C,0x38,0x06,0x00,

/*--  文字:  R  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xFC,0x42,0x42,0x42,0x7C,0x48,0x48,0x44,0x44,0x42,0xE3,0x00,0x00,

/*--  文字:  S  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x3E,0x42,0x42,0x40,0x20,0x18,0x04,0x02,0x42,0x42,0x7C,0x00,0x00,

/*--  文字:  T  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xFE,0x92,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,

/*--  文字:  U  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xE7,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,

/*--  文字:  V  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xE7,0x42,0x42,0x44,0x24,0x24,0x28,0x28,0x18,0x10,0x10,0x00,0x00,

/*--  文字:  W  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xD6,0x92,0x92,0x92,0x92,0xAA,0xAA,0x6C,0x44,0x44,0x44,0x00,0x00,

/*--  文字:  X  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x18,0x18,0x18,0x24,0x24,0x42,0xE7,0x00,0x00,

/*--  文字:  Y  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,

/*--  文字:  Z  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x7E,0x84,0x04,0x08,0x08,0x10,0x20,0x20,0x42,0x42,0xFC,0x00,0x00,



/*                               [\]^_'                        */


/*--  文字:  [  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x1E,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1E,0x00,

/*--  文字:  \  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x08,0x04,0x04,0x04,0x02,0x02,

/*--  文字:  ]  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x78,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x78,0x00,

/*--  文字:  ^  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x1C,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

/*--  文字:  _  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,

/*--  文字:  '  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x60,0x60,0x20,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,



/*                        abcdefghijklmnopqrstuvwxyz                 */


/*--  文字:  a  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x1E,0x22,0x42,0x42,0x3F,0x00,0x00,

/*--  文字:  b  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x64,0x58,0x00,0x00,

/*--  文字:  c  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x22,0x40,0x40,0x40,0x22,0x1C,0x00,0x00,

/*--  文字:  d  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x06,0x02,0x02,0x02,0x1E,0x22,0x42,0x42,0x42,0x26,0x1B,0x00,0x00,

/*--  文字:  e  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x7E,0x40,0x40,0x42,0x3C,0x00,0x00,

/*--  文字:  f  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x0F,0x11,0x10,0x10,0x7E,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,

/*--  文字:  g  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x44,0x44,0x38,0x40,0x3C,0x42,0x42,0x3C,

/*--  文字:  h  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x5C,0x62,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,

/*--  文字:  i  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,

/*--  文字:  j  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x0C,0x0C,0x00,0x00,0x1C,0x04,0x04,0x04,0x04,0x04,0x04,0x44,0x78,

/*--  文字:  k  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xC0,0x40,0x40,0x40,0x4E,0x48,0x50,0x68,0x48,0x44,0xEE,0x00,0x00,

/*--  文字:  l  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,

/*--  文字:  m  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x49,0x49,0x49,0x49,0x49,0xED,0x00,0x00,

/*--  文字:  n  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xDC,0x62,0x42,0x42,0x42,0x42,0xE7,0x00,0x00,

/*--  文字:  o  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x42,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,

/*--  文字:  p  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0x64,0x42,0x42,0x42,0x44,0x78,0x40,0xE0,

/*--  文字:  q  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x22,0x42,0x42,0x42,0x22,0x1E,0x02,0x07,

/*--  文字:  r  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x32,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,

/*--  文字:  s  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x42,0x40,0x3C,0x02,0x42,0x7C,0x00,0x00,

/*--  文字:  t  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x7C,0x10,0x10,0x10,0x10,0x10,0x0C,0x00,0x00,

/*--  文字:  u  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0x42,0x42,0x42,0x42,0x46,0x3B,0x00,0x00,

/*--  文字:  v  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x28,0x10,0x10,0x00,0x00,

/*--  文字:  w  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD7,0x92,0x92,0xAA,0xAA,0x44,0x44,0x00,0x00,

/*--  文字:  x  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6E,0x24,0x18,0x18,0x18,0x24,0x76,0x00,0x00,

/*--  文字:  y  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE7,0x42,0x24,0x24,0x28,0x18,0x10,0x10,0xE0,

/*--  文字:  z  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x44,0x08,0x10,0x10,0x22,0x7E,0x00,0x00,



/*                {|}~               */												   


/*--  文字:  {  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x03,0x04,0x04,0x04,0x04,0x04,0x08,0x04,0x04,0x04,0x04,0x04,0x04,0x03,0x00,

/*--  文字:  |  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,

/*--  文字:  }  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x60,0x10,0x10,0x10,0x10,0x10,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x60,0x00,

/*--  文字:  ~  126--*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x30,0x4C,0x43,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,


/*--  向上箭头  --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0x10,0x10,0x18,0x38,0x38,0x3c,0x3C,0x7c,0x7e,0x7e,0xff,0x00,0x00,


/*--  向下箭头 --*/
/*--  宋体12;  此字体下对应的点阵为：宽x高=8x16   --*/
0x00,0x00,0x00,0xff,0x7e,0x7e,0x7c,0x3c,0x3c,0x38,0x38,0x18,0x10,0x10,0x00,0x00,
};

//	   用到的GPIO  PB为数据口	  CS PC.8    RS PC.9    WR PC.10     RD PA.15	  RES 采用系统复位
//
//

//tft  io口 配置
void Lcd_GPIO_Init(void)
{
   GPIO_InitTypeDef  GPIO_InitStructure;					 //定义GPIO结构体


 //PB 0-15做为数据口 所以要关掉 PB上的JTAG仿真 	只开启SWJ仿真
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);	  //启动AFIO时钟
 GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE); //配置JTAG-DP Disabled and SW-DP Enabled 
 
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC, ENABLE);	//使能PC端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;			 //端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //根据设定参数初始化GPIOC.13
 GPIO_SetBits(GPIOB,GPIO_Pin_All);						 //PB.5 输出高


 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8|GPIO_Pin_9|GPIO_Pin_10;
 GPIO_Init(GPIOC, &GPIO_InitStructure);

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15; 
 GPIO_Init(GPIOA, &GPIO_InitStructure);

}


//库函数方法
//库函数在调用上 相对寄存器要慢很多 

////引脚定义
//void ILI9325_RS(unsigned int d)		   //命令/数据,0=命令,1=数据
//{
// if(d==1)
// GPIO_SetBits(GPIOC,GPIO_Pin_7);// GPIOC->BSRR|=pin7;
// else if(d==0)
//  GPIO_ResetBits(GPIOC,GPIO_Pin_7); //GPIOC->BRR|=pin7;
//} 
//
//void ILI9325_WR(unsigned int d)		   //写数据
//{
// if(d==1)
// GPIO_SetBits(GPIOC,GPIO_Pin_8);// GPIOC->BSRR|=pin8;
// else if(d==0)
//  GPIO_ResetBits(GPIOC,GPIO_Pin_8);//GPIOC->BRR|=pin8;
//}                  
//
//void ILI9325_RD(unsigned int d)		   //读数据
//{									   
// if(d==1)
// GPIO_SetBits(GPIOC,GPIO_Pin_9);// GPIOC->BSRR|=pin9;
// else if(d==0)
//  GPIO_ResetBits(GPIOC,GPIO_Pin_9);//GPIOC->BRR|=pin9;
//}                    
//void ILI9325_CS(unsigned int d)		   //片选
//{
// if(d==1)
//  GPIO_SetBits(GPIOC,GPIO_Pin_6);//GPIOC->BSRR|=pin6;
// else if(d==0)
//  GPIO_ResetBits(GPIOC,GPIO_Pin_6);//GPIOC->BRR|=pin6;
//}                 
//void ILI9325_RST(unsigned int d)	   //复位
//{
// if(d==1)
// GPIO_SetBits(GPIOC,GPIO_Pin_10);// GPIOC->BSRR|=pin10;
// else if(d==0)
// GPIO_ResetBits(GPIOC,GPIO_Pin_10);// GPIOC->BRR|=pin10;
//}                   
//void ILI9325_DATA(unsigned int data)   //数据接PD口
//{
//   GPIO_ResetBits(GPIOB,GPIO_Pin_All);//GPIOB->BRR=0xffff;
//   GPIO_SetBits(GPIOB,data);//GPIOB->BSRR=data;
//}  




//寄存器方法

//引脚定义
void TFT_RS(u8 d)		   //命令/数据,0=命令,1=数据
{
 if(d==1)
  GPIOC->BSRR|=GPIO_Pin_9;
 else if(d==0)
  GPIOC->BRR|=GPIO_Pin_9;
}     
          					   
void TFT_WR(u8 d)		   //写数据
{
 if(d==1)
  GPIOC->BSRR|=GPIO_Pin_10;
 else if(d==0)
  GPIOC->BRR|=GPIO_Pin_10;
}                  
void TFT_RD(u8 d)		   //读数据
{									   
 if(d==1)
  GPIOA->BSRR|=GPIO_Pin_15;
 else if(d==0)
  GPIOA->BRR|=GPIO_Pin_15;
}                    
void TFT_CS(u8 d)		   //片选
{
 if(d==1)
  GPIOC->BSRR|=GPIO_Pin_8;
 else if(d==0)
  GPIOC->BRR|=GPIO_Pin_8;
}                 
//void TFT_RES(unsigned int d)	   //复位
//{
// if(d==1)
//  GPIOC->BSRR|=GPIO_Pin_10;
// else if(d==0)
//  GPIOC->BRR|=GPIO_Pin_10;
//}                   
void TFT_DATA(u16 data)   //数据接PD口
{
  GPIOB->BRR=GPIO_Pin_All;
  GPIOB->BSRR=data;
}                          



//显示位置寄存器定义
// 0x0050   //X轴起始位置
// 0x0051   //X轴结束位置
// 0x0052   //Y轴起始位置
// 0x0053   //Y轴结束位置
// 0x0020   //当前坐标X轴位置
// 0x0021   //当前坐标Y轴位置



//写命令
void Lcd_WR_Reg(u16 data)
{
 TFT_RS(0);       //选择命令
 TFT_DATA(data);  //赋值
 TFT_WR(0);
 TFT_WR(1);       //写入拉高电平
}

//写数据
void Lcd_Write_Data(u16 data)
{
 TFT_RS(1);       //选择数据
 TFT_DATA(data);  //赋值
 TFT_WR(0);
 TFT_WR(1);       //写入拉高电平
}

//在某一个地址或者寄存器里写入一个16位值
void Lcd_WriteReg(u16 com,u16 val)	
{
 Lcd_WR_Reg(com);
 Lcd_Write_Data(val);
}


//设置坐标范围		
//x1 y1  初始位置
//x2 y2  结束位置
//xq yq  起始点坐标
void Address_set(u8 x1,u16 y1,u8 x2,u16 y2,u8 xq,u16 yq)
{
	Lcd_WR_Reg(0x0050);Lcd_Write_Data(x1);		//设置要显示的区域
	Lcd_WR_Reg(0x0051);Lcd_Write_Data(x2);
	Lcd_WR_Reg(0x0052);Lcd_Write_Data(y1);
	Lcd_WR_Reg(0x0053);Lcd_Write_Data(y2);  
    Lcd_WR_Reg(0x0020);Lcd_Write_Data(xq);	  	//设置显示的初始位置
    Lcd_WR_Reg(0x0021);Lcd_Write_Data(yq); 
    Lcd_WR_Reg(0x0022);							//发送命令 
}



//TFT初始化
void Lcd_Init(void)
{
 Lcd_GPIO_Init();	//LCD 所用GPIO口配置

 //TFT_RES(1);
 //delay_ms(5);	
 //TFT_RES(0);
 //delay_ms(5) ;
 //TFT_RES(1);
 TFT_CS(1);
 TFT_RD(1);
 TFT_WR(1);
 delay_ms(5) ;
 TFT_CS(0);

//	if(Lcd_ReadReg(0x0000)==0x9325||Lcd_ReadReg(0x0000)==0x9328)led=0;	 //读93系列
	
    Lcd_WriteReg(0x0001,0x0100);	//Driver Output Contral.	
    Lcd_WriteReg(0x0002,0x0700);	//LCD Driver Waveform Contral.
	Lcd_WriteReg(0x0003,0x1030);	//LCD显示方向设置   手册56页
	Lcd_WriteReg(0x0004,0x0000);	//Scalling Contral.			
	Lcd_WriteReg(0x0008,0x0202);	//Display Contral 2.(0x0207)		
	Lcd_WriteReg(0x0009,0x0000);	//Display Contral 3.(0x0000)
	Lcd_WriteReg(0x000A,0x0000);	//Frame Cycle Contal.(0x0000)
	Lcd_WriteReg(0x000C,0x0000);	
	Lcd_WriteReg(0x000D,0x0000);	//Frame Maker Position.
	Lcd_WriteReg(0x000F,0x0000);	//Extern Display Interface Contral 2.

	Lcd_WriteReg(0x0010,0x0000);	
	Lcd_WriteReg(0x0011,0x0007);								//Power Control 2.(0x0001)				    //Power Control 3.(0x0138)
	Lcd_WriteReg(0x0012,0x0000);	
	Lcd_WriteReg(0x0013,0x0000);								//Power Control 4.
	Lcd_WriteReg(0x0007,0x0001);								//Power Control 7.
	delay_ms(50);

    Lcd_WriteReg(0x0010,0x1690);
	Lcd_WriteReg(0x0011,0x0227);
	delay_ms(50);
	Lcd_WriteReg(0x0012,0x009D);
	delay_ms(50);
	Lcd_WriteReg(0x0013,0x1900);	
	delay_ms(50);
	Lcd_WriteReg(0x0029,0x0025);	
	Lcd_WriteReg(0x002B,0x000D);
	delay_ms(50);
	Lcd_WriteReg(0x0020,0x0000);	//行地址设置 x
	Lcd_WriteReg(0x0021,0x0000);	//列地址设置 y
	delay_ms(50);
	Lcd_WriteReg(0x0030,0x0007);	
	Lcd_WriteReg(0x0031,0x0303);	
	Lcd_WriteReg(0x0032,0x0003);	
	Lcd_WriteReg(0x0035,0x0206);	
	Lcd_WriteReg(0x0036,0x0008);	
	Lcd_WriteReg(0x0037,0x0406);	
	Lcd_WriteReg(0x0038,0x0304);
	Lcd_WriteReg(0x0039,0x0007);	
	Lcd_WriteReg(0x003C,0x0601);	
	Lcd_WriteReg(0x003D,0x0008);			
				

	Lcd_WriteReg(0x0050,0x0000);	//行起始地址		  初始化设置屏幕显示范围为240x320
	Lcd_WriteReg(0x0051,0x00EF);	//行结束地址
	Lcd_WriteReg(0x0052,0x0000);	//列起始地址
	Lcd_WriteReg(0x0053,0x013F);	//列结束地址
	Lcd_WriteReg(0x0060,0xA700);	
	Lcd_WriteReg(0x0061,0x0001);	
	Lcd_WriteReg(0x006A,0x0000);	


	Lcd_WriteReg(0x0080,0x0000);	//Display Position? Partial Display 1.
	Lcd_WriteReg(0x0081,0x0000);	//RAM Address Start? Partial Display 1.
	Lcd_WriteReg(0x0082,0x0000);	//RAM Address End-Partial Display 1.
	Lcd_WriteReg(0x0083,0x0000);	//Displsy Position? Partial Display 2.
	Lcd_WriteReg(0x0084,0x0000);	//RAM Address Start? Partial Display 2.
	Lcd_WriteReg(0x0085,0x0000);	//RAM Address End? Partial Display 2.

	Lcd_WriteReg(0x0090,0x0010);	
	Lcd_WriteReg(0x0092,0x0600);	//Panel Interface Contral 2.(0x0000)

	Lcd_WriteReg(0x0007,0x0133);	//D1=D0=BASEE=1 开图像显示   GON=DTE=1   正常显示  用该命令设置显示器开关 以达到降低功耗效果
       
    Lcd_WR_Reg(0x0022);
}


//清屏
//color是背景颜色。
//说明：使用背景颜色清除TFT模块屏幕的全部显示内容。
void GUI_Clear(u16 color)
{
	u16 i;
	u8 j;
	Address_set(0,0,239,319,0,0);
    for(i=0;i<320;i++)
	 {
	  for (j=0;j<240;j++)
	   	{
        	 Lcd_Write_Data(color);
	    }

	  }
}

//显示英文或数字字符
//函数支持 字符的纵向和横向显示 （要配合扫描方式）
//         支持忽略背景颜色显示 （横向没有开此功能）
//x  y  要显示字符的初始坐标
//value 显示字符数据
//dcolor 显示的字符颜色  bgcolor显示字符的背景颜色
//                       bgcolor 只给1 说明背景颜色使用 当前屏幕颜色（只适用于纵向显示）
//mode   0 字符纵向显示  1 字符横向显示
void GUI_sprintf_char(u8 x,u16 y,u8 value,u16 dcolor,u16 bgcolor,u8 mode)	
{  
	u8 i,j;
	u8 *temp=(u8 *)zifu816;    //temp是*temp的地址  这里temp就是zifu的首地址 
    u8 ma;  
	                    
	temp+=(value-32)*16;   //确定要显示的值
				           //用ascii表  前32个ascii没有存入zifu库里 所以要减32
	                       //每个字符用16个字节显示 所以在乘以16  就是对应的显示位的首地址

    if(bgcolor!=1)		   //用自己设定的背景色
	 {											   //注意 不管设置哪一显示方向 前提是扫描要对应
	  if(mode==0)Address_set(x,y,x+7,y+15,x,y);    //设置区域		   
	  if(mode==1)Address_set(x,y,x+15,y+7,x+15,y); //设置区域   
		for(j=0;j<16;j++)
		{
			for(i=0;i<8;i++)		    //先横扫
			{ 		     
			 	if((*temp&(1<<(7-i)))!=0)		   //将1 左移 然后对应位进行相与 				
				  Lcd_Write_Data(dcolor);		   //显示字符颜色
				 
				else				
				  Lcd_Write_Data(bgcolor);		   //显示背景颜色		
			}
			temp++;								   //下一字节
		 }
	  }
	else				  //用屏幕上自有的颜色做背景色 （只支持纵向显示）
	 {	
	    ma=x;			  //赋值x的初始值给ma 
		for(j=0;j<16;j++)
		{
			for(i=0;i<8;i++)		    //先横扫
			{ 
			    Address_set(x,y,x,y,x,y);
			 	if((*temp&(1<<(7-i)))!=0)	//将1 左移 然后对应位进行相与 
				{
				   Lcd_Write_Data(dcolor);	//显示字符颜色
				   x++;
				   if((x-ma)==8){x=ma;y++;}	//判断是否到一行
				} 
				else
				{
				   x++;						//没有要显示的数据 x自加跳过
				   if((x-ma)==8){x=ma;y++;}	//判断是否到一行
				} 
			}
			temp++;							//下一字节
		}		 			  
	 } 

}



//显示汉字及字符  纵向显示
//x1 y1 显示的初始位置
//*str 要显示的数据
//dcolor 显示汉字 字符的颜色
//bgcolor 显示汉字 字符的背景颜色  当bgcolor=1是 那么背景颜色为屏幕自有颜色
void GUI_sprintf_hzstr16x(u8 x1,u16 y1,u8 *str,u16 dcolor,u16 bgcolor)	  
{  
	 u8 l=0;
	while(*str)
	{	
	  if(*str<0x80)		  //小于128   ascii 都在数组内
	  {	  
		GUI_sprintf_char(x1+l*8,y1,*str,dcolor,bgcolor,0);
		l+=1;
		str++;
		}
//	  else
//	  {	  
//	   PutGB1616(x1+l*8,y1,(u8*)str,dcolor, bgcolor,0);
//			str+=2;l+=2;
//	  }
	}	
}



