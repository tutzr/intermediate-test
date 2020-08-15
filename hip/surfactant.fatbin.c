#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000280,0x0000004001010002,0x0000000000000158\n"
".quad 0x0000000000000157,0x0000001e00010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000000368,0x010102464c457fa2,0x00016e0001000733\n"
".quad 0xe8220001006500be,0x1e051e0df5000801,0x4000000038004000,0x732e000001000600\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f00f1,0x666e692e766e2e00\n"
".quad 0x736e6f639200096f,0x81000e33746e6174,0x68706172676c6c61,0x6f746f72709f000e\n"
".quad 0xf02e005c65707974,0x74735f766e5f5f0a,0x5f31335f63697461,0x667275735f38315f\n"
".quad 0x635f03f1001f6361,0x645f69695f317070,0x5f37383339343032,0x617261705f6f0039\n"
".quad 0x0900010f0b00976d,0x050003000000327d,0x0d00000040660018,0x1100083813001880\n"
".quad 0x02004c041f00307b,0x130008ffffffff40,0x0f0008fd130008fe,0x1f00a80111610001\n"
".quad 0x1f0001000200d800,0x1f0001080000305c,0x00089c130400400b,0x00135f0c0040971f\n"
".quad 0x3813000040020000,0x0213001060130029,0x1817001008130068,0x40700000014c00a8\n"
".quad 0xa404002801982a00,0x01d8081701920400,0x01b02a000084011f,0x00800038001b01d0\n"
".quad 0x0000000000000000,0x0000006001010001,0x0000000000000088,0x0000004000000087\n"
".quad 0x0000001e00060004,0x0000000000000000,0x0000000000002011,0x0000000000000000\n"
".quad 0x000000000000008b,0x0000001000000048,0x6c69706d6f632d2d,0x2020796c6e6f2d65\n"
".quad 0x0000000000000000,0x762e61f100010a13,0x36206e6f69737265,0x677261742e0a342e\n"
".quad 0x30335f6d73207465,0x7365726464612e0a,0x3620657a69735f73,0x736e6f632e0a0a34\n"
".quad 0x6e67696c612e2074,0x5f2038622e203820,0x746174735f766e5f,0x315f5f31335f6369\n"
".quad 0x6361667275735f38,0x7070635f746e6174,0x3032645f69695f31,0x00425f3738333934\n"
".quad 0x5b6d617261705fe0,0x000a0a0a3b5d3635\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[82];
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