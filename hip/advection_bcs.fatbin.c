#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x00000000000012f8,0x0000004001010002,0x0000000000000910\n"
".quad 0x000000000000090a,0x0000001e00010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x00000000000015d0,0x010102464c457fa2,0x00016e0001000733\n"
".quad 0x90220001006500be,0x1e051e0df5000812,0x4000000038004000,0x732e000001000d00\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f2cf3,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x6576646130335a5f,0x63625f6e6f697463,0x756c665f6f6e5f73\n"
".quad 0x6c656e72656b5f78,0xb1000b333150765f,0x3950735f74787463,0x5073850022766461\n"
".quad 0x0054735f70616d35,0x6168736f37004e0f,0x01ff370050646572,0x692e6c61626f6c67\n"
".quad 0x6c65722e0074696e,0x736e6f639f3c00fd,0x38005330746e6174,0x706172676c6c6181\n"
".quad 0x746f72709f000e68,0x2001e9657079746f,0xe7022e0f3100930f,0x5a5f007274732494\n"
".quad 0x746365b000443432,0x61726574695f726f,0x00540054731c0068,0x6f5e001235315a5f\n"
".quad 0x699000787364726f,0x5f31535f31536950,0x616d4f001b04002d,0x002a030000a36b73\n"
".quad 0x005a31322a002d02,0x00357865646e695f,0x6241001d3631230d,0x00900d0032657361\n"
".quad 0x65723513ff005b00,0x64615f6573726576,0x316b6e61725f7264,0x697472657373615f\n"
".quad 0x3b69696969634b50,0x5a5f5f5f245f3d03,0x906b354530300049,0x038f30385f5f4f01\n"
".quad 0x6d617261705fb141,0x3101066c69692300,0x00010000056c6923,0xb80f000803000d01\n"
".quad 0x777d0b00010f0b03,0x00180a0003000000,0x180c1d0018011020,0x180b1d0018601100\n"
".quad 0x200d000001706600,0xcc93000810130018,0x04000c400d000002,0x0320200008040010\n"
".quad 0x73a20048091d0048,0x400009810d000003,0x1100181813001001,0x110030061d00309c\n"
".quad 0x660018071d0018aa,0x00d8101200000032,0x0001755f00238013,0x18a21f0001081200\n"
".quad 0x1f040018cf1f0400,0x1802312f040018fc,0x31040018571f0300,0x0c2010017e082f04\n"
".quad 0x0422018a08232500,0x0431010000000c11,0x180140a200fa080a,0x9817040018190300\n"
".quad 0x21f0250166021001,0x0010080001390010,0x030021f0a1000101,0x01b6180f04003f1b\n"
".quad 0x0000000d93001a00,0x3101a80f0000000e,0x1c045007d2041d04,0x0005a001e470000c\n"
".quad 0x041e040000075800,0xffff400001010065,0x130044000090ffff,0x13004c0a1300480a\n"
".quad 0x1700540a1300500a,0xfffffffe4002000a,0x3cfffffffd400008,0x9022003c03982200\n"
".quad 0x003c038822003c03,0x8322003c00000800,0x0200037a23003c03,0x130054051301f303\n"
".quad 0x13024c0b13001010,0x2600100a13001008,0x2600500000300530,0x1b006800001004e0\n"
".quad 0x001003782a001030,0x01e02a001002c82a,0xc000001068170010,0x00d8000010081700\n"
".quad 0x00140f1300f85813,0x000b2f0020003026,0x42b705f080ff0001,0x5de42232b2b27200\n"
".quad 0x5c02280040011000,0x011de4c002aba010,0x015de42800400500,0x90161c43a1000810\n"
".quad 0x01f11c0768004000,0x0094075c041006f0,0xc0428042872c0000,0x1084001c042202e2\n"
".quad 0x4000a1d75ca3a100,0x18a2005f1de22000,0x1b0e000011d1dc23,0x0230e7c922003885\n"
".quad 0x023351841c028050,0x720042a2004701fd,0x000074019de42232,0x40f09c2000782800\n"
".quad 0x3021849c02485003,0x002840021de44100,0x47b2000808025d30,0x4322b28042304280\n"
".quad 0x11851c310028f45c,0x002848029d310028,0x432200084402dd30,0x50031de4420020dc\n"
".quad 0x8400084c03200040,0x22004220420042b7,0x0060019de43400d8,0x0068011100404412\n"
".quad 0x1d150038029de432,0x2047cf0040010058,0x1de4220042b2b042,0x5de4400100c06003\n"
".quad 0x410060040018fc03,0x600300a041859c02,0x0042004220478500,0x0400680400782262\n"
".quad 0x0078050068030078,0xb2b28047b400600b,0xe0f55c4322320042,0x78541800e0581300\n"
".quad 0x400540079de46600,0x007011dc85300048,0xb04200423047c0b1,0xc01404b21c852282\n"
".quad 0x00a8e79c02320098,0x5010dc8541008003,0x4304f000a0030020,0x474800400553f7dc\n"
".quad 0xa52202c04343f200,0x0080841c0069e11c,0x03489404171e0321,0xc04801000010719c\n"
".quad 0x000871dce305f200,0x42e042c047208ac0,0x1831861c0222b200,0x66dc053000d80201\n"
".quad 0x00d8dc4384320090,0xc853044b101c8530,0x5c12012060019de4,0xc0050002301001c0\n"
".quad 0x0600280400d80401,0x00e80b00f8030098,0x228042c04c00c000,0x1c033900f80400e0\n"
".quad 0x00d01c032200b873,0x00a100c0735ce332,0x9c0522b2b20042d2,0xa00400980400b0c6\n"
".quad 0x0401980f00b80501,0xb822022600bf4711,0x800400b850022900,0x4102280300b80401\n"
".quad 0xf01001c02010dc85,0x021de422026300bf,0x1100b85c1f02b860,0xc2074100b05c0522\n"
".quad 0x0f02700404000042,0x40101c85361400b8,0x689ca52202005a02,0x230168111ca53901\n"
".quad 0x00a0dd1200a09de4,0x4202c3f750005804,0x9c30023004034070,0x03dce3c100b81803\n"
".quad 0x401c03208ec00008,0x053400f80302d814,0x7c0400020168e4dc,0x1823f23042b2b2d0\n"
".quad 0x3200b00400c00403,0x04680300a0e79ca5,0xb28042c0ba00c005,0xa078009c032202b2\n"
".quad 0x20bec00008006502,0x040130209c220290,0x001820051d300350,0x720042e2c3f287c0\n"
".quad 0x31001030055de422,0xdc23a20068419ca5,0x21e71b0ec0000461,0x0007f31c23c304f0\n"
".quad 0xd01c015de432b6c0,0x328728d108db0003,0x1e04223230423232,0xfcc59ca205303133\n"
".quad 0x08d5dc2331260000,0x340000fcc41ca100,0xe4300008d45c2331,0x9c2328300209069d\n"
".quad 0x3042373132600018,0xfcc61c23b10180b2,0x08d4dc2331040000,0x310478009de43100\n"
".quad 0x5de4400028d65c23,0x011de2a200106802,0x409de41800000220,0xf2e042b2b207a105\n"
".quad 0x183200d89de222c3,0x200138050008dde2,0x9c0284410408421c,0x02a81c8521086f20\n"
".quad 0x0020439ca3c804f0,0x42e293f2872011c0,0x510010dce322c3f0,0x300128e19ca52092\n"
".quad 0xa550400028621c01,0x9ca594580010e21c,0x419ca3b002202142,0xf042872015c00020\n"
".quad 0x0010dce323300041,0x01e0629ca5209652,0x0141002864025d30,0x001802004820a29c\n"
".quad 0x01c861431ca59453,0xf282c047a003e001,0x00801ca323f2e293,0x033001dde4201951\n"
".quad 0x209a5200105ce320,0x879c320090c21ca5,0x200048c713004858,0x003fc71100188142\n"
".quad 0x00c80500d022c324,0x18429c3200c81c13,0xe01c1400c8030038,0x473006d810212001\n"
".quad 0x1de420410932e2e0,0x400021e792019802,0xa20700e74003fffa,0x03ffffe0001de780\n"
".quad 0x0900080d0010e440,0x2e07d0632e2f0d25,0x000018031f009d00,0x3001e92e00084013\n"
".quad 0x00400b1f00010800,0x03b82f0a18291304,0x0e0b9813110b0040,0x98130a98e8130040\n"
".quad 0x0cfe000024000031,0x0729120ce800082a,0x0cc0040040701c00,0x0d50031b00102413\n"
".quad 0x0400407d1f000104,0x004080170040a413,0x01cd210000400a1f,0xa9241300400d00d4\n"
".quad 0xc804040080481f00,0x400d00dc01db2100,0x40301f00216c1300,0x0c0118012b220c00\n"
".quad 0xd01b0021a0130140,0x7a120e70081b00c0,0x55701301840d00c0,0x01000f01b1581700\n"
".quad 0x00062f01d4321301,0x8003018807000219,0x1b2f002740202b00,0xa812802a03028401\n"
".quad 0xd4cb130502400f00,0x042f041580031f00,0x000000500600c000,0x0000000000000000\n"
".quad 0x0000006001010001,0x0000000000000948,0x0000004000000941,0x0000001e00060004\n"
".quad 0x0000000000000000,0x0000000000002011,0x0000000000000000,0x000000000000290b\n"
".quad 0x0000001000000048,0x6c69706d6f632d2d,0x2020796c6e6f2d65,0x0000000000000000\n"
".quad 0x762e1cf000010a13,0x36206e6f69737265,0x677261742e0a342e,0x30335f6d73207465\n"
".quad 0x7365726464612e0a,0x3620657a69735f73,0x7478650bf0002e34,0x6e75662e206e7265\n"
".quad 0x617261702e282063,0x12203233622e206d,0x767465725f1af300,0x325a5f2029306c61\n"
".quad 0x5f6c656e72656b34,0x695f726f74636576,0x6e6f697461726574,0x6395001b33315073\n"
".quad 0x0a280a735f747874,0x1a003b34362f0049,0x0a305f6f00385f11,0x312419009d3b0a29\n"
".quad 0x64726f6f7c004735,0x50699d0059765f73,0x9d5f31535f315369,0x009d0417003b0f00\n"
".quad 0x00420f008b0a2c28,0x1f2d00842c312f20,0x0042331f2e004232,0x50041e01a5341f2e\n"
".quad 0x00606b73616d4e00,0x3b0f01a50e005f04,0x00420f01a50e1900,0x321f2e0042311f24\n"
".quad 0x2e0042331f2e0042,0x0731322a1e01a50f,0xad7865646e695f02,0xb50e2200430f1801\n"
".quad 0x4a311f2c004a0f01,0x1f36004a321f3600,0x4201d50f12004a33,0x6162410052363123\n"
".quad 0x0e03dd0d00676573,0x110f0f00340f0373,0x311f1a003b0f0205,0xe2657235301e029f\n"
".quad 0x05f906cd5f652006,0x615f316b6e61725f,0x4b50697472657373,0x332f00ca69696963\n"
".quad 0x0202810f13003432,0x762c312f1a003b0f,0x1f27003b321f2600,0x003b341f27003b33\n"
".quad 0x0a1ff001b6351127,0x206c61626f6c672e,0x31206e67696c612e,0x7473242038622e20\n"
".quad 0x203d205d36315b72,0x303031202c37397b,0x50000a383131202c,0x10000e3939202c31\n"
".quad 0x10000a3510000e36,0x39202c3094000531,0x5200203839202c35,0x20000d3634202c35\n"
".quad 0x697606f0006a7d30,0x652e20656c626973,0x335a5f207972746e,0x6901f4084e646130\n"
".quad 0x6e5f7363625f6e6f,0x695f78756c665f6f,0x6461394103450d08,0x6d35507386002276\n"
".quad 0x753f0226735f7061,0x02450e3200523436,0x005a311f3c005a0f,0x0a7b0a290a32a646\n"
".quad 0x341101d0636f6c2e,0xf200155f5f2101d0,0x30746f7065645f02,0x722e0a3b5d34325b\n"
".quad 0x5053253b03226765,0x70a500104c14000f,0x393c702520646572,0x252036319600223e\n"
".quad 0x85001331313c7372,0x38333c7225203233,0x6669004766100012,0x40005a3e34313c64\n"
".quad 0x0a600038353c6472,0x06005c6168732e09,0x0e0f02c0751100a7,0x0a9c6b3545303001\n"
".quad 0x2e766f6d0a0a3b83,0x6201052c1b00d275,0x012d617476630a3b,0x2200fc2c13002504\n"
".quad 0x6f00180201a2646c,0x025c5b202c376472,0x63381f00635d1e39,0x1f000063311f3b00\n"
".quad 0xc85d32203b006339,0x65744302047b1701,0x67657231001d706d,0x000b0105880701e6\n"
".quad 0x009774730a3b3053,0x00165b0934366252,0x1901692c5d302b41,0x3bc406330304cf3b\n"
".quad 0x6e752e6c6c61630a,0x202c3f0646282069,0x0a202c52190c930a,0x1b290a27006c0a28\n"
".quad 0x7225093233626001,0x9d2b10005903017d,0x090a7d090a0a8301,0x1f029b0102a57473\n"
".quad 0x2200ee0139029c5b,0xa8033e0102a13b38,0x6469746e25202c39,0x4d0555000016782e\n"
".quad 0x3144001861746325,0x646172002e25202c,0x130019732e6f6c2e,0x72c0003b02004c2c\n"
".quad 0x707465730a3b3131,0x250954002265672e,0x3808f400272c3170,0x6220317025400a3b\n"
".quad 0x345f304242206172,0x022f6464610a0a3b,0x3029031400004101,0x03502c312300173b\n"
".quad 0x1b002f321300180b,0x1a00183313001832,0x1f00173413001738,0x18000b014e024634\n"
".quad 0x0033323323003331,0x0a3b313d00333113,0x14020065321f0065,0x003432312f006532\n"
".quad 0x3315020034331f00,0x1f000034331f0034,0x0034341502003434,0x0e020f1b0314341f\n"
".quad 0x09202c2203140717,0x0932140009311400,0x38341f0009331400,0x02033932312f0003\n"
".quad 0x1f0033044901d00f,0x019e311e02003331,0x01d2331f1801d20f,0x301f2001d2341f20\n"
".quad 0x0f100e2f0f1c01d2,0x0201d2331f3601d2,0x4f03b9351303b908,0x0eff01ea0a3b3631\n"
".quad 0x0e4c0f1906d0351f,0xf2341f4d01f20f04,0x6f7423091d010201,0xd8361101fd050c1e\n"
".quad 0x06110405cb391a00,0x095302005e363121,0x093c316420069002,0x4f0b089102000800\n"
".quad 0x2b3652001d381300,0x1b731300555d3631,0x460100222c392400,0x7b387520003e0100\n"
".quad 0x5d3929003531130a,0x2700883032240087,0x1307310300883032,0x001c5d312e003535\n"
".quad 0x00fe3210001c3612,0x3723074b62757334,0x6b0a003f00001d2c,0x18321a0304311400\n"
".quad 0x028202010b321500,0x3212006101006706,0x2f720339371f066d,0x360f2dff03393132\n"
".quad 0x33322f03010c030a,0x030134322f080301,0x0100222c35323406,0xb032130301070046\n"
".quad 0x391f0002cc351f02,0x02e83032270702e8,0x3123001702006a01,0xb70f00230000392c\n"
".quad 0xff02b731322f0702,0x1f1302b732322fb3,0x02b7371f0902b736,0x460100222c382407\n"
".quad 0x2b03090302b70700,0x0535391405b83832,0x02cf331f02b3381e,0xcf39322a033c0308\n"
".quad 0x230000392c352302,0xbf351f0802cf0f00,0xf802cf31322fa608,0x30332f1202cf361f\n"
".quad 0x02cf31332f0802cf,0x0100222c32333406,0x027f0302cf070046,0x33332402cf32332a\n"
".quad 0x371f02b3341e02cf,0x332a090c030802cf,0x00392c392302cf33,0x1f0802cf0f002300\n"
".quad 0xcf31322fda0b8e39,0x1302cf30332fc302,0xcf351f0902cf341f,0x0100222c36240702\n"
".quad 0x00350302cf070046,0x0f7d11915d36333f,0x0f121aac0f0e0f23,0x0f0104500f01019c\n"
".quad 0x1f06e53312180d0e,0x0470351300018438,0xaf0016695d373331,0x0201e300001c0003\n"
".quad 0x23139a3035230184,0x00046b01139a746c,0x321913993111001e,0x7165b3002b011399\n"
".quad 0x337025093631732e,0x6c420045010d092c,0x2c3230023e752e70,0x7025202c52001520\n"
".quad 0x178d6e7220007833,0x01f8646621006202,0x3423004f3b32333b,0x14022e301a02022c\n"
".quad 0x003336312c00e62c,0x0082040a8a2c3523,0x0e0d661100dd6610,0x013064303b006801\n"
".quad 0x0048351c00960000,0x00480b081b2c3623,0x00900d0b0048321f,0x00480b05942c3723\n"
".quad 0x2e371a0b0048331f,0x34180b002e341f00,0x10006d3733211584,0x730a3a336501a20a\n"
".quad 0x042c382402187268,0x560301ff32332d02,0x7251189f3b382601,0x96031b752c393364\n"
".quad 0x2c303432024d0a18,0x2c345f007f090024,0x7a04191184333120,0xad0402037a301f03\n"
".quad 0x2f1f05f634332f03,0x67321f0003e13034,0x33332f05f6040200,0x020033331f000033\n"
".quad 0x003336332f05f504,0xf404020033341f00,0x351f000032321f05,0x0f00653514020032\n"
".quad 0x0f0f1d700f1d1883,0x351f0009041c0616,0x0518aa351f01061f,0x1f00cc311208150a\n"
".quad 0x08ed341300049a35,0x2e6c756d84086700,0x3412065765646977,0x090317ad35150483\n"
".quad 0x01003b2c33343404,0x1be4030057010026,0x03005034140c2803,0x040e040390000017\n"
".quad 0x0300190001723611,0x9d371f001601002a,0x2d2b4a0955040100,0x212c352400835d38\n"
".quad 0x2a093a0300830d00,0x04093a0000833534,0x35120083381a0449,0x14010083391f0083\n"
".quad 0x372400820c008336,0x312300820d00202c,0x010083371a008330,0x30312a048504192d\n"
".quad 0x312f008537120085,0x0d0a0e0401008631,0x00212c39343407c3,0x342b101a0300870e\n"
".quad 0xde02008102008739,0x3913008732312a04,0x062606c7331f0087,0x0632010712020aae\n"
".quad 0x00202c382606de0c,0x06e1381506e13611,0x0a3a34c005473313,0x0a0a7d0a3b746572\n"
".quad 0x000000000000000a\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[609];
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
