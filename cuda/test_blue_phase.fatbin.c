#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000c30,0x0000004001010002,0x0000000000000540\n"
".quad 0x000000000000053f,0x0000002300010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000000f10,0x010102464c457fa2,0x00016e0001000733\n"
".quad 0x10220001006500be,0x2305230df500080c,0x4000000038004000,0x732e000001000c00\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f22f2,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x745f6f6431325a5f,0x6c5f65665f747365,0x6c656e72656b5f63\n"
".quad 0x317332000f375031,0x6172617075000933,0x003b0f0041735f6d,0x6465726168736f24\n"
".quad 0x6f6c6701ff24003d,0x74696e692e6c6162,0x2900c46c65722e00,0x6e6174736e6f639f\n"
".quad 0x6c61812500403074,0x000e68706172676c,0x79746f746f72709f,0x00800f20018a6570\n"
".quad 0x5f01f1ae01bc0f1e,0x64656d616e6e755f,0x057274732400315f,0x31315a5f00316700\n"
".quad 0x50501c004f050039,0x007f36315a5f4100,0x5f74726573736170,0x634b5069697300d4\n"
".quad 0x6961664f00135f00,0xf00009026a02236c,0x6c696c6c76230001,0x006c69697623006c\n"
".quad 0x0f0a023d0f000b23,0x000000647d050001,0x01142000180a0003,0x249300180b1d0018\n"
".quad 0x15000b200d000001,0x3013000835130010,0x2003140030040018,0x1300100400180300\n"
".quad 0x1d0060c711000812,0x00000207a2006009,0x001001400009810d,0x300221200018d013\n"
".quad 0x182f110030061d00,0x6c32100018071d00,0x02802200d8101600,0x090084013b260008\n"
".quad 0x7e1f0400180f0108,0x36082f0431040018,0x082325000c111001,0x10000c1104220142\n"
".quad 0x00b2080a21000cc8,0xd0190300d00140b3,0x086405840c170400,0x0100100321f00000\n"
".quad 0x1b030021f0a10051,0x0001760c0f0400ff,0x1c4300440d10001a,0xffff5300bc600004\n"
".quad 0x00080000180affff,0x4000460400080b13,0xfd400008fffffffe,0x021c22001cffffff\n"
".quad 0x530034021622001c,0x13004c500000020e,0x2a0010081b00040c,0x0010601b001001a8\n"
".quad 0x007cf8130010181b,0x01b0050000000e57,0x3000b82600100d13,0x0010901700940000\n"
".quad 0x0000408817002400,0x1000004078170224,0x60581b0060681b00,0x0004570020481700\n"
".quad 0x00042f0020380000,0xac25f031ffff0001,0x060880acb08ca010,0xfe64c03c00089c00\n"
".quad 0x0560940000281fff,0x0a407fffff9c1c04,0x1e62001000049c04,0x3c5b585c00289ffc\n"
".quad 0xc01230047b300000,0x10801074a3003f1f,0x0010160880801088,0x000001da9fc02293\n"
".quad 0x9fc0323100101a74,0x369300101e130008,0x2ae4c03c007f9c00,0x108010acac930010\n"
".quad 0x003000102e08acac,0x001a115000081c01,0x1c0012400028011c,0x089c001631009828\n"
".quad 0x00280400401e1300,0xa080a4fc10a010a0,0x7a28330010040a08,0xdd9fc01641004842\n"
".quad 0xf400d81c00200088,0x0000291c080ae403,0x1de5801c080d6381,0x00810000c00a9208\n"
".quad 0x3000701e08a4fc43,0x60201400189c0c10,0x0058081c04124000,0x1240002804004804\n"
".quad 0xa0802100502b1c10,0x0058101108320041,0x2d0078de1fc01640,0x00480c1f00481010\n"
".quad 0x1208500041a41201,0x00480600502c1c10,0x041a200200489f1f,0xc0127a2802f00028\n"
".quad 0x80fc743f9990e91f,0xdc0180aca08010a0,0x1c18127420216cbe,0x5200689b90100034\n"
".quad 0x1800a0f4001c1011,0x803700fe010058df,0x00f0241f00a808a0,0x01df2200a0321b04\n"
".quad 0xa8081c05030001c0,0x3c2101a803fe2200,0x1c003c18b0001000,0x103c0212007ffffc\n"
".quad 0x6631000885802400,0x6c6203ff081d0065,0x65736168705f6575,0x2064696f7600632e\n"
".quad 0x4908362813020837,0x291f0838202c2a20,0x0807dc0117340310,0x8a2e000840130018\n"
".quad 0x0b1f000108003001,0x2f0029ca13040040,0x00135f0b0040023d,0x0813000040020000\n"
".quad 0x24000031501305ed,0x00200813085e0000,0x1c01080300081813,0x0008055822004070\n"
".quad 0x06440c08c000242a,0x407c130400406a1f,0x400a1f00404c1700,0x0d00d4016e210000\n"
".quad 0x301f0040c8130040,0x7c2100c804040080,0xf82a00400d00dc01,0x130500400f00e805\n"
".quad 0x5b030e000d0118f2,0x00380400c0f01b09,0x00c02e1200081013,0x101709830301840e\n"
".quad 0x32130101000f0019,0x09402a09ca0c01d4,0x40112b00800309a8,0x13040284e21f0028\n"
".quad 0x0240004a2f0a7bc0,0x0000000000005006,0x0000006001010001,0x0000000000000650\n"
".quad 0x0000004000000649,0x0000002300060004,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000001396,0x0000001000000048,0x6c69706d6f632d2d\n"
".quad 0x2020796c6e6f2d65,0x0000000000000000,0x762e1cf000010a13,0x36206e6f69737265\n"
".quad 0x677261742e0a342e,0x35335f6d73207465,0x7365726464612e0a,0x3620657a69735f73\n"
".quad 0x7478650bf0002e34,0x6e75662e206e7265,0x617261702e282063,0x12203233622e206d\n"
".quad 0x767465725f05f100,0x315a5f2029306c61,0x235f636c5f656631,0x7347000d37502200\n"
".quad 0x735f550017333150,0x34362f00450a280a,0x302f000803160037,0x290a315b29003e2c\n"
".quad 0x5a5f0af800d33b0a,0x615f747365743631,0x6e695f7472657373,0xa9634b5069696f66\n"
".quad 0x0e07002832332f00,0x311d11002f0f009a,0x321f0a002f0f00c9,0x664c002d030100ba\n"
".quad 0x001b0701566c6961,0x1b0400220f013a0e,0x321f00220e00c231,0x0e0022331f0e0044\n"
".quad 0x6c6725f000ca3412,0x6c612e206c61626f,0x622e2031206e6769,0x616e6e755f5f2038\n"
".quad 0x33355b315f64656d,0x3831317b203d205d,0x31202c313131202c,0x202c305300053530\n"
".quad 0x1000180100093233,0x0013363120001739,0x01000f3114002600,0x0200183230230018\n"
".quad 0x3939202c3854000e,0x341000333715000d,0x2600000f30140005,0x3034202c39346f00\n"
".quad 0x008b3531220b0041,0x0097341400043410,0x202c32530800300f,0x1800090100703739\n"
".quad 0x202c31346f004b30,0x73245304011a7d30,0x00630501125b7274,0x315b31430a002e0f\n"
".quad 0x2303011c0f014238,0x3731313800a13839,0xa304005f311100b4,0x3422001c35312300\n"
".quad 0x09f100750000cb36,0x6c62697369762e0a,0x7972746e652e2065,0x5f6f6431325a5f20\n"
".quad 0x656b7503780202c1,0x0b0391316c656e72,0x36753f02ae060390,0x0202d30e1f003f34\n"
".quad 0x4f0f0247381200ff,0x30325b3102fb2400,0x2e0a7b0a290a5d30,0x1100576c61636f6c\n"
".quad 0x7065645f7100155f,0x0a3b62002c30746f,0x253b02eb6765722e,0x00104c14000f5053\n"
".quad 0x70252064657270a5,0x32338500223e373c,0x001233313c722520,0x3c64666900346610\n"
".quad 0x7200f300473e3232,0x0a0a3b3e35313c64,0x005a752e766f6d0a,0x630a3b62008e2c1b\n"
".quad 0x00250400b6617476,0x25646c2200842c13,0x3164726f00180201,0x5d212601725b202c\n"
".quad 0x093436629f00883b,0x27016d2c32647225,0x2e707465730a3bb0,0x7033004d732e656e\n"
".quad 0x3b3003f7009d2c31,0x726220317025400a,0x3b325f3042422061,0xe02c3364724100fc\n"
".quad 0x0402ff0200f20302,0x332800443411001c,0x1f0030351200303b,0x0031361102003131\n"
".quad 0x892c372800313519,0x3738110200370f04,0x01cc010037371300,0x0049393429033f00\n"
".quad 0x0a0a3b31202c3997,0x6d65744301f57b09,0x1e67657230010270,0x53000b01052f0800\n"
".quad 0x0001b374730a3b30,0x2b3100165b120168,0x0a3b343d00765d30,0x14020033311f0033\n"
".quad 0x05d93b3629003331,0x2300333218000b01,0x0033321300333233,0x65331f000065311f\n"
".quad 0x381f006533140200,0x020033341f000033,0x0a3b39d800333414,0x696e752e6c6c6163\n"
".quad 0x0a202c52062b0a20,0x09202c2200f70a28,0x0932140009311400,0x0a34300009331400\n"
".quad 0x0a0a7d0941032029,0x6464610a3a550230,0x1f030d2c302202ee,0x018b311f3f018b30\n"
".quad 0x3f03018c30312a1f,0x0952281401090709,0x0f1508df0a202c3f,0x03fb290a27010130\n"
".quad 0x2c3272256301e200,0x5d302b33005e5b20,0x311202b209170134,0x9803003a32170385\n"
".quad 0x2900210104350004,0x902c3223015e3b5d,0x0481020034301104,0x7400343213003403\n"
".quad 0x176275730a3b5d32,0x5700001d2c332300,0x1a7362610a3b5400,0x1a33130014341100\n"
".quad 0x041a662e746c4104,0x643068001d2c3223,0x2b00000130424333,0x00df752e706c4100\n"
".quad 0x2c59043f202c3330,0x312f038932702520,0x9a34312209040433,0x07000003cf331801\n"
".quad 0x580418023335352f,0x3304020358301f03,0x311f00038a331f02,0xef0f023204020032\n"
".quad 0x15020264321f0103,0x0f03583419026432,0x050a03650f050a5a,0x3514020a091c0353\n"
".quad 0xf55d36312b4e020a,0x001f0201f5361401,0x00202c372301f807,0x381101f809004500\n"
".quad 0x290201f8371c0014,0x35160e01f8381f02,0x08e90101c40901f8,0xc4351f3e01c4361f\n"
".quad 0x157d01c4361f1e01,0x01c434322f01c439,0x322a01c530312500,0x220204220101c534\n"
".quad 0x1301c70900480000,0x2401c9311c03d431,0x0c01ca0f001f2c34,0x01ca341801ca3716\n"
".quad 0x01ca37352f0b4700,0x381f1e01ca371f3e,0x331501ab0a7001ca,0x16099d38382001ab\n"
".quad 0x00222c3424001b75,0x32343034643002ff,0x3333463743373944,0xd9060105e2443132\n"
".quad 0x362801f538382b03,0x312203bd0a00512c,0x2401f6361c001637,0x3364305f001f2c35\n"
".quad 0xf639160701f63845,0xf730100953351901,0x391f3e01f7381f01,0x03c230312f1e01f7\n"
".quad 0x372f01ae3831257d,0x021839150103c332,0x2c3032340780371b,0x01ce090049010022\n"
".quad 0xce30322c03e03212,0xc40f001f2c362401,0x1901cf3131260c03,0x352f0f000001cf36\n"
".quad 0xd031312f3e01cf39,0x906d01d0321f1f01,0x0a0a7d0a3b746572,0x000000000000000a\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[392];
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