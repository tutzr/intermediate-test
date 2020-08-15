#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x00000000000002c8,0x0000004001010002,0x0000000000000180\n"
".quad 0x000000000000017b,0x0000002300010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000000448,0x010102464c457fa2,0x00016e0001000733\n"
".quad 0xc8220001006500be,0x2305230df5000802,0x4000000038004000,0x732e000001000600\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f00f1,0x666e692e766e2e00\n"
".quad 0x736e6f639200096f,0x81000e33746e6174,0x68706172676c6c61,0x6f746f72709f000e\n"
".quad 0xf12e005c65707974,0x74735f766e5f5f2a,0x5f31345f63697461,0x655f65665f38325f\n"
".quad 0x735f6f727463656c,0x63697274656d6d79,0x69695f317070635f,0x623062666163395f\n"
".quad 0x61705f6f00435f31,0x26002700456d6172,0xe47476645f735f00,0x327d0400010f0b00\n"
".quad 0x0018050003000000,0x18800d0000004066,0x1885130008481300,0x01b8701400100400\n"
".quad 0x020064041f004801,0x130008ffffffff40,0x0f0008fd130008fe,0x1f01280111e10001\n"
".quad 0x1f00010002017000,0x1f0001080000305c,0x00089c130400400b,0x00135f0c0040e41f\n"
".quad 0x8013000040020000,0x2400001078130029,0x0010081301ce0000,0x01f7011600a81817\n"
".quad 0x002801f82a004005,0x081702120400a404,0x13000084011f0270,0x040018b81b001110\n"
".quad 0x0000000000800038,0x0000000000000000,0x0000006001010001,0x00000000000000a8\n"
".quad 0x00000040000000a3,0x0000002300060004,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x00000000000000f2,0x0000001000000048,0x6c69706d6f632d2d\n"
".quad 0x2020796c6e6f2d65,0x0000000000000000,0x762e6bf100010a13,0x36206e6f69737265\n"
".quad 0x677261742e0a342e,0x35335f6d73207465,0x7365726464612e0a,0x3620657a69735f73\n"
".quad 0x736e6f632e0a0a34,0x6e67696c612e2074,0x5f2038622e203820,0x746174735f766e5f\n"
".quad 0x325f5f31345f6369,0x656c655f65665f38,0x6d79735f6f727463,0x635f63697274656d\n"
".quad 0x395f69695f317070,0x5f31623062666163,0x617261705fbf004c,0x005e3b5d32375b6d\n"
".quad 0x645f73e00026003b,0x3b5d3231315b7476,0x00000000000a0a0a\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[91];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
#undef __FATIDNAME_CORE
#undef __FATIDNAME
#define __FATIDNAME_CORE(x) __fatbinwrap##x
#define __FATIDNAME(x) __FATIDNAME_CORE(x)
extern const __fatBinC_Wrapper_t __FATIDNAME(__NV_MODULE_ID) __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 1, fatbinData, 0 };
#ifdef __cplusplus
}
#endif
