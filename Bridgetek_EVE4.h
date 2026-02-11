/**
 * @file Bridgetek_EVE4.h
 * @brief Support BT817/BT818
 */
/*
 * ============================================================================
 * (C) Copyright,  Bridgetek Pte. Ltd.
 * ============================================================================
 *
 * This source code ("the Software") is provided by Bridgetek Pte Ltd
 * ("Bridgetek") subject to the licence terms set out
 * https://brtchip.com/wp-content/uploads/2021/11/BRT_Software_License_Agreement.pdf ("the Licence Terms").
 * You must read the Licence Terms before downloading or using the Software.
 * By installing or using the Software you agree to the Licence Terms. If you
 * do not agree to the Licence Terms then do not download or use the Software.
 *
 * Without prejudice to the Licence Terms, here is a summary of some of the key
 * terms of the Licence Terms (and in the event of any conflict between this
 * summary and the Licence Terms then the text of the Licence Terms will
 * prevail).
 *
 * The Software is provided "as is".
 * There are no warranties (or similar) in relation to the quality of the
 * Software. You use it at your own risk.
 * The Software should not be used in, or for, any medical device, system or
 * appliance. There are exclusions of Bridgetek liability for certain types of loss
 * such as: special loss or damage; incidental loss or damage; indirect or
 * consequential loss or damage; loss of income; loss of business; loss of
 * profits; loss of revenue; loss of contracts; business interruption; loss of
 * the use of money or anticipated savings; loss of information; loss of
 * opportunity; loss of goodwill or reputation; and/or loss of, damage to or
 * corruption of data.
 * There is a monetary cap on Bridgetek's liability.
 * The Software may have subsequently been amended by another user and then
 * distributed by that other user ("Adapted Software").  If so that user may
 * have additional licence terms that apply to those amendments. However, Bridgetek
 * has no liability in relation to those amendments.
 * ============================================================================
 */

#ifndef _BTEVE_H_
#define _BTEVE_H_

#include <stdint.h> // for Uint8/16/32 and Int8/16/32 data types
#include <stdarg.h>

#include "Arduino.h"

/* Clash with Arduino API */
#undef DISPLAY

#define EVE_API 4
#define EVE_SUB_API

//@{
/** @brief Library Includes
 * It will be possible to make a library with these files.
 * Include EVE.h (which is the API as a C++ file which is part of this class.
 * Include HAL and MCU files as "C" files.
 */
//@{
extern "C" {
#include <EVE.h>
#include <HAL.h>
#include <MCU.h>
}
//@}

class Bridgetek_EVE4
{
  public:
    Bridgetek_EVE4(void);

  void setup(uint32_t panel);

  public:
    const uint32_t ADC_DIFFERENTIAL = 0x1ul;
    const uint32_t ADC_SINGLE_ENDED = 0x0ul;
    const uint32_t ADPCM_SAMPLES = 0x2ul;
    const uint32_t ALPHA = 0x5ul;
    const uint32_t ANIM_HOLD = 0x2ul;
    const uint32_t ANIM_LOOP = 0x1ul;
    const uint32_t ANIM_ONCE = 0x0ul;
    const uint32_t API = 4;
    const uint32_t BEGIN_BITMAPS = 0x1ul;
    const uint32_t BEGIN_EDGE_STRIP_A = 0x7ul;
    const uint32_t BEGIN_EDGE_STRIP_B = 0x8ul;
    const uint32_t BEGIN_EDGE_STRIP_L = 0x6ul;
    const uint32_t BEGIN_EDGE_STRIP_R = 0x5ul;
    const uint32_t BEGIN_LINES = 0x3ul;
    const uint32_t BEGIN_LINE_STRIP = 0x4ul;
    const uint32_t BEGIN_POINTS = 0x2ul;
    const uint32_t BEGIN_RECTS = 0x9ul;
    const uint32_t BLEND_DST_ALPHA = 0x3ul;
    const uint32_t BLEND_ONE = 0x1ul;
    const uint32_t BLEND_ONE_MINUS_DST_ALPHA = 0x5ul;
    const uint32_t BLEND_ONE_MINUS_SRC_ALPHA = 0x4ul;
    const uint32_t BLEND_SRC_ALPHA = 0x2ul;
    const uint32_t BLEND_ZERO = 0x0ul;
    const uint32_t BLUE = 0x4ul;
    const uint32_t DLSWAP_DONE = 0x0ul;
    const uint32_t DLSWAP_FRAME = 0x2ul;
    const uint32_t DLSWAP_LINE = 0x1ul;
    const uint32_t FILTER_BILINEAR = 0x1ul;
    const uint32_t FILTER_NEAREST = 0x0ul;
    const uint32_t FLASH_STATUS_BASIC = 0x2ul;
    const uint32_t FLASH_STATUS_DETACHED = 0x1ul;
    const uint32_t FLASH_STATUS_FULL = 0x3ul;
    const uint32_t FLASH_STATUS_INIT = 0x0ul;
    const uint32_t FORMAT_ARGB1555 = 0x0ul;
    const uint32_t FORMAT_ARGB2 = 0x5ul;
    const uint32_t FORMAT_ARGB4 = 0x6ul;
    const uint32_t FORMAT_BARGRAPH = 0xbul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x10_KHR = 0x93bbul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x5_KHR = 0x93b8ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x6_KHR = 0x93b9ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_10x8_KHR = 0x93baul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_12x10_KHR = 0x93bcul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_12x12_KHR = 0x93bdul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_4x4_KHR = 0x93b0ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_5x4_KHR = 0x93b1ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_5x5_KHR = 0x93b2ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_6x5_KHR = 0x93b3ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_6x6_KHR = 0x93b4ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_8x5_KHR = 0x93b5ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_8x6_KHR = 0x93b6ul;
    const uint32_t FORMAT_COMPRESSED_RGBA_ASTC_8x8_KHR = 0x93b7ul;
    const uint32_t FORMAT_L1 = 0x1ul;
    const uint32_t FORMAT_L2 = 0x11ul;
    const uint32_t FORMAT_L4 = 0x2ul;
    const uint32_t FORMAT_L8 = 0x3ul;
    const uint32_t FORMAT_PALETTED = 0x8ul;
    const uint32_t FORMAT_PALETTED4444 = 0xful;
    const uint32_t FORMAT_PALETTED565 = 0xeul;
    const uint32_t FORMAT_PALETTED8 = 0x10ul;
    const uint32_t FORMAT_RGB332 = 0x4ul;
    const uint32_t FORMAT_RGB565 = 0x7ul;
    const uint32_t FORMAT_TEXT8X8 = 0x9ul;
    const uint32_t FORMAT_TEXTVGA = 0xaul;
    const uint32_t GLFORMAT = 0x1ful;
    const uint32_t GREEN = 0x3ul;
    const uint32_t INT_CMDEMPTY = 0x20ul;
    const uint32_t INT_CMDFLAG = 0x40ul;
    const uint32_t INT_CONVCOMPLETE = 0x80ul;
    const uint32_t INT_G8 = 0x12ul;
    const uint32_t INT_L8C = 0xcul;
    const uint32_t INT_PLAYBACK = 0x10ul;
    const uint32_t INT_SOUND = 0x8ul;
    const uint32_t INT_SWAP = 0x1ul;
    const uint32_t INT_TAG = 0x4ul;
    const uint32_t INT_TOUCH = 0x2ul;
    const uint32_t INT_VGA = 0xdul;
    const uint32_t LINEAR_SAMPLES = 0x0ul;
    const uint32_t LOW_FREQ_BOUND = 58800000L;
    const uint32_t OPT_3D = 0x0ul;
    const uint32_t OPT_CENTER = 0x600ul;
    const uint32_t OPT_CENTERX = 0x200ul;
    const uint32_t OPT_CENTERY = 0x400ul;
    const uint32_t OPT_DITHER = 0x100ul;
    const uint32_t OPT_FILL = 0x2000ul;
    const uint32_t OPT_FLASH = 0x40ul;
    const uint32_t OPT_FLAT = 0x100ul;
    const uint32_t OPT_FORMAT = 0x1000ul;
    const uint32_t OPT_FULLSCREEN = 0x8ul;
    const uint32_t OPT_MEDIAFIFO = 0x10ul;
    const uint32_t OPT_MONO = 0x1ul;
    const uint32_t OPT_NOBACK = 0x1000ul;
    const uint32_t OPT_NODL = 0x2ul;
    const uint32_t OPT_NOHANDS = 0xc000ul;
    const uint32_t OPT_NOHM = 0x4000ul;
    const uint32_t OPT_NOPOINTER = 0x4000ul;
    const uint32_t OPT_NOSECS = 0x8000ul;
    const uint32_t OPT_NOTEAR = 0x4ul;
    const uint32_t OPT_NOTICKS = 0x2000ul;
    const uint32_t OPT_OVERLAY = 0x80ul;
    const uint32_t OPT_RGB565 = 0x0ul;
    const uint32_t OPT_RIGHTX = 0x800ul;
    const uint32_t OPT_SIGNED = 0x100ul;
    const uint32_t OPT_SOUND = 0x20ul;
    const uint32_t RAM_BIST = 0x380000ul;
    const uint32_t RAM_CMD = 0x308000ul;
    const uint32_t RAM_CMD_SIZE = (4*1024L);
    const uint32_t RAM_DL = 0x300000ul;
    const uint32_t RAM_DL_SIZE = (8*1024L);
    const uint32_t RAM_ERR_REPORT = 0x309800ul;
    const uint32_t RAM_G = 0x0ul;
    const uint32_t RAM_G_SIZE = (1024*1024L);
    const uint32_t RAM_REG = 0x302000ul;
    const uint32_t RAM_ROMSUB = 0x30a000ul;
    const uint32_t RAM_TOP = 0x304000ul;
    const uint32_t RED = 0x2ul;
    const uint32_t REG_ADAPTIVE_FRAMERATE = 0x30257cul;
    const uint32_t REG_AH_HCYCLE_MAX = 0x302610;
    const uint32_t REG_ANALOG = 0x30216cul;
    const uint32_t REG_ANA_COMP = 0x302184ul;
    const uint32_t REG_ANIM_ACTIVE = 0x30902cul;
    const uint32_t REG_BIST_EN = 0x302174ul;
    const uint32_t REG_BUSYBITS = 0x3020e8ul;
    const uint32_t REG_CLOCK = 0x302008ul;
    const uint32_t REG_CMDB_SPACE = 0x302574ul;
    const uint32_t REG_CMDB_WRITE = 0x302578ul;
    const uint32_t REG_CMD_DL = 0x302100ul;
    const uint32_t REG_CMD_READ = 0x3020f8ul;
    const uint32_t REG_CMD_WRITE = 0x3020fcul;
    const uint32_t REG_COPRO_PATCH_PTR = 0x309162ul;
    const uint32_t REG_CPURESET = 0x302020ul;
    const uint32_t REG_CSPREAD = 0x302068ul;
    const uint32_t REG_CTOUCH_EXTENDED = 0x302108ul;
    const uint32_t REG_CTOUCH_TOUCH0_XY = 0x302124ul;
    const uint32_t REG_CTOUCH_TOUCH1_XY = 0x30211cul;
    const uint32_t REG_CTOUCH_TOUCH2_XY = 0x30218cul;
    const uint32_t REG_CTOUCH_TOUCH3_XY = 0x302190ul;
    const uint32_t REG_CTOUCH_TOUCH4_X = 0x30216cul;
    const uint32_t REG_CTOUCH_TOUCH4_Y = 0x302120ul;
    const uint32_t REG_DITHER = 0x302060ul;
    const uint32_t REG_DLSWAP = 0x302054ul;
    const uint32_t REG_EHOST_TOUCH_ACK = 0x302170ul;
    const uint32_t REG_EHOST_TOUCH_ID = 0x302114ul;
    const uint32_t REG_EHOST_TOUCH_X = 0x30210cul;
    const uint32_t REG_EHOST_TOUCH_Y = 0x302118ul;
    const uint32_t REG_EJPG_ACC = 0x302358ul;
    const uint32_t REG_EJPG_BUSY = 0x302198ul;
    const uint32_t REG_EJPG_DAT = 0x30219cul;
    const uint32_t REG_EJPG_DCC = 0x302340ul;
    const uint32_t REG_EJPG_DEBUG = 0x30255cul;
    const uint32_t REG_EJPG_DST = 0x3021a4ul;
    const uint32_t REG_EJPG_FORMAT = 0x3021b0ul;
    const uint32_t REG_EJPG_H = 0x3021acul;
    const uint32_t REG_EJPG_HT = 0x302240ul;
    const uint32_t REG_EJPG_OPTIONS = 0x3021a0ul;
    const uint32_t REG_EJPG_Q = 0x3021c0ul;
    const uint32_t REG_EJPG_READY = 0x302194ul;
    const uint32_t REG_EJPG_RI = 0x3021b4ul;
    const uint32_t REG_EJPG_SCALE = 0x302558ul;
    const uint32_t REG_EJPG_TDA = 0x3021bcul;
    const uint32_t REG_EJPG_TQ = 0x3021b8ul;
    const uint32_t REG_EJPG_W = 0x3021a8ul;
    const uint32_t REG_ESPIM_ADD = 0x30259cul;
    const uint32_t REG_ESPIM_COUNT = 0x3025a0ul;
    const uint32_t REG_ESPIM_DUMMY = 0x3025e4ul;
    const uint32_t REG_ESPIM_READSTART = 0x302588ul;
    const uint32_t REG_ESPIM_SEQ = 0x30258cul;
    const uint32_t REG_ESPIM_TRIG = 0x3025e8ul;
    const uint32_t REG_ESPIM_WINDOW = 0x3025a4ul;
    const uint32_t REG_FLASH_SIZE = 0x309024ul;
    const uint32_t REG_FLASH_STATUS = 0x3025f0ul;
    const uint32_t REG_FRAMES = 0x302004ul;
    const uint32_t REG_FREQUENCY = 0x30200cul;
    const uint32_t REG_FULLBUSYBITS = 0x3025f4ul;
    const uint32_t REG_GPIO = 0x302094ul;
    const uint32_t REG_GPIOX = 0x30209cul;
    const uint32_t REG_GPIOX_DIR = 0x302098ul;
    const uint32_t REG_GPIO_DIR = 0x302090ul;
    const uint32_t REG_HCYCLE = 0x30202cul;
    const uint32_t REG_HOFFSET = 0x302030ul;
    const uint32_t REG_HSIZE = 0x302034ul;
    const uint32_t REG_HSYNC0 = 0x302038ul;
    const uint32_t REG_HSYNC1 = 0x30203cul;
    const uint32_t REG_ID = 0x302000ul;
    const uint32_t REG_INT_EN = 0x3020acul;
    const uint32_t REG_INT_FLAGS = 0x3020a8ul;
    const uint32_t REG_INT_MASK = 0x3020b0ul;
    const uint32_t REG_MACRO_0 = 0x3020d8ul;
    const uint32_t REG_MACRO_1 = 0x3020dcul;
    const uint32_t REG_MEDIAFIFO_BASE = 0x30901cul;
    const uint32_t REG_MEDIAFIFO_READ = 0x309014ul;
    const uint32_t REG_MEDIAFIFO_SIZE = 0x309020ul;
    const uint32_t REG_MEDIAFIFO_WRITE = 0x309018ul;
    const uint32_t REG_OUTBITS = 0x30205cul;
    const uint32_t REG_PCLK = 0x302070ul;
    const uint32_t REG_PCLK_2X = 0x302618;
    const uint32_t REG_PCLK_FREQ = 0x302614;
    const uint32_t REG_PCLK_POL = 0x30206cul;
    const uint32_t REG_PLAY = 0x30208cul;
    const uint32_t REG_PLAYBACK_FORMAT = 0x3020c4ul;
    const uint32_t REG_PLAYBACK_FREQ = 0x3020c0ul;
    const uint32_t REG_PLAYBACK_LENGTH = 0x3020b8ul;
    const uint32_t REG_PLAYBACK_LOOP = 0x3020c8ul;
    const uint32_t REG_PLAYBACK_PAUSE = 0x3025ecul;
    const uint32_t REG_PLAYBACK_PLAY = 0x3020ccul;
    const uint32_t REG_PLAYBACK_READPTR = 0x3020bcul;
    const uint32_t REG_PLAYBACK_START = 0x3020b4ul;
    const uint32_t REG_PLAY_CONTROL = 0x30914eul;
    const uint32_t REG_PWM_DUTY = 0x3020d4ul;
    const uint32_t REG_PWM_HZ = 0x3020d0ul;
    const uint32_t REG_RAM_FOLD = 0x3020f4ul;
    const uint32_t REG_RASTERY = 0x302560ul;
    const uint32_t REG_RENDERMODE = 0x302010ul;
    const uint32_t REG_ROMSUB_SEL = 0x3020f0ul;
    const uint32_t REG_ROTATE = 0x302058ul;
    const uint32_t REG_SNAPFORMAT = 0x30201cul;
    const uint32_t REG_SNAPSHOT = 0x302018ul;
    const uint32_t REG_SNAPY = 0x302014ul;
    const uint32_t REG_SOUND = 0x302088ul;
    const uint32_t REG_SPIM = 0x302584ul;
    const uint32_t REG_SPIM_DIR = 0x302580ul;
    const uint32_t REG_SPI_EARLY_TX = 0x30217cul;
    const uint32_t REG_SPI_WIDTH = 0x302188ul;
    const uint32_t REG_SWIZZLE = 0x302064ul;
    const uint32_t REG_TAG = 0x30207cul;
    const uint32_t REG_TAG_X = 0x302074ul;
    const uint32_t REG_TAG_Y = 0x302078ul;
    const uint32_t REG_TAP_CRC = 0x302024ul;
    const uint32_t REG_TAP_MASK = 0x302028ul;
    const uint32_t REG_TOUCH_ADC_MODE = 0x302108ul;
    const uint32_t REG_TOUCH_CHARGE = 0x30210cul;
    const uint32_t REG_TOUCH_CONFIG = 0x302168ul;
    const uint32_t REG_TOUCH_DIRECT_XY = 0x30218cul;
    const uint32_t REG_TOUCH_DIRECT_Z1Z2 = 0x302190ul;
    const uint32_t REG_TOUCH_FAULT = 0x302170ul;
    const uint32_t REG_TOUCH_MODE = 0x302104ul;
    const uint32_t REG_TOUCH_OVERSAMPLE = 0x302114ul;
    const uint32_t REG_TOUCH_RAW_XY = 0x30211cul;
    const uint32_t REG_TOUCH_RZ = 0x302120ul;
    const uint32_t REG_TOUCH_RZTHRESH = 0x302118ul;
    const uint32_t REG_TOUCH_SCREEN_XY = 0x302124ul;
    const uint32_t REG_TOUCH_SETTLE = 0x302110ul;
    const uint32_t REG_TOUCH_TAG = 0x30212cul;
    const uint32_t REG_TOUCH_TAG1 = 0x302134ul;
    const uint32_t REG_TOUCH_TAG1_XY = 0x302130ul;
    const uint32_t REG_TOUCH_TAG2 = 0x30213cul;
    const uint32_t REG_TOUCH_TAG2_XY = 0x302138ul;
    const uint32_t REG_TOUCH_TAG3 = 0x302144ul;
    const uint32_t REG_TOUCH_TAG3_XY = 0x302140ul;
    const uint32_t REG_TOUCH_TAG4 = 0x30214cul;
    const uint32_t REG_TOUCH_TAG4_XY = 0x302148ul;
    const uint32_t REG_TOUCH_TAG_XY = 0x302128ul;
    const uint32_t REG_TOUCH_TRANSFORM_A = 0x302150ul;
    const uint32_t REG_TOUCH_TRANSFORM_B = 0x302154ul;
    const uint32_t REG_TOUCH_TRANSFORM_C = 0x302158ul;
    const uint32_t REG_TOUCH_TRANSFORM_D = 0x30215cul;
    const uint32_t REG_TOUCH_TRANSFORM_E = 0x302160ul;
    const uint32_t REG_TOUCH_TRANSFORM_F = 0x302164ul;
    const uint32_t REG_TRACKER = 0x309000ul;
    const uint32_t REG_TRACKER_1 = 0x309004ul;
    const uint32_t REG_TRACKER_2 = 0x309008ul;
    const uint32_t REG_TRACKER_3 = 0x30900cul;
    const uint32_t REG_TRACKER_4 = 0x309010ul;
    const uint32_t REG_TRIM = 0x302180ul;
    const uint32_t REG_UNDERRUN = 0x30260C;
    const uint32_t REG_VCYCLE = 0x302040ul;
    const uint32_t REG_VOFFSET = 0x302044ul;
    const uint32_t REG_VOL_PB = 0x302080ul;
    const uint32_t REG_VOL_SOUND = 0x302084ul;
    const uint32_t REG_VSIZE = 0x302048ul;
    const uint32_t REG_VSYNC0 = 0x30204cul;
    const uint32_t REG_VSYNC1 = 0x302050ul;
    const uint32_t ROMFONT_MAX = 34;
    const uint32_t ROMFONT_TABLEADDRESS = 0x2ffffcul;
    const uint32_t STENCIL_DECR = 0x4ul;
    const uint32_t STENCIL_INCR = 0x3ul;
    const uint32_t STENCIL_INVERT = 0x5ul;
    const uint32_t STENCIL_KEEP = 0x1ul;
    const uint32_t STENCIL_REPLACE = 0x2ul;
    const uint32_t STENCIL_ZERO = 0x0ul;
    const uint32_t TEST_ALWAYS = 0x7ul;
    const uint32_t TEST_EQUAL = 0x5ul;
    const uint32_t TEST_GEQUAL = 0x4ul;
    const uint32_t TEST_GREATER = 0x3ul;
    const uint32_t TEST_LEQUAL = 0x2ul;
    const uint32_t TEST_LESS = 0x1ul;
    const uint32_t TEST_NEVER = 0x0ul;
    const uint32_t TEST_NOTEQUAL = 0x6ul;
    const uint32_t TOUCHMODE_CONTINUOUS = 0x3ul;
    const uint32_t TOUCHMODE_FRAME = 0x2ul;
    const uint32_t TOUCHMODE_OFF = 0x0ul;
    const uint32_t TOUCHMODE_ONESHOT = 0x1ul;
    const uint32_t ULAW_SAMPLES = 0x1ul;
    const uint32_t VOL_ZERO = 0x0ul;
    const uint32_t WRAP_BORDER = 0x0ul;
    const uint32_t WRAP_REPEAT = 0x1ul;
    const uint8_t ROMFONT_FORMATS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L1,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4,(uint8_t)FORMAT_L4};
    const uint8_t ROMFONT_HEIGHTS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,16,16,13,17,20,22,29,38,16,20,25,28,36,49,63,83,108};
    const uint8_t ROMFONT_WIDTHS[35] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,11,13,17,18,25,34,13,15,19,21,28,37,49,63,82};
    int LIB_AwaitCoProEmpty(void) { return ::EVE_LIB_AwaitCoProEmpty(); };
    uint16_t LIB_MemRead16(uint32_t address) { return ::EVE_LIB_MemRead16(address); };
    uint16_t LIB_SendString(const char* string) { return ::EVE_LIB_SendString(string); };
    uint32_t LIB_GetResult(int offset) { return ::EVE_LIB_GetResult(offset); };
    uint32_t LIB_MemRead32(uint32_t address) { return ::EVE_LIB_MemRead32(address); };
    uint8_t LIB_MemRead8(uint32_t address) { return ::EVE_LIB_MemRead8(address); };
    void ALPHA_FUNC(uint8_t func,  uint8_t ref) { ::EVE_ALPHA_FUNC(func, ref); };
    void BEGIN(uint8_t prim) { ::EVE_BEGIN(prim); };
    void BITMAP_HANDLE(uint8_t handle) { ::EVE_BITMAP_HANDLE(handle); };
    void BITMAP_LAYOUT(uint8_t format,  uint16_t linestride,  uint16_t height) { ::EVE_BITMAP_LAYOUT(format, linestride, height); };
    void BITMAP_LAYOUT_H(uint8_t linestride,  uint8_t height) { ::EVE_BITMAP_LAYOUT_H(linestride, height); };
    void BITMAP_SIZE(uint8_t filter,  uint8_t wrapx,  uint8_t wrapy,  uint16_t width,  uint16_t height) { ::EVE_BITMAP_SIZE(filter, wrapx, wrapy, width, height); };
    void BITMAP_SIZE_H(uint8_t width,  uint8_t height) { ::EVE_BITMAP_SIZE_H(width, height); };
    void BITMAP_SOURCE(int32_t addr) { ::EVE_BITMAP_SOURCE(addr); };
    void BITMAP_SOURCE2(uint8_t flash_or_ram,  int32_t addr) { ::EVE_BITMAP_SOURCE2(flash_or_ram, addr); };
    void BITMAP_TRANSFORM_A(long a) { ::EVE_BITMAP_TRANSFORM_A(a); };
    void BITMAP_TRANSFORM_B(long b) { ::EVE_BITMAP_TRANSFORM_B(b); };
    void BITMAP_TRANSFORM_C(long c) { ::EVE_BITMAP_TRANSFORM_C(c); };
    void BITMAP_TRANSFORM_D(long d) { ::EVE_BITMAP_TRANSFORM_D(d); };
    void BITMAP_TRANSFORM_E(long e) { ::EVE_BITMAP_TRANSFORM_E(e); };
    void BITMAP_TRANSFORM_F(long f) { ::EVE_BITMAP_TRANSFORM_F(f); };
    void BLEND_FUNC(uint8_t src,  uint8_t dst) { ::EVE_BLEND_FUNC(src, dst); };
    void CALL(uint16_t dest) { ::EVE_CALL(dest); };
    void CELL(uint8_t cell) { ::EVE_CELL(cell); };
    void CLEAR(uint8_t c,  uint8_t s,  uint8_t t) { ::EVE_CLEAR(c, s, t); };
    void CLEAR_COLOR(uint32_t c) { ::EVE_CLEAR_COLOR(c); };
    void CLEAR_COLOR_A(uint8_t alpha) { ::EVE_CLEAR_COLOR_A(alpha); };
    void CLEAR_COLOR_RGB(uint8_t r,  uint8_t g,  uint8_t b) { ::EVE_CLEAR_COLOR_RGB(r, g, b); };
    void CLEAR_STENCIL(uint8_t s) { ::EVE_CLEAR_STENCIL(s); };
    void CLEAR_TAG(uint8_t s) { ::EVE_CLEAR_TAG(s); };
    void CMD(uint32_t c) { ::EVE_CMD(c); };
    void CMD_ANIMDRAW(int32_t ch) { ::EVE_CMD_ANIMDRAW(ch); };
    void CMD_ANIMFRAME(int16_t x,  int16_t y,  uint32_t aoptr,  uint32_t frame) { ::EVE_CMD_ANIMFRAME(x, y, aoptr, frame); };
    void CMD_ANIMFRAMERAM(int16_t x,  int16_t y,  uint32_t aoptr,  uint32_t frame ) { ::EVE_CMD_ANIMFRAMERAM(x, y, aoptr, frame); };
    void CMD_ANIMSTART(int32_t ch,  uint32_t aoptr,  uint32_t loop) { ::EVE_CMD_ANIMSTART(ch, aoptr, loop); };
    void CMD_ANIMSTARTRAM(int32_t ch,  uint32_t aoptr,  uint32_t loop) { ::EVE_CMD_ANIMSTARTRAM(ch, aoptr, loop); };
    void CMD_ANIMSTOP(int32_t ch) { ::EVE_CMD_ANIMSTOP(ch); };
    void CMD_ANIMXY(int32_t ch,  int16_t x,  int16_t y) { ::EVE_CMD_ANIMXY(ch, x, y); };
    void CMD_APILEVEL(uint32_t level) { ::EVE_CMD_APILEVEL(level); };
    void CMD_APPEND(uint32_t ptr,  uint32_t num) { ::EVE_CMD_APPEND(ptr, num); };
    void CMD_APPENDF(uint32_t ptr,  uint32_t num) { ::EVE_CMD_APPENDF(ptr, num); };
    void CMD_BGCOLOR(uint32_t c) { ::EVE_CMD_BGCOLOR(c); };
    void CMD_BITMAP_TRANSFORM(int32_t x0,  int32_t y0,  int32_t x1,  int32_t y1,  int32_t x2,  int32_t y2,  int32_t tx0,  int32_t ty0,  int32_t tx1,  int32_t ty1,  int32_t tx2,  int32_t ty2,  uint16_t result) { ::EVE_CMD_BITMAP_TRANSFORM(x0, y0, x1, y1, x2, y2, tx0, ty0, tx1, ty1, tx2, ty2, result); };
    void CMD_BUTTON(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t font,  uint16_t options,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_BUTTON(x, y, w, h, font, options, string, myargs); va_end(myargs); };
    void CMD_CALIBRATE(uint32_t result) { ::EVE_CMD_CALIBRATE(result); };
    void CMD_CALIBRATESUB(uint16_t x,  uint16_t y,  uint16_t w,  uint16_t h,  uint32_t result) { ::EVE_CMD_CALIBRATESUB(x, y, w, h, result); };
    void CMD_CALLLIST(uint32_t a) { ::EVE_CMD_CALLLIST(a); };
    void CMD_CLEARCACHE(void) { ::EVE_CMD_CLEARCACHE(); };
    void CMD_CLOCK(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t h,  uint16_t m,  uint16_t s,  uint16_t ms) { ::EVE_CMD_CLOCK(x, y, r, options, h, m, s, ms); };
    void CMD_COLDSTART(void) { ::EVE_CMD_COLDSTART(); };
    void CMD_DIAL(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t val) { ::EVE_CMD_DIAL(x, y, r, options, val); };
    void CMD_DLSTART(void) { ::EVE_CMD_DLSTART(); };
    void CMD_ENDLIST(void) { ::EVE_CMD_ENDLIST(); };
    void CMD_FGCOLOR(uint32_t c) { ::EVE_CMD_FGCOLOR(c); };
    void CMD_FILLWIDTH(uint32_t s) { ::EVE_CMD_FILLWIDTH(s); };
    void CMD_FLASHATTACH(void) { ::EVE_CMD_FLASHATTACH(); };
    void CMD_FLASHDETATCH(void) { ::EVE_CMD_FLASHDETATCH(); };
    void CMD_FLASHERASE(void) { ::EVE_CMD_FLASHERASE(); };
    void CMD_FLASHFAST(uint32_t result) { ::EVE_CMD_FLASHFAST(result); };
    void CMD_FLASHPROGRAM(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_FLASHPROGRAM(dest, src, num); };
    void CMD_FLASHREAD(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_FLASHREAD(dest, src, num); };
    void CMD_FLASHSOURCE(uint32_t ptr) { ::EVE_CMD_FLASHSOURCE(ptr); };
    void CMD_FLASHSPIDESEL(void) { ::EVE_CMD_FLASHSPIDESEL(); };
    void CMD_FLASHSPIRX(uint32_t ptr,  uint32_t num) { ::EVE_CMD_FLASHSPIRX(ptr, num); };
    void CMD_FLASHSPITX(uint32_t num) { ::EVE_CMD_FLASHSPITX(num); };
    void CMD_FLASHUPDATE(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_FLASHUPDATE(dest, src, num); };
    void CMD_FLASHWRITE(uint32_t ptr,  uint32_t num) { ::EVE_CMD_FLASHWRITE(ptr, num); };
    void CMD_FLASHWRITEEXT(uint32_t dest,  uint32_t num,  uint8_t *data) { ::EVE_CMD_FLASHWRITEEXT(dest, num, data); };
    void CMD_FONTCACHE(uint32_t font,  int32_t ptr,  uint32_t num) { ::EVE_CMD_FONTCACHE(font, ptr, num); };
    void CMD_FONTCACHEQUERY(uint32_t total,  int32_t used) { ::EVE_CMD_FONTCACHEQUERY(total, used); };
    void CMD_GAUGE(int16_t x,  int16_t y,  int16_t r,  uint16_t options,  uint16_t major,  uint16_t minor,  uint16_t val,  uint16_t range) { ::EVE_CMD_GAUGE(x, y, r, options, major, minor, val, range); };
    void CMD_GETIMAGE(uint32_t source,  uint32_t fmt,  uint32_t w,  uint32_t h,  uint32_t palette) { ::EVE_CMD_GETIMAGE(source, fmt, w, h, palette); };
    void CMD_GETMATRIX(int32_t a,  int32_t b,  int32_t c,  int32_t d,  int32_t e,  int32_t f) { ::EVE_CMD_GETMATRIX(a, b, c, d, e, f); };
    void CMD_GETPOINT(int16_t x,  int16_t y,  uint32_t sx,  uint32_t sy) { ::EVE_CMD_GETPOINT(x, y, sx, sy); };
    void CMD_GETPROPS(uint32_t ptr,  uint32_t w,  uint32_t h) { ::EVE_CMD_GETPROPS(ptr, w, h); };
    void CMD_GETPTR(uint32_t result) { ::EVE_CMD_GETPTR(result); };
    void CMD_GRADCOLOR(uint32_t c) { ::EVE_CMD_GRADCOLOR(c); };
    void CMD_GRADIENT(int16_t x0,  int16_t y0,  uint32_t rgb0,  int16_t x1,  int16_t y1,  uint32_t rgb1) { ::EVE_CMD_GRADIENT(x0, y0, rgb0, x1, y1, rgb1); };
    void CMD_GRADIENTA(int16_t x0,  int16_t y0,  uint32_t argb0,  int16_t x1,  int16_t y1,  uint32_t argb1) { ::EVE_CMD_GRADIENTA(x0, y0, argb0, x1, y1, argb1); };
    void CMD_HSF(uint32_t w ) { ::EVE_CMD_HSF(w); };
    void CMD_INFLATE(uint32_t ptr) { ::EVE_CMD_INFLATE(ptr); };
    void CMD_INFLATE2(uint32_t ptr,  uint32_t options) { ::EVE_CMD_INFLATE2(ptr, options); };
    void CMD_INTERRUPT(uint32_t ms) { ::EVE_CMD_INTERRUPT(ms); };
    void CMD_INTRAMSHARED(uint32_t ptr) { ::EVE_CMD_INTRAMSHARED(ptr); };
    void CMD_INT_SWLOADIMAGE(uint32_t ptr,  uint32_t options) { ::EVE_CMD_INT_SWLOADIMAGE(ptr, options); };
    void CMD_KEYS(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t font,  uint16_t options,  const char* string) { ::EVE_CMD_KEYS(x, y, w, h, font, options, string); };
    void CMD_LOADIDENTITY(void) { ::EVE_CMD_LOADIDENTITY(); };
    void CMD_LOADIMAGE(uint32_t ptr,  uint32_t options) { ::EVE_CMD_LOADIMAGE(ptr, options); };
    void CMD_LOGO(void) { ::EVE_CMD_LOGO(); };
    void CMD_MEDIAFIFO(uint32_t ptr,  uint32_t size) { ::EVE_CMD_MEDIAFIFO(ptr, size); };
    void CMD_MEMCPY(uint32_t dest,  uint32_t src,  uint32_t num) { ::EVE_CMD_MEMCPY(dest, src, num); };
    void CMD_MEMCRC(uint32_t ptr,  uint32_t num,  uint32_t result) { ::EVE_CMD_MEMCRC(ptr, num, result); };
    void CMD_MEMSET(uint32_t ptr,  uint32_t value,  uint32_t num) { ::EVE_CMD_MEMSET(ptr, value, num); };
    void CMD_MEMWRITE(uint32_t ptr,  uint32_t num) { ::EVE_CMD_MEMWRITE(ptr, num); };
    void CMD_MEMZERO(uint32_t ptr,  uint32_t num) { ::EVE_CMD_MEMZERO(ptr, num); };
    void CMD_NEWLIST(uint32_t a) { ::EVE_CMD_NEWLIST(a); };
    void CMD_NOP(void) { ::EVE_CMD_NOP(); };
    void CMD_NUMBER(int16_t x,  int16_t y,  int16_t font,  uint16_t options,  int32_t n) { ::EVE_CMD_NUMBER(x, y, font, options, n); };
    void CMD_PCLKFREQ(uint32_t ftarget,  int32_t rounding,  uint32_t factual) { ::EVE_CMD_PCLKFREQ(ftarget, rounding, factual); };
    void CMD_PLAYVIDEO(uint32_t options) { ::EVE_CMD_PLAYVIDEO(options); };
    void CMD_PROGRESS(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t range) { ::EVE_CMD_PROGRESS(x, y, w, h, options, val, range); };
    void CMD_REGREAD(uint32_t ptr,  uint32_t result) { ::EVE_CMD_REGREAD(ptr, result); };
    void CMD_RESETFONTS(void) { ::EVE_CMD_RESETFONTS(); };
    void CMD_RETURN(void) { ::EVE_CMD_RETURN(); };
    void CMD_ROMFONT(uint32_t font,  uint32_t romslot) { ::EVE_CMD_ROMFONT(font, romslot); };
    void CMD_ROTATE(int32_t a) { ::EVE_CMD_ROTATE(a); };
    void CMD_ROTATEAROUND(int32_t x,  int32_t y,  int32_t a,  int32_t s) { ::EVE_CMD_ROTATEAROUND(x, y, a, s); };
    void CMD_RUNANIM(uint32_t waitmask,  uint32_t play) { ::EVE_CMD_RUNANIM(waitmask, play); };
    void CMD_SCALE(int32_t sx,  int32_t sy) { ::EVE_CMD_SCALE(sx, sy); };
    void CMD_SCREENSAVER(void) { ::EVE_CMD_SCREENSAVER(); };
    void CMD_SCROLLBAR(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t size,  uint16_t range) { ::EVE_CMD_SCROLLBAR(x, y, w, h, options, val, size, range); };
    void CMD_SETBASE(uint32_t base) { ::EVE_CMD_SETBASE(base); };
    void CMD_SETBITMAP(uint32_t source,  uint16_t fmt,  uint16_t w,  uint16_t h) { ::EVE_CMD_SETBITMAP(source, fmt, w, h); };
    void CMD_SETFONT(uint32_t font,  uint32_t ptr) { ::EVE_CMD_SETFONT(font, ptr); };
    void CMD_SETFONT2(uint32_t font,  uint32_t ptr,  uint32_t firstchar) { ::EVE_CMD_SETFONT2(font, ptr, firstchar); };
    void CMD_SETMATRIX(void) { ::EVE_CMD_SETMATRIX(); };
    void CMD_SETROTATE(uint32_t r) { ::EVE_CMD_SETROTATE(r); };
    void CMD_SETSCRATCH(uint32_t handle) { ::EVE_CMD_SETSCRATCH(handle); };
    void CMD_SKETCH(int16_t x,  int16_t y,  uint16_t w,  uint16_t h,  uint32_t ptr,  uint16_t format) { ::EVE_CMD_SKETCH(x, y, w, h, ptr, format); };
    void CMD_SLIDER(int16_t x,  int16_t y,  int16_t w,  int16_t h,  uint16_t options,  uint16_t val,  uint16_t range) { ::EVE_CMD_SLIDER(x, y, w, h, options, val, range); };
    void CMD_SNAPSHOT(uint32_t ptr) { ::EVE_CMD_SNAPSHOT(ptr); };
    void CMD_SNAPSHOT2(uint32_t fmt,  uint32_t ptr,  int16_t x,  int16_t y,  int16_t w,  int16_t h) { ::EVE_CMD_SNAPSHOT2(fmt, ptr, x, y, w, h); };
    void CMD_SPINNER(int16_t x,  int16_t y,  uint16_t style,  uint16_t scale) { ::EVE_CMD_SPINNER(x, y, style, scale); };
    void CMD_STOP(void) { ::EVE_CMD_STOP(); };
    void CMD_SWAP(void) { ::EVE_CMD_SWAP(); };
    void CMD_SYNC(void) { ::EVE_CMD_SYNC(); };
    void CMD_TESTCARD(void) { ::EVE_CMD_TESTCARD(); };
    void CMD_TEXT(int16_t x,  int16_t y,  int16_t font,  uint16_t options,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_TEXT(x, y, font, options, string, myargs); va_end(myargs); };
    void CMD_TOGGLE(int16_t x,  int16_t y,  int16_t w,  int16_t font,  uint16_t options,  uint16_t state,  const char* string, ...) { va_list myargs; va_start(myargs, string); ::EVE_CMD_TOGGLE(x, y, w, font, options, state, string, myargs); va_end(myargs); };
    void CMD_TRACK(int16_t x,  int16_t y,  int16_t w,  int16_t h,  int16_t tag) { ::EVE_CMD_TRACK(x, y, w, h, tag); };
    void CMD_TRANSLATE(int32_t tx,  int32_t ty) { ::EVE_CMD_TRANSLATE(tx, ty); };
    void CMD_VIDEOFRAME(uint32_t dst,  uint32_t ptr) { ::EVE_CMD_VIDEOFRAME(dst, ptr); };
    void CMD_VIDEOSTART(void) { ::EVE_CMD_VIDEOSTART(); };
    void CMD_VIDEOSTARTF(void) { ::EVE_CMD_VIDEOSTARTF(); };
    void CMD_WAIT(uint32_t us) { ::EVE_CMD_WAIT(us); };
    void COLOR(uint32_t c) { ::EVE_COLOR(c); };
    void COLOR_A(uint8_t alpha) { ::EVE_COLOR_A(alpha); };
    void COLOR_MASK(uint8_t r,  uint8_t g,  uint8_t b,  uint8_t a) { ::EVE_COLOR_MASK(r, g, b, a); };
    void COLOR_RGB(uint8_t r,  uint8_t g,  uint8_t b) { ::EVE_COLOR_RGB(r, g, b); };
    void DISPLAY(void) { ::EVE_DISPLAY(); };
    void END(void) { ::EVE_END(); };
    void Init(void) { ::EVE_Init(); };
    void JUMP(uint16_t dest) { ::EVE_JUMP(dest); };
    void LIB_BeginCoProList(void) { ::EVE_LIB_BeginCoProList(); };
    void LIB_EndCoProList(void) { ::EVE_LIB_EndCoProList(); };
    void LIB_GetImage(uint32_t *addr,  uint32_t *fmt,  uint32_t *width,  uint32_t *height,  uint32_t *palette) { ::EVE_LIB_GetImage(addr, fmt, width, height, palette); };
    void LIB_GetMatrix(uint32_t *a,  uint32_t *b,  uint32_t *c,  uint32_t *d,  uint32_t *e,  uint32_t *f) { ::EVE_LIB_GetMatrix(a, b, c, d, e, f); };
    void LIB_GetProps(uint32_t *addr,  uint32_t *width,  uint32_t *height) { ::EVE_LIB_GetProps(addr, width, height); };
    void LIB_GetPtr(uint32_t *addr) { ::EVE_LIB_GetPtr(addr); };
    void LIB_MemCrc(uint32_t ptr,  uint32_t num,  uint32_t *result) { ::EVE_LIB_MemCrc(ptr, num, result); };
    void LIB_MemWrite16(uint32_t addr,  uint16_t value) { ::EVE_LIB_MemWrite16(addr, value); };
    void LIB_MemWrite32(uint32_t addr,  uint32_t value) { ::EVE_LIB_MemWrite32(addr, value); };
    void LIB_MemWrite8(uint32_t addr,  uint8_t value) { ::EVE_LIB_MemWrite8(addr, value); };
    void LIB_ReadDataFromRAMG(uint8_t *ImgData,  uint32_t DataSize,  uint32_t SrcAddress) { ::EVE_LIB_ReadDataFromRAMG(ImgData, DataSize, SrcAddress); };
    void LIB_WriteDataToCMD(const uint8_t *ImgData,  uint32_t DataSize) { ::EVE_LIB_WriteDataToCMD(ImgData, DataSize); };
    void LIB_WriteDataToRAMG(const uint8_t *ImgData,  uint32_t DataSize,  uint32_t DestAddress) { ::EVE_LIB_WriteDataToRAMG(ImgData, DataSize, DestAddress); };
    void LINE_WIDTH(uint16_t width) { ::EVE_LINE_WIDTH(width); };
    void MACRO(uint8_t m) { ::EVE_MACRO(m); };
    void NOP(void) { ::EVE_NOP(); };
    void PALETTE_SOURCE(uint32_t addr) { ::EVE_PALETTE_SOURCE(addr); };
    void POINT_SIZE(uint16_t size) { ::EVE_POINT_SIZE(size); };
    void RESTORE_CONTEXT(void) { ::EVE_RESTORE_CONTEXT(); };
    void RETURN(void) { ::EVE_RETURN(); };
    void SAVE_CONTEXT(void) { ::EVE_SAVE_CONTEXT(); };
    void SCISSOR_SIZE(uint16_t width,  uint16_t height) { ::EVE_SCISSOR_SIZE(width, height); };
    void SCISSOR_XY(uint16_t x,  uint16_t y) { ::EVE_SCISSOR_XY(x, y); };
    void STENCIL_FUNC(uint8_t func,  uint8_t ref,  uint8_t mask) { ::EVE_STENCIL_FUNC(func, ref, mask); };
    void STENCIL_MASK(uint8_t mask) { ::EVE_STENCIL_MASK(mask); };
    void STENCIL_OP(uint8_t sfail,  uint8_t spass) { ::EVE_STENCIL_OP(sfail, spass); };
    void TAG(uint8_t s) { ::EVE_TAG(s); };
    void TAG_MASK(uint8_t mask) { ::EVE_TAG_MASK(mask); };
    void VERTEX2F(int16_t x,  int16_t y) { ::EVE_VERTEX2F(x, y); };
    void VERTEX2II(uint16_t x,  uint16_t y,  uint8_t handle, uint8_t cell) { ::EVE_VERTEX2II(x, y, handle, cell); };
    void VERTEX_FORMAT(uint8_t frac) { ::EVE_VERTEX_FORMAT(frac); };
    void VERTEX_TRANSLATE_X(uint32_t x) { ::EVE_VERTEX_TRANSLATE_X(x); };
    void VERTEX_TRANSLATE_Y(uint32_t y) { ::EVE_VERTEX_TRANSLATE_Y(y); };

  public:
    /* Font table structure */
    /* On EVE4 onwards this is called the Legacy Font Structure. */
    typedef struct
    {
        /* Width of each character font from 0 to 127 */
        uint8_t    FontWidth[128];
        /* Bitmap format of font - this is the same as the EVE_FORMAT_x, where x is L1, L2, L4 etc. */
        uint32_t    FontBitmapFormat;
        /* Font line stride in bytes */
        uint32_t    FontLineStride;
        /* Font width in pixels */
        uint32_t    FontWidthInPixels;
        /* Font height in pixels */
        uint32_t    FontHeightInPixels;
        /* Pointer to font graphics raw data */
        uint32_t    PointerToFontGraphicsData;
    } EVE_GPU_FONT_HEADER;

    /* On EVE4 onwards this is called the Extended Font Structure. */
    typedef struct
    {
        /* Signature of font structure - must be 0x0100AAFF */
        uint32_t    Signature;
        /* Total size of font block in bytes */
        uint32_t    Size;
        /* Bitmap format of font - this is the same as the EVE_FORMAT_x, where x is L1, L2, L4 etc. */
        uint32_t    FontBitmapFormat;
        /* Bitmap swizzle - as used in BITMAP_SWIZZLE command */
        uint32_t    FontBitmapSwizzle;
        /* Font layout width in bytes */
        uint32_t    FontLayoutWidth;
        /* Font layout height */
        uint32_t    FontLayoutHeight;
        /* Font width in pixels */
        uint32_t    FontWidthInPixels;
        /* Font height in pixels */
        uint32_t    FontHeightInPixels;
        /* Pointer to font graphics raw data */
        uint32_t    PointerToFontGraphicsData;
        /* Number of characters */
        uint32_t    FontNumberCharacters;
    } EVE_GPU_EXT_FONT_HEADER;


  private:
    void setpanel(uint32_t panel);
};

#endif    /* _BTEVE_H_ */
