﻿#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t stat_sys_no_sim_sprd_cucc_map[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 
  0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x12, 0x04, 0x03, 0x00, 0x00, 0x00, 0x7f, 0x5b, 0x39, 
  0x46, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0, 
  0x00, 0x00, 0x00, 0x1e, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0x00, 
  0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 
  0xff, 0x00, 0x00, 0xff, 0x00, 0x00, 0xbf, 0x50, 0x9e, 0x1d, 0x00, 0x00, 0x00, 0x0a, 0x74, 0x52, 
  0x4e, 0x53, 0x00, 0x11, 0x33, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xee, 0xee, 0x9e, 0x8a, 0xfb, 
  0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x1c, 0x20, 0x00, 0x00, 0x1c, 0x20, 
  0x01, 0xcd, 0x0f, 0x9b, 0x9e, 0x00, 0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 
  0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61, 
  0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78, 
  0x00, 0x00, 0x00, 0x29, 0x49, 0x44, 0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0xa0, 0x10, 0x08, 0x31, 
  0x30, 0x09, 0x00, 0x29, 0x09, 0x03, 0x0b, 0x10, 0xc5, 0x58, 0x51, 0x08, 0x16, 0xf5, 0x74, 0x00, 
  0x91, 0xac, 0x4d, 0xad, 0x20, 0x4a, 0x4c, 0x40, 0x4c, 0x00, 0xbb, 0x66, 0x00, 0x8c, 0xf5, 0x03, 
  0x80, 0x1d, 0x28, 0xe5, 0xe5, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 
  0x82, 
};

lv_img_dsc_t stat_sys_no_sim_sprd_cucc = {
  .header.always_zero = 0,
  .header.w = 11,
  .header.h = 18,
  .data_size = 241,
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .data = stat_sys_no_sim_sprd_cucc_map,
};
