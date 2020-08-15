#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000001160,0x0000004001010002,0x0000000000000a38\n"
".quad 0x0000000000000a38,0x0000001e00010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000002f40,0x010102464c457fa2,0x00016f0001000733\n"
".quad 0x12000001006500be,0x1e051e0df5000724,0x4000000038004000,0x732e000001002d00\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f1bf4,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x7379687034315a5f,0x6c7570665f736369,0x7331001039506573\n"
".quad 0x6e6f6395002f6450,0x003d33746e617473,0x14005d040f00370f,0x306f68724e001632\n"
".quad 0x00270f004d04005b,0x00163514004b0409,0x756d5f646172677f,0x0410002a0f03004e\n"
".quad 0x651f001630140051,0x040b00250f04009a,0x6d8f001636140047,0x4d7974696c69626f\n"
".quad 0x360d11002b0f0300,0x1101366968703f01,0x3217009e0400270e,0x716572665f9f00c0\n"
".quad 0x0f0400a2636e6575,0x371500a60415002f,0x68735f61748f002c,0x2c0f0300ab726165\n"
".quad 0x6f63cf00b00d1200,0x69745f6c6f72746e,0x002f0f0300b0656d,0x02b2331500b00415\n"
".quad 0x0300ac766172674f,0x1f023d0d0e00280f,0x9430622f11023d62,0x9479646f624f0e00\n"
".quad 0x028a0e00280e1100,0x6b6c75624f016500,0x0411002b0f03028a,0x02430f03e60b018f\n"
".quad 0x014a0d1900330f0d,0x6b2f10014a746b2f,0x3702ba000d041f74,0x041d0e002767616c\n"
".quad 0x15004d040500280f,0x4a5066653f049031,0x723f0b00250f0100,0x01640d10004b6c65\n"
".quad 0x706574734f02c408,0x911a00310f010079,0x706172676c6c6163,0x746f72709f000e68\n"
".quad 0x20062e657079746f,0x22064e0f0c05f10f,0x735f766e5f5f04f5,0x38325f6369746174\n"
".quad 0xf100d95f35315f5f,0x5f69695f31707001,0x3734363836333339,0x850f001f0100365f\n"
".quad 0x06a30f06580e1706,0x06c40f0006730f44,0x3e06e00f06990e4c,0x4e07020f0106af0f\n"
".quad 0x0f4407200f06d50e,0x0f5607460f0506eb,0x0f5007690f020714,0x0e56078f0f050734\n"
".quad 0x830e4707ae0f0761,0x079c0e3e07ca0f07,0x0107b80f4707e90f,0x0907d20f4e080b0f\n"
".quad 0x0f080a0e5e08350f,0x0f0b08230f3e0851,0x8c0f081f0e3b0870,0xb40f0908550f6408\n"
".quad 0x056c6c6923405808,0x00010f0b08bd0f00,0x0003000000527d09,0x1d0018781100181b\n"
".quad 0x000000866600181a,0x0008e8130018800d,0x301c1d0030010420,0x181d1d0018701100\n"
".quad 0x181e1d0018dd1100,0x1f1d001802462000,0x201d0018b7110018,0x1d00180328200018\n"
".quad 0x1d0018a611001821,0x0018042120001822,0x00189b110018231d,0x180504200018241d\n"
".quad 0x186a110018251d00,0x18d9110018261d00,0x0656200018271d00,0xd5110018281d0018\n"
".quad 0x3b200018291d0018,0x1100182a1d001807,0x2000182b1d0018a4,0x00182c1d00180839\n"
".quad 0x0018171d0018a111,0x0018181d0018af11,0x0210120000003257,0x0018e6110008c013\n"
".quad 0x18014f2000181c1d,0x18c11100181d1d00,0x02242000181e1d00,0x991100181f1d0018\n"
".quad 0x02200018201d0018,0x801301e006001803,0x221d001883110008,0x231d0018fb110030\n"
".quad 0x1d0018047c200018,0x1d0018e811001824,0x0018054b20001825,0x0018b7110018261d\n"
".quad 0x18062c200018271d,0x18b91100a8281d00,0x071c200030291d00,0x881100302a1d0018\n"
".quad 0x112000182b1d0018,0x3100182c1d001808,0x0c06100076082f04,0x0427008208232500\n"
".quad 0x00b2082f21000c11,0x0024271700240813,0x0048261700242717,0x0024261700242617\n"
".quad 0x1700240a13012a00,0x1700242517002425,0x1700242417002424,0x1700242317002424\n"
".quad 0x0000242317002423,0x22170024101301de,0x2117002422170024,0x2117002421170024\n"
".quad 0x2017002420170024,0x1f17002420170024,0x1f1700241f170090,0x1e1700241e170024\n"
".quad 0x1d1700241e170024,0x1d1700241d170024,0x1c1700241c170024,0x1b1700241c170024\n"
".quad 0x1b1700241b170024,0x1a1700d81a170024,0x191700241a170024,0x1917002419170024\n"
".quad 0x1817006c18170024,0x1717002418170024,0x0c05002417170048,0x00082000041e4f00\n"
".quad 0xffffff4000010078,0x400008fe130008ff,0x985300b0fffffffd,0x1913000818000008\n"
".quad 0x1b1300081a130008,0x1d1300081c130008,0x1f1300081e130008,0x2113000820130008\n"
".quad 0x2313000822130008,0x2513000824130008,0x089d530344000008,0x0828130008270000\n"
".quad 0x07700103e0381400,0x004704f0d700010f,0xde0322f2f2c2a202,0x9de44801000013ff\n"
".quad 0x231c072831025f03,0x101403dde4605005,0x0000fc51dc63a100,0x03f2003701f41a8e\n"
".quad 0x0000000400c00740,0xf2e3f2e3f042f7d0,0x1ca540d00359f423,0x1de484000002e0e2\n"
".quad 0x621ca5300038fc01,0x58e29ca594400018,0x1020629ca5845101,0x30001020e31c3000\n"
".quad 0xa52050002002f047,0x48e712001840631c,0xffe0001de790a300,0x080f0058e44003ff\n"
".quad 0xf2f2c2c047750500,0x931c072100c002f2,0xa8040500b0601f05,0x00301bffde034000\n"
".quad 0x23f2e236003fb710,0x570a0038711f0038,0x0600e00060421ca5,0x2200c000622f00c0\n"
".quad 0x8003402f3f01800f,0x801e0180601b0301,0x202f7200c00f0180,0xc001402a0300c001\n"
".quad 0x1fa4024001602f00,0x9400c00f04024002,0xe21f3e00c000802f,0x00000088001e00c0\n"
".quad 0x201c008143f72102,0x01400f00880e0230,0xb23f3c0140001f76,0xb2b26f2900c0b2b2\n"
".quad 0x401500c022e232b2,0x854002c080401c85,0x83f7750008a040dc,0xb0018002e0429282\n"
".quad 0x480000000c001c03,0x01189f0042321e04,0xe04800effc00821c,0x001f4004400f0500\n"
".quad 0x044002202a040680,0xa01f83050002402f,0x2f0500c01b040500,0x00c02f8300c001e0\n"
".quad 0x00c000e02a0300c0,0x00201fa405c0001f,0xa3050002c02f7405,0x854170070000402f\n"
".quad 0x007f010140b0411c,0x800a1d007820002f,0xe2211e0080821f00,0x82c7180df100199d\n"
".quad 0x9c03200002f042e2,0xdc4348014003c061,0x9ca548004003d3f1,0xa00e012804011041\n"
".quad 0x00a01f2e01000f00,0x1f2c0001001f3101,0x2e005904040d7001,0x1f0001080030062e\n"
".quad 0x00386e130400400b,0x13100b004008bd2f,0x30220000400f12dc,0x00005dd81300080f\n"
".quad 0xb90111bc16130024,0x1c1252030f940301,0x0008130822004070,0x1b00a404005d8813\n"
".quad 0x040040661f002804,0x4000160048159023,0xb31f0000401b1f00,0x000040981f040040\n"
".quad 0x01012f0000401c1f,0x000040a01f030040,0x404d1f0000401d1f,0x1f000040a81f0400\n"
".quad 0x00409a1f0000401e,0x1f1f000040b01f04,0x040040e91f000040,0x40201f000040b81f\n"
".quad 0x030040023c2f0000,0x40211f000040c01f,0x1f040040941f0000,0x0040221f000040c8\n"
".quad 0xd01f040040ec1f00,0x000040231f000040,0xd81f03004003402f,0x000040241f000040\n"
".quad 0x40e01f0400408a1f,0x1f000040251f0000,0x0040e81f040040d4,0x242f000040261f00\n"
".quad 0x0040f01f03004004,0x7f1f000040271f00,0x000040f81f040040,0x00400f0100c0281f\n"
".quad 0x291f004016002e04,0x0040051e2f000040,0x2a1f000040081f03,0x040040681f000040\n"
".quad 0x402b1f000040101f,0x1f040040e11f0000,0x00402c1f00004018,0x400d051406122100\n"
".quad 0xc00c04e816202a00,0x1c06202100580404,0x0040381300400d05,0x058d6e0c0040901f\n"
".quad 0xc813000100090000,0x082a0100101b0040,0x0c05d45813001800,0x1b1b1816d82a05c4\n"
".quad 0x1319680017007800,0x171a040009177001,0x00174c0080001828,0x00408f1f06f11000\n"
".quad 0x184c004018802e04,0x40da1f00400a0000,0x1f004019402e0400,0x40012b2f00008019\n"
".quad 0x1f00401a002e0300,0x0040721f0000401a,0x1b1f000040c01f04,0x040040c51f0000c0\n"
".quad 0x401c1f00401b802e,0x04010002102f0000,0x0d06800319601c1a,0x2e0400406b1f0040\n"
".quad 0x00401e1f00801cc0,0x802e040040c01f00,0x0000401f1f00401d,0x1e1e0400c0031b2f\n"
".quad 0x1f000180201f0040,0x401f002e04004068,0xaf1f000040211f00,0x000040c01f040040\n"
".quad 0x40fc1f000040221f,0x1f004020802e0400,0x00044f2f00010023,0x241f01c0211e0401\n"
".quad 0x040040b21f000040,0x40251f008021c02e,0x2e040040f91f0000,0x0000264c00802280\n"
".quad 0x018005462f004006,0x00274c0040231e04,0x0040b31f00400800,0x281a000040801f04\n"
".quad 0x0000000000500080,0x0000006001010001,0x0000000000000688,0x0000004000000686\n"
".quad 0x0000001e00060004,0x0000000000000000,0x0000000000002011,0x0000000000000000\n"
".quad 0x0000000000002a2a,0x0000001000000048,0x6c69706d6f632d2d,0x2020796c6e6f2d65\n"
".quad 0x0000000000000000,0x762e1cf000010a13,0x36206e6f69737265,0x677261742e0a342e\n"
".quad 0x30335f6d73207465,0x7365726464612e0a,0x3620657a69735f73,0x6e6f6330f1002e34\n"
".quad 0x67696c612e207473,0x2038622e2038206e,0x6174735f766e5f5f,0x5f5f38325f636974\n"
".quad 0x69737968705f3531,0x5f317070635f7363,0x38363333395f6969,0x1f01003f5f373436\n"
".quad 0x3b5d3233325b6000,0x626973690bf00080,0x636e75662e20656c,0x6d617261702e2820\n"
".quad 0x0012203233622e20,0x6c61767465725fe4,0x5931315a5f202930,0x3950506665726400\n"
".quad 0x00370a287335000e,0x5f1109002934362f,0x290a305f09f30027,0x206765722e0a7b0a\n"
".quad 0x702520646572702e,0x7b0000123b3e323c,0x00f2001172252800,0x343c647225203436\n"
".quad 0x6d646c0a0a0a3b3e,0x314f0017752e2200,0x04f31000735b202c,0x2e707465730a3b5d\n"
".quad 0x25093436732e656e,0x3002f0003e2c3170,0x6220317025400a3b,0x325f304242206172\n"
".quad 0x7061727409500066,0x0a3a540012010009,0x2c322f0071766f6d,0x76630a3b62240174\n"
".quad 0x11004d0401c46174,0x130a3b3233008633,0x155d1100945b1000,0x0f0100763b332200\n"
".quad 0xfc74732300a80201,0xa05b093233625800,0x31af0035302b2101,0x7d0a3b7465720a3b\n"
".quad 0x00c037141c01db0a,0x6568735f61746597,0xe264502d01447261,0x0176040c00300f01\n"
".quad 0x21311f2300382c1f,0x10070221331f0002,0x023364662f014c66,0xc40f060233331f00\n"
".quad 0x1f00413b5d2d1700,0x027b311f19004132,0x7b3110027b311d15,0x02313212003c0a02\n"
".quad 0x1d003c3215003c04,0x00b93a3420003c34,0x025c2c3123011d03,0x31026b6613024601\n"
".quad 0x026b0f001d2c5d32,0x75624f0136361859,0x002f0f07026a6b6c,0x00370f0302690f02\n"
".quad 0x00c20e6702680f0e,0x0f00cb0e1b02670f,0x1f0266321d290266,0x0266321d16026632\n"
".quad 0x382b2f030266321f,0x3f061232156f0268,0x2b0e0b0264306f68,0x0900330f02600e00\n"
".quad 0x0f00ba0e67025c0f,0x540f00c30e170258,0x331f0254331d2502,0x1f0254331d160254\n"
".quad 0x5534322f04025433,0x6b2f012630146f02,0x0e00290e0b025374,0x4f0f0500310f0251\n"
".quad 0x024d0f00b60e6702,0x23024b0f00bf0e15,0x024b341f024b341d,0x4b341f024b341d16\n"
".quad 0x7804a036312f0402,0x0d1504a06968703f,0x00330f04a00e002b,0x00ba0e7104a00f00\n"
".quad 0x0f00c30e1704a00f,0x1f0255351d1c04a0,0x0255351d16025535,0x32332f040255351f\n"
".quad 0x04a030622f7804a0,0x1f1c04a030622f14,0x1b0dd40f03024f62,0x2404a0341f024f04\n"
".quad 0x621f2504a030622f,0x3f024b361d2b024b,0x301f030464325f36,0x3215002e060606b0\n"
".quad 0x2b22023e311c002e,0x1500303218003038,0x003030322c003033,0x71331f0031363122\n"
".quad 0x1f150271651f6202,0x0271651f1d027165,0x651f260271651f71,0x1f0271371d2b0271\n"
".quad 0x7032372f04027137,0x1a026f30382f1802,0x351672026e38382f,0x67616c665f5f0155\n"
".quad 0x0f01002c0f051285,0x060231321f361288,0x28128b0f0000760f,0x01fa381301fa381d\n"
".quad 0xfa04046a03016d05,0x3032284301760f01,0x65757165728f00d4,0x330f0703ee79636e\n"
".quad 0x003b0f03f80e1300,0x08c20f1604020f09,0x040c0f0300ca0f3d,0x04160f0800440f16\n"
".quad 0x16391f021c391d2a,0x14700aeb391f0404,0x646f62664f00ea33,0x330f002c0e08023a\n"
".quad 0x2e0f0b00340f0302,0x06310f00bc0e6706,0x27144a0f00c50e18,0x022030312f16c60e\n"
".quad 0x2f18063638342f04,0x34362f1a06363635,0x5f015a3415720636,0x07028065736c7570\n"
".quad 0x0302810f00002d0f,0x6702820f0c00350f,0x0e1902830f00be0e,0xcf0f2802840f00c7\n"
".quad 0x1f050b2b311f0016,0x0b2b391f1a0b2b38,0x1b720b2b30322f1b,0x0f11074b0f015e32\n"
".quad 0x0f0d074f0f000037,0x0e7107530f0c003f,0xdb0e2307570f00d2,0x22311e31075b0f00\n"
".quad 0x2f0502b932312f17,0x6f6d8f7819513637,0x19517974696c6962,0x0f19510e002f0e14\n"
".quad 0x0e7019510f080037,0xcb0e1b19510f00c2,0x16fe0e2102300f00,0x00311e1716ff311f\n"
".quad 0x2f0514b633312f17,0x72674f7909cc3235,0x002c0d1509cc7661,0x0f0200340f09cc0e\n"
".quad 0xcc0f00bc0e7109cc,0x025f0f00c50e1809,0x8f34312f17120e1d,0x2f1909cd321f0504\n"
".quad 0x34313f1b09ce3331,0x6172677f7b100534,0x0f070284756d5f64,0x0f0302860f01002e\n"
".quad 0x0e6702880f0d0036,0xc90e1a028a0f00c0,0x17490e29028c0f00,0x322f04028c35312f\n"
".quad 0x8c31322f19028c30,0x09d43432323f1b02,0x72746e6f6301ff7b,0x73656d69745f6c6f\n"
".quad 0x350f05129a706574,0x7f0f5212a30f0a00,0x311e2812ac0f0700,0x0412ae36312f1718\n"
".quad 0xdf085312ae38362f,0x00330e1412ae0f00,0x0f10003b0f12ae0e,0x1f042e371d26091b\n"
".quad 0x0f00ca0e2412ae33,0x0c0f00d30e1f12ae,0x37312f16c50e250e,0x130923371e170923\n"
".quad 0x025f327621092337,0x3272254602607b11,0x04095d302802667d,0x1a028e0500563411\n"
".quad 0x2e64646151028e35,0x001e2c3622001973,0x2e74766360028101,0x12001e00018c6e72\n"
".quad 0x313672253204df09,0x6800190204c40600,0x0001304646426430,0x02fc321f0105000f\n"
".quad 0x7465720a3b34c010,0x00000a0a0a7d0a3b\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[558];
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
