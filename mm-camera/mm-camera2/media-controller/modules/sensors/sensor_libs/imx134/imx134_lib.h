/*============================================================================

  Copyright (c) 2012-2013 Qualcomm Technologies, Inc. All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.

============================================================================*/
#ifndef __IMX134_LIB_H__
#define __IMX134_LIB_H__

#include "sensor_lib.h"

#define SENSOR_MODEL_NO_IMX134 "imx134"
#define IMX134_LOAD_CHROMATIX(n) \
  "libchromatix_"SENSOR_MODEL_NO_IMX134"_"#n".so"

static struct msm_camera_i2c_reg_array init_reg_array[] = {
  /* Global Settings */
  {0x0101, 0x00},
  {0x0105, 0x01},
  {0x0110, 0x00},
  {0x0220, 0x01},
  {0x3302, 0x11},
  {0x3833, 0x20},
  {0x3893, 0x00},
  {0x3906, 0x08},
  {0x3907, 0x01},
  {0x391B, 0x01},
  {0x3C09, 0x01},
  {0x600A, 0x00},
  {0x3008, 0xB0},
  {0x320A, 0x01},
  {0x320D, 0x10},
  {0x3216, 0x2E},
  {0x322C, 0x02},
  {0x3409, 0x0C},
  {0x340C, 0x2D},
  {0x3411, 0x39},
  {0x3414, 0x1E},
  {0x3427, 0x04},
  {0x3480, 0x1E},
  {0x3484, 0x1E},
  {0x3488, 0x1E},
  {0x348C, 0x1E},
  {0x3490, 0x1E},
  {0x3494, 0x1E},
  {0x3511, 0x8F},
  {0x3617, 0x2D},
  /*Defect Correction Recommended Setting */
  {0x380A, 0x00},
  {0x380B, 0x00},
  {0x4103, 0x00},
  /*Color Artifact Recommended Setting */
  {0x4243, 0x9A},
  {0x4330, 0x01},
  {0x4331, 0x90},
  {0x4332, 0x02},
  {0x4333, 0x58},
  {0x4334, 0x03},
  {0x4335, 0x20},
  {0x4336, 0x03},
  {0x4337, 0x84},
  {0x433C, 0x01},
  {0x4340, 0x02},
  {0x4341, 0x58},
  {0x4342, 0x03},
  {0x4343, 0x52},
  /*Moir� reduction Parameter Setting	*/
  {0x4364, 0x0B},
  {0x4368, 0x00},
  {0x4369, 0x0F},
  {0x436A, 0x03},
  {0x436B, 0xA8},
  {0x436C, 0x00},
  {0x436D, 0x00},
  {0x436E, 0x00},
  {0x436F, 0x06},
  /*CNR parameter setting	*/
  {0x4281, 0x21},
  {0x4282, 0x18},
  {0x4283, 0x04},
  {0x4284, 0x08},
  {0x4287, 0x7F},
  {0x4288, 0x08},
  {0x428B, 0x7F},
  {0x428C, 0x08},
  {0x428F, 0x7F},
  {0x4297, 0x00},
  {0x4298, 0x7E},
  {0x4299, 0x7E},
  {0x429A, 0x7E},
  {0x42A4, 0xFB},
  {0x42A5, 0x7E},
  {0x42A6, 0xDF},
  {0x42A7, 0xB7},
  {0x42AF, 0x03},
  /*ARNR Parameter Setting*/
  {0x4207, 0x03},
  {0x4216, 0x08},
  {0x4217, 0x08},
  /*DLC Parameter Setting*/
  {0x4218, 0x00},
  {0x421B, 0x20},
  {0x421F, 0x04},
  {0x4222, 0x02},
  {0x4223, 0x22},
  {0x422E, 0x54},
  {0x422F, 0xFB},
  {0x4230, 0xFF},
  {0x4231, 0xFE},
  {0x4232, 0xFF},
  {0x4235, 0x58},
  {0x4236, 0xF7},
  {0x4237, 0xFD},
  {0x4239, 0x4E},
  {0x423A, 0xFC},
  {0x423B, 0xFD},
  /*HDR Setting*/
  {0x4300, 0x00},
  {0x4316, 0x12},
  {0x4317, 0x22},
  {0x4318, 0x00},
  {0x4319, 0x00},
  {0x431A, 0x00},
  {0x4324, 0x03},
  {0x4325, 0x20},
  {0x4326, 0x03},
  {0x4327, 0x84},
  {0x4328, 0x03},
  {0x4329, 0x20},
  {0x432A, 0x03},
  {0x432B, 0x20},
  {0x432C, 0x01},
  {0x432D, 0x01},
  {0x4338, 0x02},
  {0x4339, 0x00},
  {0x433A, 0x00},
  {0x433B, 0x02},
  {0x435A, 0x03},
  {0x435B, 0x84},
  {0x435E, 0x01},
  {0x435F, 0xFF},
  {0x4360, 0x01},
  {0x4361, 0xF4},
  {0x4362, 0x03},
  {0x4363, 0x84},
  {0x437B, 0x01},
  {0x4401, 0x3F},
  {0x4402, 0xFF},
  {0x4404, 0x13},
  {0x4405, 0x26},
  {0x4406, 0x07},
  {0x4408, 0x20},
  {0x4409, 0xE5},
  {0x440A, 0xFB},
  {0x440C, 0xF6},
  {0x440D, 0xEA},
  {0x440E, 0x20},
  {0x4410, 0x00},
  {0x4411, 0x00},
  {0x4412, 0x3F},
  {0x4413, 0xFF},
  {0x4414, 0x1F},
  {0x4415, 0xFF},
  {0x4416, 0x20},
  {0x4417, 0x00},
  {0x4418, 0x1F},
  {0x4419, 0xFF},
  {0x441A, 0x20},
  {0x441B, 0x00},
  {0x441D, 0x40},
  {0x441E, 0x1E},
  {0x441F, 0x38},
  {0x4420, 0x01},
  {0x4444, 0x00},
  {0x4445, 0x00},
  {0x4446, 0x1D},
  {0x4447, 0xF9},
  {0x4452, 0x00},
  {0x4453, 0xA0},
  {0x4454, 0x08},
  {0x4455, 0x00},
  {0x4456, 0x0F},
  {0x4457, 0xFF},
  {0x4458, 0x18},
  {0x4459, 0x18},
  {0x445A, 0x3F},
  {0x445B, 0x3A},
  {0x445C, 0x00},
  {0x445D, 0x28},
  {0x445E, 0x01},
  {0x445F, 0x90},
  {0x4460, 0x00},
  {0x4461, 0x60},
  {0x4462, 0x00},
  {0x4463, 0x00},
  {0x4464, 0x00},
  {0x4465, 0x00},
  {0x446C, 0x00},
  {0x446D, 0x00},
  {0x446E, 0x00},
  /*LSC Setting*/
  {0x452A, 0x02},
  /*White Balance Setting */
  {0x0712, 0x01},
  {0x0713, 0x00},
  {0x0714, 0x01},
  {0x0715, 0x00},
  {0x0716, 0x01},
  {0x0717, 0x00},
  {0x0718, 0x01},
  {0x0719, 0x00},
  /*Shading setting*/
  {0x4500, 0x1F},
};

static struct msm_camera_i2c_reg_array res0_reg_array[] = {
  /* full size resolution (Snapshot) */
  /* Clock Setting */
  {0x011E, 0x18},
  {0x011F, 0x00},
  {0x0301, 0x0A},
  {0x0303, 0x01},
  {0x0305, 0x0C},
  {0x0309, 0x0A},
  {0x030B, 0x01},
  {0x030C, 0x01},
  {0x030D, 0xC7},
  {0x030E, 0x01},
  {0x3A06, 0x11},
  /* Mode setting */
  {0x0108, 0x01},
  {0x0112, 0x0A},
  {0x0113, 0x0A},
  {0x0381, 0x01},
  {0x0383, 0x01},
  {0x0385, 0x01},
  {0x0387, 0x01},
  {0x0390, 0x00},
  {0x0391, 0x11},
  {0x0392, 0x00},
  {0x0401, 0x00},
  {0x0404, 0x00},
  {0x0405, 0x10},
  {0x4082, 0x01},
  {0x4083, 0x01},
  {0x7006, 0x04},
  /* OptionalFunction setting */
  {0x0700, 0x00},
  {0x3A63, 0x00},
  {0x4100, 0xF8},
  {0x4203, 0xFF},
  {0x4344, 0x00},
  {0x441C, 0x01},
  /* Size setting	*/
  {0x0340, 0x09},
  {0x0341, 0xB6},
  {0x0342, 0x0E},
  {0x0343, 0x10},
  {0x0344, 0x00},
  {0x0345, 0x00},
  {0x0346, 0x00},
  {0x0347, 0x00},
  {0x0348, 0x0C},
  {0x0349, 0xCF},
  {0x034A, 0x09},
  {0x034B, 0x9F},
  {0x034C, 0x0C},
  {0x034D, 0xD0},
  {0x034E, 0x09},
  {0x034F, 0xA0},
  {0x0350, 0x00},
  {0x0351, 0x00},
  {0x0352, 0x00},
  {0x0353, 0x00},
  {0x0354, 0x0C},
  {0x0355, 0xD0},
  {0x0356, 0x09},
  {0x0357, 0xA0},
  {0x301D, 0x30},
  {0x3310, 0x0C},
  {0x3311, 0xD0},
  {0x3312, 0x09},
  {0x3313, 0xA0},
  {0x331C, 0x01},
  {0x331D, 0xAE},
  {0x4084, 0x00},
  {0x4085, 0x00},
  {0x4086, 0x00},
  {0x4087, 0x00},
  {0x4400, 0x00},
  /* Global Timing Setting */
  {0x0830, 0x87},
  {0x0831, 0x3F},
  {0x0832, 0x67},
  {0x0833, 0x3F},
  {0x0834, 0x3F},
  {0x0835, 0x4F},
  {0x0836, 0xDF},
  {0x0837, 0x47},
  {0x0839, 0x1F},
  {0x083A, 0x17},
  {0x083B, 0x02},
  /* Integration Time Setting */
  {0x0202, 0x09},
  {0x0203, 0xB2},
  /* Gain Setting	*/
  {0x0205, 0x00},
  {0x020E, 0x01},
  {0x020F, 0x00},
  {0x0210, 0x01},
  {0x0211, 0x00},
  {0x0212, 0x01},
  {0x0213, 0x00},
  {0x0214, 0x01},
  {0x0215, 0x00},
  /* HDR Setting */
  {0x0230, 0x00},
  {0x0231, 0x00},
  {0x0233, 0x00},
  {0x0234, 0x00},
  {0x0235, 0x40},
  {0x0238, 0x00},
  {0x0239, 0x04},
  {0x023B, 0x00},
  {0x023C, 0x01},
  {0x33B0, 0x04},
  {0x33B1, 0x00},
  {0x33B3, 0x00},
  {0x33B4, 0x01},
  {0x3800, 0x00},
};

static struct msm_camera_i2c_reg_array res1_reg_array[] = {
  /* 1636x1230 resolution (60fps) */
  /* Clock Setting */
  {0x011E, 0x18},
  {0x011F, 0x00},
  {0x0301, 0x0A},
  {0x0303, 0x01},
  {0x0305, 0x0C},
  {0x0309, 0x0A},
  {0x030B, 0x01},
  {0x030C, 0x01},
  {0x030D, 0xC7},
  {0x030E, 0x01},
  {0x3A06, 0x11},
  /* Mode setting */
  {0x0108, 0x01},
  {0x0112, 0x0A},
  {0x0113, 0x0A},
  {0x0381, 0x01},
  {0x0383, 0x01},
  {0x0385, 0x01},
  {0x0387, 0x01},
  {0x0390, 0x00},
  {0x0391, 0x11},
  {0x0392, 0x00},
  {0x0401, 0x02},
  {0x0404, 0x00},
  {0x0405, 0x20},
  {0x4082, 0x00},
  {0x4083, 0x00},
  {0x7006, 0x04},
  /* OptionalFunction setting */
  {0x0700, 0x00},
  {0x3A63, 0x00},
  {0x4100, 0xF8},
  {0x4203, 0xFF},
  {0x4344, 0x00},
  {0x441C, 0x01},
  /* Size setting	*/
  {0x0340, 0x09},
  {0x0341, 0xb6},
  {0x0342, 0x0E},
  {0x0343, 0x10},
  {0x0344, 0x00},
  {0x0345, 0x00},
  {0x0346, 0x00},
  {0x0347, 0x00},
  {0x0348, 0x0C},
  {0x0349, 0xCF},
  {0x034A, 0x09},
  {0x034B, 0x9F},
  {0x034C, 0x06},
  {0x034D, 0x68},
  {0x034E, 0x04},
  {0x034F, 0xD0},
  {0x0350, 0x00},
  {0x0351, 0x00},
  {0x0352, 0x00},
  {0x0353, 0x00},
  {0x0354, 0x0C},
  {0x0355, 0xD0},
  {0x0356, 0x09},
  {0x0357, 0xA0},
  {0x301D, 0x30},
  {0x3310, 0x06},
  {0x3311, 0x68},
  {0x3312, 0x04},
  {0x3313, 0xD0},
  {0x331C, 0x04},
  {0x331D, 0x1E},
  {0x4084, 0x06},
  {0x4085, 0x68},
  {0x4086, 0x04},
  {0x4087, 0xD0},
  {0x4400, 0x00},
  /* Global Timing Setting */
  {0x0830, 0x87},
  {0x0831, 0x3F},
  {0x0832, 0x67},
  {0x0833, 0x3F},
  {0x0834, 0x3F},
  {0x0835, 0x4F},
  {0x0836, 0xDF},
  {0x0837, 0x47},
  {0x0839, 0x1F},
  {0x083A, 0x17},
  {0x083B, 0x02},
  /* Integration Time Setting */
  {0x0202, 0x09},
  {0x0203, 0xB2},
  /* Gain Setting	*/
  {0x0205, 0x00},
  {0x020E, 0x01},
  {0x020F, 0x00},
  {0x0210, 0x01},
  {0x0211, 0x00},
  {0x0212, 0x01},
  {0x0213, 0x00},
  {0x0214, 0x01},
  {0x0215, 0x00},
  /* HDR Setting */
  {0x0230, 0x00},
  {0x0231, 0x00},
  {0x0233, 0x00},
  {0x0234, 0x00},
  {0x0235, 0x40},
  {0x0238, 0x00},
  {0x0239, 0x04},
  {0x023B, 0x00},
  {0x023C, 0x01},
  {0x33B0, 0x04},
  {0x33B1, 0x00},
  {0x33B3, 0x00},
  {0x33B4, 0x01},
  {0x3800, 0x00},
};

static struct msm_camera_i2c_reg_array res2_reg_array[] = {
  /* 1636x1230 resolution (60fps) */
  /* Clock Setting */
  {0x011E, 0x18},
  {0x011F, 0x00},
  {0x0301, 0x0A},
  {0x0303, 0x01},
  {0x0305, 0x0C},
  {0x0309, 0x0A},
  {0x030B, 0x02},
  {0x030C, 0x01},
  {0x030D, 0xC7},
  {0x030E, 0x01},
  {0x3A06, 0x12},
  /* Mode setting */
  {0x0108, 0x01},
  {0x0112, 0x0E},
  {0x0113, 0x0A},
  {0x0381, 0x01},
  {0x0383, 0x01},
  {0x0385, 0x01},
  {0x0387, 0x01},
  {0x0390, 0x00},
  {0x0391, 0x11},
  {0x0392, 0x00},
  {0x0401, 0x00},
  {0x0404, 0x00},
  {0x0405, 0x10},
  {0x4082, 0x01},
  {0x4083, 0x01},
  {0x7006, 0x04},
  /* OptionalFunction setting */
  {0x0700, 0x00},
  {0x3A63, 0x00},
  {0x4100, 0xF8},
  {0x4203, 0xFF},
  {0x4344, 0x00},
  {0x441C, 0x01},
  /* Size setting	*/
  {0x0340, 0x09},
  {0x0341, 0xB8},
  {0x0342, 0x0E},
  {0x0343, 0x10},
  {0x0344, 0x00},
  {0x0345, 0x08},
  {0x0346, 0x00},
  {0x0347, 0x00},
  {0x0348, 0x0C},
  {0x0349, 0xC7},
  {0x034A, 0x09},
  {0x034B, 0x9F},
  {0x034C, 0x06},
  {0x034D, 0x60},
  {0x034E, 0x04},
  {0x034F, 0xD0},
  {0x0350, 0x00},
  {0x0351, 0x00},
  {0x0352, 0x00},
  {0x0353, 0x00},
  {0x0354, 0x06},
  {0x0355, 0x60},
  {0x0356, 0x04},
  {0x0357, 0xD0},
  {0x301D, 0x30},
  {0x3310, 0x06},
  {0x3311, 0x60},
  {0x3312, 0x04},
  {0x3313, 0xD0},
  {0x331C, 0x03},
  {0x331D, 0x58},
  {0x4084, 0x00},
  {0x4085, 0x00},
  {0x4086, 0x00},
  {0x4087, 0x00},
  {0x4400, 0x00},
  /* Global Timing Setting */
  {0x0830, 0x67},
  {0x0831, 0x27},
  {0x0832, 0x47},
  {0x0833, 0x27},
  {0x0834, 0x27},
  {0x0835, 0x1F},
  {0x0836, 0x87},
  {0x0837, 0x2F},
  {0x0839, 0x1F},
  {0x083A, 0x17},
  {0x083B, 0x02},
  /* Integration Time Setting */
  {0x0202, 0x09},
  {0x0203, 0xB4},
  /* Gain Setting	*/
  {0x0205, 0x00},
  {0x020E, 0x01},
  {0x020F, 0x00},
  {0x0210, 0x01},
  {0x0211, 0x00},
  {0x0212, 0x01},
  {0x0213, 0x00},
  {0x0214, 0x01},
  {0x0215, 0x00},
  /* HDR Setting */
  {0x0230, 0x00},
  {0x0231, 0x00},
  {0x0233, 0x00},
  {0x0234, 0x00},
  {0x0235, 0x40},
  {0x0238, 0x00},
  {0x0239, 0x04},
  {0x023B, 0x03},
  {0x023C, 0x01},
  {0x33B0, 0x06},
  {0x33B1, 0x60},
  {0x33B3, 0x02},
  {0x33B4, 0x00},
  {0x3800, 0x00},
};
#endif
