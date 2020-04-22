#include "lvgl.h"


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t ic_signal_2_2_map[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 
  0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x04, 0x03, 0x00, 0x00, 0x00, 0x4b, 0x99, 0x2a, 
  0xea, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0, 
  0x00, 0x00, 0x00, 0x1e, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xfb, 0xa0, 0x68, 0xf4, 0x9c, 
  0x64, 0xef, 0x99, 0x62, 0xeb, 0x96, 0x60, 0xea, 0x96, 0x60, 0xe4, 0x92, 0x5e, 0xdf, 0x8f, 0x5c, 
  0xd9, 0x8b, 0x59, 0x4b, 0x4b, 0x4b, 0xc9, 0x29, 0x7c, 0x1d, 0x00, 0x00, 0x00, 0x0a, 0x74, 0x52, 
  0x4e, 0x53, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x89, 0x14, 0x56, 
  0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0a, 0xf0, 0x00, 0x00, 0x0a, 0xf0, 
  0x01, 0x42, 0xac, 0x34, 0x98, 0x00, 0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 
  0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61, 
  0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78, 
  0x00, 0x00, 0x00, 0x2e, 0x49, 0x44, 0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x00, 0x81, 0x99, 0x13, 
  0x18, 0xb0, 0xd0, 0x9c, 0x13, 0x50, 0xe8, 0x0e, 0x28, 0x5d, 0x0e, 0xa5, 0xd3, 0xc0, 0x34, 0x8b, 
  0x43, 0x28, 0x98, 0x66, 0x32, 0x30, 0x86, 0xd0, 0x0a, 0x4a, 0x60, 0x9a, 0x51, 0x40, 0x10, 0x44, 
  0x03, 0x00, 0x95, 0x08, 0x16, 0x17, 0xee, 0x35, 0x6f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 
  0x4e, 0x44, 0xae, 0x42, 0x60, 0x82, 
};

lv_img_dsc_t ic_signal_2_2 = {
  .header.always_zero = 0,
  .header.w = 13,
  .header.h = 12,
  .data_size = 246,
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .data = ic_signal_2_2_map,
};
