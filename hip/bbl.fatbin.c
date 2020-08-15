#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
asm(
".section __nv_relfatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x00000000000019a0,0x0000004001010002,0x0000000000000b80\n"
".quad 0x0000000000000b7a,0x0000001e00010007,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x0000000000003830,0x010102464c457fa2,0x00016e0001000733\n"
".quad 0xf0220001006500be,0x1e051e0df5000834,0x4000000038004000,0x732e000001000d00\n"
".quad 0x0062617472747368,0x00086d792700082e,0x78646e68735f1ef2,0x666e692e766e2e00\n"
".quad 0x2e747865742e006f,0x5f6c626236315a5f,0x656b5f3073736170,0x093331506c656e72\n"
".quad 0x747874635f19f000,0x726f6f633850735f,0x626c3950735f7364,0x50735f617461645f\n"
".quad 0x696f6c6c6f633531,0x735f2500505f7364,0x736f3e00550f005b,0x3e00576465726168\n"
".quad 0x6e6174736e6f6391,0x6c6701fe000e3374,0x696e692e6c61626f,0x01206c65722e0074\n"
".quad 0x005a301f3900740f,0x6172676c6c61813f,0x6f72709f000e6870,0x021a657079746f74\n"
".quad 0x02660f38009a0f20,0x5f766e5f5f04f0fa,0x325f636974617473,0x00695f31315f5f34\n"
".quad 0x695f3170706305fd,0x3263313532655f69,0x029270626c5f3234,0x616e6e755f5f01f1\n"
".quad 0x732400315f64656d,0x11000b0200057274,0x1000063311000632,0xac00ac371301bd34\n"
".quad 0x6f69746172657469,0x0401e30100c0736e,0x63692c00ca020012,0x1f000026691f0025\n"
".quad 0x00266b1f1200266a,0x646e4d0072391b03,0x0051691200297865,0x6f6c6e5f736301f7\n"
".quad 0x7366666f5f6c6163,0xd0004c0201727465,0x6d696e696d5f7363,0x27016169645f6d75\n"
".quad 0x644b1bf100246563,0x5a5f0064505f3253,0x7372657665723532,0x725f726464615f65\n"
".quad 0x7373615f326b6e61,0x69634b5069747265,0x4f00135f00230001,0xf39e03fe6c696166\n"
".quad 0x006d617261705f04,0x006c6c696c6c7623,0x234100d76c696923,0x00050200126c6c69\n"
".quad 0x340f000501001303,0x7e7d0600010f0b04,0x00180b0003000000,0x18091d0018017c20\n"
".quad 0x800d0000018a6600,0x1100081e20220018,0x1000300c1d0030b6,0x17000c20430030c6\n"
".quad 0xd213000853130010,0x0513001006130018,0x92040018d7130008,0x0018dd1300200400\n"
".quad 0x1300080400100313,0x130018001b0018e3,0x200048111b0018e9,0x00a80a1d00240388\n"
".quad 0x0a810d000003e2a3,0x00180300d8014000,0x30061d0030041820,0x18071d0018261100\n"
".quad 0x1012000000326700,0xef5f000708120150,0x2f00018012000001,0x183b1f0300180215\n"
".quad 0x1f040018611f0400,0x0018b21f04001887,0xfd1f040018d31f04,0x001803252f040018\n"
".quad 0x300f00082f045303,0x1801000c23042201,0x0c5810000c111200,0x40b301d0080a2100\n"
".quad 0x0400201903002001,0x0000185501ac0c17,0x10000239001021f0,0x0010080001390010\n"
".quad 0x030021f0a0000101,0x002e240f04003f1b,0x135000980001e001,0x0061015014000000\n"
".quad 0x1002700000160000,0x00041d0ff0007c18,0x00101c0400000218,0x0000035800000238\n"
".quad 0x000007b800000370,0x0001010075041e04,0x00340fffffffff53,0x1300081013000800\n"
".quad 0x1300081213000811,0x1300081413000813,0x0400081613000815,0x50fffffffe4102e8\n"
".quad 0x23004cffffff3001,0x004c0413004c0414,0x004c0412004c0413,0x040322004c040822\n"
".quad 0x22004c03fc22004c,0x02d9e913009403f1,0x0020000330076026,0x0001600000105813\n"
".quad 0x0a1300105013000b,0x1113035938130010,0x000040049826031c,0x00001003a8260068\n"
".quad 0x00001002f8260080,0xb0000010b8170098,0x00c8000010901700,0x1700640000106017\n"
".quad 0xf02600f800001010,0xe82600c800001001,0xe02600140000b001,0xd82a00100000b001\n"
".quad 0x00d001c82a00d001,0x170014000020b017,0x781b0004000020a0,0x681b0070701b0070\n"
".quad 0x481b0070581b0070,0xf600002038170070,0x0010000020281704,0x7000f82a0070081b\n"
".quad 0xe82a007000f02a00,0x007000d82a007000,0x17043b000020c817,0x902a0010000020b0\n"
".quad 0x1b0070881b007000,0x1b0070681b007078,0x0000204817007058,0x062f0020381704e6\n"
".quad 0xffffffffff000100,0xffffffffffffffff,0xffffffffffffffff,0xffffffffffffffff\n"
".quad 0x8042b72bf1c6ffff,0x005de42202b2c232,0xffde032800400110,0x105c024801400503\n"
".quad 0x109c430bfffffea0,0xf1dc636800400090,0x0001e71a8e400513,0xd11de24000000180\n"
".quad 0x422042004718b220,0x5000105de2220200,0x14000804bc021de2,0x000804032100109d\n"
".quad 0x035de4400010dd12,0x22019de221211ffc,0x42b2c2c2b2b718b2,0x07210010dde22200\n"
".quad 0xffde03105000281c,0x33f1dc634f008823,0xc0021de240010078,0x0227007e47100068\n"
".quad 0x9d1b0070030080b2,0x0078040080030070,0x27007fb711007004,0x0078431300782202\n"
".quad 0x0078601b00785313,0x8f00700300e0c411,0x22b2b20200421047,0xc71000e80c1500f0\n"
".quad 0xde0322204273007f,0x0078731f007863ff,0x00e8040078c81804,0x2202b23f00fe4710\n"
".quad 0x05f00078041500f0,0x2800400500011de4,0x22e2c2828232b2b7,0x2004001010015de4\n"
".quad 0x000094041c04c000,0x00088400dc042c00,0x4000a1041ca302f2,0x00001101dc232006\n"
".quad 0x47804122d0e71b0e,0x019de4400140b200,0x500c005804007840,0x002010049de44100\n"
".quad 0xb710002003002804,0x003822b2b03400ff,0x0300305d1f003005,0x704200474200280c\n"
".quad 0x0848110030050040,0x0100384401dd3f00,0x40040050021de431,0x82c3f282c287c000\n"
".quad 0x002060021de423f2,0x0cc027db821c0230,0x4800400573f25c43,0xa384b00028821ca5\n"
".quad 0xe32011c00020419c,0x1ca52092410008dc,0xf2e2c2c78480292e,0x00533001c002e2c3\n"
".quad 0x0000fd518201c000,0x8540012021e71a8e,0xdc2366002881401c,0x02400018c0000801\n"
".quad 0x0047a3006820219c,0xdde4223042b2b2a2,0x00b030015d3300c0,0xf1dc433000082010\n"
".quad 0xa53000b048142620,0x02c005f00038111c,0xf70c000000c0221c,0x8522323240423043\n"
".quad 0x1c03c04000b810dc,0x115c034851255f21,0x080d041c30000815,0x410048f25c433100\n"
".quad 0x9e3128af11319e04,0xe042e2a002104132,0x30311e0423f2e042,0x0058119ca5184000\n"
".quad 0x50305e129ca5c840,0x40006860219c02c8,0xe4300018e0111ca5,0xa52806f1245f029d\n"
".quad 0x478400000241431c,0xa52202e043f042e0,0x00b803002060131c,0x84142883439ca530\n"
".quad 0x2080139ca54100d0,0xa54002a002dd2100,0xb3f784002081459c,0x00e82240423042b2\n"
".quad 0x060028a0159ca540,0x00480321423000f0,0x1c30004840079d31,0x049de2320038a143\n"
".quad 0x3200429220a00300,0x5201d8129ca52232,0x2000b0e1e79c02c0,0x409ca54000384144\n"
".quad 0x53f7dc43410030c1,0x006000e79c1001d0,0xc0002001419ca5c0,0x22220232b2d3f237\n"
".quad 0x60000028e1439ca5,0x9c0113f100200001,0x1c012018000020a6,0x9c01200400005906\n"
".quad 0x9e01201c00001840,0x5de2203400004046,0x4212371806f02721,0xa61e0122323042b0\n"
".quad 0x859e012030000018,0xa1141c02b1003058,0x88009de408000006,0xff31e15c8505f002\n"
".quad 0x0a01119ca687ffff,0x1021e21c8514000c,0x522042620047a100,0x84d003521ca52262\n"
".quad 0x1800000590011de2,0xe24027a719a31c01,0x9ca64000684c025d,0xa29c01c000382113\n"
".quad 0xa19c01207e000031,0x22625227c2002039,0x41131ca622226252,0x1400001982a00020\n"
".quad 0x41002031a31c0120,0x1c31001861119ca6,0x19839c3300183163,0x5710001881100018\n"
".quad 0x9c0122621272003f,0x5200200200f039a2,0x0100500014201c26,0x8800a0de04420038\n"
".quad 0x04300038a1112000,0x223710330258331c,0x430038851c210040,0x1012004031831c01\n"
".quad 0x1300405161210040,0x40c1151c3100401e,0x22004001339c3a00,0x0088a31100405165\n"
".quad 0x56004018201c2642,0x3200400c000051a1,0x4035140080e1129c,0x0122324042029200\n"
".quad 0x004800004029629c,0x0b01131ca6201872,0xa0050040291000c0,0x18ffc03205180005\n"
".quad 0x2227500007f20110,0x9c01228042028202,0x1ca6200cd0020141,0x00f8621100780105\n"
".quad 0x01a10450031de431,0xe4200cd00480a19c,0x2202c8281401909d,0x651c014105000207\n"
".quad 0x700700680801b050,0x0220395004400205,0x020806f1276f249c,0x070800000121145c\n"
".quad 0x0222e2e042c04292,0xa59c11001821041c,0x004d21dc2308922c,0x70ba1404701b0ec0\n"
".quad 0xf6c00021e794b204,0x9204481de74003ff,0x4003ffffe0001de7,0xf11e00080f0010e4\n"
".quad 0x6b00736300626c03,0x2e6c626200747874,0x6f765c320b630063,0xa628192ea8206469\n"
".quad 0x2ea8202c2a20442e,0x19022eaa05000c00,0x292a203f2eab0900,0x082dbc01173408b0\n"
".quad 0x1a2e000840130018,0x0b1f000108003002,0x2f00385a13040040,0x2adc000b00400434\n"
".quad 0x059013000040021f,0x000700001d581329,0x081800232dd70e16,0x0040701c01080300\n"
".quad 0xa000242a0029e813,0x4084002f008f0b2e,0xa0172f6b0c130400,0x210000400b1f0040\n"
".quad 0x1300400d00d401fe,0x040080601f0040ac,0x00dc020c2100c804,0x481f2f2b0300800e\n"
".quad 0x2b10014e220c0040,0x2a0040581301400c,0x1300380400c00270,0x0d00c03012000810\n"
".quad 0x1b30680cc82a0184,0xa41f000104007800,0x01002ae823040040,0x130101400f01f107\n"
".quad 0x802a2af40c021432,0x2b2de8031200712c,0xc4013e2f00284020,0x6a2f37e080130302\n"
".quad 0x0000005006028000,0x0000000000000000,0x0000006001010001,0x0000000000000d80\n"
".quad 0x0000004000000d7c,0x0000001e00060004,0x0000000000000000,0x0000000000002011\n"
".quad 0x0000000000000000,0x00000000000033af,0x0000001000000048,0x6c69706d6f632d2d\n"
".quad 0x2020796c6e6f2d65,0x0000000000000000,0x762e1cf000010a13,0x36206e6f69737265\n"
".quad 0x677261742e0a342e,0x30335f6d73207465,0x7365726464612e0a,0x3620657a69735f73\n"
".quad 0x7478650bf0002e34,0x6e75662e206e7265,0x617261702e282063,0x12203233622e206d\n"
".quad 0x767465725f13f300,0x315a5f2029306c61,0x5f6c656e72656b37,0x6f69746172657469\n"
".quad 0x950014333150736e,0x280a735f74787463,0x003434362f00420a,0x305f6f00315f1113\n"
".quad 0x141a008f3b0a290a,0x64726f6f8c004736,0x691e005a63695f73,0x8f040f00340f008f\n"
".quad 0x3b0f007d0a2c2800,0x1f2d00ca311f1900,0x00ca6a1f2000ca6a,0x6b1f4700ca6a1f27\n"
".quad 0x2700ca6b1f2000ca,0xef391b3800ca6b1f,0x005e7865646e4d01,0x1500390f00cf691e\n"
".quad 0x1f00400f0200d40f,0x40321f2c0040311f,0xf31f0223331f2c00,0x636f6c6e5f736303\n"
".quad 0x657366666f5f6c61,0x50732e006b385074,0x450e0b002f0f021e,0x02140f1000360f01\n"
".quad 0x696d5f736304f728,0x69645f6d756d696e,0x005965636e617473,0x64505f3253644b7e\n"
".quad 0xcd0e1300380f0213,0x3f311f21003f0f00,0x0f2b003f321f2b00,0x65723532401e020f\n"
".quad 0xfb069c5f652006b1,0x5f326b6e61725f05,0x5069747265737361,0x2f0365696969634b\n"
".quad 0x01500f1500363233,0x2c312f1c003d0f02,0x29003d321f28007a,0x3d341f29003d331f\n"
".quad 0x1f29003d351f2900,0x023e371f29003d36,0x61664c002d5f1300,0x0e001b07035a6c69\n"
".quad 0xd20c0400220f01ed,0x0044321f00220e01,0x34120e0022331f0e,0x736e6f633ef400ca\n"
".quad 0x6e67696c612e2074,0x5f2038622e203820,0x746174735f766e5f,0x315f5f34325f6369\n"
".quad 0x70635f6c62625f31,0x32655f69695f3170,0x6c5f323432633135,0x5d323137375b7062\n"
".quad 0x61626f6c672e0a3b,0xf00048311300486c,0x64656d616e6e750f,0x3d205d33385b315f\n"
".quad 0x31202c3831317b20,0x05353031202c3131,0x2c3233202c309200,0x3031200004383920\n"
".quad 0x163110001a000009,0x0535130009371000,0x173010001b341400,0x3431200044301000\n"
".quad 0x3d00000f30140005,0x000d002230342f00,0x6300173939200044,0x000a303231202c36\n"
".quad 0x1000900000683914,0x14009c3413000434,0x230052311500b339,0x0600360f002d3030\n"
".quad 0x301400b305006b02,0x6e0f0009361200ce,0x0a00053830241000,0x3530250078060130\n"
".quad 0x580e0027321300dd,0xa27d30202c315f00,0x5b72747324620401,0x011337302d019a35\n"
".quad 0x365b31310a00380f,0x36342201bb090039,0x32220a003a0f00c2,0x351f00eb02020d5b\n"
".quad 0x05002e33130c002e,0x34140a002e0f0151,0x00030120391f0096,0x69762e0a01f1003d\n"
".quad 0x652e20656c626973,0xe200078e7972746e,0x5f30737361706202,0x06500708500c0847\n"
".quad 0x61645f626c3904f1,0x63353150735f6174,0x460886696f6c6c6f,0x753f03ff735f6f66\n"
".quad 0x043e0e3900593436,0x0061311f4300610f,0xe1004d0061321f4d,0x0c095b2e0a7b3107\n"
".quad 0x65649009700204d9,0xba38385b30746f70,0x3b05246765723204,0x104c14000f505325\n"
".quad 0x252064657270a500,0x318600223e393c70,0x12343c7372252036,0x3c72252032338500\n"
".quad 0x0046661000123333,0x593e32363c646669,0x37363c647200f300,0x766f6d0a0a0a3b3e\n"
".quad 0x009f2c1b006c752e,0xc7617476630a3b62,0x00962c1300250400,0x0018020143646c22\n"
".quad 0x6d5b1f02da647220,0x1f00006b5d1f4002,0x006b311f42006b32,0x321f42006b331f01\n"
".quad 0x42006b341f01006b,0x65730a3b5d3305f4,0x36732e656e2e7074,0x01b02c3170250934\n"
".quad 0x7025400a3b3003f7,0x4242206172622031,0x722002103b325f30,0x070304d100051864\n"
".quad 0x12001d0504f00202,0x00333b3529004736,0x0034311f00333712,0x34371a0034381203\n"
".quad 0x3a0f07a82c392800,0x13003a3032220200,0x386902e901003a39,0x10004c333033202c\n"
".quad 0x090a0a3b5706a732,0x706d65744303137b,0x001e67657230010e,0x3053000b01089808\n"
".quad 0x6252019074730a3b,0x2b3200165b093436,0x0a3b363d00785d30,0x15020034311f0034\n"
".quad 0x09443b3829003431,0x2300343218000b01,0x0034321300343233,0x66331f000066381f\n"
".quad 0x322f006633140200,0x0034341f00003430,0x0164000034341502,0x696e752e6c6c6198\n"
".quad 0x0a202c5209980a20,0x09202c2200fb0a28,0x0932140009311400,0x0a34300009331400\n"
".quad 0x0a0a7d0941044229,0x322402693a1b023e,0x321502690203ae2c,0x32220269341a0269\n"
".quad 0x0301fc321f023632,0x01ea321a00b63312,0x35322209026a341f,0x361f0034341a0034\n"
".quad 0x18003a371210026a,0x0b026a3910026a36,0x2f42026a381f004c,0x35322f1f026a3332\n"
".quad 0x20026a391f1e026a,0x6a381f20026a371f,0x3324026a341c4202,0x3315026a0205ad2c\n"
".quad 0x3912026a361b026a,0x120201fc331f0236,0x01ea393229046633,0x331209026a31332f\n"
".quad 0x1f003431332a02e6,0x3a3433220f026a33,0x0a2b00026a331800,0x35332f055530332a\n"
".quad 0x026b30332f42026b,0x2f1e026b32332f1f,0x34332f1f026c3031,0x026c35332f1f026c\n"
".quad 0x2c3424026c361c42,0x6c3415026c0207ae,0x363322026c381a02,0x020301fe341f0238\n"
".quad 0x1f01eb36332a0468,0x003439120a026c38,0x6c30342f00343819,0x342907f534120f02\n"
".quad 0x0a026c3110026c30,0x43026c32342f0081,0x6c391f20026c371f,0x2f1f026c311f1f02\n"
".quad 0x32342f1f026c3134,0x08ba3a382f42026c,0x1455030145311a3f,0x3f1468281400bf07\n"
".quad 0xe307121a8b0a202c,0x8f000ac8290a2700,0x53030b9d72252101,0x1700df5d302b3300\n"
".quad 0x6e6905ad00027609,0x00028d782e646974,0x00186174633d0358,0x6172002e0407ca00\n"
".quad 0x0019732e6f6c2e64,0x33003c02004d2c14,0x6567200aea353172,0x2c35702509550023\n"
".quad 0x351503ac32110028,0x6d0a3b33314f03ac,0x32332b02e60e4e01,0x600f1d019f0f02e6\n"
".quad 0xa80f0102820f0f1b,0x120f0301a70f0001,0x1f2601126a1faf01,0x01126b1fc4011233\n"
".quad 0x860f850112341f26,0x1f000032331f1f08,0x1f06190402003233,0x141c120f1c017634\n"
".quad 0x00018d0f1306210f,0x07ec0102018d351f,0x0b110307ef6f742c,0x00001c0b00463411\n"
".quad 0x382b2000240101d6,0x772e6c756d830048,0x3464210557656469,0x3b38202c35b30536\n"
".quad 0x0037732e6464610a,0x002501003e2c3624,0x52030fc204005a01,0x716523106c361400\n"
".quad 0x092c04102503092d,0x14005f070580361a,0x005a323322002932,0x48005a361205fd02\n"
".quad 0xde01005c32332b31,0xdc0200222c372305,0x01190f005c371a05,0xdc33121048351303\n"
".quad 0xdb2c312200160400,0x1f40103c32372f12,0x03f3351f1f08fb32,0x03ee0f091dca0f1e\n"
".quad 0x0802026238312f14,0x1214282c32230128,0xac02141a0301a637,0x32353301ac391201\n"
".quad 0xba0200170102395d,0x636003b739312311,0x0214986e722e7476,0x2a025164662101c6\n"
".quad 0x0191331301913032,0x813414001838342a,0x3224008138342d00,0x1e5d342b3e008131\n"
".quad 0x5d3821001e321500,0x152200001e02017e,0x39017b3410001801,0x2c332300bd346466\n"
".quad 0x00bd0e0442010059,0x005033322f032c01,0x35190052382b2202,0x01008d2c34230052\n"
".quad 0x03320100520e0462,0x312203005234322f,0x0300df3611005336,0x323100d9371215dd\n"
".quad 0x13012f081b08312b,0x001834322a014735,0x0300690f01473614,0x1500663718006603\n"
".quad 0x355d30323f006638,0x37381800f0040200,0x37381f0037391600,0xa4391a00d5040400\n"
".quad 0x93301f00bc371300,0x1f000034351f7403,0x0034321502003432,0x37352f1f0c8f331f\n"
".quad 0x0f12207a0f1d0678,0x041635322f260677,0x763017024e38140e,0x7730312302000303\n"
".quad 0x021a0801e8381003,0x38362a021b313125,0x3310001a3215001a,0x0325616d66330034\n"
".quad 0x003f2c3324001e01,0x7b0f003301006003,0x600b007b34150000,0x3637230060351500\n"
".quad 0x2c36240034040702,0x0a3b550042010022,0x802c18001d627573,0x3714000072361f00\n"
".quad 0x033c0600700a0072,0x73391900d034342e,0x0345090007371200,0xb1301a012b303226\n"
".quad 0x01002202049c0100,0x2c322700b109010e,0x0600533132290061,0x29009432352d0164\n"
".quad 0x000e341200563332,0x01883419007a321a,0x472c3328007a3719,0x2c3324084a341900\n"
".quad 0x05086336352a078a,0x34363f10e10a0019,0x340054091920112c,0x32343800432c3536\n"
".quad 0x680a1f22010e5934,0x8f3b12002c361300,0x0101323a3231300f,0x1b6d38732e30209f\n"
".quad 0x066334362102b403,0x05be36312005be08,0x393b31733c167802,0x39351f0039321500\n"
".quad 0x63731b007c010300,0x07363222020d0201,0x0303790001a60d00,0x37322d029e040074\n"
".quad 0x361f007b3315007b,0x732c079c0103007b,0x1f03150e01005f33,0x005f381701d20500\n"
".quad 0x364b011504002804,0x151e01029f34362b,0x630d022500002302,0x270000262c332700\n"
".quad 0x700f000130642b0a,0x381b007034170000,0x0f00232c35240070,0x00262c3627020070\n"
".quad 0x000063331f009c03,0x0423351b00633716,0x630f00230313a300,0x0200262c39280200\n"
".quad 0x34260063361e0006,0x006334362a006330,0xf80f00230213ae01,0x00260613a4000101\n"
".quad 0x006339332f01f802,0x32372b0063331600,0x0f00232c34240063,0x00262c3527020063\n"
".quad 0x000063321f007003,0x6330382b00633616,0x630f00232c372400,0x0200262c38270200\n"
".quad 0x00006335342f0088,0x0101ef0b00633917,0x0174000023020bcf,0x26050bd80100630c\n"
".quad 0x0002c20f01550300,0xef391b0063323526,0x0f0023020a8b0101,0x00262c3427020063\n"
".quad 0x006331352f002502,0x30372b0063351500,0x002302098f0101ef,0x262c37270200630f\n"
".quad 0x0026341d008f0300,0x64306803b52c3824,0x1400034538303034,0x0b03594646333b00\n"
".quad 0x00006e2c39240041,0x01004132312a0041,0xc7361400d80e0063,0x31363700d4351a02\n"
".quad 0x0e8930362f00552c,0x5d332901d9351300,0x0258030b2702001d,0x01001f342d2b344f\n"
".quad 0x9f2d2b333203a003,0x1742301f05c50703,0x0800250000970109,0x3533390548001708\n"
".quad 0x6d0923bc00001336,0x041b0a8b30332f1e,0x04021065301f1065,0x1f0a8a38322f0a8b\n"
".quad 0x322f1e10fe31362f,0x3337322f1e10ff36,0x04020033341f0000,0x1f0117b1321f1717\n"
".quad 0x0033351302003335,0x0032361f011cba0f,0x33301f11c9361402,0x14020033371f0000\n"
".quad 0x1b0b53321f003337,0x1c17e90f12298d0f,0x1400093514000904,0x01148b371f000936\n"
".quad 0x11ab0b031745311f,0x0a002d000e473611,0x03612c33363411ac,0x7204011e01002601\n"
".quad 0x311a0e443336230d,0x2f00072c36240034,0x12130d0209433237,0xe43318095c343625\n"
".quad 0x010960031d13020e,0x1511b4746c2311b4,0x1611b53911001a38,0xc00976321411b538\n"
".quad 0x0a3b7465720a3a33,0x000000000a0a0a7d\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[822];
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
