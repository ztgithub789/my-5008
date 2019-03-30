#ifndef __VIEWMODE_CONFIG_H__
#define __VIEWMODE_CONFIG_H__

/*
* This file is created by a PC Tool and should be copied and used.
* The enumeration from 0 to eVIEWMODE_LOAD_MAX should be the same as the viewmode index in the flash memory.
* The eVIEWMODE_BASIC_XXX is built-in viewmode.
*/
typedef enum ppVIEWMODE_E
{
	eVIEWMODE_LOAD_TOP2D_FRONTSD = 0,
	eVIEWMODE_LOAD_TOP2D_LEFTSD,
	eVIEWMODE_LOAD_TOP2D_RIGHTSD,
	eVIEWMODE_LOAD_TOP2D_REARSD,
	eVIEWMODE_LOAD_FRONTWIDECAM,
	eVIEWMODE_LOAD_REARWIDECAM,
	eVIEWMODE_LOAD_TOP2D_SWING_START,
	eVIEWMODE_LOAD_TOP2D_SWING_0=eVIEWMODE_LOAD_TOP2D_SWING_START + 0,
	eVIEWMODE_LOAD_TOP2D_SWING_2=eVIEWMODE_LOAD_TOP2D_SWING_START + 1,
	eVIEWMODE_LOAD_TOP2D_SWING_4=eVIEWMODE_LOAD_TOP2D_SWING_START + 2,
	eVIEWMODE_LOAD_TOP2D_SWING_6=eVIEWMODE_LOAD_TOP2D_SWING_START + 3,
	eVIEWMODE_LOAD_TOP2D_SWING_8=eVIEWMODE_LOAD_TOP2D_SWING_START + 4,
	eVIEWMODE_LOAD_TOP2D_SWING_10=eVIEWMODE_LOAD_TOP2D_SWING_START + 5,
	eVIEWMODE_LOAD_TOP2D_SWING_12=eVIEWMODE_LOAD_TOP2D_SWING_START + 6,
	eVIEWMODE_LOAD_TOP2D_SWING_14=eVIEWMODE_LOAD_TOP2D_SWING_START + 7,
	eVIEWMODE_LOAD_TOP2D_SWING_16=eVIEWMODE_LOAD_TOP2D_SWING_START + 8,
	eVIEWMODE_LOAD_TOP2D_SWING_18=eVIEWMODE_LOAD_TOP2D_SWING_START + 9,
	eVIEWMODE_LOAD_TOP2D_SWING_20=eVIEWMODE_LOAD_TOP2D_SWING_START + 10,
	eVIEWMODE_LOAD_TOP2D_SWING_22=eVIEWMODE_LOAD_TOP2D_SWING_START + 11,
	eVIEWMODE_LOAD_TOP2D_SWING_24=eVIEWMODE_LOAD_TOP2D_SWING_START + 12,
	eVIEWMODE_LOAD_TOP2D_SWING_26=eVIEWMODE_LOAD_TOP2D_SWING_START + 13,
	eVIEWMODE_LOAD_TOP2D_SWING_28=eVIEWMODE_LOAD_TOP2D_SWING_START + 14,
	eVIEWMODE_LOAD_TOP2D_SWING_30=eVIEWMODE_LOAD_TOP2D_SWING_START + 15,
	eVIEWMODE_LOAD_TOP2D_SWING_32=eVIEWMODE_LOAD_TOP2D_SWING_START + 16,
	eVIEWMODE_LOAD_TOP2D_SWING_34=eVIEWMODE_LOAD_TOP2D_SWING_START + 17,
	eVIEWMODE_LOAD_TOP2D_SWING_36=eVIEWMODE_LOAD_TOP2D_SWING_START + 18,
	eVIEWMODE_LOAD_TOP2D_SWING_38=eVIEWMODE_LOAD_TOP2D_SWING_START + 19,
	eVIEWMODE_LOAD_TOP2D_SWING_40=eVIEWMODE_LOAD_TOP2D_SWING_START + 20,
	eVIEWMODE_LOAD_TOP2D_SWING_42=eVIEWMODE_LOAD_TOP2D_SWING_START + 21,
	eVIEWMODE_LOAD_TOP2D_SWING_44=eVIEWMODE_LOAD_TOP2D_SWING_START + 22,
	eVIEWMODE_LOAD_TOP2D_SWING_46=eVIEWMODE_LOAD_TOP2D_SWING_START + 23,
	eVIEWMODE_LOAD_TOP2D_SWING_48=eVIEWMODE_LOAD_TOP2D_SWING_START + 24,
	eVIEWMODE_LOAD_TOP2D_SWING_50=eVIEWMODE_LOAD_TOP2D_SWING_START + 25,
	eVIEWMODE_LOAD_TOP2D_SWING_52=eVIEWMODE_LOAD_TOP2D_SWING_START + 26,
	eVIEWMODE_LOAD_TOP2D_SWING_54=eVIEWMODE_LOAD_TOP2D_SWING_START + 27,
	eVIEWMODE_LOAD_TOP2D_SWING_56=eVIEWMODE_LOAD_TOP2D_SWING_START + 28,
	eVIEWMODE_LOAD_TOP2D_SWING_58=eVIEWMODE_LOAD_TOP2D_SWING_START + 29,
	eVIEWMODE_LOAD_TOP2D_SWING_60=eVIEWMODE_LOAD_TOP2D_SWING_START + 30,
	eVIEWMODE_LOAD_TOP2D_SWING_62=eVIEWMODE_LOAD_TOP2D_SWING_START + 31,
	eVIEWMODE_LOAD_TOP2D_SWING_64=eVIEWMODE_LOAD_TOP2D_SWING_START + 32,
	eVIEWMODE_LOAD_TOP2D_SWING_66=eVIEWMODE_LOAD_TOP2D_SWING_START + 33,
	eVIEWMODE_LOAD_TOP2D_SWING_68=eVIEWMODE_LOAD_TOP2D_SWING_START + 34,
	eVIEWMODE_LOAD_TOP2D_SWING_70=eVIEWMODE_LOAD_TOP2D_SWING_START + 35,
	eVIEWMODE_LOAD_TOP2D_SWING_72=eVIEWMODE_LOAD_TOP2D_SWING_START + 36,
	eVIEWMODE_LOAD_TOP2D_SWING_74=eVIEWMODE_LOAD_TOP2D_SWING_START + 37,
	eVIEWMODE_LOAD_TOP2D_SWING_76=eVIEWMODE_LOAD_TOP2D_SWING_START + 38,
	eVIEWMODE_LOAD_TOP2D_SWING_78=eVIEWMODE_LOAD_TOP2D_SWING_START + 39,
	eVIEWMODE_LOAD_TOP2D_SWING_80=eVIEWMODE_LOAD_TOP2D_SWING_START + 40,
	eVIEWMODE_LOAD_TOP2D_SWING_82=eVIEWMODE_LOAD_TOP2D_SWING_START + 41,
	eVIEWMODE_LOAD_TOP2D_SWING_84=eVIEWMODE_LOAD_TOP2D_SWING_START + 42,
	eVIEWMODE_LOAD_TOP2D_SWING_86=eVIEWMODE_LOAD_TOP2D_SWING_START + 43,
	eVIEWMODE_LOAD_TOP2D_SWING_88=eVIEWMODE_LOAD_TOP2D_SWING_START + 44,
	eVIEWMODE_LOAD_TOP2D_SWING_90=eVIEWMODE_LOAD_TOP2D_SWING_START + 45,
	eVIEWMODE_LOAD_TOP2D_SWING_92=eVIEWMODE_LOAD_TOP2D_SWING_START + 46,
	eVIEWMODE_LOAD_TOP2D_SWING_94=eVIEWMODE_LOAD_TOP2D_SWING_START + 47,
	eVIEWMODE_LOAD_TOP2D_SWING_96=eVIEWMODE_LOAD_TOP2D_SWING_START + 48,
	eVIEWMODE_LOAD_TOP2D_SWING_98=eVIEWMODE_LOAD_TOP2D_SWING_START + 49,
	eVIEWMODE_LOAD_TOP2D_SWING_100=eVIEWMODE_LOAD_TOP2D_SWING_START + 50,
	eVIEWMODE_LOAD_TOP2D_SWING_102=eVIEWMODE_LOAD_TOP2D_SWING_START + 51,
	eVIEWMODE_LOAD_TOP2D_SWING_104=eVIEWMODE_LOAD_TOP2D_SWING_START + 52,
	eVIEWMODE_LOAD_TOP2D_SWING_106=eVIEWMODE_LOAD_TOP2D_SWING_START + 53,
	eVIEWMODE_LOAD_TOP2D_SWING_108=eVIEWMODE_LOAD_TOP2D_SWING_START + 54,
	eVIEWMODE_LOAD_TOP2D_SWING_110=eVIEWMODE_LOAD_TOP2D_SWING_START + 55,
	eVIEWMODE_LOAD_TOP2D_SWING_112=eVIEWMODE_LOAD_TOP2D_SWING_START + 56,
	eVIEWMODE_LOAD_TOP2D_SWING_114=eVIEWMODE_LOAD_TOP2D_SWING_START + 57,
	eVIEWMODE_LOAD_TOP2D_SWING_116=eVIEWMODE_LOAD_TOP2D_SWING_START + 58,
	eVIEWMODE_LOAD_TOP2D_SWING_118=eVIEWMODE_LOAD_TOP2D_SWING_START + 59,
	eVIEWMODE_LOAD_TOP2D_SWING_120=eVIEWMODE_LOAD_TOP2D_SWING_START + 60,
	eVIEWMODE_LOAD_TOP2D_SWING_122=eVIEWMODE_LOAD_TOP2D_SWING_START + 61,
	eVIEWMODE_LOAD_TOP2D_SWING_124=eVIEWMODE_LOAD_TOP2D_SWING_START + 62,
	eVIEWMODE_LOAD_TOP2D_SWING_126=eVIEWMODE_LOAD_TOP2D_SWING_START + 63,
	eVIEWMODE_LOAD_TOP2D_SWING_128=eVIEWMODE_LOAD_TOP2D_SWING_START + 64,
	eVIEWMODE_LOAD_TOP2D_SWING_130=eVIEWMODE_LOAD_TOP2D_SWING_START + 65,
	eVIEWMODE_LOAD_TOP2D_SWING_132=eVIEWMODE_LOAD_TOP2D_SWING_START + 66,
	eVIEWMODE_LOAD_TOP2D_SWING_134=eVIEWMODE_LOAD_TOP2D_SWING_START + 67,
	eVIEWMODE_LOAD_TOP2D_SWING_136=eVIEWMODE_LOAD_TOP2D_SWING_START + 68,
	eVIEWMODE_LOAD_TOP2D_SWING_138=eVIEWMODE_LOAD_TOP2D_SWING_START + 69,
	eVIEWMODE_LOAD_TOP2D_SWING_140=eVIEWMODE_LOAD_TOP2D_SWING_START + 70,
	eVIEWMODE_LOAD_TOP2D_SWING_142=eVIEWMODE_LOAD_TOP2D_SWING_START + 71,
	eVIEWMODE_LOAD_TOP2D_SWING_144=eVIEWMODE_LOAD_TOP2D_SWING_START + 72,
	eVIEWMODE_LOAD_TOP2D_SWING_146=eVIEWMODE_LOAD_TOP2D_SWING_START + 73,
	eVIEWMODE_LOAD_TOP2D_SWING_148=eVIEWMODE_LOAD_TOP2D_SWING_START + 74,
	eVIEWMODE_LOAD_TOP2D_SWING_150=eVIEWMODE_LOAD_TOP2D_SWING_START + 75,
	eVIEWMODE_LOAD_TOP2D_SWING_152=eVIEWMODE_LOAD_TOP2D_SWING_START + 76,
	eVIEWMODE_LOAD_TOP2D_SWING_154=eVIEWMODE_LOAD_TOP2D_SWING_START + 77,
	eVIEWMODE_LOAD_TOP2D_SWING_156=eVIEWMODE_LOAD_TOP2D_SWING_START + 78,
	eVIEWMODE_LOAD_TOP2D_SWING_158=eVIEWMODE_LOAD_TOP2D_SWING_START + 79,
	eVIEWMODE_LOAD_TOP2D_SWING_160=eVIEWMODE_LOAD_TOP2D_SWING_START + 80,
	eVIEWMODE_LOAD_TOP2D_SWING_162=eVIEWMODE_LOAD_TOP2D_SWING_START + 81,
	eVIEWMODE_LOAD_TOP2D_SWING_164=eVIEWMODE_LOAD_TOP2D_SWING_START + 82,
	eVIEWMODE_LOAD_TOP2D_SWING_166=eVIEWMODE_LOAD_TOP2D_SWING_START + 83,
	eVIEWMODE_LOAD_TOP2D_SWING_168=eVIEWMODE_LOAD_TOP2D_SWING_START + 84,
	eVIEWMODE_LOAD_TOP2D_SWING_170=eVIEWMODE_LOAD_TOP2D_SWING_START + 85,
	eVIEWMODE_LOAD_TOP2D_SWING_172=eVIEWMODE_LOAD_TOP2D_SWING_START + 86,
	eVIEWMODE_LOAD_TOP2D_SWING_174=eVIEWMODE_LOAD_TOP2D_SWING_START + 87,
	eVIEWMODE_LOAD_TOP2D_SWING_176=eVIEWMODE_LOAD_TOP2D_SWING_START + 88,
	eVIEWMODE_LOAD_TOP2D_SWING_178=eVIEWMODE_LOAD_TOP2D_SWING_START + 89,
	eVIEWMODE_LOAD_TOP2D_SWING_180=eVIEWMODE_LOAD_TOP2D_SWING_START + 90,
	eVIEWMODE_LOAD_TOP2D_SWING_182=eVIEWMODE_LOAD_TOP2D_SWING_START + 91,
	eVIEWMODE_LOAD_TOP2D_SWING_184=eVIEWMODE_LOAD_TOP2D_SWING_START + 92,
	eVIEWMODE_LOAD_TOP2D_SWING_186=eVIEWMODE_LOAD_TOP2D_SWING_START + 93,
	eVIEWMODE_LOAD_TOP2D_SWING_188=eVIEWMODE_LOAD_TOP2D_SWING_START + 94,
	eVIEWMODE_LOAD_TOP2D_SWING_190=eVIEWMODE_LOAD_TOP2D_SWING_START + 95,
	eVIEWMODE_LOAD_TOP2D_SWING_192=eVIEWMODE_LOAD_TOP2D_SWING_START + 96,
	eVIEWMODE_LOAD_TOP2D_SWING_194=eVIEWMODE_LOAD_TOP2D_SWING_START + 97,
	eVIEWMODE_LOAD_TOP2D_SWING_196=eVIEWMODE_LOAD_TOP2D_SWING_START + 98,
	eVIEWMODE_LOAD_TOP2D_SWING_198=eVIEWMODE_LOAD_TOP2D_SWING_START + 99,
	eVIEWMODE_LOAD_TOP2D_SWING_200=eVIEWMODE_LOAD_TOP2D_SWING_START + 100,
	eVIEWMODE_LOAD_TOP2D_SWING_202=eVIEWMODE_LOAD_TOP2D_SWING_START + 101,
	eVIEWMODE_LOAD_TOP2D_SWING_204=eVIEWMODE_LOAD_TOP2D_SWING_START + 102,
	eVIEWMODE_LOAD_TOP2D_SWING_206=eVIEWMODE_LOAD_TOP2D_SWING_START + 103,
	eVIEWMODE_LOAD_TOP2D_SWING_208=eVIEWMODE_LOAD_TOP2D_SWING_START + 104,
	eVIEWMODE_LOAD_TOP2D_SWING_210=eVIEWMODE_LOAD_TOP2D_SWING_START + 105,
	eVIEWMODE_LOAD_TOP2D_SWING_212=eVIEWMODE_LOAD_TOP2D_SWING_START + 106,
	eVIEWMODE_LOAD_TOP2D_SWING_214=eVIEWMODE_LOAD_TOP2D_SWING_START + 107,
	eVIEWMODE_LOAD_TOP2D_SWING_216=eVIEWMODE_LOAD_TOP2D_SWING_START + 108,
	eVIEWMODE_LOAD_TOP2D_SWING_218=eVIEWMODE_LOAD_TOP2D_SWING_START + 109,
	eVIEWMODE_LOAD_TOP2D_SWING_220=eVIEWMODE_LOAD_TOP2D_SWING_START + 110,
	eVIEWMODE_LOAD_TOP2D_SWING_222=eVIEWMODE_LOAD_TOP2D_SWING_START + 111,
	eVIEWMODE_LOAD_TOP2D_SWING_224=eVIEWMODE_LOAD_TOP2D_SWING_START + 112,
	eVIEWMODE_LOAD_TOP2D_SWING_226=eVIEWMODE_LOAD_TOP2D_SWING_START + 113,
	eVIEWMODE_LOAD_TOP2D_SWING_228=eVIEWMODE_LOAD_TOP2D_SWING_START + 114,
	eVIEWMODE_LOAD_TOP2D_SWING_230=eVIEWMODE_LOAD_TOP2D_SWING_START + 115,
	eVIEWMODE_LOAD_TOP2D_SWING_232=eVIEWMODE_LOAD_TOP2D_SWING_START + 116,
	eVIEWMODE_LOAD_TOP2D_SWING_234=eVIEWMODE_LOAD_TOP2D_SWING_START + 117,
	eVIEWMODE_LOAD_TOP2D_SWING_236=eVIEWMODE_LOAD_TOP2D_SWING_START + 118,
	eVIEWMODE_LOAD_TOP2D_SWING_238=eVIEWMODE_LOAD_TOP2D_SWING_START + 119,
	eVIEWMODE_LOAD_TOP2D_SWING_240=eVIEWMODE_LOAD_TOP2D_SWING_START + 120,
	eVIEWMODE_LOAD_TOP2D_SWING_242=eVIEWMODE_LOAD_TOP2D_SWING_START + 121,
	eVIEWMODE_LOAD_TOP2D_SWING_244=eVIEWMODE_LOAD_TOP2D_SWING_START + 122,
	eVIEWMODE_LOAD_TOP2D_SWING_246=eVIEWMODE_LOAD_TOP2D_SWING_START + 123,
	eVIEWMODE_LOAD_TOP2D_SWING_248=eVIEWMODE_LOAD_TOP2D_SWING_START + 124,
	eVIEWMODE_LOAD_TOP2D_SWING_250=eVIEWMODE_LOAD_TOP2D_SWING_START + 125,
	eVIEWMODE_LOAD_TOP2D_SWING_252=eVIEWMODE_LOAD_TOP2D_SWING_START + 126,
	eVIEWMODE_LOAD_TOP2D_SWING_254=eVIEWMODE_LOAD_TOP2D_SWING_START + 127,
	eVIEWMODE_LOAD_TOP2D_SWING_256=eVIEWMODE_LOAD_TOP2D_SWING_START + 128,
	eVIEWMODE_LOAD_TOP2D_SWING_258=eVIEWMODE_LOAD_TOP2D_SWING_START + 129,
	eVIEWMODE_LOAD_TOP2D_SWING_260=eVIEWMODE_LOAD_TOP2D_SWING_START + 130,
	eVIEWMODE_LOAD_TOP2D_SWING_262=eVIEWMODE_LOAD_TOP2D_SWING_START + 131,
	eVIEWMODE_LOAD_TOP2D_SWING_264=eVIEWMODE_LOAD_TOP2D_SWING_START + 132,
	eVIEWMODE_LOAD_TOP2D_SWING_266=eVIEWMODE_LOAD_TOP2D_SWING_START + 133,
	eVIEWMODE_LOAD_TOP2D_SWING_268=eVIEWMODE_LOAD_TOP2D_SWING_START + 134,
	eVIEWMODE_LOAD_TOP2D_SWING_270=eVIEWMODE_LOAD_TOP2D_SWING_START + 135,
	eVIEWMODE_LOAD_TOP2D_SWING_272=eVIEWMODE_LOAD_TOP2D_SWING_START + 136,
	eVIEWMODE_LOAD_TOP2D_SWING_274=eVIEWMODE_LOAD_TOP2D_SWING_START + 137,
	eVIEWMODE_LOAD_TOP2D_SWING_276=eVIEWMODE_LOAD_TOP2D_SWING_START + 138,
	eVIEWMODE_LOAD_TOP2D_SWING_278=eVIEWMODE_LOAD_TOP2D_SWING_START + 139,
	eVIEWMODE_LOAD_TOP2D_SWING_280=eVIEWMODE_LOAD_TOP2D_SWING_START + 140,
	eVIEWMODE_LOAD_TOP2D_SWING_282=eVIEWMODE_LOAD_TOP2D_SWING_START + 141,
	eVIEWMODE_LOAD_TOP2D_SWING_284=eVIEWMODE_LOAD_TOP2D_SWING_START + 142,
	eVIEWMODE_LOAD_TOP2D_SWING_286=eVIEWMODE_LOAD_TOP2D_SWING_START + 143,
	eVIEWMODE_LOAD_TOP2D_SWING_288=eVIEWMODE_LOAD_TOP2D_SWING_START + 144,
	eVIEWMODE_LOAD_TOP2D_SWING_290=eVIEWMODE_LOAD_TOP2D_SWING_START + 145,
	eVIEWMODE_LOAD_TOP2D_SWING_292=eVIEWMODE_LOAD_TOP2D_SWING_START + 146,
	eVIEWMODE_LOAD_TOP2D_SWING_294=eVIEWMODE_LOAD_TOP2D_SWING_START + 147,
	eVIEWMODE_LOAD_TOP2D_SWING_296=eVIEWMODE_LOAD_TOP2D_SWING_START + 148,
	eVIEWMODE_LOAD_TOP2D_SWING_298=eVIEWMODE_LOAD_TOP2D_SWING_START + 149,
	eVIEWMODE_LOAD_TOP2D_SWING_300=eVIEWMODE_LOAD_TOP2D_SWING_START + 150,
	eVIEWMODE_LOAD_TOP2D_SWING_302=eVIEWMODE_LOAD_TOP2D_SWING_START + 151,
	eVIEWMODE_LOAD_TOP2D_SWING_304=eVIEWMODE_LOAD_TOP2D_SWING_START + 152,
	eVIEWMODE_LOAD_TOP2D_SWING_306=eVIEWMODE_LOAD_TOP2D_SWING_START + 153,
	eVIEWMODE_LOAD_TOP2D_SWING_308=eVIEWMODE_LOAD_TOP2D_SWING_START + 154,
	eVIEWMODE_LOAD_TOP2D_SWING_310=eVIEWMODE_LOAD_TOP2D_SWING_START + 155,
	eVIEWMODE_LOAD_TOP2D_SWING_312=eVIEWMODE_LOAD_TOP2D_SWING_START + 156,
	eVIEWMODE_LOAD_TOP2D_SWING_314=eVIEWMODE_LOAD_TOP2D_SWING_START + 157,
	eVIEWMODE_LOAD_TOP2D_SWING_316=eVIEWMODE_LOAD_TOP2D_SWING_START + 158,
	eVIEWMODE_LOAD_TOP2D_SWING_318=eVIEWMODE_LOAD_TOP2D_SWING_START + 159,
	eVIEWMODE_LOAD_TOP2D_SWING_320=eVIEWMODE_LOAD_TOP2D_SWING_START + 160,
	eVIEWMODE_LOAD_TOP2D_SWING_322=eVIEWMODE_LOAD_TOP2D_SWING_START + 161,
	eVIEWMODE_LOAD_TOP2D_SWING_324=eVIEWMODE_LOAD_TOP2D_SWING_START + 162,
	eVIEWMODE_LOAD_TOP2D_SWING_326=eVIEWMODE_LOAD_TOP2D_SWING_START + 163,
	eVIEWMODE_LOAD_TOP2D_SWING_328=eVIEWMODE_LOAD_TOP2D_SWING_START + 164,
	eVIEWMODE_LOAD_TOP2D_SWING_330=eVIEWMODE_LOAD_TOP2D_SWING_START + 165,
	eVIEWMODE_LOAD_TOP2D_SWING_332=eVIEWMODE_LOAD_TOP2D_SWING_START + 166,
	eVIEWMODE_LOAD_TOP2D_SWING_334=eVIEWMODE_LOAD_TOP2D_SWING_START + 167,
	eVIEWMODE_LOAD_TOP2D_SWING_336=eVIEWMODE_LOAD_TOP2D_SWING_START + 168,
	eVIEWMODE_LOAD_TOP2D_SWING_338=eVIEWMODE_LOAD_TOP2D_SWING_START + 169,
	eVIEWMODE_LOAD_TOP2D_SWING_340=eVIEWMODE_LOAD_TOP2D_SWING_START + 170,
	eVIEWMODE_LOAD_TOP2D_SWING_342=eVIEWMODE_LOAD_TOP2D_SWING_START + 171,
	eVIEWMODE_LOAD_TOP2D_SWING_344=eVIEWMODE_LOAD_TOP2D_SWING_START + 172,
	eVIEWMODE_LOAD_TOP2D_SWING_346=eVIEWMODE_LOAD_TOP2D_SWING_START + 173,
	eVIEWMODE_LOAD_TOP2D_SWING_348=eVIEWMODE_LOAD_TOP2D_SWING_START + 174,
	eVIEWMODE_LOAD_TOP2D_SWING_350=eVIEWMODE_LOAD_TOP2D_SWING_START + 175,
	eVIEWMODE_LOAD_TOP2D_SWING_352=eVIEWMODE_LOAD_TOP2D_SWING_START + 176,
	eVIEWMODE_LOAD_TOP2D_SWING_354=eVIEWMODE_LOAD_TOP2D_SWING_START + 177,
	eVIEWMODE_LOAD_TOP2D_SWING_356=eVIEWMODE_LOAD_TOP2D_SWING_START + 178,
	eVIEWMODE_LOAD_TOP2D_SWING_358=eVIEWMODE_LOAD_TOP2D_SWING_START + 179,
	eVIEWMODE_LOAD_TOP2D_SWING_MAX=eVIEWMODE_LOAD_TOP2D_SWING_START + 180,



//	eVIEWMODE_LOAD_TOP2D_SWING_44=eVIEWMODE_LOAD_TOP2D_SWING_START + 22,
//	eVIEWMODE_LOAD_TOP2D_SWING_90=eVIEWMODE_LOAD_TOP2D_SWING_START + 45,
//	eVIEWMODE_LOAD_TOP2D_SWING_134=eVIEWMODE_LOAD_TOP2D_SWING_START + 67,
//	eVIEWMODE_LOAD_TOP2D_SWING_180=eVIEWMODE_LOAD_TOP2D_SWING_START + 90,
//	eVIEWMODE_LOAD_TOP2D_SWING_224=eVIEWMODE_LOAD_TOP2D_SWING_START + 112,
//	eVIEWMODE_LOAD_TOP2D_SWING_270=eVIEWMODE_LOAD_TOP2D_SWING_START + 135,
//	eVIEWMODE_LOAD_TOP2D_SWING_314=eVIEWMODE_LOAD_TOP2D_SWING_START + 157,
//	eVIEWMODE_LOAD_TOP2D_SWING_MAX=eVIEWMODE_LOAD_TOP2D_SWING_START + 180,

	eVIEWMODE_LOAD_MAX,
	
	eVIEWMODE_BASIC_FRONT_BYPASS	= eVIEWMODE_LOAD_MAX,
	eVIEWMODE_BASIC_LEFT_BYPASS,
	eVIEWMODE_BASIC_RIGHT_BYPASS,
	eVIEWMODE_BASIC_REAR_BYPASS,
	eVIEWMODE_BASIC_QUAD,
	
	eVIEWMODE_TOTAL_MAX,
} PP_VIEWMODE_E;
	
#define VIEWMODE_NULL					(0xFFFFFFFF)

#endif // __VIEWMODE_CONFIG_H__