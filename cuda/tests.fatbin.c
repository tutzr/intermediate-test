#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x00000000000008c0,0x0000004001010002,0x00000000000003f0\n"
".quad 0x00000000000003ec,0x0000002300010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x00000000000008e0,0x010102464c457fa2,0x00016e0001000733\n"
".quad 0x20220001006500be,0x2305230df5000806,0x4000000038004000,0x732e000001000b00\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f17f0,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x7473657436315a5f,0x5f7472657373615f,0x634b50696951001b\n"
".quad 0x61626f6c67b50029,0x003974696e692e6c,0x6c65723f0900330f,0x6c6c616391110057\n"
".quad 0x9f000e6870617267,0x7079746f746f7270,0x0600680f2000c565,0x5f5f01f11e00df0f\n"
".quad 0x5f64656d616e6e75,0x0005727473240031,0x1100fc321f000b02,0x66746e6972707693\n"
".quad 0x6961664f001b5f00,0x762300f01201116c,0x6c6c7623006c6969,0x0f000523006c6c69\n"
".quad 0x7d0b00010f0a0124,0x180900030000004c,0x180a1d00186c1100,0x200d0000007c9300\n"
".quad 0x082e13001031000a,0x0032040018881300,0x00188d1300082713,0x1300080213004804\n"
".quad 0x0814001004001893,0x061d007801100008,0x071d001816110078,0x1200000032570018\n"
".quad 0x11000801402200c0,0xc41f00010e0018bc,0x46082f0431040018,0x082325000c0e1000\n"
".quad 0x10000c1104220052,0x00e0080f21000c28,0x00041e43000c0b10,0xffffffff4000bd10\n"
".quad 0x200913001c000024,0xfffffe4000010000,0x130020fd130008ff,0x00240103220024f5\n"
".quad 0x002cd8000000fb53,0x0010d01300380c13,0xc800003301800e11,0xb81700100d130010\n"
".quad 0x20a8170126000020,0x0020981700100000,0x0000200401980513,0x8c00007078170010\n"
".quad 0x0004570030701700,0x38041f0030500000,0xb8a0a0101df00802,0x009c000e08bcb0bc\n"
".quad 0xf01c0405e4c03c00,0xf81c0404407fffff,0x081c040a207fffff,0x019c000a7aa00000\n"
".quad 0x007f9c101e920020,0x05f000633cdb581c,0xbc84b48010b81012,0xa80000041c041a08\n"
".quad 0x745000571fc0127a,0x1ac00038001c0416,0x1e62001000049c04,0x20161300407f9c00\n"
".quad 0x00a4002001002000,0x8080108810801011,0x3c1fc02241003808,0xc032310010030040\n"
".quad 0x1300101a1300089f,0x9300101e13004836,0x08bc10b810bcbc80,0x3100602e1b00102a\n"
".quad 0x00c80200b81c000e,0x3c2100c8067a2033,0x1c003c19b0002000,0x103c0212007ffffc\n"
".quad 0x201d000885802f00,0x2e730cf003de0030,0x2520656e694c0063,0x2520656c69662064\n"
".quad 0x64656c6961462073,0xac03fd2012001f20,0x696f76000a6e6f69,0x6e69286104122064\n"
".quad 0x6f63ef0005202c74,0x726168632074736e,0x132e000100292a20,0x401300180c027001\n"
".quad 0x08000030c51f0008,0x130400400b1f0001,0x004001242f002905,0x004008042c13170b\n"
".quad 0x5001202600153013,0x0818130440081704,0x0040701c01030300,0x0010241300955013\n"
".quad 0x621f02ec0c00a404,0x1700317413040040,0x000040091f004014,0x1300400d00d4a912\n"
".quad 0x040080281f004088,0x0d00dcb71200c804,0x0f00e803b02a0040,0x0c00988513050040\n"
".quad 0xa01b0031c8130140,0x00102600380400c0,0x4008045401130558,0x4003056804802a00\n"
".quad 0x521f0028400e2b00,0x000805c022040244,0x0050060200005f2f,0x0000000000000000\n"
".quad 0x0000006001010001,0x0000000000000430,0x000000400000042e,0x0000002300060004\n"
".quad 0x0000000000000000,0x0000000000002011,0x0000000000000000,0x00000000000009bc\n"
".quad 0x0000001000000048,0x6c69706d6f632d2d,0x2020796c6e6f2d65,0x0000000000000000\n"
".quad 0x762e1cf000010a13,0x36206e6f69737265,0x677261742e0a342e,0x35335f6d73207465\n"
".quad 0x7365726464612e0a,0x3620657a69735f73,0x7478650bf0002e34,0x6e75662e206e7265\n"
".quad 0x617261702e282063,0x12203233622e206d,0x767465725f05f500,0x7270762029306c61\n"
".quad 0x240a280a66746e69,0x5f11001634362400,0x001d2c305f3f0013,0x703b0a290a315b08\n"
".quad 0x657373615f5fcb00,0x005a6c6961667472,0x220f005f0e001b08,0x00c20a2c31380400\n"
".quad 0x0044321f0000220f,0x34120e0022331f0e,0x626f6c6725f000ca,0x67696c612e206c61\n"
".quad 0x2038622e2031206e,0x656d616e6e755f5f,0x205d36345b315f64,0x202c3831317b203d\n"
".quad 0x353031202c313131,0x3233202c30500005,0x1800000e36100013,0x3965000f35312300\n"
".quad 0x1500123739202c35,0x0200213417002135,0x13000a3031200047,0x0018303429005b32\n"
".quad 0x0068343423002b00,0x963939240300170f,0x1c05008330312800,0x3203008c34302400\n"
".quad 0x2c315f0004341000,0x24710400fd7d3020,0x00f639335b727473,0x44311200a936372a\n"
".quad 0x3015010237332800,0x22002538302c009f,0x87303723000d3531,0x0a01470f00280a00\n"
".quad 0x9a030c014732332f,0x00d6301f00fe0500,0x2f00d6325b31310c,0x5b32330c00293834\n"
".quad 0x0a0100960e01f538,0x4600015f36342200,0x697369762e0a9400,0x315a73030e656c62\n"
".quad 0xba02727473657436,0x5069696f666e695f,0x00270f02d628634b,0x11002f0f03270e05\n"
".quad 0x0c002f0f02f0311b,0x2e0a7b0a290a32a7,0xfd36130100636f6c,0x645f02f200160102\n"
".quad 0x36315b30746f7065,0x596765722e0a3b5d,0x14000f5053253b00,0x64657270a500104c\n"
".quad 0x00223e323c702520,0x353c722520323389,0x3c647200f300333e,0x6d0a0a0a3b3e3331\n"
".quad 0x2c1b0046752e766f,0x7476630a3b620079,0x2c1300250400a261,0x2100ec646c220070\n"
".quad 0x202c324f0061752e,0x00375d1d0e014f5b,0x373119100037311f,0x1100380f00be0200\n"
".quad 0x65730a3b5d3205f2,0x33732e656e2e7074,0x00aa2c3170250932,0x7025400a3b3008f4\n"
".quad 0x4242206172622031,0x64610a0a3b325f30,0x00e92c3222005d64,0x2c332300163b3028\n"
".quad 0x74730a3b30540124,0x1d5b203233400115,0x1a3118005b5d1000,0x2b21001a34362200\n"
".quad 0x6c3b316436001c38,0x02e62c3464724101,0x1c04030502016203,0x3b34670030351100\n"
".quad 0x744301c67b090a0a,0x65723000db706d65,0x0b01026e08001e67,0x52012a02009b0200\n"
".quad 0x2200165b09343662,0x0a3b353d0083302b,0x14020033311f0033,0x03033b3229003331\n"
".quad 0x61630a3bc406c503,0x2820696e752e6c6c,0x06a70a202c3306d8,0x007a0a280a202c52\n"
".quad 0x0a31370009202c22,0x53018e621001c529,0x10003d5b202c3372,0x7d090a0a67021b2b\n"
".quad 0x012436120124090a,0x9f3711020125311f,0x3138120155361900,0x3911020031321f00\n"
".quad 0xaf00003138190031,0x0200380f06690704,0x3a301301bf313122,0x2a04ff0002b80100\n"
".quad 0x0f054300004c3032,0x1f01b4371f3f01b4,0x18000b0101b4391a,0x0033323323003332\n"
".quad 0x0065341f00333213,0x3314020065331f00,0x00003431312f0065,0x343415020034341f\n"
".quad 0x100a180239321700,0x0009040102330f08,0x0009331400093214,0x0a11022f290a3433\n"
".quad 0x7465720a3ab003bf,0x00000a0a0a7d0a3b\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[282];
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