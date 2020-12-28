#include <Arduino.h>
// bit patterns for the CP437 font

const byte cp437_fontsize [] PROGMEM = {
  0x08,
  0x08,
  0x08,
  0x07,
  0x07,
  0x07,
  0x07,
  0x24,
  0x08,
  0x16,
 
  0x08,
  0x08,
  0x16,
  0x08,
  0x08,
  0x08,
  0x07,
  0x07,
  0x16,
  0x16,
  
  0x08,
  0x08,
  0x16,
  0x08,
  0x16,
  0x16,
  0x07,
  0x07,
  0x07,
  0x08,
  
  0x08,
  0x08,
  0x05,
  0x14,
  0x23,
  0x07,
  0x06,
  0x07,
  0x07,
  0x03,
  
  0x14,
  0x14,
  0x08,
  0x06,
  0x13,
  0x04,
  0x22,
  0x07,
  0x07,
  0x06,
  
  0x06,
  0x06,
  0x07,
  0x06,
  0x06,
  0x06,
  0x06,
  0x06,
  0x22,
  0x13,
  
  0x05,
  0x04,
  0x15,
  0x06,
  0x07,
  0x16, // A
  0x16,
  0x16,
  0x16,
  0x16,

  0x16, // F
  0x16,
  0x16,
  0x24,
  0x16,
  0x16,
  0x16, // L
  0x17,
  0x17,
  0x16,
  
  0x16,
  0x16, // Q
  0x16,
  0x16,
  0x16,
  0x16, // U
  0x16,
  0x17,
  0x17,
  0x16,
  
  0x16, // Z
  0x14,
  0x07,
  0x14,
  0x07,
  0x05,
  0x23,
  0x16, // a
  0x16,
  0x16,
  
  0x16,
  0x16, // e
  0x16,
  0x16,
  0x16,
  0x32,
  0x15, // j
  0x16,
  0x33,
  
  0x17,
  0x16,
  0x16, // o
  0x16,
  0x16,
  0x16,
  0x16,
  0x25, // t
  0x16,
  0x16,
  
  0x17,
  0x16,
  0x16, // y
  0x16,
  
  0x06,
  0x32,
  0x06,
  0x07,
  0x07,
  
  0x06, // 0x80
  0x07,
  0x06,
  0x08,
  0x07,
  
  0x07,
  0x07,
  0x06,
  0x08,
  0x06,
  
  0x06,
  0x06,
  0x07,
  0x05,
  0x07,
  
  0x06, // 0x8f
  0x06,
  0x08,
  0x07,
  0x06,
  
  0x06,
  0x06,
  0x07,
  0x07,
  0x06,
  
  0x08,
  0x06,
  0x07,
  0x07,
  0x06,
  
  0x08,
  0x08,
  0x07,
  0x14,
  0x06,
  
  0x07,
  0x06,
  0x06,
  0x16,
  0x15,
  
  0x06,
  0x06,
  0x06,
  0x08,
  0x08,
  
  0x32,
  0x08,
  0x08,
  0x08,
  0x08,
  
  0x08, // 0xb2
  0x23,
  0x05,
  0x05,
  0x07,
  
  0x07,
  0x05,
  0x07,
  0x25,
  0x07,
  
  0x07,
  0x07,
  0x05,
  0x05,
  0x35,
  
  0x08,
  0x08,
  0x35,
  0x08,
  0x08,
  
  0x35,
  0x26,
  0x26,
  0x26,
  0x08,
  
  0x08,
  0x26,
  0x08,
  0x08,
  0x08,
  
  0x08,
  0x08,
  0x08,
  0x26,
  0x35,
  
  0x35, // 0xd5
  0x26,
  0x08,
  0x08,
  0x05,
  
  0x35,
  0x08,
  0x08,
  0x08,
  0x08,
  
  0x08,
  0x07,
  0x06,
  0x06,
  0x07,
  
  0x06,
  0x07,
  0x07,
  0x07,
  0x06,
  
  0x07,
  0x07,
  0x06,
  0x08,
  0x08,
  
  0x05,
  0x06,
  0x06,
  0x06,
  0x06,
  
  0x06,
  0x35,
  0x05,
  0x06,
  0x07,
  
  0x15, // 0xf8
  0x32,
  0x32,
  0x08,
  0x15,
  
  0x14,
  0x24,
  0x04
};

const byte cp437_font [][8] PROGMEM = {
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0x00
  { 0x7E, 0x81, 0x95, 0xB1, 0xB1, 0x95, 0x81, 0x7E }, // 0x01
  { 0x7E, 0xFF, 0xEB, 0xCF, 0xCF, 0xEB, 0xFF, 0x7E }, // 0x02
  { 0x0E, 0x1F, 0x3F, 0x7E, 0x3F, 0x1F, 0x0E, 0x00 }, // 0x03
  { 0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08, 0x00 }, // 0x04
  { 0x18, 0xBA, 0xFF, 0xFF, 0xFF, 0xBA, 0x18, 0x00 }, // 0x05
  { 0x10, 0xB8, 0xFC, 0xFF, 0xFC, 0xB8, 0x10, 0x00 }, // 0x06
  { 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x18, 0x00, 0x00 }, // 0x07
  { 0xFF, 0xFF, 0xE7, 0xC3, 0xC3, 0xE7, 0xFF, 0xFF }, // 0x08
  { 0x00, 0x3C, 0x66, 0x42, 0x42, 0x66, 0x3C, 0x00 }, // 0x09
  { 0xFF, 0xC3, 0x99, 0xBD, 0xBD, 0x99, 0xC3, 0xFF }, // 0x0A
  { 0x70, 0xF8, 0x88, 0x88, 0xFD, 0x7F, 0x07, 0x0F }, // 0x0B
  { 0x00, 0x4E, 0x5F, 0xF1, 0xF1, 0x5F, 0x4E, 0x00 }, // 0x0C
  { 0xC0, 0xE0, 0xFF, 0x7F, 0x05, 0x05, 0x07, 0x07 }, // 0x0D
  { 0xC0, 0xFF, 0x7F, 0x05, 0x05, 0x65, 0x7F, 0x3F }, // 0x0E
  { 0x99, 0x5A, 0x3C, 0xE7, 0xE7, 0x3C, 0x5A, 0x99 }, // 0x0F
  { 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x08, 0x00 }, // 0x10
  { 0x08, 0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x00 }, // 0x11
  { 0x00, 0x24, 0x66, 0xFF, 0xFF, 0x66, 0x24, 0x00 }, // 0x12
  { 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x5F, 0x5F, 0x00 }, // 0x13
  { 0x06, 0x0F, 0x09, 0x7F, 0x7F, 0x01, 0x7F, 0x7F }, // 0x14
  { 0x40, 0xDA, 0xBF, 0xA5, 0xFD, 0x59, 0x03, 0x02 }, // 0x15
  { 0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00 }, // 0x16
  { 0x80, 0x94, 0xB6, 0xFF, 0xFF, 0xB6, 0x94, 0x80 }, // 0x17
  { 0x00, 0x04, 0x06, 0x7F, 0x7F, 0x06, 0x04, 0x00 }, // 0x18
  { 0x00, 0x10, 0x30, 0x7F, 0x7F, 0x30, 0x10, 0x00 }, // 0x19
  { 0x08, 0x08, 0x08, 0x2A, 0x3E, 0x1C, 0x08, 0x00 }, // 0x1A
  { 0x08, 0x1C, 0x3E, 0x2A, 0x08, 0x08, 0x08, 0x00 }, // 0x1B
  { 0x3C, 0x3C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00 }, // 0x1C
  { 0x08, 0x1C, 0x3E, 0x08, 0x08, 0x3E, 0x1C, 0x08 }, // 0x1D
  { 0x30, 0x38, 0x3C, 0x3E, 0x3E, 0x3C, 0x38, 0x30 }, // 0x1E
  { 0x06, 0x0E, 0x1E, 0x3E, 0x3E, 0x1E, 0x0E, 0x06 }, // 0x1F
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // ' '
  { 0x00, 0x06, 0x5F, 0x5F, 0x06, 0x00, 0x00, 0x00 }, // '!'
  { 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00 }, // '"'
  { 0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14, 0x00 }, // '#'
  { 0x24, 0x2E, 0x6B, 0x6B, 0x3A, 0x12, 0x00, 0x00 }, // '$'
  { 0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, 0x00 }, // '%'
  { 0x30, 0x7A, 0x4F, 0x5D, 0x37, 0x7A, 0x48, 0x00 }, // '&'
  { 0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 }, // '''
  { 0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00, 0x00, 0x00 }, // '('
  { 0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00, 0x00 }, // ')'
  { 0x08, 0x2A, 0x3E, 0x1C, 0x1C, 0x3E, 0x2A, 0x08 }, // '*'
  { 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, 0x00 }, // '+'
  { 0x00, 0x80, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00 }, // ','
  { 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00 }, // '-'
  { 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00 }, // '.'
  { 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00 }, // '/'
  { 0x3E, 0x7F, 0x71, 0x59, 0x4D, 0x7F, 0x3E, 0x00 }, // '0'
  { 0x40, 0x42, 0x7F, 0x7F, 0x40, 0x40, 0x00, 0x00 }, // '1'
  { 0x62, 0x73, 0x59, 0x49, 0x6F, 0x66, 0x00, 0x00 }, // '2'
  { 0x22, 0x63, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00 }, // '3'
  { 0x18, 0x1C, 0x16, 0x53, 0x7F, 0x7F, 0x50, 0x00 }, // '4'
  { 0x27, 0x67, 0x45, 0x45, 0x7D, 0x39, 0x00, 0x00 }, // '5'
  { 0x3C, 0x7E, 0x4B, 0x49, 0x79, 0x30, 0x00, 0x00 }, // '6'
  { 0x03, 0x03, 0x71, 0x79, 0x0F, 0x07, 0x00, 0x00 }, // '7'
  { 0x36, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00 }, // '8'
  { 0x06, 0x4F, 0x49, 0x69, 0x3F, 0x1E, 0x00, 0x00 }, // '9'
  { 0x00, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00 }, // ':'
  { 0x00, 0x80, 0xE6, 0x66, 0x00, 0x00, 0x00, 0x00 }, // ';'
  { 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, 0x00, 0x00 }, // '<'
  { 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00 }, // '='
  { 0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, 0x00 }, // '>'
  { 0x02, 0x03, 0x51, 0x59, 0x0F, 0x06, 0x00, 0x00 }, // '?'
  { 0x3E, 0x7F, 0x41, 0x5D, 0x5D, 0x1F, 0x1E, 0x00 }, // '@'
{
  B00000000,
  B11111110,
  B11111111,
  B00001001,
  B00001001,
  B11111111,
  B11111110,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B10001001,
  B10001001,
  B11111111,
  B01110110,
  B00000000
},{
  B00000000,
  B01111110,
  B11111111,
  B10000001,
  B10000001,
  B11000011,
  B01000010,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B10000001,
  B10000001,
  B11111111,
  B01111110,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B10001001,
  B10001001,
  B10001001,
  B10000001,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00001001,
  B00001001,
  B00001001,
  B00000001,
  B00000000
},{
  B00000000,
  B01111110,
  B11111111,
  B10000001,
  B10010001,
  B11110011,
  B01110010,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00001000,
  B00001000,
  B11111111,
  B11111111,
  B00000000
},{
  B00000000,
  B00000000,
  B10000001,
  B11111111,
  B11111111,
  B10000001,
  B00000000,
  B00000000
},{
  B00000000,
  B01100000,
  B11100000,
  B10000001,
  B11111111,
  B01111111,
  B00000001,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00011100,
  B00111110,
  B11100011,
  B11000001,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00000110,
  B00011100,
  B00000110,
  B11111111,
  B11111111
},{
  B00000000,
  B11111111,
  B11111111,
  B00000110,
  B00001100,
  B00011000,
  B11111111,
  B11111111
},{
  B00000000,
  B01111110,
  B11111111,
  B10000001,
  B10000001,
  B11111111,
  B01111110,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00001001,
  B00001001,
  B00001111,
  B00000110,
  B00000000
},{
  B00000000,
  B01111110,
  B11111111,
  B10000001,
  B01100001,
  B11111111,
  B10111110,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00011001,
  B00111001,
  B11111111,
  B11000110,
  B00000000
},{
  B00000000,
  B01000110,
  B11001111,
  B10001001,
  B10001001,
  B11111011,
  B01110010,
  B00000000
},{
  B00000000,
  B00000011,
  B00000001,
  B11111111,
  B11111111,
  B00000001,
  B00000011,
  B00000000
},{
  B00000000,
  B01111111,
  B11111111,
  B10000000,
  B10000000,
  B11111111,
  B11111111,
  B00000000
},{
  B00000000,
  B00111111,
  B01111111,
  B11000000,
  B11000000,
  B01111111,
  B00111111,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B01100000,
  B00111000,
  B01100000,
  B11111111,
  B11111111
},{
  B00000000,
  B11100011,
  B11110111,
  B00011100,
  B00001000,
  B00011100,
  B11110111,
  B11100011
},{
  B00000000,
  B00000111,
  B00001111,
  B11111000,
  B11111000,
  B00001111,
  B00000111,
  B00000000
},{
  B00000000,
  B11100001,
  B11110001,
  B10011001,
  B10001101,
  B10000111,
  B10000011,
  B00000000
},


  { 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, 0x00 }, // '['
  { 0x01, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00 }, // backslash
  { 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00 }, // ']'
  { 0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, 0x00 }, // '^'
  { 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80 }, // '_'
  { 0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00 }, // '`'

{
  B00000000,
  B01100000,
  B11110100,
  B10010100,
  B10010100,
  B11111100,
  B01111000,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B10000100,
  B10000100,
  B11111100,
  B01111000,
  B00000000
},{
  B00000000,
  B01111000,
  B11111100,
  B10000100,
  B10000100,
  B11001100,
  B01001000,
  B00000000
},{
  B00000000,
  B01111000,
  B11111100,
  B10000100,
  B10000100,
  B11111111,
  B11111111,
  B00000000
},{
  B00000000,
  B01111000,
  B11111100,
  B10010100,
  B10010100,
  B11011100,
  B01011000,
  B00000000
},{
  B00000000,
  B00010000,
  B11111110,
  B11111111,
  B00010001,
  B00010011,
  B00000010,
  B00000000
},{
  B00000000,
  B00011000,
  B10111100,
  B10100100,
  B10100100,
  B11111100,
  B01111100,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00000100,
  B00000100,
  B11111100,
  B11111000,
  B00000000
},{
  B00000000,
  B00000000,
  B10000000,
  B11111011,
  B11111011,
  B10000000,
  B00000000,
  B00000000
},{
  B00000000,
  B01000000,
  B11000000,
  B10000000,
  B11111011,
  B01111011,
  B00000000,
  B00000000
},{
  B00000000,
  B11111111,
  B11111111,
  B00010000,
  B00111000,
  B11111100,
  B11000100,
  B00000000
},{
  B00000000,
  B00000000,
  B00000000,
  B01111111,
  B11111111,
  B10000000,
  B00000000,
  B00000000
},{
  B00000000,
  B11111100,
  B11111100,
  B00000100,
  B11111100,
  B00000100,
  B11111100,
  B11111000
},{
  B00000000,
  B11111100,
  B11111100,
  B00000100,
  B00000100,
  B11111100,
  B11111000,
  B00000000
},{
  B00000000,
  B01111000,
  B11111100,
  B10000100,
  B10000100,
  B11111100,
  B01111000,
  B00000000
},{
  B00000000,
  B11111100,
  B11111100,
  B00100100,
  B00100100,
  B00111100,
  B00011000,
  B00000000
},{
  B00000000,
  B00011000,
  B00111100,
  B00100100,
  B00100100,
  B11111100,
  B11111100,
  B00000000
},{
  B00000000,
  B11111100,
  B11111100,
  B00000100,
  B00000100,
  B00001100,
  B00001000,
  B00000000
},{
  B00000000,
  B01001000,
  B11011100,
  B10010100,
  B10010100,
  B11110100,
  B01100000,
  B00000000
},{
  B00000000,
  B00000100,
  B00000100,
  B01111111,
  B11111111,
  B10000100,
  B00000100,
  B00000000
},{
  B00000000,
  B01111100,
  B11111100,
  B10000000,
  B10000000,
  B11111100,
  B11111100,
  B00000000
},{
  B00000000,
  B00111100,
  B01111100,
  B11000000,
  B11000000,
  B01111100,
  B00111100,
  B00000000
},{
  B00000000,
  B01111100,
  B11111100,
  B10000000,
  B11111100,
  B10000000,
  B11111100,
  B01111100
},{
  B00000000,
  B11000100,
  B11101100,
  B00111000,
  B00111000,
  B11101100,
  B11000100,
  B00000000
},{
  B00000000,
  B00011100,
  B10111100,
  B10100000,
  B10100000,
  B11111100,
  B01111100,
  B00000000
},{
  B00000000,
  B11000100,
  B11100100,
  B10110100,
  B10011100,
  B10001100,
  B10001100,
  B00000000
},

  

  { 0x08, 0x08, 0x3E, 0x77, 0x41, 0x41, 0x00, 0x00 }, // '{'
  { 0x00, 0x00, 0x00, 0x77, 0x77, 0x00, 0x00, 0x00 }, // '|'
  { 0x41, 0x41, 0x77, 0x3E, 0x08, 0x08, 0x00, 0x00 }, // '}'
  { 0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00 }, // '~'
  { 0x70, 0x78, 0x4C, 0x46, 0x4C, 0x78, 0x70, 0x00 }, // 0x7F
  { 0x0E, 0x9F, 0x91, 0xB1, 0xFB, 0x4A, 0x00, 0x00 }, // 0x80
  { 0x3A, 0x7A, 0x40, 0x40, 0x7A, 0x7A, 0x40, 0x00 }, // 0x81
  { 0x38, 0x7C, 0x54, 0x55, 0x5D, 0x19, 0x00, 0x00 }, // 0x82
  { 0x02, 0x23, 0x75, 0x55, 0x55, 0x7D, 0x7B, 0x42 }, // 0x83
  { 0x21, 0x75, 0x54, 0x54, 0x7D, 0x79, 0x40, 0x00 }, // 0x84
  { 0x21, 0x75, 0x55, 0x54, 0x7C, 0x78, 0x40, 0x00 }, // 0x85
  { 0x20, 0x74, 0x57, 0x57, 0x7C, 0x78, 0x40, 0x00 }, // 0x86
  { 0x18, 0x3C, 0xA4, 0xA4, 0xE4, 0x40, 0x00, 0x00 }, // 0x87
  { 0x02, 0x3B, 0x7D, 0x55, 0x55, 0x5D, 0x1B, 0x02 }, // 0x88
  { 0x39, 0x7D, 0x54, 0x54, 0x5D, 0x19, 0x00, 0x00 }, // 0x89
  { 0x39, 0x7D, 0x55, 0x54, 0x5C, 0x18, 0x00, 0x00 }, // 0x8A
  { 0x01, 0x45, 0x7C, 0x7C, 0x41, 0x01, 0x00, 0x00 }, // 0x8B
  { 0x02, 0x03, 0x45, 0x7D, 0x7D, 0x43, 0x02, 0x00 }, // 0x8C
  { 0x01, 0x45, 0x7D, 0x7C, 0x40, 0x00, 0x00, 0x00 }, // 0x8D
  { 0x79, 0x7D, 0x16, 0x12, 0x16, 0x7D, 0x79, 0x00 }, // 0x8E
  { 0x70, 0x78, 0x2B, 0x2B, 0x78, 0x70, 0x00, 0x00 }, // 0x8F
  { 0x44, 0x7C, 0x7C, 0x55, 0x55, 0x45, 0x00, 0x00 }, // 0x90
  { 0x20, 0x74, 0x54, 0x54, 0x7C, 0x7C, 0x54, 0x54 }, // 0x91
  { 0x7C, 0x7E, 0x0B, 0x09, 0x7F, 0x7F, 0x49, 0x00 }, // 0x92
  { 0x32, 0x7B, 0x49, 0x49, 0x7B, 0x32, 0x00, 0x00 }, // 0x93
  { 0x32, 0x7A, 0x48, 0x48, 0x7A, 0x32, 0x00, 0x00 }, // 0x94
  { 0x32, 0x7A, 0x4A, 0x48, 0x78, 0x30, 0x00, 0x00 }, // 0x95
  { 0x3A, 0x7B, 0x41, 0x41, 0x7B, 0x7A, 0x40, 0x00 }, // 0x96
  { 0x3A, 0x7A, 0x42, 0x40, 0x78, 0x78, 0x40, 0x00 }, // 0x97
  { 0x9A, 0xBA, 0xA0, 0xA0, 0xFA, 0x7A, 0x00, 0x00 }, // 0x98
  { 0x01, 0x19, 0x3C, 0x66, 0x66, 0x3C, 0x19, 0x01 }, // 0x99
  { 0x3D, 0x7D, 0x40, 0x40, 0x7D, 0x3D, 0x00, 0x00 }, // 0x9A
  { 0x18, 0x3C, 0x24, 0xE7, 0xE7, 0x24, 0x24, 0x00 }, // 0x9B
  { 0x68, 0x7E, 0x7F, 0x49, 0x43, 0x66, 0x20, 0x00 }, // 0x9C
  { 0x2B, 0x2F, 0xFC, 0xFC, 0x2F, 0x2B, 0x00, 0x00 }, // 0x9D
  { 0xFF, 0xFF, 0x09, 0x09, 0x2F, 0xF6, 0xF8, 0xA0 }, // 0x9E
  { 0x40, 0xC0, 0x88, 0xFE, 0x7F, 0x09, 0x03, 0x02 }, // 0x9F
  { 0x20, 0x74, 0x54, 0x55, 0x7D, 0x79, 0x40, 0x00 }, // 0xA0
  { 0x00, 0x44, 0x7D, 0x7D, 0x41, 0x00, 0x00, 0x00 }, // 0xA1
  { 0x30, 0x78, 0x48, 0x4A, 0x7A, 0x32, 0x00, 0x00 }, // 0xA2
  { 0x38, 0x78, 0x40, 0x42, 0x7A, 0x7A, 0x40, 0x00 }, // 0xA3
  { 0x7A, 0x7A, 0x0A, 0x0A, 0x7A, 0x70, 0x00, 0x00 }, // 0xA4
  { 0x7D, 0x7D, 0x19, 0x31, 0x7D, 0x7D, 0x00, 0x00 }, // 0xA5
  { 0x00, 0x26, 0x2F, 0x29, 0x2F, 0x2F, 0x28, 0x00 }, // 0xA6
  { 0x00, 0x26, 0x2F, 0x29, 0x2F, 0x26, 0x00, 0x00 }, // 0xA7
  { 0x30, 0x78, 0x4D, 0x45, 0x60, 0x20, 0x00, 0x00 }, // 0xA8
  { 0x38, 0x38, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00 }, // 0xA9
  { 0x08, 0x08, 0x08, 0x08, 0x38, 0x38, 0x00, 0x00 }, // 0xAA
  { 0x4F, 0x6F, 0x30, 0x18, 0xCC, 0xEE, 0xBB, 0x91 }, // 0xAB
  { 0x4F, 0x6F, 0x30, 0x18, 0x6C, 0x76, 0xFB, 0xF9 }, // 0xAC
  { 0x00, 0x00, 0x00, 0x7B, 0x7B, 0x00, 0x00, 0x00 }, // 0xAD
  { 0x08, 0x1C, 0x36, 0x22, 0x08, 0x1C, 0x36, 0x22 }, // 0xAE
  { 0x22, 0x36, 0x1C, 0x08, 0x22, 0x36, 0x1C, 0x08 }, // 0xAF
  { 0xAA, 0x00, 0x55, 0x00, 0xAA, 0x00, 0x55, 0x00 }, // 0xB0
  { 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55 }, // 0xB1
  { 0xDD, 0xFF, 0xAA, 0x77, 0xDD, 0xAA, 0xFF, 0x77 }, // 0xB2
  { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00 }, // 0xB3
  { 0x10, 0x10, 0x10, 0xFF, 0xFF, 0x00, 0x00, 0x00 }, // 0xB4
  { 0x14, 0x14, 0x14, 0xFF, 0xFF, 0x00, 0x00, 0x00 }, // 0xB5
  { 0x10, 0x10, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00 }, // 0xB6
  { 0x10, 0x10, 0xF0, 0xF0, 0x10, 0xF0, 0xF0, 0x00 }, // 0xB7
  { 0x14, 0x14, 0x14, 0xFC, 0xFC, 0x00, 0x00, 0x00 }, // 0xB8
  { 0x14, 0x14, 0xF7, 0xF7, 0x00, 0xFF, 0xFF, 0x00 }, // 0xB9
  { 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x00 }, // 0xBA
  { 0x14, 0x14, 0xF4, 0xF4, 0x04, 0xFC, 0xFC, 0x00 }, // 0xBB
  { 0x14, 0x14, 0x17, 0x17, 0x10, 0x1F, 0x1F, 0x00 }, // 0xBC
  { 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x1F, 0x1F, 0x00 }, // 0xBD
  { 0x14, 0x14, 0x14, 0x1F, 0x1F, 0x00, 0x00, 0x00 }, // 0xBE
  { 0x10, 0x10, 0x10, 0xF0, 0xF0, 0x00, 0x00, 0x00 }, // 0xBF
  { 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x10 }, // 0xC0
  { 0x10, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x10 }, // 0xC1
  { 0x10, 0x10, 0x10, 0xF0, 0xF0, 0x10, 0x10, 0x10 }, // 0xC2
  { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x10, 0x10, 0x10 }, // 0xC3
  { 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 }, // 0xC4
  { 0x10, 0x10, 0x10, 0xFF, 0xFF, 0x10, 0x10, 0x10 }, // 0xC5
  { 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x14, 0x14, 0x14 }, // 0xC6
  { 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x10 }, // 0xC7
  { 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x17, 0x17, 0x14 }, // 0xC8
  { 0x00, 0x00, 0xFC, 0xFC, 0x04, 0xF4, 0xF4, 0x14 }, // 0xC9
  { 0x14, 0x14, 0x17, 0x17, 0x10, 0x17, 0x17, 0x14 }, // 0xCA
  { 0x14, 0x14, 0xF4, 0xF4, 0x04, 0xF4, 0xF4, 0x14 }, // 0xCB
  { 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xF7, 0xF7, 0x14 }, // 0xCC
  { 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14 }, // 0xCD
  { 0x14, 0x14, 0xF7, 0xF7, 0x00, 0xF7, 0xF7, 0x14 }, // 0xCE
  { 0x14, 0x14, 0x14, 0x17, 0x17, 0x14, 0x14, 0x14 }, // 0xCF
  { 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x1F, 0x1F, 0x10 }, // 0xD0
  { 0x14, 0x14, 0x14, 0xF4, 0xF4, 0x14, 0x14, 0x14 }, // 0xD1
  { 0x10, 0x10, 0xF0, 0xF0, 0x10, 0xF0, 0xF0, 0x10 }, // 0xD2
  { 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x1F, 0x1F, 0x10 }, // 0xD3
  { 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x14, 0x14, 0x14 }, // 0xD4
  { 0x00, 0x00, 0x00, 0xFC, 0xFC, 0x14, 0x14, 0x14 }, // 0xD5
  { 0x00, 0x00, 0xF0, 0xF0, 0x10, 0xF0, 0xF0, 0x10 }, // 0xD6
  { 0x10, 0x10, 0xFF, 0xFF, 0x10, 0xFF, 0xFF, 0x10 }, // 0xD7
  { 0x14, 0x14, 0x14, 0xFF, 0xFF, 0x14, 0x14, 0x14 }, // 0xD8
  { 0x10, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x00 }, // 0xD9
  { 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x10, 0x10, 0x10 }, // 0xDA
  { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }, // 0xDB
  { 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0 }, // 0xDC
  { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00 }, // 0xDD
  { 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF }, // 0xDE
  { 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F }, // 0xDF
  { 0x38, 0x7C, 0x44, 0x6C, 0x38, 0x6C, 0x44, 0x00 }, // 0xE0
  { 0xFC, 0xFE, 0x2A, 0x2A, 0x3E, 0x14, 0x00, 0x00 }, // 0xE1
  { 0x7E, 0x7E, 0x02, 0x02, 0x06, 0x06, 0x00, 0x00 }, // 0xE2
  { 0x02, 0x7E, 0x7E, 0x02, 0x7E, 0x7E, 0x02, 0x00 }, // 0xE3
  { 0x63, 0x77, 0x5D, 0x49, 0x63, 0x63, 0x00, 0x00 }, // 0xE4
  { 0x38, 0x7C, 0x44, 0x7C, 0x3C, 0x04, 0x04, 0x00 }, // 0xE5
  { 0x80, 0xFE, 0x7E, 0x20, 0x20, 0x3E, 0x1E, 0x00 }, // 0xE6
  { 0x04, 0x06, 0x02, 0x7E, 0x7C, 0x06, 0x02, 0x00 }, // 0xE7
  { 0x99, 0xBD, 0xE7, 0xE7, 0xBD, 0x99, 0x00, 0x00 }, // 0xE8
  { 0x1C, 0x3E, 0x6B, 0x49, 0x6B, 0x3E, 0x1C, 0x00 }, // 0xE9
  { 0x4C, 0x7E, 0x73, 0x01, 0x73, 0x7E, 0x4C, 0x00 }, // 0xEA
  { 0x30, 0x78, 0x4A, 0x4F, 0x7D, 0x39, 0x00, 0x00 }, // 0xEB
  { 0x18, 0x3C, 0x24, 0x3C, 0x3C, 0x24, 0x3C, 0x18 }, // 0xEC
  { 0x98, 0xFC, 0x64, 0x3C, 0x3E, 0x27, 0x3D, 0x18 }, // 0xED
  { 0x1C, 0x3E, 0x6B, 0x49, 0x49, 0x00, 0x00, 0x00 }, // 0xEE
  { 0x7E, 0x7F, 0x01, 0x01, 0x7F, 0x7E, 0x00, 0x00 }, // 0xEF
  { 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x2A, 0x00, 0x00 }, // 0xF0
  { 0x44, 0x44, 0x5F, 0x5F, 0x44, 0x44, 0x00, 0x00 }, // 0xF1
  { 0x40, 0x51, 0x5B, 0x4E, 0x44, 0x40, 0x00, 0x00 }, // 0xF2
  { 0x40, 0x44, 0x4E, 0x5B, 0x51, 0x40, 0x00, 0x00 }, // 0xF3
  { 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x01, 0x07, 0x06 }, // 0xF4
  { 0x60, 0xE0, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0x00 }, // 0xF5
  { 0x08, 0x08, 0x6B, 0x6B, 0x08, 0x08, 0x00, 0x00 }, // 0xF6
  { 0x24, 0x36, 0x12, 0x36, 0x24, 0x36, 0x12, 0x00 }, // 0xF7
  { 0x00, 0x06, 0x0F, 0x09, 0x0F, 0x06, 0x00, 0x00 }, // 0xF8
  { 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00 }, // 0xF9
  { 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00 }, // 0xFA
  { 0x10, 0x30, 0x70, 0xC0, 0xFF, 0xFF, 0x01, 0x01 }, // 0xFB
  { 0x00, 0x1F, 0x1F, 0x01, 0x1F, 0x1E, 0x00, 0x00 }, // 0xFC
  { 0x00, 0x19, 0x1D, 0x17, 0x12, 0x00, 0x00, 0x00 }, // 0xFD
  { 0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00 }, // 0xFE
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // 0xFF
};
