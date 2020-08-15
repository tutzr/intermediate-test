#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000001670,0x0000004001010002,0x0000000000000900\n"
".quad 0x00000000000008fc,0x0000001e00010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000001e28,0x010102464c457fa2,0x00016e0001000733\n"
".quad 0x28220001006500be,0x1e051e0df500081b,0x4000000038004000,0x732e000001000c00\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f24f2,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x5f69687032325a5f,0x69665f6f745f626c,0x6e72656b5f646c65\n"
".quad 0x9200093331506c65,0x50735f747874635f,0x6c395073c5001e37,0x735f617461645f62\n"
".quad 0x736f3100480f004e,0x31004a6465726168,0x6c61626f6c6701ff,0x722e0074696e692e\n"
".quad 0x6f639f3600eb6c65,0x4d30746e6174736e,0x72676c6c61813200,0x72709f000e687061\n"
".quad 0xcb657079746f746f,0x0a0f2b008d0f2001,0x6e755f5f01f1d502,0x00315f64656d616e\n"
".quad 0x0b02000572747324,0x0033630006321100,0x69ac005937315a5f,0x6e6f697461726574\n"
".quad 0x3614002600006d73,0x7364726f6f8c0012,0x26691f002563695f,0x1f1200266a1f0000\n"
".quad 0x0072391b0300266b,0x1000297865646e4d,0x72353213ff002b69,0x615f657372657665\n"
".quad 0x6b6e61725f726464,0x7472657373615f32,0x28696969634b5069,0x0023002830190600\n"
".quad 0x6c6961664f000f5f,0x61705f06f3840349,0x6c6c7623006d6172,0x6c696923006c6c69\n"
".quad 0x3400e80100076969,0x00050000076c6923,0x0700010f0b037a0f,0x0a0003000000717d\n"
".quad 0x1d00180148200018,0x000001589300180b,0x1300101c000b200d,0x0400186413000845\n"
".quad 0x69130008041305e8,0x081113004a040018,0x30031b00186f1300,0x0078040018751300\n"
".quad 0x000c02e020002004,0x00032da20090091d,0x1001400009810d00,0x035e200018181300\n"
".quad 0x6c110030061d0030,0x32660018071d0018,0x2201081012000000,0x00017b5f00080d80\n"
".quad 0x18a11f0001381200,0x1f040018c71f0400,0x1802132f040018ed,0x1f0400183e1f0300\n"
".quad 0x00188a1f04001866,0x000c00082f049004,0x0c2312000c1a0000,0x000c111700180100\n"
".quad 0x9207720800080a40,0x0400181903001801,0x0010000275001a17,0x000139001021f000\n"
".quad 0xf0b0000101001008,0x0f04003f1b030021,0x00000e9301330020,0x01ec100000000f00\n"
".quad 0x0000001350009400,0x00041d07f0006814,0x00081c0400000190,0x00000d50000001b0\n"
".quad 0x0001010069041e04,0x002c0cffffffff53,0x1300080d13000800,0x1300080f1300080e\n"
".quad 0x1300081113000810,0x4000931313000812,0xfd400008fffffffe,0x035a220044ffffff\n"
".quad 0x0000440355220044,0x4400000810130008,0x43220044034e2200,0x0084033c22004403\n"
".quad 0x0208280000033453,0x100ca82600600513,0x0010201b00340000,0x10101b00100b982a\n"
".quad 0xf82a00100a882a00,0x2a0010701b001009,0x0010601b001008e8,0x10501b001007d82a\n"
".quad 0x381b001006c82a00,0x1b001005b02a0010,0x001004a02a001028,0x1003902a0010181b\n"
".quad 0xdcb8130010081b00,0x10a81300140b1301,0x02682600100a1300,0x103017018c000030\n"
".quad 0x0010081701a40000,0x001001d82601bc00,0x000010881701d400,0xc4000010681701ab\n"
".quad 0x0313008001602601,0xe8031300800404c0,0xa001382a00a00804,0x015b000020281700\n"
".quad 0x2a00100000201817,0x7000e82a007000f0,0xd82a007000e02a00,0x007000c82a007000\n"
".quad 0x1701ab000020b017,0x781b0010000020a0,0x681b0070701b0070,0x481b0070581b0070\n"
".quad 0xdb00002038170070,0x00042f0020281701,0xc2b713f170ff0001,0x5de422020042b2c2\n"
".quad 0xde03280040011000,0xdc634801400503ff,0x01e71a8e400513f1,0x02991de2403102e3\n"
".quad 0x3202d3021de21840,0x1047a400105de218,0x9de222b2b2020042,0x1200080403210020\n"
".quad 0xfc035de4400010dd,0x1800029de24201f7,0x201c072100080200,0x4273007fc7102000\n"
".quad 0x007823ffde032220,0x784c18040078331f,0x0200477500680400,0x70050080c2b2b202\n"
".quad 0x0500780f00800300,0x10007043ffde0340,0x632212007f007fc7,0x501f04007853f1dc\n"
".quad 0x4710007004010078,0x00f022b0423f00fe,0x400500011de4c015,0x000810015de42800\n"
".quad 0x02e2c2828232b784,0x94045c04c0002022,0x84001c042c000000,0xa1145ca302f20008\n"
".quad 0x1111dc2320004000,0x500420e71b0e0000,0x20006844019de480,0x5822b02c00c1b047\n"
".quad 0x04e7041000700600,0x0400200400302814,0xb216003eb7100030,0x0030009de43f0080\n"
".quad 0x002802110058060a,0x22804279003f4710,0xdd20003040019de4,0x220000380f064a01\n"
".quad 0xc000980200a84005,0x22004230428042c7,0x43b10767e1451c02,0xe44800400553f55c\n"
".quad 0x415c85a10080029d,0x2e1de287ffffff31,0x0049449ca5184004,0xa10180009de28443\n"
".quad 0x1de222b230422042,0x4c025d3301700802,0x1de42301a8010178,0x01c884011d300190\n"
".quad 0x000000a00300a805,0x8c01007042303501,0x2025c00020439ca3,0x1ca5310038040080\n"
".quad 0x4720004004008046,0xdce323f240024080,0x41008820a6240038,0x900b00a800e49ca5\n"
".quad 0x1100900302400500,0x9c0122026001bfb7,0x2e00880a053f4bf4,0x0200600201082031\n"
".quad 0x42704720b2a40070,0x0400982203f20200,0x0080e19ca5320070,0x4100780818007806\n"
".quad 0xb213007019249c01,0x00880f01180b0240,0x0002022401000015,0x8005008820b22401\n"
".quad 0x00880c1801000e00,0x22b20034033f0710,0x80021d00880f0090,0x0f06008022022f00\n"
".quad 0x80031de230040218,0x1c008103f7183102,0x301500880f011822,0xa0221e008242b047\n"
".quad 0xf207201301100f01,0x031de222026e0081,0x0c0f00880f01a014,0x01100f0098040080\n"
".quad 0x2217008102072115,0x00190088181f0118,0xb0220280424f0400,0x02072100900c1502\n"
".quad 0x1f0001a0221f0081,0x2b04c0011100881c,0x1700880f03c08042,0xb0221f0081004721\n"
".quad 0x04090088201f0802,0x03c00f03380e03c0,0x281f7403c0241f3e,0x7c03c02c1f7403c0\n"
".quad 0xc0341f7403c0301f,0x1f7403c0381f7403,0x03c0401f7403c03c,0x481f7403c0441f74\n"
".quad 0x1200881c132203c0,0x700a40b71000881d,0x5820029de4223282,0x023000885ce3220a\n"
".quad 0x9ca50c430040a29c,0x50121b01100088c1,0x400a6033f2dc4318,0x800100c0e0a15c85\n"
".quad 0xa61ca52282c26100,0x41110f01080f0028,0x020041dce3320080,0x9ca520400be0e011\n"
".quad 0xa01de79432000864,0xffffe0001de7920b,0x00080f0010e44003,0x69687000626cb306\n"
".quad 0xff15ce0078746b00,0x72656c70756f6300,0x2064696f7600632e,0x4315e228190315e4\n"
".quad 0x0b0015e4202c2a20,0x292a203f15e60500,0x08152c0117350e28,0xcb2e000840130018\n"
".quad 0x0b1f000108003001,0x2f11800b13040040,0x131c000b0040037a,0x508813000040021f\n"
".quad 0x6c02130031f81312,0x090315b000082a00,0xd080130040701c01,0x9c0c161000242a12\n"
".quad 0xa413040040771f10,0xdc0f004084170040,0x0d00d401af210110,0x581f00a928130040\n"
".quad 0xbd2100c804040080,0x081a00c00e00dc01,0x193f0500400f0188,0x00004a0016de0001\n"
".quad 0x0400c004003908c0,0x6212000810130038,0x80c01301840d00c0,0x0511dc0f12f80414\n"
".quad 0x2a17320c01d43213,0x156c031217100d40,0x01092f0028401a2b,0x00081ac022030284\n"
".quad 0x005006024000612f,0x0000000000000000,0x0000006001010001,0x0000000000000cd0\n"
".quad 0x0000004000000ccb,0x0000001e00060004,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000005b8b,0x0000001000000048,0x6c69706d6f632d2d\n"
".quad 0x2020796c6e6f2d65,0x0000000000000000,0x762e1cf000010a13,0x36206e6f69737265\n"
".quad 0x677261742e0a342e,0x30335f6d73207465,0x7365726464612e0a,0x3620657a69735f73\n"
".quad 0x7478650bf0002e34,0x6e75662e206e7265,0x617261702e282063,0x12203233622e206d\n"
".quad 0x767465725f13f300,0x315a5f2029306c61,0x5f6c656e72656b37,0x6f69746172657469\n"
".quad 0x950014333150736e,0x280a735f74787463,0x003434362f00420a,0x305f6f00315f1113\n"
".quad 0x141a008f3b0a290a,0x64726f6f8c004736,0x691e005a63695f73,0x8f040f00340f008f\n"
".quad 0x3b0f007d0a2c2800,0x1f2d00ca311f1900,0x00ca6a1f2000ca6a,0x6b1f4700ca6a1f27\n"
".quad 0x2700ca6b1f2000ca,0xef391b3800ca6b1f,0x005e7865646e4d01,0x1500390f00cf691e\n"
".quad 0x1f00400f0200d40f,0x40321f2c0040311f,0x401d0159331f2c00,0x652004a265723532\n"
".quad 0x61725f05fb048d5f,0x657373615f326b6e,0x6969634b50697472,0x003632332f015669\n"
".quad 0x34362f0001530f15,0x007a2c312f1c003d,0x331f29003d321f28,0x29003d341f29003d\n"
".quad 0x3d361f29003d351f,0x1930023e371f2900,0x0a11023a0f005d30,0x390f1802360f0032\n"
".quad 0x2400722c312f0200,0x03740f250039321f,0x61664c00295f1301,0x0e001b0704946c69\n"
".quad 0xd60c0400220f00ed,0x0044321f00220e00,0x34120e0022331f0e,0x626f6c6725f000ca\n"
".quad 0x67696c612e206c61,0x2038622e2031206e,0x656d616e6e755f5f,0x205d39365b315f64\n"
".quad 0x202c3831317b203d,0x353031202c313131,0x3233202c30500005,0x3430230005000013\n"
".quad 0x3853001c39110018,0x3123000d3839202c,0x3215001b02003836,0x4b01002a31130041\n"
".quad 0x00183714001d0200,0x2730312800503110,0x000d002230342f00,0x2300733939240044\n"
".quad 0x12008602000a3032,0x130004341000af35,0x0f0a008d0f00bb34,0x2b0100da08030032\n"
".quad 0x38371f0066371400,0x7d30202c315f0100,0x7274732462040165,0xb7373028015d345b\n"
".quad 0x5b31430a00330f00,0x0b017a0f01923731,0x37312501b1393924,0x34220140381801a8\n"
".quad 0x3e0a00700f002636,0x00340f006f345b32,0x0300d8335b33330c,0x0a01f0002e000090\n"
".quad 0x656c62697369762e,0x757972746e652e20,0x5f6968703202f203,0x69665f6f745f626c\n"
".quad 0xf30c06ea5f646c65,0x73c6001e37502206,0x7461645f626c3950,0x36753f0368735f61\n"
".quad 0x0f039a0e2c004c34,0x400054311f360054,0x0a7b0a290a3208f3,0x72702e206765722e\n"
".quad 0x3e353c7025206465,0x254604330000123b,0x3666a60012373c72,0x39333c6466252034\n"
".quad 0x6472400013000025,0x6c0a0a420013383c,0x0018752e2200a564,0x3301535b202c314f\n"
".quad 0x5d321f005d3b5d2d,0x1f00005d311f3500,0x5d3205f335005d33,0x6e2e707465730a3b\n"
".quad 0x7025093436732e65,0x3b3008f4011b2c31,0x726220317025400a,0x3b325f3042422061\n"
".quad 0x210083766f6d0a0a,0x630a3b6303052c34,0x001c040324617476,0x303b342800443511\n"
".quad 0x31311f0030361200,0x3619003137110200,0x0f05a22c38280031,0x1300373911020037\n"
".quad 0x3259021201003738,0x3f0100483238202c,0x3b7b090a0a3b5705,0x0103706d65744302\n"
".quad 0x4808001e67657230,0x0a3b3053000b0106,0x3436625201777473,0x5d302b3100165b09\n"
".quad 0x00330a3b353d0076,0x333114020033311f,0x0b0106f23b372900,0x3233230033321800\n"
".quad 0x321f003332130033,0x020065331f000065,0x0033391f00653314,0x3414020033341f00\n"
".quad 0x630a3b3031e80033,0x20696e752e6c6c61,0x280a202c5207450a,0x0009202c2200f80a\n"
".quad 0x0009321400093114,0x290a343000093314,0x310a0a7d09410367,0x2c3223025b3a1b02\n"
".quad 0x5b3215025b020319,0x313122025b341a02,0x120201f5321f022c,0x01e631312a004731\n"
".quad 0x343122090260331f,0x351f0034331a0034,0x003a3631220f0263,0x202c334b02653518\n"
".quad 0x420265371f004b38,0x312f1f026632312f,0x0267331f1e026734,0x1f20026836312f1f\n"
".quad 0x0268341c42026837,0x02680205242c3323,0x0268361b02683315,0x01fa331f02343812\n"
".quad 0xe9383129045e0203,0x1209026830322f01,0x003430322a053e32,0xb532120f0268321f\n"
".quad 0x344a026832322800,0x34322f054638202c,0x1f0268391f430268,0x341f1e026831322f\n"
".quad 0x026833322f1f0268,0x2f42026834322f1f,0x01430a3f01783a36,0x281400be070e8703\n"
".quad 0x14ec0a202c3f0e9a,0x39290a2700e20712,0x35722563018d0008,0x302b3300525b202c\n"
".quad 0x000271091600dd5d,0x2e6469746e6804ed,0x633c079e00028778,0x202c384400176174\n"
".quad 0x6c2e646171002c25,0x2c31230018732e6f,0x387223003901004a,0x5400206567200862\n"
".quad 0x1100252c34702509,0x3203a0341503a035,0x6f742c031c0a3b38,0x3b332f085302031f\n"
".quad 0x322f05a702050020,0x2b031a0e4d01a33b,0x1d01d50f031a3233,0x0102b70f0f15f70f\n"
".quad 0x01de391f0001de0f,0x116a1fae01110f02,0xc3011230312f2601,0x12311f2701126b1f\n"
".quad 0x2f1e064d391f8401,0x33331f0000333031,0x78311f064e040200,0x570f1416aa0f1d01\n"
".quad 0x321f01018f0f1306,0x04df646c2c02018f,0x3205075b202c3741,0x0021040e1036352b\n"
".quad 0x2a00203315057302,0x08b0381f08315d34,0x0d43321908e4020a,0x00123739290b2d00\n"
".quad 0x3900123919117600,0x0b010308ab202c36,0x8f0f111100001107,0xc2301f01c2041805\n"
".quad 0x34312f025a040201,0x1f20025c0f2008a9,0x0033361f1f025c33,0xa904020033341f00\n"
".quad 0x1f00003335312f08,0x0033351402003335,0x33361f000033321f,0x770f003336140200\n"
".quad 0x14020033371f010e,0x1b0328381f003337,0x1c097c0f1217910f,0x1400093514000904\n"
".quad 0x010349371f000936,0x6c756d830306fc0f,0x52089a656469772e,0x83002d202c303364\n"
".quad 0x732e6464610a3b38,0x0103672c31241150,0x1251030060010026,0x5d313332035b3112\n"
".quad 0x2c32230017030033,0x00013064303b001d,0x32332f03c10a3b2d,0x03c13032290b03c1\n"
".quad 0x3630322fa303360f,0x2f9d0336371feb03,0x0e9c011303363132,0x342403360b002d00\n"
".quad 0x360800260102dc2c,0x3634332a06910303,0x331f033c2c342603,0x0c0328351f010328\n"
".quad 0x28321fb10328321f,0x1f9e0328361feb03,0x000e850113032833,0x2c372403280b002d\n"
".quad 0x03280800260102dc,0x032837332a02f003,0x28351f032e2c3626,0x1e0c0328381f0103\n"
".quad 0xb9000019020a1134,0x39341fa603390f1b,0x9e033935322fea03,0x0c8701130339361f\n"
".quad 0x0e0003390a002d00,0x0800260102ed031f,0x30342a0d12030339,0x1f033f2c38260339\n"
".quad 0x3931342f00033937,0x00050339371f0c03,0x371fa603390f1f9e,0x1f9e0cd00feb0339\n"
".quad 0x02217f00130cd032,0x2c332403390b002d,0x03390800260102ed,0x0339331a03393913\n"
".quad 0x391f034005132c00,0x0b033a341f01033a,0x5d0004033a30332f,0x331fa5033a351f0d\n"
".quad 0x033a31332feb0cd4,0x0113033a32332f9d,0x033a0b002d00098d,0x00260102ed2c3624\n"
".quad 0x342b063c03100a09,0x03422c3227033b36,0xc10f01033d31312f,0x05033d33332f0c13\n"
".quad 0xa6033d36202c344f,0x3d34332feb13470f,0x0113033d351f9e03,0x033d0b002d000991\n"
".quad 0x00260102ed2c3924,0x342b02e203033d09,0x03442c3428033d39,0x3d30352f0110150f\n"
".quad 0x4f05033d361f0c03,0x1fa6033d37202c37,0x9e134e0feb033d36,0x351112033d38332f\n"
".quad 0x033d0a002d000995,0x260102ed2c323534,0x2b102703033d0900,0x442c3628033d3235\n"
".quad 0x33352f01102a0f03,0x04033d391f0c033d,0xa6033d381f0d7d00,0x30342fea033d391f\n"
".quad 0x033d31342f9d033d,0x168b341d09980113,0x260102ed2c353534,0x2b097c03033d0900\n"
".quad 0x442c3828033d3535,0x36352f01102e0f03,0x033d32342f0b033d,0x033d39202c334f05\n"
".quad 0x1feb033d32342fa5,0x033d341f9e033d33,0x0b002d0009980113,0x0102ed2c3824033d\n"
".quad 0x061f03033d090026,0x2c30281cff38352b,0x352f0110310f0344,0x033d351f0c033d39\n"
".quad 0xa6203c0f32230005,0xde0feb033e35342f,0x12033e37342f9e19,0x0a002d0009993611\n"
".quad 0x02ee2c313634033e,0x3213033e08002601,0x3227203d361c1032,0x011032321f03452c\n"
".quad 0x38342f0c2032361f,0x3e0f35120105033e,0x1feb033e381fa603,0x3e30352f9d033e39\n"
".quad 0x30352d099a011303,0x0102ee2c3424033e,0x0cbb03033e090026,0x071cdd002045361b\n"
".quad 0x361f0110330f0345,0x033e31352f0c2048,0x3e32312f0d860004,0xea033e31352fa503\n"
".quad 0x5a0f9e033e32352f,0x351d099b36111320,0x02ee2c373634205a,0x0303033e09002601\n"
".quad 0x2f2b01205b361b03,0x1f0110340f034506,0x3e34352f0c205e36,0x205f0f2a29000503\n"
".quad 0x0feb033e34352fa6,0x033e36352f9e205f,0x205f351d099b0113,0x260102ee2c303734\n"
".quad 0x1b103503033e0900,0x4507200700206037,0x63371f0110350f03,0x05033e37352f0c20\n"
".quad 0x2fa620640f3eb800,0x20640feb033e3735,0x3711132064351f9e,0x37342064351d099b\n"
".quad 0x0900260102ee2c33,0x65371b0ffb03033e,0x0f0345062d800120,0x0c2067371f011036\n"
".quad 0x0d8800052067361f,0x68361fa62068311f,0x2f9e2068361feb20,0x099b0113033e3236\n"
".quad 0x2c3637342068361d,0x2d3c0900260102ee,0x012068371b064103,0x31332f0345052d69\n"
".quad 0x2f0c20680f01033e,0x3c590005033e3336,0x3e33362fa620690f,0x362f9e20690feb03\n"
".quad 0x1d099b0113033e35,0xee2c393734206936,0x03033e0900260102,0xae012069371b02e3\n"
".quad 0x0110360f03450630,0x36362f0c2069381f,0x6a0f36fe0005033e,0xeb033e36362fa620\n"
".quad 0x206a361f9e206a0f,0x206a0d3f8a381213,0x260102ee2c323834,0x1b103603033e0900\n"
".quad 0x450630dc01206a38,0x6a381f0110360f03,0x0005206a361f0c20,0xa6033e38312f0d88\n"
".quad 0x206b371feb206b0f,0x0113033e31372f9e,0x3834206b371d099b,0x0900260102ee2c35\n"
".quad 0x6b381b097f03033e,0x0f03450630c20120,0x3f065c3814011036,0x372501033e312b36\n"
".quad 0x11033e381a002032,0x2f3e033f0f4fa633,0x6d371f52033f3337,0xf60a2f15e70f2020\n"
".quad 0x34372f263fc00f52,0x371d08a80113024b,0x01fb2c3838341f79,0x330000f601002601\n"
".quad 0x2e5d382202440102,0x38c046803b382202,0x7d0a3b7465720a3a,0x00000000000a0a0a\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[720];
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