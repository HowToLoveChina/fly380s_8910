#include "lvgl.h"


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t ic_setting_map[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 
  0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0e, 0x04, 0x03, 0x00, 0x00, 0x00, 0x02, 0xa4, 0x5b, 
  0xdc, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0, 
  0x00, 0x00, 0x00, 0x27, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0x00, 0xb7, 0xee, 0x00, 0xb7, 
  0xee, 0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 
  0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 0x00, 0xb7, 0xee, 0xac, 
  0x57, 0x71, 0x7e, 0x00, 0x00, 0x00, 0x0d, 0x74, 0x52, 0x4e, 0x53, 0x00, 0x11, 0x22, 0x33, 0x44, 
  0x55, 0x66, 0x77, 0x99, 0xcc, 0xdd, 0xee, 0xff, 0xcf, 0x1b, 0xbe, 0xaa, 0x00, 0x00, 0x00, 0x09, 
  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e, 
  0xfc, 0x00, 0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 
  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 
  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78, 0x00, 0x00, 0x00, 0x4d, 
  0x49, 0x44, 0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x60, 0x5b, 0x69, 0x60, 0xb9, 0x8c, 0x01, 0x08, 
  0x62, 0xce, 0x9c, 0x3e, 0x73, 0x26, 0x00, 0xc8, 0xc8, 0x39, 0x03, 0x04, 0x09, 0x40, 0x46, 0x0d, 
  0x88, 0x51, 0xc0, 0xc0, 0xc0, 0xb4, 0xe6, 0xa4, 0xa3, 0xe7, 0x99, 0x45, 0x0c, 0x0c, 0x3d, 0x67, 
  0x36, 0x32, 0x30, 0xee, 0x39, 0xd3, 0xc0, 0x70, 0x06, 0x88, 0x81, 0xbc, 0x03, 0x08, 0x06, 0x5c, 
  0x0a, 0xae, 0x18, 0xae, 0x1d, 0x61, 0x20, 0xdc, 0x0a, 0x56, 0x88, 0xa5, 0x00, 0x80, 0xc9, 0x32, 
  0xc4, 0x3a, 0x7e, 0x84, 0x59, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 
  0x82, 
};

lv_img_dsc_t ic_setting = {
  .header.always_zero = 0,
  .header.w = 15,
  .header.h = 14,
  .data_size = 289,
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .data = ic_setting_map,
};
