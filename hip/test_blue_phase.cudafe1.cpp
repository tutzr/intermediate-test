# 1 "test_blue_phase.c"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

# 1
# 61 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
#pragma GCC diagnostic push
# 64
#pragma GCC diagnostic ignored "-Wunused-function"
# 66 "/usr/local/cuda-10.1/include/device_types.h" 3
#if 0
# 66
enum cudaRoundMode { 
# 68
cudaRoundNearest, 
# 69
cudaRoundZero, 
# 70
cudaRoundPosInf, 
# 71
cudaRoundMinInf
# 72
}; 
#endif
# 98 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 98
struct char1 { 
# 100
signed char x; 
# 101
}; 
#endif
# 103 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 103
struct uchar1 { 
# 105
unsigned char x; 
# 106
}; 
#endif
# 109 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 109
struct __attribute((aligned(2))) char2 { 
# 111
signed char x, y; 
# 112
}; 
#endif
# 114 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 114
struct __attribute((aligned(2))) uchar2 { 
# 116
unsigned char x, y; 
# 117
}; 
#endif
# 119 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 119
struct char3 { 
# 121
signed char x, y, z; 
# 122
}; 
#endif
# 124 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 124
struct uchar3 { 
# 126
unsigned char x, y, z; 
# 127
}; 
#endif
# 129 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 129
struct __attribute((aligned(4))) char4 { 
# 131
signed char x, y, z, w; 
# 132
}; 
#endif
# 134 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 134
struct __attribute((aligned(4))) uchar4 { 
# 136
unsigned char x, y, z, w; 
# 137
}; 
#endif
# 139 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 139
struct short1 { 
# 141
short x; 
# 142
}; 
#endif
# 144 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 144
struct ushort1 { 
# 146
unsigned short x; 
# 147
}; 
#endif
# 149 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 149
struct __attribute((aligned(4))) short2 { 
# 151
short x, y; 
# 152
}; 
#endif
# 154 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 154
struct __attribute((aligned(4))) ushort2 { 
# 156
unsigned short x, y; 
# 157
}; 
#endif
# 159 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 159
struct short3 { 
# 161
short x, y, z; 
# 162
}; 
#endif
# 164 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 164
struct ushort3 { 
# 166
unsigned short x, y, z; 
# 167
}; 
#endif
# 169 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 169
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 170 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 170
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 172 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 172
struct int1 { 
# 174
int x; 
# 175
}; 
#endif
# 177 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 177
struct uint1 { 
# 179
unsigned x; 
# 180
}; 
#endif
# 182 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 182
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 183 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 183
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 185 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 185
struct int3 { 
# 187
int x, y, z; 
# 188
}; 
#endif
# 190 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 190
struct uint3 { 
# 192
unsigned x, y, z; 
# 193
}; 
#endif
# 195 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 195
struct __attribute((aligned(16))) int4 { 
# 197
int x, y, z, w; 
# 198
}; 
#endif
# 200 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 200
struct __attribute((aligned(16))) uint4 { 
# 202
unsigned x, y, z, w; 
# 203
}; 
#endif
# 205 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 205
struct long1 { 
# 207
long x; 
# 208
}; 
#endif
# 210 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 210
struct ulong1 { 
# 212
unsigned long x; 
# 213
}; 
#endif
# 220 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 220
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 222
long x, y; 
# 223
}; 
#endif
# 225 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 225
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 227
unsigned long x, y; 
# 228
}; 
#endif
# 232 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 232
struct long3 { 
# 234
long x, y, z; 
# 235
}; 
#endif
# 237 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 237
struct ulong3 { 
# 239
unsigned long x, y, z; 
# 240
}; 
#endif
# 242 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 242
struct __attribute((aligned(16))) long4 { 
# 244
long x, y, z, w; 
# 245
}; 
#endif
# 247 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 247
struct __attribute((aligned(16))) ulong4 { 
# 249
unsigned long x, y, z, w; 
# 250
}; 
#endif
# 252 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 252
struct float1 { 
# 254
float x; 
# 255
}; 
#endif
# 274 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 274
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 279 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 279
struct float3 { 
# 281
float x, y, z; 
# 282
}; 
#endif
# 284 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 284
struct __attribute((aligned(16))) float4 { 
# 286
float x, y, z, w; 
# 287
}; 
#endif
# 289 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 289
struct longlong1 { 
# 291
long long x; 
# 292
}; 
#endif
# 294 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 294
struct ulonglong1 { 
# 296
unsigned long long x; 
# 297
}; 
#endif
# 299 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 299
struct __attribute((aligned(16))) longlong2 { 
# 301
long long x, y; 
# 302
}; 
#endif
# 304 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 304
struct __attribute((aligned(16))) ulonglong2 { 
# 306
unsigned long long x, y; 
# 307
}; 
#endif
# 309 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 309
struct longlong3 { 
# 311
long long x, y, z; 
# 312
}; 
#endif
# 314 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 314
struct ulonglong3 { 
# 316
unsigned long long x, y, z; 
# 317
}; 
#endif
# 319 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 319
struct __attribute((aligned(16))) longlong4 { 
# 321
long long x, y, z, w; 
# 322
}; 
#endif
# 324 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 324
struct __attribute((aligned(16))) ulonglong4 { 
# 326
unsigned long long x, y, z, w; 
# 327
}; 
#endif
# 329 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 329
struct double1 { 
# 331
double x; 
# 332
}; 
#endif
# 334 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 334
struct __attribute((aligned(16))) double2 { 
# 336
double x, y; 
# 337
}; 
#endif
# 339 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 339
struct double3 { 
# 341
double x, y, z; 
# 342
}; 
#endif
# 344 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 344
struct __attribute((aligned(16))) double4 { 
# 346
double x, y, z, w; 
# 347
}; 
#endif
# 361 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef char1 
# 361
char1; 
#endif
# 362 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uchar1 
# 362
uchar1; 
#endif
# 363 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef char2 
# 363
char2; 
#endif
# 364 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uchar2 
# 364
uchar2; 
#endif
# 365 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef char3 
# 365
char3; 
#endif
# 366 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uchar3 
# 366
uchar3; 
#endif
# 367 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef char4 
# 367
char4; 
#endif
# 368 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uchar4 
# 368
uchar4; 
#endif
# 369 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef short1 
# 369
short1; 
#endif
# 370 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ushort1 
# 370
ushort1; 
#endif
# 371 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef short2 
# 371
short2; 
#endif
# 372 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ushort2 
# 372
ushort2; 
#endif
# 373 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef short3 
# 373
short3; 
#endif
# 374 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ushort3 
# 374
ushort3; 
#endif
# 375 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef short4 
# 375
short4; 
#endif
# 376 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ushort4 
# 376
ushort4; 
#endif
# 377 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef int1 
# 377
int1; 
#endif
# 378 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uint1 
# 378
uint1; 
#endif
# 379 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef int2 
# 379
int2; 
#endif
# 380 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uint2 
# 380
uint2; 
#endif
# 381 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef int3 
# 381
int3; 
#endif
# 382 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uint3 
# 382
uint3; 
#endif
# 383 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef int4 
# 383
int4; 
#endif
# 384 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef uint4 
# 384
uint4; 
#endif
# 385 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef long1 
# 385
long1; 
#endif
# 386 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulong1 
# 386
ulong1; 
#endif
# 387 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef long2 
# 387
long2; 
#endif
# 388 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulong2 
# 388
ulong2; 
#endif
# 389 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef long3 
# 389
long3; 
#endif
# 390 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulong3 
# 390
ulong3; 
#endif
# 391 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef long4 
# 391
long4; 
#endif
# 392 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulong4 
# 392
ulong4; 
#endif
# 393 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef float1 
# 393
float1; 
#endif
# 394 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef float2 
# 394
float2; 
#endif
# 395 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef float3 
# 395
float3; 
#endif
# 396 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef float4 
# 396
float4; 
#endif
# 397 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef longlong1 
# 397
longlong1; 
#endif
# 398 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulonglong1 
# 398
ulonglong1; 
#endif
# 399 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef longlong2 
# 399
longlong2; 
#endif
# 400 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulonglong2 
# 400
ulonglong2; 
#endif
# 401 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef longlong3 
# 401
longlong3; 
#endif
# 402 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulonglong3 
# 402
ulonglong3; 
#endif
# 403 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef longlong4 
# 403
longlong4; 
#endif
# 404 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef ulonglong4 
# 404
ulonglong4; 
#endif
# 405 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef double1 
# 405
double1; 
#endif
# 406 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef double2 
# 406
double2; 
#endif
# 407 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef double3 
# 407
double3; 
#endif
# 408 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef double4 
# 408
double4; 
#endif
# 416 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
# 416
struct dim3 { 
# 418
unsigned x, y, z; 
# 428
}; 
#endif
# 430 "/usr/local/cuda-10.1/include/vector_types.h" 3
#if 0
typedef dim3 
# 430
dim3; 
#endif
# 147 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3
typedef long ptrdiff_t; 
# 212 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h" 3
typedef unsigned long size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
# 189 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 189
enum cudaError { 
# 196
cudaSuccess, 
# 202
cudaErrorInvalidValue, 
# 208
cudaErrorMemoryAllocation, 
# 214
cudaErrorInitializationError, 
# 221
cudaErrorCudartUnloading, 
# 228
cudaErrorProfilerDisabled, 
# 236
cudaErrorProfilerNotInitialized, 
# 243
cudaErrorProfilerAlreadyStarted, 
# 250
cudaErrorProfilerAlreadyStopped, 
# 259 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorInvalidConfiguration, 
# 265
cudaErrorInvalidPitchValue = 12, 
# 271
cudaErrorInvalidSymbol, 
# 279
cudaErrorInvalidHostPointer = 16, 
# 287
cudaErrorInvalidDevicePointer, 
# 293
cudaErrorInvalidTexture, 
# 299
cudaErrorInvalidTextureBinding, 
# 306
cudaErrorInvalidChannelDescriptor, 
# 312
cudaErrorInvalidMemcpyDirection, 
# 322 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorAddressOfConstant, 
# 331 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorTextureFetchFailed, 
# 340 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorTextureNotBound, 
# 349 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorSynchronizationError, 
# 355
cudaErrorInvalidFilterSetting, 
# 361
cudaErrorInvalidNormSetting, 
# 369
cudaErrorMixedDeviceExecution, 
# 377
cudaErrorNotYetImplemented = 31, 
# 386 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorMemoryValueTooLarge, 
# 393
cudaErrorInsufficientDriver = 35, 
# 399
cudaErrorInvalidSurface = 37, 
# 405
cudaErrorDuplicateVariableName = 43, 
# 411
cudaErrorDuplicateTextureName, 
# 417
cudaErrorDuplicateSurfaceName, 
# 427 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorDevicesUnavailable, 
# 440 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorIncompatibleDriverContext = 49, 
# 446
cudaErrorMissingConfiguration = 52, 
# 455 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorPriorLaunchFailure, 
# 462
cudaErrorLaunchMaxDepthExceeded = 65, 
# 470
cudaErrorLaunchFileScopedTex, 
# 478
cudaErrorLaunchFileScopedSurf, 
# 493 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorSyncDepthExceeded, 
# 505 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorLaunchPendingCountExceeded, 
# 511
cudaErrorInvalidDeviceFunction = 98, 
# 517
cudaErrorNoDevice = 100, 
# 523
cudaErrorInvalidDevice, 
# 528
cudaErrorStartupFailure = 127, 
# 533
cudaErrorInvalidKernelImage = 200, 
# 543 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorDeviceUninitilialized, 
# 548
cudaErrorMapBufferObjectFailed = 205, 
# 553
cudaErrorUnmapBufferObjectFailed, 
# 559
cudaErrorArrayIsMapped, 
# 564
cudaErrorAlreadyMapped, 
# 572
cudaErrorNoKernelImageForDevice, 
# 577
cudaErrorAlreadyAcquired, 
# 582
cudaErrorNotMapped, 
# 588
cudaErrorNotMappedAsArray, 
# 594
cudaErrorNotMappedAsPointer, 
# 600
cudaErrorECCUncorrectable, 
# 606
cudaErrorUnsupportedLimit, 
# 612
cudaErrorDeviceAlreadyInUse, 
# 618
cudaErrorPeerAccessUnsupported, 
# 624
cudaErrorInvalidPtx, 
# 629
cudaErrorInvalidGraphicsContext, 
# 635
cudaErrorNvlinkUncorrectable, 
# 642
cudaErrorJitCompilerNotFound, 
# 647
cudaErrorInvalidSource = 300, 
# 652
cudaErrorFileNotFound, 
# 657
cudaErrorSharedObjectSymbolNotFound, 
# 662
cudaErrorSharedObjectInitFailed, 
# 667
cudaErrorOperatingSystem, 
# 674
cudaErrorInvalidResourceHandle = 400, 
# 680
cudaErrorIllegalState, 
# 686
cudaErrorSymbolNotFound = 500, 
# 694
cudaErrorNotReady = 600, 
# 702
cudaErrorIllegalAddress = 700, 
# 711 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorLaunchOutOfResources, 
# 722 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorLaunchTimeout, 
# 728
cudaErrorLaunchIncompatibleTexturing, 
# 735
cudaErrorPeerAccessAlreadyEnabled, 
# 742
cudaErrorPeerAccessNotEnabled, 
# 755 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorSetOnActiveProcess = 708, 
# 762
cudaErrorContextIsDestroyed, 
# 769
cudaErrorAssert, 
# 776
cudaErrorTooManyPeers, 
# 782
cudaErrorHostMemoryAlreadyRegistered, 
# 788
cudaErrorHostMemoryNotRegistered, 
# 797 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorHardwareStackError, 
# 805
cudaErrorIllegalInstruction, 
# 814 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorMisalignedAddress, 
# 825 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorInvalidAddressSpace, 
# 833
cudaErrorInvalidPc, 
# 844 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorLaunchFailure, 
# 853 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorCooperativeLaunchTooLarge, 
# 858
cudaErrorNotPermitted = 800, 
# 864
cudaErrorNotSupported, 
# 873 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorSystemNotReady, 
# 880
cudaErrorSystemDriverMismatch, 
# 889 "/usr/local/cuda-10.1/include/driver_types.h" 3
cudaErrorCompatNotSupportedOnDevice, 
# 894
cudaErrorStreamCaptureUnsupported = 900, 
# 900
cudaErrorStreamCaptureInvalidated, 
# 906
cudaErrorStreamCaptureMerge, 
# 911
cudaErrorStreamCaptureUnmatched, 
# 917
cudaErrorStreamCaptureUnjoined, 
# 924
cudaErrorStreamCaptureIsolation, 
# 930
cudaErrorStreamCaptureImplicit, 
# 936
cudaErrorCapturedEvent, 
# 943
cudaErrorStreamCaptureWrongThread, 
# 948
cudaErrorUnknown = 999, 
# 956
cudaErrorApiFailureBase = 10000
# 957
}; 
#endif
# 962 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 962
enum cudaChannelFormatKind { 
# 964
cudaChannelFormatKindSigned, 
# 965
cudaChannelFormatKindUnsigned, 
# 966
cudaChannelFormatKindFloat, 
# 967
cudaChannelFormatKindNone
# 968
}; 
#endif
# 973 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 973
struct cudaChannelFormatDesc { 
# 975
int x; 
# 976
int y; 
# 977
int z; 
# 978
int w; 
# 979
cudaChannelFormatKind f; 
# 980
}; 
#endif
# 985 "/usr/local/cuda-10.1/include/driver_types.h" 3
typedef struct cudaArray *cudaArray_t; 
# 990
typedef const cudaArray *cudaArray_const_t; 
# 992
struct cudaArray; 
# 997
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 1002
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 1004
struct cudaMipmappedArray; 
# 1009
#if 0
# 1009
enum cudaMemoryType { 
# 1011
cudaMemoryTypeUnregistered, 
# 1012
cudaMemoryTypeHost, 
# 1013
cudaMemoryTypeDevice, 
# 1014
cudaMemoryTypeManaged
# 1015
}; 
#endif
# 1020 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1020
enum cudaMemcpyKind { 
# 1022
cudaMemcpyHostToHost, 
# 1023
cudaMemcpyHostToDevice, 
# 1024
cudaMemcpyDeviceToHost, 
# 1025
cudaMemcpyDeviceToDevice, 
# 1026
cudaMemcpyDefault
# 1027
}; 
#endif
# 1034 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1034
struct cudaPitchedPtr { 
# 1036
void *ptr; 
# 1037
size_t pitch; 
# 1038
size_t xsize; 
# 1039
size_t ysize; 
# 1040
}; 
#endif
# 1047 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1047
struct cudaExtent { 
# 1049
size_t width; 
# 1050
size_t height; 
# 1051
size_t depth; 
# 1052
}; 
#endif
# 1059 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1059
struct cudaPos { 
# 1061
size_t x; 
# 1062
size_t y; 
# 1063
size_t z; 
# 1064
}; 
#endif
# 1069 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1069
struct cudaMemcpy3DParms { 
# 1071
cudaArray_t srcArray; 
# 1072
cudaPos srcPos; 
# 1073
cudaPitchedPtr srcPtr; 
# 1075
cudaArray_t dstArray; 
# 1076
cudaPos dstPos; 
# 1077
cudaPitchedPtr dstPtr; 
# 1079
cudaExtent extent; 
# 1080
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1081
}; 
#endif
# 1086 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1086
struct cudaMemcpy3DPeerParms { 
# 1088
cudaArray_t srcArray; 
# 1089
cudaPos srcPos; 
# 1090
cudaPitchedPtr srcPtr; 
# 1091
int srcDevice; 
# 1093
cudaArray_t dstArray; 
# 1094
cudaPos dstPos; 
# 1095
cudaPitchedPtr dstPtr; 
# 1096
int dstDevice; 
# 1098
cudaExtent extent; 
# 1099
}; 
#endif
# 1104 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1104
struct cudaMemsetParams { 
# 1105
void *dst; 
# 1106
size_t pitch; 
# 1107
unsigned value; 
# 1108
unsigned elementSize; 
# 1109
size_t width; 
# 1110
size_t height; 
# 1111
}; 
#endif
# 1123 "/usr/local/cuda-10.1/include/driver_types.h" 3
typedef void (*cudaHostFn_t)(void * userData); 
# 1128
#if 0
# 1128
struct cudaHostNodeParams { 
# 1129
cudaHostFn_t fn; 
# 1130
void *userData; 
# 1131
}; 
#endif
# 1136 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1136
enum cudaStreamCaptureStatus { 
# 1137
cudaStreamCaptureStatusNone, 
# 1138
cudaStreamCaptureStatusActive, 
# 1139
cudaStreamCaptureStatusInvalidated
# 1141
}; 
#endif
# 1147 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1147
enum cudaStreamCaptureMode { 
# 1148
cudaStreamCaptureModeGlobal, 
# 1149
cudaStreamCaptureModeThreadLocal, 
# 1150
cudaStreamCaptureModeRelaxed
# 1151
}; 
#endif
# 1156 "/usr/local/cuda-10.1/include/driver_types.h" 3
struct cudaGraphicsResource; 
# 1161
#if 0
# 1161
enum cudaGraphicsRegisterFlags { 
# 1163
cudaGraphicsRegisterFlagsNone, 
# 1164
cudaGraphicsRegisterFlagsReadOnly, 
# 1165
cudaGraphicsRegisterFlagsWriteDiscard, 
# 1166
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 1167
cudaGraphicsRegisterFlagsTextureGather = 8
# 1168
}; 
#endif
# 1173 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1173
enum cudaGraphicsMapFlags { 
# 1175
cudaGraphicsMapFlagsNone, 
# 1176
cudaGraphicsMapFlagsReadOnly, 
# 1177
cudaGraphicsMapFlagsWriteDiscard
# 1178
}; 
#endif
# 1183 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1183
enum cudaGraphicsCubeFace { 
# 1185
cudaGraphicsCubeFacePositiveX, 
# 1186
cudaGraphicsCubeFaceNegativeX, 
# 1187
cudaGraphicsCubeFacePositiveY, 
# 1188
cudaGraphicsCubeFaceNegativeY, 
# 1189
cudaGraphicsCubeFacePositiveZ, 
# 1190
cudaGraphicsCubeFaceNegativeZ
# 1191
}; 
#endif
# 1196 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1196
enum cudaResourceType { 
# 1198
cudaResourceTypeArray, 
# 1199
cudaResourceTypeMipmappedArray, 
# 1200
cudaResourceTypeLinear, 
# 1201
cudaResourceTypePitch2D
# 1202
}; 
#endif
# 1207 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1207
enum cudaResourceViewFormat { 
# 1209
cudaResViewFormatNone, 
# 1210
cudaResViewFormatUnsignedChar1, 
# 1211
cudaResViewFormatUnsignedChar2, 
# 1212
cudaResViewFormatUnsignedChar4, 
# 1213
cudaResViewFormatSignedChar1, 
# 1214
cudaResViewFormatSignedChar2, 
# 1215
cudaResViewFormatSignedChar4, 
# 1216
cudaResViewFormatUnsignedShort1, 
# 1217
cudaResViewFormatUnsignedShort2, 
# 1218
cudaResViewFormatUnsignedShort4, 
# 1219
cudaResViewFormatSignedShort1, 
# 1220
cudaResViewFormatSignedShort2, 
# 1221
cudaResViewFormatSignedShort4, 
# 1222
cudaResViewFormatUnsignedInt1, 
# 1223
cudaResViewFormatUnsignedInt2, 
# 1224
cudaResViewFormatUnsignedInt4, 
# 1225
cudaResViewFormatSignedInt1, 
# 1226
cudaResViewFormatSignedInt2, 
# 1227
cudaResViewFormatSignedInt4, 
# 1228
cudaResViewFormatHalf1, 
# 1229
cudaResViewFormatHalf2, 
# 1230
cudaResViewFormatHalf4, 
# 1231
cudaResViewFormatFloat1, 
# 1232
cudaResViewFormatFloat2, 
# 1233
cudaResViewFormatFloat4, 
# 1234
cudaResViewFormatUnsignedBlockCompressed1, 
# 1235
cudaResViewFormatUnsignedBlockCompressed2, 
# 1236
cudaResViewFormatUnsignedBlockCompressed3, 
# 1237
cudaResViewFormatUnsignedBlockCompressed4, 
# 1238
cudaResViewFormatSignedBlockCompressed4, 
# 1239
cudaResViewFormatUnsignedBlockCompressed5, 
# 1240
cudaResViewFormatSignedBlockCompressed5, 
# 1241
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1242
cudaResViewFormatSignedBlockCompressed6H, 
# 1243
cudaResViewFormatUnsignedBlockCompressed7
# 1244
}; 
#endif
# 1249 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1249
struct cudaResourceDesc { 
# 1250
cudaResourceType resType; 
# 1252
union { 
# 1253
struct { 
# 1254
cudaArray_t array; 
# 1255
} array; 
# 1256
struct { 
# 1257
cudaMipmappedArray_t mipmap; 
# 1258
} mipmap; 
# 1259
struct { 
# 1260
void *devPtr; 
# 1261
cudaChannelFormatDesc desc; 
# 1262
size_t sizeInBytes; 
# 1263
} linear; 
# 1264
struct { 
# 1265
void *devPtr; 
# 1266
cudaChannelFormatDesc desc; 
# 1267
size_t width; 
# 1268
size_t height; 
# 1269
size_t pitchInBytes; 
# 1270
} pitch2D; 
# 1271
} res; 
# 1272
}; 
#endif
# 1277 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1277
struct cudaResourceViewDesc { 
# 1279
cudaResourceViewFormat format; 
# 1280
size_t width; 
# 1281
size_t height; 
# 1282
size_t depth; 
# 1283
unsigned firstMipmapLevel; 
# 1284
unsigned lastMipmapLevel; 
# 1285
unsigned firstLayer; 
# 1286
unsigned lastLayer; 
# 1287
}; 
#endif
# 1292 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1292
struct cudaPointerAttributes { 
# 1302 "/usr/local/cuda-10.1/include/driver_types.h" 3
__attribute((deprecated)) cudaMemoryType memoryType; 
# 1308
cudaMemoryType type; 
# 1319 "/usr/local/cuda-10.1/include/driver_types.h" 3
int device; 
# 1325
void *devicePointer; 
# 1334 "/usr/local/cuda-10.1/include/driver_types.h" 3
void *hostPointer; 
# 1341
__attribute((deprecated)) int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1342
}; 
#endif
# 1347 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1347
struct cudaFuncAttributes { 
# 1354
size_t sharedSizeBytes; 
# 1360
size_t constSizeBytes; 
# 1365
size_t localSizeBytes; 
# 1372
int maxThreadsPerBlock; 
# 1377
int numRegs; 
# 1384
int ptxVersion; 
# 1391
int binaryVersion; 
# 1397
int cacheModeCA; 
# 1404
int maxDynamicSharedSizeBytes; 
# 1413 "/usr/local/cuda-10.1/include/driver_types.h" 3
int preferredShmemCarveout; 
# 1414
}; 
#endif
# 1419 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1419
enum cudaFuncAttribute { 
# 1421
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1422
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1423
cudaFuncAttributeMax
# 1424
}; 
#endif
# 1429 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1429
enum cudaFuncCache { 
# 1431
cudaFuncCachePreferNone, 
# 1432
cudaFuncCachePreferShared, 
# 1433
cudaFuncCachePreferL1, 
# 1434
cudaFuncCachePreferEqual
# 1435
}; 
#endif
# 1441 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1441
enum cudaSharedMemConfig { 
# 1443
cudaSharedMemBankSizeDefault, 
# 1444
cudaSharedMemBankSizeFourByte, 
# 1445
cudaSharedMemBankSizeEightByte
# 1446
}; 
#endif
# 1451 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1451
enum cudaSharedCarveout { 
# 1452
cudaSharedmemCarveoutDefault = (-1), 
# 1453
cudaSharedmemCarveoutMaxShared = 100, 
# 1454
cudaSharedmemCarveoutMaxL1 = 0
# 1455
}; 
#endif
# 1460 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1460
enum cudaComputeMode { 
# 1462
cudaComputeModeDefault, 
# 1463
cudaComputeModeExclusive, 
# 1464
cudaComputeModeProhibited, 
# 1465
cudaComputeModeExclusiveProcess
# 1466
}; 
#endif
# 1471 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1471
enum cudaLimit { 
# 1473
cudaLimitStackSize, 
# 1474
cudaLimitPrintfFifoSize, 
# 1475
cudaLimitMallocHeapSize, 
# 1476
cudaLimitDevRuntimeSyncDepth, 
# 1477
cudaLimitDevRuntimePendingLaunchCount, 
# 1478
cudaLimitMaxL2FetchGranularity
# 1479
}; 
#endif
# 1484 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1484
enum cudaMemoryAdvise { 
# 1486
cudaMemAdviseSetReadMostly = 1, 
# 1487
cudaMemAdviseUnsetReadMostly, 
# 1488
cudaMemAdviseSetPreferredLocation, 
# 1489
cudaMemAdviseUnsetPreferredLocation, 
# 1490
cudaMemAdviseSetAccessedBy, 
# 1491
cudaMemAdviseUnsetAccessedBy
# 1492
}; 
#endif
# 1497 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1497
enum cudaMemRangeAttribute { 
# 1499
cudaMemRangeAttributeReadMostly = 1, 
# 1500
cudaMemRangeAttributePreferredLocation, 
# 1501
cudaMemRangeAttributeAccessedBy, 
# 1502
cudaMemRangeAttributeLastPrefetchLocation
# 1503
}; 
#endif
# 1508 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1508
enum cudaOutputMode { 
# 1510
cudaKeyValuePair, 
# 1511
cudaCSV
# 1512
}; 
#endif
# 1517 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1517
enum cudaDeviceAttr { 
# 1519
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1520
cudaDevAttrMaxBlockDimX, 
# 1521
cudaDevAttrMaxBlockDimY, 
# 1522
cudaDevAttrMaxBlockDimZ, 
# 1523
cudaDevAttrMaxGridDimX, 
# 1524
cudaDevAttrMaxGridDimY, 
# 1525
cudaDevAttrMaxGridDimZ, 
# 1526
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1527
cudaDevAttrTotalConstantMemory, 
# 1528
cudaDevAttrWarpSize, 
# 1529
cudaDevAttrMaxPitch, 
# 1530
cudaDevAttrMaxRegistersPerBlock, 
# 1531
cudaDevAttrClockRate, 
# 1532
cudaDevAttrTextureAlignment, 
# 1533
cudaDevAttrGpuOverlap, 
# 1534
cudaDevAttrMultiProcessorCount, 
# 1535
cudaDevAttrKernelExecTimeout, 
# 1536
cudaDevAttrIntegrated, 
# 1537
cudaDevAttrCanMapHostMemory, 
# 1538
cudaDevAttrComputeMode, 
# 1539
cudaDevAttrMaxTexture1DWidth, 
# 1540
cudaDevAttrMaxTexture2DWidth, 
# 1541
cudaDevAttrMaxTexture2DHeight, 
# 1542
cudaDevAttrMaxTexture3DWidth, 
# 1543
cudaDevAttrMaxTexture3DHeight, 
# 1544
cudaDevAttrMaxTexture3DDepth, 
# 1545
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1546
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1547
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1548
cudaDevAttrSurfaceAlignment, 
# 1549
cudaDevAttrConcurrentKernels, 
# 1550
cudaDevAttrEccEnabled, 
# 1551
cudaDevAttrPciBusId, 
# 1552
cudaDevAttrPciDeviceId, 
# 1553
cudaDevAttrTccDriver, 
# 1554
cudaDevAttrMemoryClockRate, 
# 1555
cudaDevAttrGlobalMemoryBusWidth, 
# 1556
cudaDevAttrL2CacheSize, 
# 1557
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1558
cudaDevAttrAsyncEngineCount, 
# 1559
cudaDevAttrUnifiedAddressing, 
# 1560
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1561
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1562
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1563
cudaDevAttrMaxTexture2DGatherHeight, 
# 1564
cudaDevAttrMaxTexture3DWidthAlt, 
# 1565
cudaDevAttrMaxTexture3DHeightAlt, 
# 1566
cudaDevAttrMaxTexture3DDepthAlt, 
# 1567
cudaDevAttrPciDomainId, 
# 1568
cudaDevAttrTexturePitchAlignment, 
# 1569
cudaDevAttrMaxTextureCubemapWidth, 
# 1570
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1571
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1572
cudaDevAttrMaxSurface1DWidth, 
# 1573
cudaDevAttrMaxSurface2DWidth, 
# 1574
cudaDevAttrMaxSurface2DHeight, 
# 1575
cudaDevAttrMaxSurface3DWidth, 
# 1576
cudaDevAttrMaxSurface3DHeight, 
# 1577
cudaDevAttrMaxSurface3DDepth, 
# 1578
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1579
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1580
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1581
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1582
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1583
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1584
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1585
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1586
cudaDevAttrMaxTexture1DLinearWidth, 
# 1587
cudaDevAttrMaxTexture2DLinearWidth, 
# 1588
cudaDevAttrMaxTexture2DLinearHeight, 
# 1589
cudaDevAttrMaxTexture2DLinearPitch, 
# 1590
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1591
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1592
cudaDevAttrComputeCapabilityMajor, 
# 1593
cudaDevAttrComputeCapabilityMinor, 
# 1594
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1595
cudaDevAttrStreamPrioritiesSupported, 
# 1596
cudaDevAttrGlobalL1CacheSupported, 
# 1597
cudaDevAttrLocalL1CacheSupported, 
# 1598
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1599
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1600
cudaDevAttrManagedMemory, 
# 1601
cudaDevAttrIsMultiGpuBoard, 
# 1602
cudaDevAttrMultiGpuBoardGroupID, 
# 1603
cudaDevAttrHostNativeAtomicSupported, 
# 1604
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1605
cudaDevAttrPageableMemoryAccess, 
# 1606
cudaDevAttrConcurrentManagedAccess, 
# 1607
cudaDevAttrComputePreemptionSupported, 
# 1608
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1609
cudaDevAttrReserved92, 
# 1610
cudaDevAttrReserved93, 
# 1611
cudaDevAttrReserved94, 
# 1612
cudaDevAttrCooperativeLaunch, 
# 1613
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1614
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
# 1615
cudaDevAttrCanFlushRemoteWrites, 
# 1616
cudaDevAttrHostRegisterSupported, 
# 1617
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
# 1618
cudaDevAttrDirectManagedMemAccessFromHost
# 1619
}; 
#endif
# 1625 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1625
enum cudaDeviceP2PAttr { 
# 1626
cudaDevP2PAttrPerformanceRank = 1, 
# 1627
cudaDevP2PAttrAccessSupported, 
# 1628
cudaDevP2PAttrNativeAtomicSupported, 
# 1629
cudaDevP2PAttrCudaArrayAccessSupported
# 1630
}; 
#endif
# 1637 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1637
struct CUuuid_st { 
# 1638
char bytes[16]; 
# 1639
}; 
#endif
# 1640 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef CUuuid_st 
# 1640
CUuuid; 
#endif
# 1642 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef CUuuid_st 
# 1642
cudaUUID_t; 
#endif
# 1647 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1647
struct cudaDeviceProp { 
# 1649
char name[256]; 
# 1650
cudaUUID_t uuid; 
# 1651
char luid[8]; 
# 1652
unsigned luidDeviceNodeMask; 
# 1653
size_t totalGlobalMem; 
# 1654
size_t sharedMemPerBlock; 
# 1655
int regsPerBlock; 
# 1656
int warpSize; 
# 1657
size_t memPitch; 
# 1658
int maxThreadsPerBlock; 
# 1659
int maxThreadsDim[3]; 
# 1660
int maxGridSize[3]; 
# 1661
int clockRate; 
# 1662
size_t totalConstMem; 
# 1663
int major; 
# 1664
int minor; 
# 1665
size_t textureAlignment; 
# 1666
size_t texturePitchAlignment; 
# 1667
int deviceOverlap; 
# 1668
int multiProcessorCount; 
# 1669
int kernelExecTimeoutEnabled; 
# 1670
int integrated; 
# 1671
int canMapHostMemory; 
# 1672
int computeMode; 
# 1673
int maxTexture1D; 
# 1674
int maxTexture1DMipmap; 
# 1675
int maxTexture1DLinear; 
# 1676
int maxTexture2D[2]; 
# 1677
int maxTexture2DMipmap[2]; 
# 1678
int maxTexture2DLinear[3]; 
# 1679
int maxTexture2DGather[2]; 
# 1680
int maxTexture3D[3]; 
# 1681
int maxTexture3DAlt[3]; 
# 1682
int maxTextureCubemap; 
# 1683
int maxTexture1DLayered[2]; 
# 1684
int maxTexture2DLayered[3]; 
# 1685
int maxTextureCubemapLayered[2]; 
# 1686
int maxSurface1D; 
# 1687
int maxSurface2D[2]; 
# 1688
int maxSurface3D[3]; 
# 1689
int maxSurface1DLayered[2]; 
# 1690
int maxSurface2DLayered[3]; 
# 1691
int maxSurfaceCubemap; 
# 1692
int maxSurfaceCubemapLayered[2]; 
# 1693
size_t surfaceAlignment; 
# 1694
int concurrentKernels; 
# 1695
int ECCEnabled; 
# 1696
int pciBusID; 
# 1697
int pciDeviceID; 
# 1698
int pciDomainID; 
# 1699
int tccDriver; 
# 1700
int asyncEngineCount; 
# 1701
int unifiedAddressing; 
# 1702
int memoryClockRate; 
# 1703
int memoryBusWidth; 
# 1704
int l2CacheSize; 
# 1705
int maxThreadsPerMultiProcessor; 
# 1706
int streamPrioritiesSupported; 
# 1707
int globalL1CacheSupported; 
# 1708
int localL1CacheSupported; 
# 1709
size_t sharedMemPerMultiprocessor; 
# 1710
int regsPerMultiprocessor; 
# 1711
int managedMemory; 
# 1712
int isMultiGpuBoard; 
# 1713
int multiGpuBoardGroupID; 
# 1714
int hostNativeAtomicSupported; 
# 1715
int singleToDoublePrecisionPerfRatio; 
# 1716
int pageableMemoryAccess; 
# 1717
int concurrentManagedAccess; 
# 1718
int computePreemptionSupported; 
# 1719
int canUseHostPointerForRegisteredMem; 
# 1720
int cooperativeLaunch; 
# 1721
int cooperativeMultiDeviceLaunch; 
# 1722
size_t sharedMemPerBlockOptin; 
# 1723
int pageableMemoryAccessUsesHostPageTables; 
# 1724
int directManagedMemAccessFromHost; 
# 1725
}; 
#endif
# 1818 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef 
# 1815
struct cudaIpcEventHandle_st { 
# 1817
char reserved[64]; 
# 1818
} cudaIpcEventHandle_t; 
#endif
# 1826 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef 
# 1823
struct cudaIpcMemHandle_st { 
# 1825
char reserved[64]; 
# 1826
} cudaIpcMemHandle_t; 
#endif
# 1831 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1831
enum cudaExternalMemoryHandleType { 
# 1835
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
# 1839
cudaExternalMemoryHandleTypeOpaqueWin32, 
# 1843
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
# 1847
cudaExternalMemoryHandleTypeD3D12Heap, 
# 1851
cudaExternalMemoryHandleTypeD3D12Resource
# 1852
}; 
#endif
# 1862 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1862
struct cudaExternalMemoryHandleDesc { 
# 1866
cudaExternalMemoryHandleType type; 
# 1867
union { 
# 1873
int fd; 
# 1885 "/usr/local/cuda-10.1/include/driver_types.h" 3
struct { 
# 1889
void *handle; 
# 1894
const void *name; 
# 1895
} win32; 
# 1896
} handle; 
# 1900
unsigned long long size; 
# 1904
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1905
}; 
#endif
# 1910 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1910
struct cudaExternalMemoryBufferDesc { 
# 1914
unsigned long long offset; 
# 1918
unsigned long long size; 
# 1922
unsigned flags; 
# 1923
}; 
#endif
# 1928 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1928
struct cudaExternalMemoryMipmappedArrayDesc { 
# 1933
unsigned long long offset; 
# 1937
cudaChannelFormatDesc formatDesc; 
# 1941
cudaExtent extent; 
# 1946
unsigned flags; 
# 1950
unsigned numLevels; 
# 1951
}; 
#endif
# 1956 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1956
enum cudaExternalSemaphoreHandleType { 
# 1960
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
# 1964
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
# 1968
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
# 1972
cudaExternalSemaphoreHandleTypeD3D12Fence
# 1973
}; 
#endif
# 1978 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 1978
struct cudaExternalSemaphoreHandleDesc { 
# 1982
cudaExternalSemaphoreHandleType type; 
# 1983
union { 
# 1988
int fd; 
# 1999 "/usr/local/cuda-10.1/include/driver_types.h" 3
struct { 
# 2003
void *handle; 
# 2008
const void *name; 
# 2009
} win32; 
# 2010
} handle; 
# 2014
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2015
}; 
#endif
# 2020 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 2020
struct cudaExternalSemaphoreSignalParams { 
# 2021
union { 
# 2025
struct { 
# 2029
unsigned long long value; 
# 2030
} fence; 
# 2031
} params; 
# 2035
unsigned flags; 
# 2036
}; 
#endif
# 2041 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 2041
struct cudaExternalSemaphoreWaitParams { 
# 2042
union { 
# 2046
struct { 
# 2050
unsigned long long value; 
# 2051
} fence; 
# 2052
} params; 
# 2056
unsigned flags; 
# 2057
}; 
#endif
# 2069 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef cudaError 
# 2069
cudaError_t; 
#endif
# 2074 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef struct CUstream_st *
# 2074
cudaStream_t; 
#endif
# 2079 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef struct CUevent_st *
# 2079
cudaEvent_t; 
#endif
# 2084 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef cudaGraphicsResource *
# 2084
cudaGraphicsResource_t; 
#endif
# 2089 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef cudaOutputMode 
# 2089
cudaOutputMode_t; 
#endif
# 2094 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef struct CUexternalMemory_st *
# 2094
cudaExternalMemory_t; 
#endif
# 2099 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef struct CUexternalSemaphore_st *
# 2099
cudaExternalSemaphore_t; 
#endif
# 2104 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef struct CUgraph_st *
# 2104
cudaGraph_t; 
#endif
# 2109 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
typedef struct CUgraphNode_st *
# 2109
cudaGraphNode_t; 
#endif
# 2114 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 2114
enum cudaCGScope { 
# 2115
cudaCGScopeInvalid, 
# 2116
cudaCGScopeGrid, 
# 2117
cudaCGScopeMultiGrid
# 2118
}; 
#endif
# 2123 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 2123
struct cudaLaunchParams { 
# 2125
void *func; 
# 2126
dim3 gridDim; 
# 2127
dim3 blockDim; 
# 2128
void **args; 
# 2129
size_t sharedMem; 
# 2130
cudaStream_t stream; 
# 2131
}; 
#endif
# 2136 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 2136
struct cudaKernelNodeParams { 
# 2137
void *func; 
# 2138
dim3 gridDim; 
# 2139
dim3 blockDim; 
# 2140
unsigned sharedMemBytes; 
# 2141
void **kernelParams; 
# 2142
void **extra; 
# 2143
}; 
#endif
# 2148 "/usr/local/cuda-10.1/include/driver_types.h" 3
#if 0
# 2148
enum cudaGraphNodeType { 
# 2149
cudaGraphNodeTypeKernel, 
# 2150
cudaGraphNodeTypeMemcpy, 
# 2151
cudaGraphNodeTypeMemset, 
# 2152
cudaGraphNodeTypeHost, 
# 2153
cudaGraphNodeTypeGraph, 
# 2154
cudaGraphNodeTypeEmpty, 
# 2155
cudaGraphNodeTypeCount
# 2156
}; 
#endif
# 2161 "/usr/local/cuda-10.1/include/driver_types.h" 3
typedef struct CUgraphExec_st *cudaGraphExec_t; 
# 84 "/usr/local/cuda-10.1/include/surface_types.h" 3
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/usr/local/cuda-10.1/include/surface_types.h" 3
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/usr/local/cuda-10.1/include/surface_types.h" 3
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 114 "/usr/local/cuda-10.1/include/surface_types.h" 3
#if 0
typedef unsigned long long 
# 114
cudaSurfaceObject_t; 
#endif
# 84 "/usr/local/cuda-10.1/include/texture_types.h" 3
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/usr/local/cuda-10.1/include/texture_types.h" 3
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/usr/local/cuda-10.1/include/texture_types.h" 3
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/usr/local/cuda-10.1/include/texture_types.h" 3
#if 0
# 113
struct textureReference { 
# 118
int normalized; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureAddressMode addressMode[3]; 
# 130
cudaChannelFormatDesc channelDesc; 
# 134
int sRGB; 
# 138
unsigned maxAnisotropy; 
# 142
cudaTextureFilterMode mipmapFilterMode; 
# 146
float mipmapLevelBias; 
# 150
float minMipmapLevelClamp; 
# 154
float maxMipmapLevelClamp; 
# 155
int __cudaReserved[15]; 
# 156
}; 
#endif
# 161 "/usr/local/cuda-10.1/include/texture_types.h" 3
#if 0
# 161
struct cudaTextureDesc { 
# 166
cudaTextureAddressMode addressMode[3]; 
# 170
cudaTextureFilterMode filterMode; 
# 174
cudaTextureReadMode readMode; 
# 178
int sRGB; 
# 182
float borderColor[4]; 
# 186
int normalizedCoords; 
# 190
unsigned maxAnisotropy; 
# 194
cudaTextureFilterMode mipmapFilterMode; 
# 198
float mipmapLevelBias; 
# 202
float minMipmapLevelClamp; 
# 206
float maxMipmapLevelClamp; 
# 207
}; 
#endif
# 212 "/usr/local/cuda-10.1/include/texture_types.h" 3
#if 0
typedef unsigned long long 
# 212
cudaTextureObject_t; 
#endif
# 70 "/usr/local/cuda-10.1/include/library_types.h" 3
typedef 
# 54
enum cudaDataType_t { 
# 56
CUDA_R_16F = 2, 
# 57
CUDA_C_16F = 6, 
# 58
CUDA_R_32F = 0, 
# 59
CUDA_C_32F = 4, 
# 60
CUDA_R_64F = 1, 
# 61
CUDA_C_64F = 5, 
# 62
CUDA_R_8I = 3, 
# 63
CUDA_C_8I = 7, 
# 64
CUDA_R_8U, 
# 65
CUDA_C_8U, 
# 66
CUDA_R_32I, 
# 67
CUDA_C_32I, 
# 68
CUDA_R_32U, 
# 69
CUDA_C_32U
# 70
} cudaDataType; 
# 78
typedef 
# 73
enum libraryPropertyType_t { 
# 75
MAJOR_VERSION, 
# 76
MINOR_VERSION, 
# 77
PATCH_LEVEL
# 78
} libraryPropertyType; 
# 121 "/usr/local/cuda-10.1/include/cuda_device_runtime_api.h" 3
extern "C" {
# 123
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 124
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 125
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 126
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 127
extern cudaError_t cudaDeviceSynchronize(); 
# 128
extern cudaError_t cudaGetLastError(); 
# 129
extern cudaError_t cudaPeekAtLastError(); 
# 130
extern const char *cudaGetErrorString(cudaError_t error); 
# 131
extern const char *cudaGetErrorName(cudaError_t error); 
# 132
extern cudaError_t cudaGetDeviceCount(int * count); 
# 133
extern cudaError_t cudaGetDevice(int * device); 
# 134
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 135
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 136
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 137
__attribute__((unused)) extern cudaError_t cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 138
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 139
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
# 140
__attribute__((unused)) extern cudaError_t cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 141
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 142
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 143
extern cudaError_t cudaFree(void * devPtr); 
# 144
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 145
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 146
__attribute__((unused)) extern cudaError_t cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 147
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 148
__attribute__((unused)) extern cudaError_t cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 149
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 150
__attribute__((unused)) extern cudaError_t cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 151
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 152
__attribute__((unused)) extern cudaError_t cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 153
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 154
__attribute__((unused)) extern cudaError_t cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 155
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 156
__attribute__((unused)) extern cudaError_t cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 157
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 178 "/usr/local/cuda-10.1/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern void *cudaGetParameterBuffer(size_t alignment, size_t size); 
# 206 "/usr/local/cuda-10.1/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern void *cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 207
__attribute__((unused)) extern cudaError_t cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 208
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 226 "/usr/local/cuda-10.1/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern cudaError_t cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 227
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 230
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 231
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 233
__attribute__((unused)) extern unsigned long long cudaCGGetIntrinsicHandle(cudaCGScope scope); 
# 234
__attribute__((unused)) extern cudaError_t cudaCGSynchronize(unsigned long long handle, unsigned flags); 
# 235
__attribute__((unused)) extern cudaError_t cudaCGSynchronizeGrid(unsigned long long handle, unsigned flags); 
# 236
__attribute__((unused)) extern cudaError_t cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned long long handle); 
# 237
__attribute__((unused)) extern cudaError_t cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned long long handle); 
# 238
}
# 240
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 241
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 242
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 243
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 245 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern "C" {
# 280 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceReset(); 
# 301 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSynchronize(); 
# 386 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 420 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 453 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 490 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 534 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 565 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 609 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 636 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 666 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 713 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 753 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 796 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 854 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 889 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 931 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadExit(); 
# 957 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSynchronize(); 
# 1006 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 1039 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1075 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1122 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1181 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetLastError(); 
# 1227 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaPeekAtLastError(); 
# 1243 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern const char *cudaGetErrorName(cudaError_t error); 
# 1259 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern const char *cudaGetErrorString(cudaError_t error); 
# 1288 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1559 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
# 1748 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1788 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 1809 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 1846 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetDevice(int device); 
# 1867 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDevice(int * device); 
# 1898 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 1967 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 2013 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 2053 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 2085 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2131 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2158 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2183 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2214 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2240 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 2248
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2315 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2339 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2364 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2447 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2483 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
# 2534 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
# 2562 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
# 2600 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
# 2628 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetCaptureInfo(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus, unsigned long long * pId); 
# 2666 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 2703 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 2742 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 2773 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 2803 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 2830 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 2873 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 3012 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
# 3066 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
# 3121 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
# 3144 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
# 3238 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
# 3277 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3320 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3342 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
# 3407 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 3464 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 3563 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 3612 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 3667 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 3702 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 3741 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 3765 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 3789 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForHost(double * d); 
# 3855 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
# 3910 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 3954 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 4074 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 4105 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 4138 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 4181 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 4227 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 4256 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFree(void * devPtr); 
# 4279 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeHost(void * ptr); 
# 4302 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 4325 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 4391 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 4475 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 4498 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostUnregister(void * ptr); 
# 4543 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 4565 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 4604 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 4743 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 4882 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 4911 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 5016 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 5047 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 5165 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 5191 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 5213 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 5239 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 5282 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 5317 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 5365 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 5414 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 5463 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 5510 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 5553 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 5596 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 5652 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5687 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 5749 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5806 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5862 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5913 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5964 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5993 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 6027 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 6071 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 6107 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 6148 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 6199 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 6227 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 6254 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 6324 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 6440 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 6499 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 6538 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 6598 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 6640 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 6683 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 6734 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6784 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6950 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 6991 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 7033 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 7055 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 7118 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 7153 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 7192 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 7227 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 7259 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 7297 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 7326 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 7397 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = ((2147483647) * 2U) + 1U); 
# 7456 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
# 7494 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 7534 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
# 7560 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaUnbindTexture(const textureReference * texref); 
# 7589 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
# 7619 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
# 7664 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 7689 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
# 7724 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 7754 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 7969 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 7988 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 8008 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 8028 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 8049 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 8094 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 8113 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 8132 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 8166 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 8191 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 8238 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
# 8335 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
# 8368 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
# 8393 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 8437 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
# 8460 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
# 8483 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 8525 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
# 8548 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
# 8571 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 8612 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
# 8635 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
# 8658 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 8696 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
# 8720 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
# 8757 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
# 8784 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
# 8812 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
# 8843 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
# 8874 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
# 8905 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
# 8939 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
# 8970 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
# 9002 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
# 9033 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 9064 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 9090 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node); 
# 9126 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
# 9160 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 9185 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 9206 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
# 9226 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphDestroy(cudaGraph_t graph); 
# 9231
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 9476 "/usr/local/cuda-10.1/include/cuda_runtime_api.h" 3
}
# 104 "/usr/local/cuda-10.1/include/channel_descriptor.h" 3
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 105
{ 
# 106
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 107
} 
# 109
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 110
{ 
# 111
int e = (((int)sizeof(unsigned short)) * 8); 
# 113
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 114
} 
# 116
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 117
{ 
# 118
int e = (((int)sizeof(unsigned short)) * 8); 
# 120
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 121
} 
# 123
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 124
{ 
# 125
int e = (((int)sizeof(unsigned short)) * 8); 
# 127
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 128
} 
# 130
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 131
{ 
# 132
int e = (((int)sizeof(unsigned short)) * 8); 
# 134
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 135
} 
# 137
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 138
{ 
# 139
int e = (((int)sizeof(char)) * 8); 
# 144
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 146
} 
# 148
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 149
{ 
# 150
int e = (((int)sizeof(signed char)) * 8); 
# 152
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 153
} 
# 155
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 156
{ 
# 157
int e = (((int)sizeof(unsigned char)) * 8); 
# 159
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 160
} 
# 162
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 163
{ 
# 164
int e = (((int)sizeof(signed char)) * 8); 
# 166
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 167
} 
# 169
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 170
{ 
# 171
int e = (((int)sizeof(unsigned char)) * 8); 
# 173
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 174
} 
# 176
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 177
{ 
# 178
int e = (((int)sizeof(signed char)) * 8); 
# 180
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 181
} 
# 183
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 184
{ 
# 185
int e = (((int)sizeof(unsigned char)) * 8); 
# 187
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 188
} 
# 190
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 191
{ 
# 192
int e = (((int)sizeof(signed char)) * 8); 
# 194
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 195
} 
# 197
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 198
{ 
# 199
int e = (((int)sizeof(unsigned char)) * 8); 
# 201
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 202
} 
# 204
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 205
{ 
# 206
int e = (((int)sizeof(short)) * 8); 
# 208
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 209
} 
# 211
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 212
{ 
# 213
int e = (((int)sizeof(unsigned short)) * 8); 
# 215
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 216
} 
# 218
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 219
{ 
# 220
int e = (((int)sizeof(short)) * 8); 
# 222
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 223
} 
# 225
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 226
{ 
# 227
int e = (((int)sizeof(unsigned short)) * 8); 
# 229
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 230
} 
# 232
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 233
{ 
# 234
int e = (((int)sizeof(short)) * 8); 
# 236
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 237
} 
# 239
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 240
{ 
# 241
int e = (((int)sizeof(unsigned short)) * 8); 
# 243
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 244
} 
# 246
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 247
{ 
# 248
int e = (((int)sizeof(short)) * 8); 
# 250
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 251
} 
# 253
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 254
{ 
# 255
int e = (((int)sizeof(unsigned short)) * 8); 
# 257
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 258
} 
# 260
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 261
{ 
# 262
int e = (((int)sizeof(int)) * 8); 
# 264
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 265
} 
# 267
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 268
{ 
# 269
int e = (((int)sizeof(unsigned)) * 8); 
# 271
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 272
} 
# 274
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 275
{ 
# 276
int e = (((int)sizeof(int)) * 8); 
# 278
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 279
} 
# 281
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 282
{ 
# 283
int e = (((int)sizeof(unsigned)) * 8); 
# 285
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 286
} 
# 288
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 289
{ 
# 290
int e = (((int)sizeof(int)) * 8); 
# 292
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 293
} 
# 295
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 296
{ 
# 297
int e = (((int)sizeof(unsigned)) * 8); 
# 299
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 300
} 
# 302
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 303
{ 
# 304
int e = (((int)sizeof(int)) * 8); 
# 306
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 307
} 
# 309
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 310
{ 
# 311
int e = (((int)sizeof(unsigned)) * 8); 
# 313
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 314
} 
# 376 "/usr/local/cuda-10.1/include/channel_descriptor.h" 3
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 377
{ 
# 378
int e = (((int)sizeof(float)) * 8); 
# 380
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 381
} 
# 383
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 384
{ 
# 385
int e = (((int)sizeof(float)) * 8); 
# 387
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 388
} 
# 390
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 391
{ 
# 392
int e = (((int)sizeof(float)) * 8); 
# 394
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 395
} 
# 397
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 398
{ 
# 399
int e = (((int)sizeof(float)) * 8); 
# 401
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 402
} 
# 79 "/usr/local/cuda-10.1/include/driver_functions.h" 3
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/usr/local/cuda-10.1/include/driver_functions.h" 3
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/usr/local/cuda-10.1/include/driver_functions.h" 3
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 73 "/usr/local/cuda-10.1/include/vector_functions.h" 3
static inline char1 make_char1(signed char x); 
# 75
static inline uchar1 make_uchar1(unsigned char x); 
# 77
static inline char2 make_char2(signed char x, signed char y); 
# 79
static inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
# 81
static inline char3 make_char3(signed char x, signed char y, signed char z); 
# 83
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
# 85
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
# 87
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
# 89
static inline short1 make_short1(short x); 
# 91
static inline ushort1 make_ushort1(unsigned short x); 
# 93
static inline short2 make_short2(short x, short y); 
# 95
static inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
# 97
static inline short3 make_short3(short x, short y, short z); 
# 99
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
# 101
static inline short4 make_short4(short x, short y, short z, short w); 
# 103
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
# 105
static inline int1 make_int1(int x); 
# 107
static inline uint1 make_uint1(unsigned x); 
# 109
static inline int2 make_int2(int x, int y); 
# 111
static inline uint2 make_uint2(unsigned x, unsigned y); 
# 113
static inline int3 make_int3(int x, int y, int z); 
# 115
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
# 117
static inline int4 make_int4(int x, int y, int z, int w); 
# 119
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
# 121
static inline long1 make_long1(long x); 
# 123
static inline ulong1 make_ulong1(unsigned long x); 
# 125
static inline long2 make_long2(long x, long y); 
# 127
static inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
# 129
static inline long3 make_long3(long x, long y, long z); 
# 131
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
# 133
static inline long4 make_long4(long x, long y, long z, long w); 
# 135
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
# 137
static inline float1 make_float1(float x); 
# 139
static inline float2 make_float2(float x, float y); 
# 141
static inline float3 make_float3(float x, float y, float z); 
# 143
static inline float4 make_float4(float x, float y, float z, float w); 
# 145
static inline longlong1 make_longlong1(long long x); 
# 147
static inline ulonglong1 make_ulonglong1(unsigned long long x); 
# 149
static inline longlong2 make_longlong2(long long x, long long y); 
# 151
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y); 
# 153
static inline longlong3 make_longlong3(long long x, long long y, long long z); 
# 155
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z); 
# 157
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w); 
# 159
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w); 
# 161
static inline double1 make_double1(double x); 
# 163
static inline double2 make_double2(double x, double y); 
# 165
static inline double3 make_double3(double x, double y, double z); 
# 167
static inline double4 make_double4(double x, double y, double z, double w); 
# 73 "/usr/local/cuda-10.1/include/vector_functions.hpp" 3
static inline char1 make_char1(signed char x) 
# 74
{ 
# 75
char1 t; (t.x) = x; return t; 
# 76
} 
# 78
static inline uchar1 make_uchar1(unsigned char x) 
# 79
{ 
# 80
uchar1 t; (t.x) = x; return t; 
# 81
} 
# 83
static inline char2 make_char2(signed char x, signed char y) 
# 84
{ 
# 85
char2 t; (t.x) = x; (t.y) = y; return t; 
# 86
} 
# 88
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 89
{ 
# 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 91
} 
# 93
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 94
{ 
# 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 96
} 
# 98
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 99
{ 
# 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 101
} 
# 103
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 104
{ 
# 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 106
} 
# 108
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 109
{ 
# 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 111
} 
# 113
static inline short1 make_short1(short x) 
# 114
{ 
# 115
short1 t; (t.x) = x; return t; 
# 116
} 
# 118
static inline ushort1 make_ushort1(unsigned short x) 
# 119
{ 
# 120
ushort1 t; (t.x) = x; return t; 
# 121
} 
# 123
static inline short2 make_short2(short x, short y) 
# 124
{ 
# 125
short2 t; (t.x) = x; (t.y) = y; return t; 
# 126
} 
# 128
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 129
{ 
# 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 131
} 
# 133
static inline short3 make_short3(short x, short y, short z) 
# 134
{ 
# 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 136
} 
# 138
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 139
{ 
# 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 141
} 
# 143
static inline short4 make_short4(short x, short y, short z, short w) 
# 144
{ 
# 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 146
} 
# 148
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 149
{ 
# 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 151
} 
# 153
static inline int1 make_int1(int x) 
# 154
{ 
# 155
int1 t; (t.x) = x; return t; 
# 156
} 
# 158
static inline uint1 make_uint1(unsigned x) 
# 159
{ 
# 160
uint1 t; (t.x) = x; return t; 
# 161
} 
# 163
static inline int2 make_int2(int x, int y) 
# 164
{ 
# 165
int2 t; (t.x) = x; (t.y) = y; return t; 
# 166
} 
# 168
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 169
{ 
# 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 171
} 
# 173
static inline int3 make_int3(int x, int y, int z) 
# 174
{ 
# 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 176
} 
# 178
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 179
{ 
# 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 181
} 
# 183
static inline int4 make_int4(int x, int y, int z, int w) 
# 184
{ 
# 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 186
} 
# 188
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 189
{ 
# 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 191
} 
# 193
static inline long1 make_long1(long x) 
# 194
{ 
# 195
long1 t; (t.x) = x; return t; 
# 196
} 
# 198
static inline ulong1 make_ulong1(unsigned long x) 
# 199
{ 
# 200
ulong1 t; (t.x) = x; return t; 
# 201
} 
# 203
static inline long2 make_long2(long x, long y) 
# 204
{ 
# 205
long2 t; (t.x) = x; (t.y) = y; return t; 
# 206
} 
# 208
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 209
{ 
# 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 211
} 
# 213
static inline long3 make_long3(long x, long y, long z) 
# 214
{ 
# 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 216
} 
# 218
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 219
{ 
# 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 221
} 
# 223
static inline long4 make_long4(long x, long y, long z, long w) 
# 224
{ 
# 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 226
} 
# 228
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 229
{ 
# 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 231
} 
# 233
static inline float1 make_float1(float x) 
# 234
{ 
# 235
float1 t; (t.x) = x; return t; 
# 236
} 
# 238
static inline float2 make_float2(float x, float y) 
# 239
{ 
# 240
float2 t; (t.x) = x; (t.y) = y; return t; 
# 241
} 
# 243
static inline float3 make_float3(float x, float y, float z) 
# 244
{ 
# 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 246
} 
# 248
static inline float4 make_float4(float x, float y, float z, float w) 
# 249
{ 
# 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 251
} 
# 253
static inline longlong1 make_longlong1(long long x) 
# 254
{ 
# 255
longlong1 t; (t.x) = x; return t; 
# 256
} 
# 258
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 259
{ 
# 260
ulonglong1 t; (t.x) = x; return t; 
# 261
} 
# 263
static inline longlong2 make_longlong2(long long x, long long y) 
# 264
{ 
# 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 266
} 
# 268
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 269
{ 
# 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 271
} 
# 273
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 274
{ 
# 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 276
} 
# 278
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 279
{ 
# 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 281
} 
# 283
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 284
{ 
# 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 286
} 
# 288
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 289
{ 
# 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 291
} 
# 293
static inline double1 make_double1(double x) 
# 294
{ 
# 295
double1 t; (t.x) = x; return t; 
# 296
} 
# 298
static inline double2 make_double2(double x, double y) 
# 299
{ 
# 300
double2 t; (t.x) = x; (t.y) = y; return t; 
# 301
} 
# 303
static inline double3 make_double3(double x, double y, double z) 
# 304
{ 
# 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 306
} 
# 308
static inline double4 make_double4(double x, double y, double z, double w) 
# 309
{ 
# 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 311
} 
# 27 "/usr/include/string.h" 3
extern "C" {
# 42 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 43
 __attribute((__nonnull__(1, 2))); 
# 46
extern void *memmove(void * __dest, const void * __src, size_t __n) throw()
# 47
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) throw()
# 56
 __attribute((__nonnull__(1, 2))); 
# 62
extern void *memset(void * __s, int __c, size_t __n) throw() __attribute((__nonnull__(1))); 
# 65
extern int memcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 66
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 70
extern "C++" {
# 72
extern void *memchr(void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 73
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 74
extern const void *memchr(const void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 75
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 90 "/usr/include/string.h" 3
}
# 101
extern "C++" void *rawmemchr(void * __s, int __c) throw() __asm__("rawmemchr")
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 103
extern "C++" const void *rawmemchr(const void * __s, int __c) throw() __asm__("rawmemchr")
# 104
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
extern "C++" void *memrchr(void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 114
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 115
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 125
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 126
 __attribute((__nonnull__(1, 2))); 
# 128
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 130
 __attribute((__nonnull__(1, 2))); 
# 133
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 134
 __attribute((__nonnull__(1, 2))); 
# 136
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 137
 __attribute((__nonnull__(1, 2))); 
# 140
extern int strcmp(const char * __s1, const char * __s2) throw()
# 141
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 143
extern int strncmp(const char * __s1, const char * __s2, size_t __n) throw()
# 144
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 147
extern int strcoll(const char * __s1, const char * __s2) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 150
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 152
 __attribute((__nonnull__(2))); 
# 39 "/usr/include/xlocale.h" 3
typedef 
# 27
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
} *__locale_t; 
# 42
typedef __locale_t locale_t; 
# 162 "/usr/include/string.h" 3
extern int strcoll_l(const char * __s1, const char * __s2, __locale_t __l) throw()
# 163
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 165
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, __locale_t __l) throw()
# 166
 __attribute((__nonnull__(2, 4))); 
# 172
extern char *strdup(const char * __s) throw()
# 173
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 180
extern char *strndup(const char * __string, size_t __n) throw()
# 181
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 210 "/usr/include/string.h" 3
extern "C++" {
# 212
extern char *strchr(char * __s, int __c) throw() __asm__("strchr")
# 213
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 214
extern const char *strchr(const char * __s, int __c) throw() __asm__("strchr")
# 215
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 230 "/usr/include/string.h" 3
}
# 237
extern "C++" {
# 239
extern char *strrchr(char * __s, int __c) throw() __asm__("strrchr")
# 240
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 241
extern const char *strrchr(const char * __s, int __c) throw() __asm__("strrchr")
# 242
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 257 "/usr/include/string.h" 3
}
# 268
extern "C++" char *strchrnul(char * __s, int __c) throw() __asm__("strchrnul")
# 269
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 270
extern "C++" const char *strchrnul(const char * __s, int __c) throw() __asm__("strchrnul")
# 271
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 281
extern size_t strcspn(const char * __s, const char * __reject) throw()
# 282
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 285
extern size_t strspn(const char * __s, const char * __accept) throw()
# 286
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 289
extern "C++" {
# 291
extern char *strpbrk(char * __s, const char * __accept) throw() __asm__("strpbrk")
# 292
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 293
extern const char *strpbrk(const char * __s, const char * __accept) throw() __asm__("strpbrk")
# 294
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 309 "/usr/include/string.h" 3
}
# 316
extern "C++" {
# 318
extern char *strstr(char * __haystack, const char * __needle) throw() __asm__("strstr")
# 319
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 320
extern const char *strstr(const char * __haystack, const char * __needle) throw() __asm__("strstr")
# 321
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 336 "/usr/include/string.h" 3
}
# 344
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) throw()
# 345
 __attribute((__nonnull__(2))); 
# 350
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 353
 __attribute((__nonnull__(2, 3))); 
# 355
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 357
 __attribute((__nonnull__(2, 3))); 
# 363
extern "C++" char *strcasestr(char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 364
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 365
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 367
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 378 "/usr/include/string.h" 3
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) throw()
# 380
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 384
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 386
 __attribute((__nonnull__(1, 2))); 
# 387
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 389
 __attribute((__nonnull__(1, 2))); 
# 395
extern size_t strlen(const char * __s) throw()
# 396
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 402
extern size_t strnlen(const char * __string, size_t __maxlen) throw()
# 403
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 409
extern char *strerror(int __errnum) throw(); 
# 434 "/usr/include/string.h" 3
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) throw()
# 435
 __attribute((__nonnull__(2))); 
# 441
extern char *strerror_l(int __errnum, __locale_t __l) throw(); 
# 447
extern void __bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 451
extern void bcopy(const void * __src, void * __dest, size_t __n) throw()
# 452
 __attribute((__nonnull__(1, 2))); 
# 455
extern void bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 458
extern int bcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 459
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 463
extern "C++" {
# 465
extern char *index(char * __s, int __c) throw() __asm__("index")
# 466
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 467
extern const char *index(const char * __s, int __c) throw() __asm__("index")
# 468
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 483 "/usr/include/string.h" 3
}
# 491
extern "C++" {
# 493
extern char *rindex(char * __s, int __c) throw() __asm__("rindex")
# 494
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 495
extern const char *rindex(const char * __s, int __c) throw() __asm__("rindex")
# 496
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 511 "/usr/include/string.h" 3
}
# 519
extern int ffs(int __i) throw() __attribute((const)); 
# 524
extern int ffsl(long __l) throw() __attribute((const)); 
# 526
__extension__ extern int ffsll(long long __ll) throw()
# 527
 __attribute((const)); 
# 532
extern int strcasecmp(const char * __s1, const char * __s2) throw()
# 533
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 536
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) throw()
# 537
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 543
extern int strcasecmp_l(const char * __s1, const char * __s2, __locale_t __loc) throw()
# 545
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 547
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, __locale_t __loc) throw()
# 549
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 555
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) throw()
# 557
 __attribute((__nonnull__(1, 2))); 
# 562
extern char *strsignal(int __sig) throw(); 
# 565
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 566
 __attribute((__nonnull__(1, 2))); 
# 567
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 568
 __attribute((__nonnull__(1, 2))); 
# 572
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 574
 __attribute((__nonnull__(1, 2))); 
# 575
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 577
 __attribute((__nonnull__(1, 2))); 
# 582
extern int strverscmp(const char * __s1, const char * __s2) throw()
# 583
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 586
extern char *strfry(char * __string) throw() __attribute((__nonnull__(1))); 
# 589
extern void *memfrob(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 597
extern "C++" char *basename(char * __filename) throw() __asm__("basename")
# 598
 __attribute((__nonnull__(1))); 
# 599
extern "C++" const char *basename(const char * __filename) throw() __asm__("basename")
# 600
 __attribute((__nonnull__(1))); 
# 642 "/usr/include/string.h" 3
}
# 29 "/usr/include/time.h" 3
extern "C" {
# 30 "/usr/include/bits/types.h" 3
typedef unsigned char __u_char; 
# 31
typedef unsigned short __u_short; 
# 32
typedef unsigned __u_int; 
# 33
typedef unsigned long __u_long; 
# 36
typedef signed char __int8_t; 
# 37
typedef unsigned char __uint8_t; 
# 38
typedef signed short __int16_t; 
# 39
typedef unsigned short __uint16_t; 
# 40
typedef signed int __int32_t; 
# 41
typedef unsigned __uint32_t; 
# 43
typedef signed long __int64_t; 
# 44
typedef unsigned long __uint64_t; 
# 52
typedef long __quad_t; 
# 53
typedef unsigned long __u_quad_t; 
# 133 "/usr/include/bits/types.h" 3
typedef unsigned long __dev_t; 
# 134
typedef unsigned __uid_t; 
# 135
typedef unsigned __gid_t; 
# 136
typedef unsigned long __ino_t; 
# 137
typedef unsigned long __ino64_t; 
# 138
typedef unsigned __mode_t; 
# 139
typedef unsigned long __nlink_t; 
# 140
typedef long __off_t; 
# 141
typedef long __off64_t; 
# 142
typedef int __pid_t; 
# 143
typedef struct { int __val[2]; } __fsid_t; 
# 144
typedef long __clock_t; 
# 145
typedef unsigned long __rlim_t; 
# 146
typedef unsigned long __rlim64_t; 
# 147
typedef unsigned __id_t; 
# 148
typedef long __time_t; 
# 149
typedef unsigned __useconds_t; 
# 150
typedef long __suseconds_t; 
# 152
typedef int __daddr_t; 
# 153
typedef int __key_t; 
# 156
typedef int __clockid_t; 
# 159
typedef void *__timer_t; 
# 162
typedef long __blksize_t; 
# 167
typedef long __blkcnt_t; 
# 168
typedef long __blkcnt64_t; 
# 171
typedef unsigned long __fsblkcnt_t; 
# 172
typedef unsigned long __fsblkcnt64_t; 
# 175
typedef unsigned long __fsfilcnt_t; 
# 176
typedef unsigned long __fsfilcnt64_t; 
# 179
typedef long __fsword_t; 
# 181
typedef long __ssize_t; 
# 184
typedef long __syscall_slong_t; 
# 186
typedef unsigned long __syscall_ulong_t; 
# 190
typedef __off64_t __loff_t; 
# 191
typedef __quad_t *__qaddr_t; 
# 192
typedef char *__caddr_t; 
# 195
typedef long __intptr_t; 
# 198
typedef unsigned __socklen_t; 
# 30 "/usr/include/bits/time.h" 3
struct timeval { 
# 32
__time_t tv_sec; 
# 33
__suseconds_t tv_usec; 
# 34
}; 
# 25 "/usr/include/bits/timex.h" 3
struct timex { 
# 27
unsigned modes; 
# 28
__syscall_slong_t offset; 
# 29
__syscall_slong_t freq; 
# 30
__syscall_slong_t maxerror; 
# 31
__syscall_slong_t esterror; 
# 32
int status; 
# 33
__syscall_slong_t constant; 
# 34
__syscall_slong_t precision; 
# 35
__syscall_slong_t tolerance; 
# 36
timeval time; 
# 37
__syscall_slong_t tick; 
# 38
__syscall_slong_t ppsfreq; 
# 39
__syscall_slong_t jitter; 
# 40
int shift; 
# 41
__syscall_slong_t stabil; 
# 42
__syscall_slong_t jitcnt; 
# 43
__syscall_slong_t calcnt; 
# 44
__syscall_slong_t errcnt; 
# 45
__syscall_slong_t stbcnt; 
# 47
int tai; 
# 50
int:32; int:32; int:32; int:32; 
# 51
int:32; int:32; int:32; int:32; 
# 52
int:32; int:32; int:32; 
# 53
}; 
# 90 "/usr/include/bits/time.h" 3
extern "C" {
# 93
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) throw(); 
# 95
}
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t; 
# 75 "/usr/include/time.h" 3
typedef __time_t time_t; 
# 91 "/usr/include/time.h" 3
typedef __clockid_t clockid_t; 
# 103 "/usr/include/time.h" 3
typedef __timer_t timer_t; 
# 120 "/usr/include/time.h" 3
struct timespec { 
# 122
__time_t tv_sec; 
# 123
__syscall_slong_t tv_nsec; 
# 124
}; 
# 133
struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; 
# 161
struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; 
# 168
struct sigevent; 
# 174
typedef __pid_t pid_t; 
# 189 "/usr/include/time.h" 3
extern clock_t clock() throw(); 
# 192
extern time_t time(time_t * __timer) throw(); 
# 195
extern double difftime(time_t __time1, time_t __time0) throw()
# 196
 __attribute((const)); 
# 199
extern time_t mktime(tm * __tp) throw(); 
# 205
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 213
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) throw(); 
# 223
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, __locale_t __loc) throw(); 
# 230
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, __locale_t __loc) throw(); 
# 239
extern tm *gmtime(const time_t * __timer) throw(); 
# 243
extern tm *localtime(const time_t * __timer) throw(); 
# 249
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 254
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 261
extern char *asctime(const tm * __tp) throw(); 
# 264
extern char *ctime(const time_t * __timer) throw(); 
# 272
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) throw(); 
# 276
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) throw(); 
# 282
extern char *__tzname[2]; 
# 283
extern int __daylight; 
# 284
extern long __timezone; 
# 289
extern char *tzname[2]; 
# 293
extern void tzset() throw(); 
# 297
extern int daylight; 
# 298
extern long timezone; 
# 304
extern int stime(const time_t * __when) throw(); 
# 319 "/usr/include/time.h" 3
extern time_t timegm(tm * __tp) throw(); 
# 322
extern time_t timelocal(tm * __tp) throw(); 
# 325
extern int dysize(int __year) throw() __attribute((const)); 
# 334 "/usr/include/time.h" 3
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 339
extern int clock_getres(clockid_t __clock_id, timespec * __res) throw(); 
# 342
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) throw(); 
# 345
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) throw(); 
# 353
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 358
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) throw(); 
# 363
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) throw(); 
# 368
extern int timer_delete(timer_t __timerid) throw(); 
# 371
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) throw(); 
# 376
extern int timer_gettime(timer_t __timerid, itimerspec * __value) throw(); 
# 380
extern int timer_getoverrun(timer_t __timerid) throw(); 
# 386
extern int timespec_get(timespec * __ts, int __base) throw()
# 387
 __attribute((__nonnull__(1))); 
# 403 "/usr/include/time.h" 3
extern int getdate_err; 
# 412 "/usr/include/time.h" 3
extern tm *getdate(const char * __string); 
# 426 "/usr/include/time.h" 3
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 430
}
# 80 "/usr/local/cuda-10.1/include/crt/common_functions.h" 3
extern "C" {
# 83
extern clock_t clock() throw(); 
# 88
extern void *memset(void *, int, size_t) throw(); 
# 89
extern void *memcpy(void *, const void *, size_t) throw(); 
# 91
}
# 108 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern "C" {
# 192 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern int abs(int) throw(); 
# 193
extern long labs(long) throw(); 
# 194
extern long long llabs(long long) throw(); 
# 244 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double fabs(double x) throw(); 
# 285 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float fabsf(float x) throw(); 
# 289
extern inline int min(int, int); 
# 291
extern inline unsigned umin(unsigned, unsigned); 
# 292
extern inline long long llmin(long long, long long); 
# 293
extern inline unsigned long long ullmin(unsigned long long, unsigned long long); 
# 314 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float fminf(float x, float y) throw(); 
# 334 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double fmin(double x, double y) throw(); 
# 341
extern inline int max(int, int); 
# 343
extern inline unsigned umax(unsigned, unsigned); 
# 344
extern inline long long llmax(long long, long long); 
# 345
extern inline unsigned long long ullmax(unsigned long long, unsigned long long); 
# 366 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float fmaxf(float x, float y) throw(); 
# 386 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double fmax(double, double) throw(); 
# 430 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double sin(double x) throw(); 
# 463 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double cos(double x) throw(); 
# 482 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 498 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 543 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double tan(double x) throw(); 
# 612 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double sqrt(double x) throw(); 
# 684 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double rsqrt(double x); 
# 754 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float rsqrtf(float x); 
# 810 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double log2(double x) throw(); 
# 835 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double exp2(double x) throw(); 
# 860 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float exp2f(float x) throw(); 
# 887 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double exp10(double x) throw(); 
# 910 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float exp10f(float x) throw(); 
# 956 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double expm1(double x) throw(); 
# 1001 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float expm1f(float x) throw(); 
# 1056 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float log2f(float x) throw(); 
# 1110 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double log10(double x) throw(); 
# 1181 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double log(double x) throw(); 
# 1275 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double log1p(double x) throw(); 
# 1372 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float log1pf(float x) throw(); 
# 1447 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double floor(double x) throw(); 
# 1486 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double exp(double x) throw(); 
# 1517 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double cosh(double x) throw(); 
# 1547 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double sinh(double x) throw(); 
# 1577 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double tanh(double x) throw(); 
# 1612 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double acosh(double x) throw(); 
# 1650 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float acoshf(float x) throw(); 
# 1666 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double asinh(double x) throw(); 
# 1682 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float asinhf(float x) throw(); 
# 1736 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double atanh(double x) throw(); 
# 1790 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float atanhf(float x) throw(); 
# 1849 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double ldexp(double x, int exp) throw(); 
# 1905 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float ldexpf(float x, int exp) throw(); 
# 1957 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double logb(double x) throw(); 
# 2012 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float logbf(float x) throw(); 
# 2042 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern int ilogb(double x) throw(); 
# 2072 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern int ilogbf(float x) throw(); 
# 2148 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double scalbn(double x, int n) throw(); 
# 2224 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float scalbnf(float x, int n) throw(); 
# 2300 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double scalbln(double x, long n) throw(); 
# 2376 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float scalblnf(float x, long n) throw(); 
# 2454 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double frexp(double x, int * nptr) throw(); 
# 2529 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float frexpf(float x, int * nptr) throw(); 
# 2543 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double round(double x) throw(); 
# 2560 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float roundf(float x) throw(); 
# 2578 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long lround(double x) throw(); 
# 2596 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long lroundf(float x) throw(); 
# 2614 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long long llround(double x) throw(); 
# 2632 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long long llroundf(float x) throw(); 
# 2684 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float rintf(float x) throw(); 
# 2701 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long lrint(double x) throw(); 
# 2718 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long lrintf(float x) throw(); 
# 2735 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long long llrint(double x) throw(); 
# 2752 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern long long llrintf(float x) throw(); 
# 2805 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double nearbyint(double x) throw(); 
# 2858 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float nearbyintf(float x) throw(); 
# 2920 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double ceil(double x) throw(); 
# 2932 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double trunc(double x) throw(); 
# 2947 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float truncf(float x) throw(); 
# 2973 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double fdim(double x, double y) throw(); 
# 2999 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float fdimf(float x, float y) throw(); 
# 3035 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double atan2(double y, double x) throw(); 
# 3066 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double atan(double x) throw(); 
# 3089 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double acos(double x) throw(); 
# 3121 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double asin(double x) throw(); 
# 3167 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double hypot(double x, double y) throw(); 
# 3219 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double rhypot(double x, double y) throw(); 
# 3265 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float hypotf(float x, float y) throw(); 
# 3317 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float rhypotf(float x, float y) throw(); 
# 3361 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double norm3d(double a, double b, double c) throw(); 
# 3412 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double rnorm3d(double a, double b, double c) throw(); 
# 3461 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double norm4d(double a, double b, double c, double d) throw(); 
# 3517 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double rnorm4d(double a, double b, double c, double d) throw(); 
# 3562 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double norm(int dim, const double * t) throw(); 
# 3613 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double rnorm(int dim, const double * t) throw(); 
# 3665 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float rnormf(int dim, const float * a) throw(); 
# 3709 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float normf(int dim, const float * a) throw(); 
# 3754 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float norm3df(float a, float b, float c) throw(); 
# 3805 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float rnorm3df(float a, float b, float c) throw(); 
# 3854 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float norm4df(float a, float b, float c, float d) throw(); 
# 3910 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float rnorm4df(float a, float b, float c, float d) throw(); 
# 3997 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double cbrt(double x) throw(); 
# 4083 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float cbrtf(float x) throw(); 
# 4138 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double rcbrt(double x); 
# 4188 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float rcbrtf(float x); 
# 4248 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double sinpi(double x); 
# 4308 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float sinpif(float x); 
# 4360 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double cospi(double x); 
# 4412 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float cospif(float x); 
# 4442 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern void sincospi(double x, double * sptr, double * cptr); 
# 4472 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern void sincospif(float x, float * sptr, float * cptr); 
# 4784 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double pow(double x, double y) throw(); 
# 4840 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double modf(double x, double * iptr) throw(); 
# 4899 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double fmod(double x, double y) throw(); 
# 4985 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double remainder(double x, double y) throw(); 
# 5075 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float remainderf(float x, float y) throw(); 
# 5129 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double remquo(double x, double y, int * quo) throw(); 
# 5183 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float remquof(float x, float y, int * quo) throw(); 
# 5224 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double j0(double x) throw(); 
# 5266 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float j0f(float x) throw(); 
# 5327 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double j1(double x) throw(); 
# 5388 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float j1f(float x) throw(); 
# 5431 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double jn(int n, double x) throw(); 
# 5474 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float jnf(int n, float x) throw(); 
# 5526 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double y0(double x) throw(); 
# 5578 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float y0f(float x) throw(); 
# 5630 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double y1(double x) throw(); 
# 5682 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float y1f(float x) throw(); 
# 5735 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double yn(int n, double x) throw(); 
# 5788 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float ynf(int n, float x) throw(); 
# 5815 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double cyl_bessel_i0(double x) throw(); 
# 5841 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float cyl_bessel_i0f(float x) throw(); 
# 5868 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double cyl_bessel_i1(double x) throw(); 
# 5894 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float cyl_bessel_i1f(float x) throw(); 
# 5977 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double erf(double x) throw(); 
# 6059 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float erff(float x) throw(); 
# 6123 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double erfinv(double y); 
# 6180 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float erfinvf(float y); 
# 6219 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double erfc(double x) throw(); 
# 6257 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float erfcf(float x) throw(); 
# 6385 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double lgamma(double x) throw(); 
# 6448 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double erfcinv(double y); 
# 6504 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float erfcinvf(float y); 
# 6562 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double normcdfinv(double y); 
# 6620 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float normcdfinvf(float y); 
# 6663 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double normcdf(double y); 
# 6706 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float normcdff(float y); 
# 6781 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double erfcx(double x); 
# 6856 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float erfcxf(float x); 
# 6990 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float lgammaf(float x) throw(); 
# 7099 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double tgamma(double x) throw(); 
# 7208 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float tgammaf(float x) throw(); 
# 7221 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double copysign(double x, double y) throw(); 
# 7234 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float copysignf(float x, float y) throw(); 
# 7271 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double nextafter(double x, double y) throw(); 
# 7308 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float nextafterf(float x, float y) throw(); 
# 7324 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double nan(const char * tagp) throw(); 
# 7340 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float nanf(const char * tagp) throw(); 
# 7347
extern int __isinff(float) throw(); 
# 7348
extern int __isnanf(float) throw(); 
# 7358 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern int __finite(double) throw(); 
# 7359
extern int __finitef(float) throw(); 
# 7360
extern int __signbit(double) throw(); 
# 7361
extern int __isnan(double) throw(); 
# 7362
extern int __isinf(double) throw(); 
# 7365
extern int __signbitf(float) throw(); 
# 7524 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern double fma(double x, double y, double z) throw(); 
# 7682 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float fmaf(float x, float y, float z) throw(); 
# 7693 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern int __signbitl(long double) throw(); 
# 7699
extern int __finitel(long double) throw(); 
# 7700
extern int __isinfl(long double) throw(); 
# 7701
extern int __isnanl(long double) throw(); 
# 7751 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float acosf(float x) throw(); 
# 7791 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float asinf(float x) throw(); 
# 7831 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float atanf(float x) throw(); 
# 7864 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float atan2f(float y, float x) throw(); 
# 7888 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float cosf(float x) throw(); 
# 7930 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float sinf(float x) throw(); 
# 7972 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float tanf(float x) throw(); 
# 7996 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float coshf(float x) throw(); 
# 8037 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float sinhf(float x) throw(); 
# 8067 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float tanhf(float x) throw(); 
# 8118 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float logf(float x) throw(); 
# 8168 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float expf(float x) throw(); 
# 8219 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float log10f(float x) throw(); 
# 8274 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float modff(float x, float * iptr) throw(); 
# 8582 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float powf(float x, float y) throw(); 
# 8651 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float sqrtf(float x) throw(); 
# 8710 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float ceilf(float x) throw(); 
# 8782 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float floorf(float x) throw(); 
# 8841 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern float fmodf(float x, float y) throw(); 
# 8856 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
}
# 29 "/usr/include/math.h" 3
extern "C" {
# 28 "/usr/include/bits/mathdef.h" 3
typedef float float_t; 
# 29
typedef double double_t; 
# 54 "/usr/include/bits/mathcalls.h" 3
extern double acos(double __x) throw(); extern double __acos(double __x) throw(); 
# 56
extern double asin(double __x) throw(); extern double __asin(double __x) throw(); 
# 58
extern double atan(double __x) throw(); extern double __atan(double __x) throw(); 
# 60
extern double atan2(double __y, double __x) throw(); extern double __atan2(double __y, double __x) throw(); 
# 63
extern double cos(double __x) throw(); extern double __cos(double __x) throw(); 
# 65
extern double sin(double __x) throw(); extern double __sin(double __x) throw(); 
# 67
extern double tan(double __x) throw(); extern double __tan(double __x) throw(); 
# 72
extern double cosh(double __x) throw(); extern double __cosh(double __x) throw(); 
# 74
extern double sinh(double __x) throw(); extern double __sinh(double __x) throw(); 
# 76
extern double tanh(double __x) throw(); extern double __tanh(double __x) throw(); 
# 81
extern void sincos(double __x, double * __sinx, double * __cosx) throw(); extern void __sincos(double __x, double * __sinx, double * __cosx) throw(); 
# 88
extern double acosh(double __x) throw(); extern double __acosh(double __x) throw(); 
# 90
extern double asinh(double __x) throw(); extern double __asinh(double __x) throw(); 
# 92
extern double atanh(double __x) throw(); extern double __atanh(double __x) throw(); 
# 100
extern double exp(double __x) throw(); extern double __exp(double __x) throw(); 
# 103
extern double frexp(double __x, int * __exponent) throw(); extern double __frexp(double __x, int * __exponent) throw(); 
# 106
extern double ldexp(double __x, int __exponent) throw(); extern double __ldexp(double __x, int __exponent) throw(); 
# 109
extern double log(double __x) throw(); extern double __log(double __x) throw(); 
# 112
extern double log10(double __x) throw(); extern double __log10(double __x) throw(); 
# 115
extern double modf(double __x, double * __iptr) throw(); extern double __modf(double __x, double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern double exp10(double __x) throw(); extern double __exp10(double __x) throw(); 
# 123
extern double pow10(double __x) throw(); extern double __pow10(double __x) throw(); 
# 129
extern double expm1(double __x) throw(); extern double __expm1(double __x) throw(); 
# 132
extern double log1p(double __x) throw(); extern double __log1p(double __x) throw(); 
# 135
extern double logb(double __x) throw(); extern double __logb(double __x) throw(); 
# 142
extern double exp2(double __x) throw(); extern double __exp2(double __x) throw(); 
# 145
extern double log2(double __x) throw(); extern double __log2(double __x) throw(); 
# 154
extern double pow(double __x, double __y) throw(); extern double __pow(double __x, double __y) throw(); 
# 157
extern double sqrt(double __x) throw(); extern double __sqrt(double __x) throw(); 
# 163
extern double hypot(double __x, double __y) throw(); extern double __hypot(double __x, double __y) throw(); 
# 170
extern double cbrt(double __x) throw(); extern double __cbrt(double __x) throw(); 
# 179
extern double ceil(double __x) throw() __attribute((const)); extern double __ceil(double __x) throw() __attribute((const)); 
# 182
extern double fabs(double __x) throw() __attribute((const)); extern double __fabs(double __x) throw() __attribute((const)); 
# 185
extern double floor(double __x) throw() __attribute((const)); extern double __floor(double __x) throw() __attribute((const)); 
# 188
extern double fmod(double __x, double __y) throw(); extern double __fmod(double __x, double __y) throw(); 
# 193
extern int __isinf(double __value) throw() __attribute((const)); 
# 196
extern int __finite(double __value) throw() __attribute((const)); 
# 202
extern inline int isinf(double __value) throw() __attribute((const)); 
# 205
extern int finite(double __value) throw() __attribute((const)); 
# 208
extern double drem(double __x, double __y) throw(); extern double __drem(double __x, double __y) throw(); 
# 212
extern double significand(double __x) throw(); extern double __significand(double __x) throw(); 
# 218
extern double copysign(double __x, double __y) throw() __attribute((const)); extern double __copysign(double __x, double __y) throw() __attribute((const)); 
# 225
extern double nan(const char * __tagb) throw() __attribute((const)); extern double __nan(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnan(double __value) throw() __attribute((const)); 
# 235
extern inline int isnan(double __value) throw() __attribute((const)); 
# 238
extern double j0(double) throw(); extern double __j0(double) throw(); 
# 239
extern double j1(double) throw(); extern double __j1(double) throw(); 
# 240
extern double jn(int, double) throw(); extern double __jn(int, double) throw(); 
# 241
extern double y0(double) throw(); extern double __y0(double) throw(); 
# 242
extern double y1(double) throw(); extern double __y1(double) throw(); 
# 243
extern double yn(int, double) throw(); extern double __yn(int, double) throw(); 
# 250
extern double erf(double) throw(); extern double __erf(double) throw(); 
# 251
extern double erfc(double) throw(); extern double __erfc(double) throw(); 
# 252
extern double lgamma(double) throw(); extern double __lgamma(double) throw(); 
# 259
extern double tgamma(double) throw(); extern double __tgamma(double) throw(); 
# 265
extern double gamma(double) throw(); extern double __gamma(double) throw(); 
# 272
extern double lgamma_r(double, int * __signgamp) throw(); extern double __lgamma_r(double, int * __signgamp) throw(); 
# 280
extern double rint(double __x) throw(); extern double __rint(double __x) throw(); 
# 283
extern double nextafter(double __x, double __y) throw() __attribute((const)); extern double __nextafter(double __x, double __y) throw() __attribute((const)); 
# 285
extern double nexttoward(double __x, long double __y) throw() __attribute((const)); extern double __nexttoward(double __x, long double __y) throw() __attribute((const)); 
# 289
extern double remainder(double __x, double __y) throw(); extern double __remainder(double __x, double __y) throw(); 
# 293
extern double scalbn(double __x, int __n) throw(); extern double __scalbn(double __x, int __n) throw(); 
# 297
extern int ilogb(double __x) throw(); extern int __ilogb(double __x) throw(); 
# 302
extern double scalbln(double __x, long __n) throw(); extern double __scalbln(double __x, long __n) throw(); 
# 306
extern double nearbyint(double __x) throw(); extern double __nearbyint(double __x) throw(); 
# 310
extern double round(double __x) throw() __attribute((const)); extern double __round(double __x) throw() __attribute((const)); 
# 314
extern double trunc(double __x) throw() __attribute((const)); extern double __trunc(double __x) throw() __attribute((const)); 
# 319
extern double remquo(double __x, double __y, int * __quo) throw(); extern double __remquo(double __x, double __y, int * __quo) throw(); 
# 326
extern long lrint(double __x) throw(); extern long __lrint(double __x) throw(); 
# 327
extern long long llrint(double __x) throw(); extern long long __llrint(double __x) throw(); 
# 331
extern long lround(double __x) throw(); extern long __lround(double __x) throw(); 
# 332
extern long long llround(double __x) throw(); extern long long __llround(double __x) throw(); 
# 336
extern double fdim(double __x, double __y) throw(); extern double __fdim(double __x, double __y) throw(); 
# 339
extern double fmax(double __x, double __y) throw() __attribute((const)); extern double __fmax(double __x, double __y) throw() __attribute((const)); 
# 342
extern double fmin(double __x, double __y) throw() __attribute((const)); extern double __fmin(double __x, double __y) throw() __attribute((const)); 
# 346
extern int __fpclassify(double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbit(double __value) throw()
# 351
 __attribute((const)); 
# 355
extern double fma(double __x, double __y, double __z) throw(); extern double __fma(double __x, double __y, double __z) throw(); 
# 364
extern double scalb(double __x, double __n) throw(); extern double __scalb(double __x, double __n) throw(); 
# 54 "/usr/include/bits/mathcalls.h" 3
extern float acosf(float __x) throw(); extern float __acosf(float __x) throw(); 
# 56
extern float asinf(float __x) throw(); extern float __asinf(float __x) throw(); 
# 58
extern float atanf(float __x) throw(); extern float __atanf(float __x) throw(); 
# 60
extern float atan2f(float __y, float __x) throw(); extern float __atan2f(float __y, float __x) throw(); 
# 63
extern float cosf(float __x) throw(); 
# 65
extern float sinf(float __x) throw(); 
# 67
extern float tanf(float __x) throw(); 
# 72
extern float coshf(float __x) throw(); extern float __coshf(float __x) throw(); 
# 74
extern float sinhf(float __x) throw(); extern float __sinhf(float __x) throw(); 
# 76
extern float tanhf(float __x) throw(); extern float __tanhf(float __x) throw(); 
# 81
extern void sincosf(float __x, float * __sinx, float * __cosx) throw(); 
# 88
extern float acoshf(float __x) throw(); extern float __acoshf(float __x) throw(); 
# 90
extern float asinhf(float __x) throw(); extern float __asinhf(float __x) throw(); 
# 92
extern float atanhf(float __x) throw(); extern float __atanhf(float __x) throw(); 
# 100
extern float expf(float __x) throw(); 
# 103
extern float frexpf(float __x, int * __exponent) throw(); extern float __frexpf(float __x, int * __exponent) throw(); 
# 106
extern float ldexpf(float __x, int __exponent) throw(); extern float __ldexpf(float __x, int __exponent) throw(); 
# 109
extern float logf(float __x) throw(); 
# 112
extern float log10f(float __x) throw(); 
# 115
extern float modff(float __x, float * __iptr) throw(); extern float __modff(float __x, float * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern float exp10f(float __x) throw(); 
# 123
extern float pow10f(float __x) throw(); extern float __pow10f(float __x) throw(); 
# 129
extern float expm1f(float __x) throw(); extern float __expm1f(float __x) throw(); 
# 132
extern float log1pf(float __x) throw(); extern float __log1pf(float __x) throw(); 
# 135
extern float logbf(float __x) throw(); extern float __logbf(float __x) throw(); 
# 142
extern float exp2f(float __x) throw(); extern float __exp2f(float __x) throw(); 
# 145
extern float log2f(float __x) throw(); 
# 154
extern float powf(float __x, float __y) throw(); 
# 157
extern float sqrtf(float __x) throw(); extern float __sqrtf(float __x) throw(); 
# 163
extern float hypotf(float __x, float __y) throw(); extern float __hypotf(float __x, float __y) throw(); 
# 170
extern float cbrtf(float __x) throw(); extern float __cbrtf(float __x) throw(); 
# 179
extern float ceilf(float __x) throw() __attribute((const)); extern float __ceilf(float __x) throw() __attribute((const)); 
# 182
extern float fabsf(float __x) throw() __attribute((const)); extern float __fabsf(float __x) throw() __attribute((const)); 
# 185
extern float floorf(float __x) throw() __attribute((const)); extern float __floorf(float __x) throw() __attribute((const)); 
# 188
extern float fmodf(float __x, float __y) throw(); extern float __fmodf(float __x, float __y) throw(); 
# 193
extern int __isinff(float __value) throw() __attribute((const)); 
# 196
extern int __finitef(float __value) throw() __attribute((const)); 
# 202
extern int isinff(float __value) throw() __attribute((const)); 
# 205
extern int finitef(float __value) throw() __attribute((const)); 
# 208
extern float dremf(float __x, float __y) throw(); extern float __dremf(float __x, float __y) throw(); 
# 212
extern float significandf(float __x) throw(); extern float __significandf(float __x) throw(); 
# 218
extern float copysignf(float __x, float __y) throw() __attribute((const)); extern float __copysignf(float __x, float __y) throw() __attribute((const)); 
# 225
extern float nanf(const char * __tagb) throw() __attribute((const)); extern float __nanf(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanf(float __value) throw() __attribute((const)); 
# 235
extern int isnanf(float __value) throw() __attribute((const)); 
# 238
extern float j0f(float) throw(); extern float __j0f(float) throw(); 
# 239
extern float j1f(float) throw(); extern float __j1f(float) throw(); 
# 240
extern float jnf(int, float) throw(); extern float __jnf(int, float) throw(); 
# 241
extern float y0f(float) throw(); extern float __y0f(float) throw(); 
# 242
extern float y1f(float) throw(); extern float __y1f(float) throw(); 
# 243
extern float ynf(int, float) throw(); extern float __ynf(int, float) throw(); 
# 250
extern float erff(float) throw(); extern float __erff(float) throw(); 
# 251
extern float erfcf(float) throw(); extern float __erfcf(float) throw(); 
# 252
extern float lgammaf(float) throw(); extern float __lgammaf(float) throw(); 
# 259
extern float tgammaf(float) throw(); extern float __tgammaf(float) throw(); 
# 265
extern float gammaf(float) throw(); extern float __gammaf(float) throw(); 
# 272
extern float lgammaf_r(float, int * __signgamp) throw(); extern float __lgammaf_r(float, int * __signgamp) throw(); 
# 280
extern float rintf(float __x) throw(); extern float __rintf(float __x) throw(); 
# 283
extern float nextafterf(float __x, float __y) throw() __attribute((const)); extern float __nextafterf(float __x, float __y) throw() __attribute((const)); 
# 285
extern float nexttowardf(float __x, long double __y) throw() __attribute((const)); extern float __nexttowardf(float __x, long double __y) throw() __attribute((const)); 
# 289
extern float remainderf(float __x, float __y) throw(); extern float __remainderf(float __x, float __y) throw(); 
# 293
extern float scalbnf(float __x, int __n) throw(); extern float __scalbnf(float __x, int __n) throw(); 
# 297
extern int ilogbf(float __x) throw(); extern int __ilogbf(float __x) throw(); 
# 302
extern float scalblnf(float __x, long __n) throw(); extern float __scalblnf(float __x, long __n) throw(); 
# 306
extern float nearbyintf(float __x) throw(); extern float __nearbyintf(float __x) throw(); 
# 310
extern float roundf(float __x) throw() __attribute((const)); extern float __roundf(float __x) throw() __attribute((const)); 
# 314
extern float truncf(float __x) throw() __attribute((const)); extern float __truncf(float __x) throw() __attribute((const)); 
# 319
extern float remquof(float __x, float __y, int * __quo) throw(); extern float __remquof(float __x, float __y, int * __quo) throw(); 
# 326
extern long lrintf(float __x) throw(); extern long __lrintf(float __x) throw(); 
# 327
extern long long llrintf(float __x) throw(); extern long long __llrintf(float __x) throw(); 
# 331
extern long lroundf(float __x) throw(); extern long __lroundf(float __x) throw(); 
# 332
extern long long llroundf(float __x) throw(); extern long long __llroundf(float __x) throw(); 
# 336
extern float fdimf(float __x, float __y) throw(); extern float __fdimf(float __x, float __y) throw(); 
# 339
extern float fmaxf(float __x, float __y) throw() __attribute((const)); extern float __fmaxf(float __x, float __y) throw() __attribute((const)); 
# 342
extern float fminf(float __x, float __y) throw() __attribute((const)); extern float __fminf(float __x, float __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyf(float __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitf(float __value) throw()
# 351
 __attribute((const)); 
# 355
extern float fmaf(float __x, float __y, float __z) throw(); extern float __fmaf(float __x, float __y, float __z) throw(); 
# 364
extern float scalbf(float __x, float __n) throw(); extern float __scalbf(float __x, float __n) throw(); 
# 54 "/usr/include/bits/mathcalls.h" 3
extern long double acosl(long double __x) throw(); extern long double __acosl(long double __x) throw(); 
# 56
extern long double asinl(long double __x) throw(); extern long double __asinl(long double __x) throw(); 
# 58
extern long double atanl(long double __x) throw(); extern long double __atanl(long double __x) throw(); 
# 60
extern long double atan2l(long double __y, long double __x) throw(); extern long double __atan2l(long double __y, long double __x) throw(); 
# 63
extern long double cosl(long double __x) throw(); extern long double __cosl(long double __x) throw(); 
# 65
extern long double sinl(long double __x) throw(); extern long double __sinl(long double __x) throw(); 
# 67
extern long double tanl(long double __x) throw(); extern long double __tanl(long double __x) throw(); 
# 72
extern long double coshl(long double __x) throw(); extern long double __coshl(long double __x) throw(); 
# 74
extern long double sinhl(long double __x) throw(); extern long double __sinhl(long double __x) throw(); 
# 76
extern long double tanhl(long double __x) throw(); extern long double __tanhl(long double __x) throw(); 
# 81
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); 
# 88
extern long double acoshl(long double __x) throw(); extern long double __acoshl(long double __x) throw(); 
# 90
extern long double asinhl(long double __x) throw(); extern long double __asinhl(long double __x) throw(); 
# 92
extern long double atanhl(long double __x) throw(); extern long double __atanhl(long double __x) throw(); 
# 100
extern long double expl(long double __x) throw(); extern long double __expl(long double __x) throw(); 
# 103
extern long double frexpl(long double __x, int * __exponent) throw(); extern long double __frexpl(long double __x, int * __exponent) throw(); 
# 106
extern long double ldexpl(long double __x, int __exponent) throw(); extern long double __ldexpl(long double __x, int __exponent) throw(); 
# 109
extern long double logl(long double __x) throw(); extern long double __logl(long double __x) throw(); 
# 112
extern long double log10l(long double __x) throw(); extern long double __log10l(long double __x) throw(); 
# 115
extern long double modfl(long double __x, long double * __iptr) throw(); extern long double __modfl(long double __x, long double * __iptr) throw()
# 116
 __attribute((__nonnull__(2))); 
# 121
extern long double exp10l(long double __x) throw(); extern long double __exp10l(long double __x) throw(); 
# 123
extern long double pow10l(long double __x) throw(); extern long double __pow10l(long double __x) throw(); 
# 129
extern long double expm1l(long double __x) throw(); extern long double __expm1l(long double __x) throw(); 
# 132
extern long double log1pl(long double __x) throw(); extern long double __log1pl(long double __x) throw(); 
# 135
extern long double logbl(long double __x) throw(); extern long double __logbl(long double __x) throw(); 
# 142
extern long double exp2l(long double __x) throw(); extern long double __exp2l(long double __x) throw(); 
# 145
extern long double log2l(long double __x) throw(); extern long double __log2l(long double __x) throw(); 
# 154
extern long double powl(long double __x, long double __y) throw(); extern long double __powl(long double __x, long double __y) throw(); 
# 157
extern long double sqrtl(long double __x) throw(); extern long double __sqrtl(long double __x) throw(); 
# 163
extern long double hypotl(long double __x, long double __y) throw(); extern long double __hypotl(long double __x, long double __y) throw(); 
# 170
extern long double cbrtl(long double __x) throw(); extern long double __cbrtl(long double __x) throw(); 
# 179
extern long double ceill(long double __x) throw() __attribute((const)); extern long double __ceill(long double __x) throw() __attribute((const)); 
# 182
extern long double fabsl(long double __x) throw() __attribute((const)); extern long double __fabsl(long double __x) throw() __attribute((const)); 
# 185
extern long double floorl(long double __x) throw() __attribute((const)); extern long double __floorl(long double __x) throw() __attribute((const)); 
# 188
extern long double fmodl(long double __x, long double __y) throw(); extern long double __fmodl(long double __x, long double __y) throw(); 
# 193
extern int __isinfl(long double __value) throw() __attribute((const)); 
# 196
extern int __finitel(long double __value) throw() __attribute((const)); 
# 202
extern int isinfl(long double __value) throw() __attribute((const)); 
# 205
extern int finitel(long double __value) throw() __attribute((const)); 
# 208
extern long double dreml(long double __x, long double __y) throw(); extern long double __dreml(long double __x, long double __y) throw(); 
# 212
extern long double significandl(long double __x) throw(); extern long double __significandl(long double __x) throw(); 
# 218
extern long double copysignl(long double __x, long double __y) throw() __attribute((const)); extern long double __copysignl(long double __x, long double __y) throw() __attribute((const)); 
# 225
extern long double nanl(const char * __tagb) throw() __attribute((const)); extern long double __nanl(const char * __tagb) throw() __attribute((const)); 
# 231
extern int __isnanl(long double __value) throw() __attribute((const)); 
# 235
extern int isnanl(long double __value) throw() __attribute((const)); 
# 238
extern long double j0l(long double) throw(); extern long double __j0l(long double) throw(); 
# 239
extern long double j1l(long double) throw(); extern long double __j1l(long double) throw(); 
# 240
extern long double jnl(int, long double) throw(); extern long double __jnl(int, long double) throw(); 
# 241
extern long double y0l(long double) throw(); extern long double __y0l(long double) throw(); 
# 242
extern long double y1l(long double) throw(); extern long double __y1l(long double) throw(); 
# 243
extern long double ynl(int, long double) throw(); extern long double __ynl(int, long double) throw(); 
# 250
extern long double erfl(long double) throw(); extern long double __erfl(long double) throw(); 
# 251
extern long double erfcl(long double) throw(); extern long double __erfcl(long double) throw(); 
# 252
extern long double lgammal(long double) throw(); extern long double __lgammal(long double) throw(); 
# 259
extern long double tgammal(long double) throw(); extern long double __tgammal(long double) throw(); 
# 265
extern long double gammal(long double) throw(); extern long double __gammal(long double) throw(); 
# 272
extern long double lgammal_r(long double, int * __signgamp) throw(); extern long double __lgammal_r(long double, int * __signgamp) throw(); 
# 280
extern long double rintl(long double __x) throw(); extern long double __rintl(long double __x) throw(); 
# 283
extern long double nextafterl(long double __x, long double __y) throw() __attribute((const)); extern long double __nextafterl(long double __x, long double __y) throw() __attribute((const)); 
# 285
extern long double nexttowardl(long double __x, long double __y) throw() __attribute((const)); extern long double __nexttowardl(long double __x, long double __y) throw() __attribute((const)); 
# 289
extern long double remainderl(long double __x, long double __y) throw(); extern long double __remainderl(long double __x, long double __y) throw(); 
# 293
extern long double scalbnl(long double __x, int __n) throw(); extern long double __scalbnl(long double __x, int __n) throw(); 
# 297
extern int ilogbl(long double __x) throw(); extern int __ilogbl(long double __x) throw(); 
# 302
extern long double scalblnl(long double __x, long __n) throw(); extern long double __scalblnl(long double __x, long __n) throw(); 
# 306
extern long double nearbyintl(long double __x) throw(); extern long double __nearbyintl(long double __x) throw(); 
# 310
extern long double roundl(long double __x) throw() __attribute((const)); extern long double __roundl(long double __x) throw() __attribute((const)); 
# 314
extern long double truncl(long double __x) throw() __attribute((const)); extern long double __truncl(long double __x) throw() __attribute((const)); 
# 319
extern long double remquol(long double __x, long double __y, int * __quo) throw(); extern long double __remquol(long double __x, long double __y, int * __quo) throw(); 
# 326
extern long lrintl(long double __x) throw(); extern long __lrintl(long double __x) throw(); 
# 327
extern long long llrintl(long double __x) throw(); extern long long __llrintl(long double __x) throw(); 
# 331
extern long lroundl(long double __x) throw(); extern long __lroundl(long double __x) throw(); 
# 332
extern long long llroundl(long double __x) throw(); extern long long __llroundl(long double __x) throw(); 
# 336
extern long double fdiml(long double __x, long double __y) throw(); extern long double __fdiml(long double __x, long double __y) throw(); 
# 339
extern long double fmaxl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxl(long double __x, long double __y) throw() __attribute((const)); 
# 342
extern long double fminl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminl(long double __x, long double __y) throw() __attribute((const)); 
# 346
extern int __fpclassifyl(long double __value) throw()
# 347
 __attribute((const)); 
# 350
extern int __signbitl(long double __value) throw()
# 351
 __attribute((const)); 
# 355
extern long double fmal(long double __x, long double __y, long double __z) throw(); extern long double __fmal(long double __x, long double __y, long double __z) throw(); 
# 364
extern long double scalbl(long double __x, long double __n) throw(); extern long double __scalbl(long double __x, long double __n) throw(); 
# 149 "/usr/include/math.h" 3
extern int signgam; 
# 191 "/usr/include/math.h" 3
enum { 
# 192
FP_NAN, 
# 195
FP_INFINITE, 
# 198
FP_ZERO, 
# 201
FP_SUBNORMAL, 
# 204
FP_NORMAL
# 207
}; 
# 295 "/usr/include/math.h" 3
typedef 
# 289
enum { 
# 290
_IEEE_ = (-1), 
# 291
_SVID_ = 0, 
# 292
_XOPEN_, 
# 293
_POSIX_, 
# 294
_ISOC_
# 295
} _LIB_VERSION_TYPE; 
# 300
extern _LIB_VERSION_TYPE _LIB_VERSION; 
# 311 "/usr/include/math.h" 3
struct __exception { 
# 316
int type; 
# 317
char *name; 
# 318
double arg1; 
# 319
double arg2; 
# 320
double retval; 
# 321
}; 
# 324
extern int matherr(__exception * __exc) throw(); 
# 475 "/usr/include/math.h" 3
}
# 34 "/usr/include/stdlib.h" 3
extern "C" {
# 45 "/usr/include/bits/byteswap.h" 3
static inline unsigned __bswap_32(unsigned __bsx) 
# 46
{ 
# 47
return __builtin_bswap32(__bsx); 
# 48
} 
# 109 "/usr/include/bits/byteswap.h" 3
static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 110
{ 
# 111
return __builtin_bswap64(__bsx); 
# 112
} 
# 66 "/usr/include/bits/waitstatus.h" 3
union wait { 
# 68
int w_status; 
# 70
struct { 
# 72
unsigned __w_termsig:7; 
# 73
unsigned __w_coredump:1; 
# 74
unsigned __w_retcode:8; 
# 75
unsigned:16; 
# 83
} __wait_terminated; 
# 85
struct { 
# 87
unsigned __w_stopval:8; 
# 88
unsigned __w_stopsig:8; 
# 89
unsigned:16; 
# 96
} __wait_stopped; 
# 97
}; 
# 101 "/usr/include/stdlib.h" 3
typedef 
# 98
struct { 
# 99
int quot; 
# 100
int rem; 
# 101
} div_t; 
# 109
typedef 
# 106
struct { 
# 107
long quot; 
# 108
long rem; 
# 109
} ldiv_t; 
# 121
__extension__ typedef 
# 118
struct { 
# 119
long long quot; 
# 120
long long rem; 
# 121
} lldiv_t; 
# 139 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max() throw(); 
# 144
extern double atof(const char * __nptr) throw()
# 145
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 147
extern int atoi(const char * __nptr) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 150
extern long atol(const char * __nptr) throw()
# 151
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 157
__extension__ extern long long atoll(const char * __nptr) throw()
# 158
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 164
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 166
 __attribute((__nonnull__(1))); 
# 172
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 173
 __attribute((__nonnull__(1))); 
# 175
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 177
 __attribute((__nonnull__(1))); 
# 183
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 185
 __attribute((__nonnull__(1))); 
# 187
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 189
 __attribute((__nonnull__(1))); 
# 195
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 197
 __attribute((__nonnull__(1))); 
# 200
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 202
 __attribute((__nonnull__(1))); 
# 209
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 211
 __attribute((__nonnull__(1))); 
# 214
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 216
 __attribute((__nonnull__(1))); 
# 239 "/usr/include/stdlib.h" 3
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 241
 __attribute((__nonnull__(1, 4))); 
# 243
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 246
 __attribute((__nonnull__(1, 4))); 
# 249
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 252
 __attribute((__nonnull__(1, 4))); 
# 255
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 258
 __attribute((__nonnull__(1, 4))); 
# 260
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 262
 __attribute((__nonnull__(1, 3))); 
# 264
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 266
 __attribute((__nonnull__(1, 3))); 
# 268
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 271
 __attribute((__nonnull__(1, 3))); 
# 305 "/usr/include/stdlib.h" 3
extern char *l64a(long __n) throw(); 
# 308
extern long a64l(const char * __s) throw()
# 309
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/usr/include/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 44
typedef __loff_t loff_t; 
# 48
typedef __ino_t ino_t; 
# 55
typedef __ino64_t ino64_t; 
# 60
typedef __dev_t dev_t; 
# 65
typedef __gid_t gid_t; 
# 70
typedef __mode_t mode_t; 
# 75
typedef __nlink_t nlink_t; 
# 80
typedef __uid_t uid_t; 
# 86
typedef __off_t off_t; 
# 93
typedef __off64_t off64_t; 
# 104 "/usr/include/sys/types.h" 3
typedef __id_t id_t; 
# 109
typedef __ssize_t ssize_t; 
# 115
typedef __daddr_t daddr_t; 
# 116
typedef __caddr_t caddr_t; 
# 122
typedef __key_t key_t; 
# 136 "/usr/include/sys/types.h" 3
typedef __useconds_t useconds_t; 
# 140
typedef __suseconds_t suseconds_t; 
# 150 "/usr/include/sys/types.h" 3
typedef unsigned long ulong; 
# 151
typedef unsigned short ushort; 
# 152
typedef unsigned uint; 
# 194 "/usr/include/sys/types.h" 3
typedef signed char int8_t __attribute((__mode__(__QI__))); 
# 195
typedef short int16_t __attribute((__mode__(__HI__))); 
# 196
typedef int int32_t __attribute((__mode__(__SI__))); 
# 197
typedef long int64_t __attribute((__mode__(__DI__))); 
# 200
typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); 
# 201
typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); 
# 202
typedef unsigned u_int32_t __attribute((__mode__(__SI__))); 
# 203
typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); 
# 205
typedef long register_t __attribute((__mode__(__word__))); 
# 23 "/usr/include/bits/sigset.h" 3
typedef int __sig_atomic_t; 
# 31
typedef 
# 29
struct { 
# 30
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 31
} __sigset_t; 
# 37 "/usr/include/sys/select.h" 3
typedef __sigset_t sigset_t; 
# 54 "/usr/include/sys/select.h" 3
typedef long __fd_mask; 
# 75 "/usr/include/sys/select.h" 3
typedef 
# 65
struct { 
# 69
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 75
} fd_set; 
# 82
typedef __fd_mask fd_mask; 
# 96 "/usr/include/sys/select.h" 3
extern "C" {
# 106 "/usr/include/sys/select.h" 3
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 118 "/usr/include/sys/select.h" 3
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 131 "/usr/include/sys/select.h" 3
}
# 29 "/usr/include/sys/sysmacros.h" 3
extern "C" {
# 32
__extension__ extern unsigned gnu_dev_major(unsigned long long __dev) throw()
# 33
 __attribute((const)); 
# 35
__extension__ extern unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 36
 __attribute((const)); 
# 38
__extension__ extern unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 40
 __attribute((const)); 
# 63 "/usr/include/sys/sysmacros.h" 3
}
# 228 "/usr/include/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 235
typedef __blkcnt_t blkcnt_t; 
# 239
typedef __fsblkcnt_t fsblkcnt_t; 
# 243
typedef __fsfilcnt_t fsfilcnt_t; 
# 262 "/usr/include/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t; 
# 263
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 264
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 60 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 63
union pthread_attr_t { 
# 65
char __size[56]; 
# 66
long __align; 
# 67
}; 
# 69
typedef pthread_attr_t pthread_attr_t; 
# 79
typedef 
# 75
struct __pthread_internal_list { 
# 77
__pthread_internal_list *__prev; 
# 78
__pthread_internal_list *__next; 
# 79
} __pthread_list_t; 
# 128 "/usr/include/bits/pthreadtypes.h" 3
typedef 
# 91 "/usr/include/bits/pthreadtypes.h" 3
union { 
# 92
struct __pthread_mutex_s { 
# 94
int __lock; 
# 95
unsigned __count; 
# 96
int __owner; 
# 98
unsigned __nusers; 
# 102
int __kind; 
# 104
short __spins; 
# 105
short __elision; 
# 106
__pthread_list_t __list; 
# 125 "/usr/include/bits/pthreadtypes.h" 3
} __data; 
# 126
char __size[40]; 
# 127
long __align; 
# 128
} pthread_mutex_t; 
# 134
typedef 
# 131
union { 
# 132
char __size[4]; 
# 133
int __align; 
# 134
} pthread_mutexattr_t; 
# 154
typedef 
# 140
union { 
# 142
struct { 
# 143
int __lock; 
# 144
unsigned __futex; 
# 145
__extension__ unsigned long long __total_seq; 
# 146
__extension__ unsigned long long __wakeup_seq; 
# 147
__extension__ unsigned long long __woken_seq; 
# 148
void *__mutex; 
# 149
unsigned __nwaiters; 
# 150
unsigned __broadcast_seq; 
# 151
} __data; 
# 152
char __size[48]; 
# 153
__extension__ long long __align; 
# 154
} pthread_cond_t; 
# 160
typedef 
# 157
union { 
# 158
char __size[4]; 
# 159
int __align; 
# 160
} pthread_condattr_t; 
# 164
typedef unsigned pthread_key_t; 
# 168
typedef int pthread_once_t; 
# 214 "/usr/include/bits/pthreadtypes.h" 3
typedef 
# 175 "/usr/include/bits/pthreadtypes.h" 3
union { 
# 178
struct { 
# 179
int __lock; 
# 180
unsigned __nr_readers; 
# 181
unsigned __readers_wakeup; 
# 182
unsigned __writer_wakeup; 
# 183
unsigned __nr_readers_queued; 
# 184
unsigned __nr_writers_queued; 
# 185
int __writer; 
# 186
int __shared; 
# 187
unsigned long __pad1; 
# 188
unsigned long __pad2; 
# 191
unsigned __flags; 
# 193
} __data; 
# 212 "/usr/include/bits/pthreadtypes.h" 3
char __size[56]; 
# 213
long __align; 
# 214
} pthread_rwlock_t; 
# 220
typedef 
# 217
union { 
# 218
char __size[8]; 
# 219
long __align; 
# 220
} pthread_rwlockattr_t; 
# 226
typedef volatile int pthread_spinlock_t; 
# 235
typedef 
# 232
union { 
# 233
char __size[32]; 
# 234
long __align; 
# 235
} pthread_barrier_t; 
# 241
typedef 
# 238
union { 
# 239
char __size[4]; 
# 240
int __align; 
# 241
} pthread_barrierattr_t; 
# 273 "/usr/include/sys/types.h" 3
}
# 321 "/usr/include/stdlib.h" 3
extern long random() throw(); 
# 324
extern void srandom(unsigned __seed) throw(); 
# 330
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) throw()
# 331
 __attribute((__nonnull__(2))); 
# 335
extern char *setstate(char * __statebuf) throw() __attribute((__nonnull__(1))); 
# 343
struct random_data { 
# 345
int32_t *fptr; 
# 346
int32_t *rptr; 
# 347
int32_t *state; 
# 348
int rand_type; 
# 349
int rand_deg; 
# 350
int rand_sep; 
# 351
int32_t *end_ptr; 
# 352
}; 
# 354
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) throw()
# 355
 __attribute((__nonnull__(1, 2))); 
# 357
extern int srandom_r(unsigned __seed, random_data * __buf) throw()
# 358
 __attribute((__nonnull__(2))); 
# 360
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) throw()
# 363
 __attribute((__nonnull__(2, 4))); 
# 365
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) throw()
# 367
 __attribute((__nonnull__(1, 2))); 
# 374
extern int rand() throw(); 
# 376
extern void srand(unsigned __seed) throw(); 
# 381
extern int rand_r(unsigned * __seed) throw(); 
# 389
extern double drand48() throw(); 
# 390
extern double erand48(unsigned short  __xsubi[3]) throw() __attribute((__nonnull__(1))); 
# 393
extern long lrand48() throw(); 
# 394
extern long nrand48(unsigned short  __xsubi[3]) throw()
# 395
 __attribute((__nonnull__(1))); 
# 398
extern long mrand48() throw(); 
# 399
extern long jrand48(unsigned short  __xsubi[3]) throw()
# 400
 __attribute((__nonnull__(1))); 
# 403
extern void srand48(long __seedval) throw(); 
# 404
extern unsigned short *seed48(unsigned short  __seed16v[3]) throw()
# 405
 __attribute((__nonnull__(1))); 
# 406
extern void lcong48(unsigned short  __param[7]) throw() __attribute((__nonnull__(1))); 
# 412
struct drand48_data { 
# 414
unsigned short __x[3]; 
# 415
unsigned short __old_x[3]; 
# 416
unsigned short __c; 
# 417
unsigned short __init; 
# 418
unsigned long long __a; 
# 419
}; 
# 422
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 423
 __attribute((__nonnull__(1, 2))); 
# 424
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 426
 __attribute((__nonnull__(1, 2))); 
# 429
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 431
 __attribute((__nonnull__(1, 2))); 
# 432
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 435
 __attribute((__nonnull__(1, 2))); 
# 438
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 440
 __attribute((__nonnull__(1, 2))); 
# 441
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 444
 __attribute((__nonnull__(1, 2))); 
# 447
extern int srand48_r(long __seedval, drand48_data * __buffer) throw()
# 448
 __attribute((__nonnull__(2))); 
# 450
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) throw()
# 451
 __attribute((__nonnull__(1, 2))); 
# 453
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) throw()
# 455
 __attribute((__nonnull__(1, 2))); 
# 465
extern void *malloc(size_t __size) throw() __attribute((__malloc__)); 
# 467
extern void *calloc(size_t __nmemb, size_t __size) throw()
# 468
 __attribute((__malloc__)); 
# 479
extern void *realloc(void * __ptr, size_t __size) throw()
# 480
 __attribute((__warn_unused_result__)); 
# 482
extern void free(void * __ptr) throw(); 
# 487
extern void cfree(void * __ptr) throw(); 
# 26 "/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) throw(); 
# 38
}
# 497 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) throw() __attribute((__malloc__)); 
# 502
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) throw()
# 503
 __attribute((__nonnull__(1))); 
# 508
extern void *aligned_alloc(size_t __alignment, size_t __size) throw()
# 509
 __attribute((__malloc__, __alloc_size__(2))); 
# 514
extern void abort() throw() __attribute((__noreturn__)); 
# 518
extern int atexit(void (* __func)(void)) throw() __attribute((__nonnull__(1))); 
# 523
extern "C++" int at_quick_exit(void (* __func)(void)) throw() __asm__("at_quick_exit")
# 524
 __attribute((__nonnull__(1))); 
# 534
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) throw()
# 535
 __attribute((__nonnull__(1))); 
# 542
extern void exit(int __status) throw() __attribute((__noreturn__)); 
# 548
extern void quick_exit(int __status) throw() __attribute((__noreturn__)); 
# 556
extern void _Exit(int __status) throw() __attribute((__noreturn__)); 
# 563
extern char *getenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 569
extern char *secure_getenv(const char * __name) throw()
# 570
 __attribute((__nonnull__(1))); 
# 577
extern int putenv(char * __string) throw() __attribute((__nonnull__(1))); 
# 583
extern int setenv(const char * __name, const char * __value, int __replace) throw()
# 584
 __attribute((__nonnull__(2))); 
# 587
extern int unsetenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 594
extern int clearenv() throw(); 
# 605 "/usr/include/stdlib.h" 3
extern char *mktemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 619 "/usr/include/stdlib.h" 3
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 629 "/usr/include/stdlib.h" 3
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 641 "/usr/include/stdlib.h" 3
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 651 "/usr/include/stdlib.h" 3
extern int mkstemps64(char * __template, int __suffixlen)
# 652
 __attribute((__nonnull__(1))); 
# 662 "/usr/include/stdlib.h" 3
extern char *mkdtemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 673 "/usr/include/stdlib.h" 3
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 683 "/usr/include/stdlib.h" 3
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 693 "/usr/include/stdlib.h" 3
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 694
 __attribute((__nonnull__(1))); 
# 705 "/usr/include/stdlib.h" 3
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 706
 __attribute((__nonnull__(1))); 
# 716
extern int system(const char * __command); 
# 723
extern char *canonicalize_file_name(const char * __name) throw()
# 724
 __attribute((__nonnull__(1))); 
# 733 "/usr/include/stdlib.h" 3
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw(); 
# 741
typedef int (*__compar_fn_t)(const void *, const void *); 
# 744
typedef __compar_fn_t comparison_fn_t; 
# 748
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 754
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 756
 __attribute((__nonnull__(1, 2, 5))); 
# 760
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 761
 __attribute((__nonnull__(1, 4))); 
# 763
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 765
 __attribute((__nonnull__(1, 4))); 
# 770
extern int abs(int __x) throw() __attribute((const)); 
# 771
extern long labs(long __x) throw() __attribute((const)); 
# 775
__extension__ extern long long llabs(long long __x) throw()
# 776
 __attribute((const)); 
# 784
extern div_t div(int __numer, int __denom) throw()
# 785
 __attribute((const)); 
# 786
extern ldiv_t ldiv(long __numer, long __denom) throw()
# 787
 __attribute((const)); 
# 792
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) throw()
# 794
 __attribute((const)); 
# 807 "/usr/include/stdlib.h" 3
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 808
 __attribute((__nonnull__(3, 4))); 
# 813
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 814
 __attribute((__nonnull__(3, 4))); 
# 819
extern char *gcvt(double __value, int __ndigit, char * __buf) throw()
# 820
 __attribute((__nonnull__(3))); 
# 825
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 827
 __attribute((__nonnull__(3, 4))); 
# 828
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 830
 __attribute((__nonnull__(3, 4))); 
# 831
extern char *qgcvt(long double __value, int __ndigit, char * __buf) throw()
# 832
 __attribute((__nonnull__(3))); 
# 837
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 839
 __attribute((__nonnull__(3, 4, 5))); 
# 840
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 842
 __attribute((__nonnull__(3, 4, 5))); 
# 844
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 847
 __attribute((__nonnull__(3, 4, 5))); 
# 848
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 851
 __attribute((__nonnull__(3, 4, 5))); 
# 859
extern int mblen(const char * __s, size_t __n) throw(); 
# 862
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) throw(); 
# 866
extern int wctomb(char * __s, wchar_t __wchar) throw(); 
# 870
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) throw(); 
# 873
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) throw(); 
# 884
extern int rpmatch(const char * __response) throw() __attribute((__nonnull__(1))); 
# 895 "/usr/include/stdlib.h" 3
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) throw()
# 898
 __attribute((__nonnull__(1, 2, 3))); 
# 904
extern void setkey(const char * __key) throw() __attribute((__nonnull__(1))); 
# 912
extern int posix_openpt(int __oflag); 
# 920
extern int grantpt(int __fd) throw(); 
# 924
extern int unlockpt(int __fd) throw(); 
# 929
extern char *ptsname(int __fd) throw(); 
# 936
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) throw()
# 937
 __attribute((__nonnull__(2))); 
# 940
extern int getpt(); 
# 947
extern int getloadavg(double  __loadavg[], int __nelem) throw()
# 948
 __attribute((__nonnull__(1))); 
# 964 "/usr/include/stdlib.h" 3
}
# 1855 "/usr/include/c++/4.8.2/x86_64-redhat-linux/bits/c++config.h" 3
namespace std { 
# 1857
typedef unsigned long size_t; 
# 1858
typedef long ptrdiff_t; 
# 1863
}
# 68 "/usr/include/c++/4.8.2/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 72
template< class _Iterator, class _Container> class __normal_iterator; 
# 76
}
# 78
namespace std __attribute((__visibility__("default"))) { 
# 82
struct __true_type { }; 
# 83
struct __false_type { }; 
# 85
template< bool > 
# 86
struct __truth_type { 
# 87
typedef __false_type __type; }; 
# 90
template<> struct __truth_type< true>  { 
# 91
typedef __true_type __type; }; 
# 95
template< class _Sp, class _Tp> 
# 96
struct __traitor { 
# 98
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 99
typedef typename __truth_type< __value> ::__type __type; 
# 100
}; 
# 103
template< class , class > 
# 104
struct __are_same { 
# 106
enum { __value}; 
# 107
typedef __false_type __type; 
# 108
}; 
# 110
template< class _Tp> 
# 111
struct __are_same< _Tp, _Tp>  { 
# 113
enum { __value = 1}; 
# 114
typedef __true_type __type; 
# 115
}; 
# 118
template< class _Tp> 
# 119
struct __is_void { 
# 121
enum { __value}; 
# 122
typedef __false_type __type; 
# 123
}; 
# 126
template<> struct __is_void< void>  { 
# 128
enum { __value = 1}; 
# 129
typedef __true_type __type; 
# 130
}; 
# 135
template< class _Tp> 
# 136
struct __is_integer { 
# 138
enum { __value}; 
# 139
typedef __false_type __type; 
# 140
}; 
# 146
template<> struct __is_integer< bool>  { 
# 148
enum { __value = 1}; 
# 149
typedef __true_type __type; 
# 150
}; 
# 153
template<> struct __is_integer< char>  { 
# 155
enum { __value = 1}; 
# 156
typedef __true_type __type; 
# 157
}; 
# 160
template<> struct __is_integer< signed char>  { 
# 162
enum { __value = 1}; 
# 163
typedef __true_type __type; 
# 164
}; 
# 167
template<> struct __is_integer< unsigned char>  { 
# 169
enum { __value = 1}; 
# 170
typedef __true_type __type; 
# 171
}; 
# 175
template<> struct __is_integer< wchar_t>  { 
# 177
enum { __value = 1}; 
# 178
typedef __true_type __type; 
# 179
}; 
# 199 "/usr/include/c++/4.8.2/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short>  { 
# 201
enum { __value = 1}; 
# 202
typedef __true_type __type; 
# 203
}; 
# 206
template<> struct __is_integer< unsigned short>  { 
# 208
enum { __value = 1}; 
# 209
typedef __true_type __type; 
# 210
}; 
# 213
template<> struct __is_integer< int>  { 
# 215
enum { __value = 1}; 
# 216
typedef __true_type __type; 
# 217
}; 
# 220
template<> struct __is_integer< unsigned>  { 
# 222
enum { __value = 1}; 
# 223
typedef __true_type __type; 
# 224
}; 
# 227
template<> struct __is_integer< long>  { 
# 229
enum { __value = 1}; 
# 230
typedef __true_type __type; 
# 231
}; 
# 234
template<> struct __is_integer< unsigned long>  { 
# 236
enum { __value = 1}; 
# 237
typedef __true_type __type; 
# 238
}; 
# 241
template<> struct __is_integer< long long>  { 
# 243
enum { __value = 1}; 
# 244
typedef __true_type __type; 
# 245
}; 
# 248
template<> struct __is_integer< unsigned long long>  { 
# 250
enum { __value = 1}; 
# 251
typedef __true_type __type; 
# 252
}; 
# 257
template< class _Tp> 
# 258
struct __is_floating { 
# 260
enum { __value}; 
# 261
typedef __false_type __type; 
# 262
}; 
# 266
template<> struct __is_floating< float>  { 
# 268
enum { __value = 1}; 
# 269
typedef __true_type __type; 
# 270
}; 
# 273
template<> struct __is_floating< double>  { 
# 275
enum { __value = 1}; 
# 276
typedef __true_type __type; 
# 277
}; 
# 280
template<> struct __is_floating< long double>  { 
# 282
enum { __value = 1}; 
# 283
typedef __true_type __type; 
# 284
}; 
# 289
template< class _Tp> 
# 290
struct __is_pointer { 
# 292
enum { __value}; 
# 293
typedef __false_type __type; 
# 294
}; 
# 296
template< class _Tp> 
# 297
struct __is_pointer< _Tp *>  { 
# 299
enum { __value = 1}; 
# 300
typedef __true_type __type; 
# 301
}; 
# 306
template< class _Tp> 
# 307
struct __is_normal_iterator { 
# 309
enum { __value}; 
# 310
typedef __false_type __type; 
# 311
}; 
# 313
template< class _Iterator, class _Container> 
# 314
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> >  { 
# 317
enum { __value = 1}; 
# 318
typedef __true_type __type; 
# 319
}; 
# 324
template< class _Tp> 
# 325
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 327
}; 
# 332
template< class _Tp> 
# 333
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> >  { 
# 335
}; 
# 340
template< class _Tp> 
# 341
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 343
}; 
# 348
template< class _Tp> 
# 349
struct __is_char { 
# 351
enum { __value}; 
# 352
typedef __false_type __type; 
# 353
}; 
# 356
template<> struct __is_char< char>  { 
# 358
enum { __value = 1}; 
# 359
typedef __true_type __type; 
# 360
}; 
# 364
template<> struct __is_char< wchar_t>  { 
# 366
enum { __value = 1}; 
# 367
typedef __true_type __type; 
# 368
}; 
# 371
template< class _Tp> 
# 372
struct __is_byte { 
# 374
enum { __value}; 
# 375
typedef __false_type __type; 
# 376
}; 
# 379
template<> struct __is_byte< char>  { 
# 381
enum { __value = 1}; 
# 382
typedef __true_type __type; 
# 383
}; 
# 386
template<> struct __is_byte< signed char>  { 
# 388
enum { __value = 1}; 
# 389
typedef __true_type __type; 
# 390
}; 
# 393
template<> struct __is_byte< unsigned char>  { 
# 395
enum { __value = 1}; 
# 396
typedef __true_type __type; 
# 397
}; 
# 402
template< class _Tp> 
# 403
struct __is_move_iterator { 
# 405
enum { __value}; 
# 406
typedef __false_type __type; 
# 407
}; 
# 422 "/usr/include/c++/4.8.2/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.8.2/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 42
template< bool , class > 
# 43
struct __enable_if { 
# 44
}; 
# 46
template< class _Tp> 
# 47
struct __enable_if< true, _Tp>  { 
# 48
typedef _Tp __type; }; 
# 52
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 53
struct __conditional_type { 
# 54
typedef _Iftrue __type; }; 
# 56
template< class _Iftrue, class _Iffalse> 
# 57
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 58
typedef _Iffalse __type; }; 
# 62
template< class _Tp> 
# 63
struct __add_unsigned { 
# 66
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 69
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 70
}; 
# 73
template<> struct __add_unsigned< char>  { 
# 74
typedef unsigned char __type; }; 
# 77
template<> struct __add_unsigned< signed char>  { 
# 78
typedef unsigned char __type; }; 
# 81
template<> struct __add_unsigned< short>  { 
# 82
typedef unsigned short __type; }; 
# 85
template<> struct __add_unsigned< int>  { 
# 86
typedef unsigned __type; }; 
# 89
template<> struct __add_unsigned< long>  { 
# 90
typedef unsigned long __type; }; 
# 93
template<> struct __add_unsigned< long long>  { 
# 94
typedef unsigned long long __type; }; 
# 98
template<> struct __add_unsigned< bool> ; 
# 101
template<> struct __add_unsigned< wchar_t> ; 
# 105
template< class _Tp> 
# 106
struct __remove_unsigned { 
# 109
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 112
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 113
}; 
# 116
template<> struct __remove_unsigned< char>  { 
# 117
typedef signed char __type; }; 
# 120
template<> struct __remove_unsigned< unsigned char>  { 
# 121
typedef signed char __type; }; 
# 124
template<> struct __remove_unsigned< unsigned short>  { 
# 125
typedef short __type; }; 
# 128
template<> struct __remove_unsigned< unsigned>  { 
# 129
typedef int __type; }; 
# 132
template<> struct __remove_unsigned< unsigned long>  { 
# 133
typedef long __type; }; 
# 136
template<> struct __remove_unsigned< unsigned long long>  { 
# 137
typedef long long __type; }; 
# 141
template<> struct __remove_unsigned< bool> ; 
# 144
template<> struct __remove_unsigned< wchar_t> ; 
# 148
template< class _Type> inline bool 
# 150
__is_null_pointer(_Type *__ptr) 
# 151
{ return __ptr == 0; } 
# 153
template< class _Type> inline bool 
# 155
__is_null_pointer(_Type) 
# 156
{ return false; } 
# 160
template< class _Tp, bool  = std::__is_integer< _Tp> ::__value> 
# 161
struct __promote { 
# 162
typedef double __type; }; 
# 167
template< class _Tp> 
# 168
struct __promote< _Tp, false>  { 
# 169
}; 
# 172
template<> struct __promote< long double>  { 
# 173
typedef long double __type; }; 
# 176
template<> struct __promote< double>  { 
# 177
typedef double __type; }; 
# 180
template<> struct __promote< float>  { 
# 181
typedef float __type; }; 
# 183
template< class _Tp, class _Up, class 
# 184
_Tp2 = typename __promote< _Tp> ::__type, class 
# 185
_Up2 = typename __promote< _Up> ::__type> 
# 186
struct __promote_2 { 
# 188
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 189
}; 
# 191
template< class _Tp, class _Up, class _Vp, class 
# 192
_Tp2 = typename __promote< _Tp> ::__type, class 
# 193
_Up2 = typename __promote< _Up> ::__type, class 
# 194
_Vp2 = typename __promote< _Vp> ::__type> 
# 195
struct __promote_3 { 
# 197
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 198
}; 
# 200
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 201
_Tp2 = typename __promote< _Tp> ::__type, class 
# 202
_Up2 = typename __promote< _Up> ::__type, class 
# 203
_Vp2 = typename __promote< _Vp> ::__type, class 
# 204
_Wp2 = typename __promote< _Wp> ::__type> 
# 205
struct __promote_4 { 
# 207
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 208
}; 
# 211
}
# 75 "/usr/include/c++/4.8.2/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 81
inline double abs(double __x) 
# 82
{ return __builtin_fabs(__x); } 
# 87
inline float abs(float __x) 
# 88
{ return __builtin_fabsf(__x); } 
# 91
inline long double abs(long double __x) 
# 92
{ return __builtin_fabsl(__x); } 
# 95
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
abs(_Tp __x) 
# 100
{ return __builtin_fabs(__x); } 
# 102
using ::acos;
# 106
inline float acos(float __x) 
# 107
{ return __builtin_acosf(__x); } 
# 110
inline long double acos(long double __x) 
# 111
{ return __builtin_acosl(__x); } 
# 114
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
acos(_Tp __x) 
# 119
{ return __builtin_acos(__x); } 
# 121
using ::asin;
# 125
inline float asin(float __x) 
# 126
{ return __builtin_asinf(__x); } 
# 129
inline long double asin(long double __x) 
# 130
{ return __builtin_asinl(__x); } 
# 133
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
asin(_Tp __x) 
# 138
{ return __builtin_asin(__x); } 
# 140
using ::atan;
# 144
inline float atan(float __x) 
# 145
{ return __builtin_atanf(__x); } 
# 148
inline long double atan(long double __x) 
# 149
{ return __builtin_atanl(__x); } 
# 152
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 156
atan(_Tp __x) 
# 157
{ return __builtin_atan(__x); } 
# 159
using ::atan2;
# 163
inline float atan2(float __y, float __x) 
# 164
{ return __builtin_atan2f(__y, __x); } 
# 167
inline long double atan2(long double __y, long double __x) 
# 168
{ return __builtin_atan2l(__y, __x); } 
# 171
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 174
atan2(_Tp __y, _Up __x) 
# 175
{ 
# 176
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 177
return atan2((__type)__y, (__type)__x); 
# 178
} 
# 180
using ::ceil;
# 184
inline float ceil(float __x) 
# 185
{ return __builtin_ceilf(__x); } 
# 188
inline long double ceil(long double __x) 
# 189
{ return __builtin_ceill(__x); } 
# 192
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
ceil(_Tp __x) 
# 197
{ return __builtin_ceil(__x); } 
# 199
using ::cos;
# 203
inline float cos(float __x) 
# 204
{ return __builtin_cosf(__x); } 
# 207
inline long double cos(long double __x) 
# 208
{ return __builtin_cosl(__x); } 
# 211
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cos(_Tp __x) 
# 216
{ return __builtin_cos(__x); } 
# 218
using ::cosh;
# 222
inline float cosh(float __x) 
# 223
{ return __builtin_coshf(__x); } 
# 226
inline long double cosh(long double __x) 
# 227
{ return __builtin_coshl(__x); } 
# 230
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
cosh(_Tp __x) 
# 235
{ return __builtin_cosh(__x); } 
# 237
using ::exp;
# 241
inline float exp(float __x) 
# 242
{ return __builtin_expf(__x); } 
# 245
inline long double exp(long double __x) 
# 246
{ return __builtin_expl(__x); } 
# 249
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
exp(_Tp __x) 
# 254
{ return __builtin_exp(__x); } 
# 256
using ::fabs;
# 260
inline float fabs(float __x) 
# 261
{ return __builtin_fabsf(__x); } 
# 264
inline long double fabs(long double __x) 
# 265
{ return __builtin_fabsl(__x); } 
# 268
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
fabs(_Tp __x) 
# 273
{ return __builtin_fabs(__x); } 
# 275
using ::floor;
# 279
inline float floor(float __x) 
# 280
{ return __builtin_floorf(__x); } 
# 283
inline long double floor(long double __x) 
# 284
{ return __builtin_floorl(__x); } 
# 287
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 291
floor(_Tp __x) 
# 292
{ return __builtin_floor(__x); } 
# 294
using ::fmod;
# 298
inline float fmod(float __x, float __y) 
# 299
{ return __builtin_fmodf(__x, __y); } 
# 302
inline long double fmod(long double __x, long double __y) 
# 303
{ return __builtin_fmodl(__x, __y); } 
# 306
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 309
fmod(_Tp __x, _Up __y) 
# 310
{ 
# 311
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 312
return fmod((__type)__x, (__type)__y); 
# 313
} 
# 315
using ::frexp;
# 319
inline float frexp(float __x, int *__exp) 
# 320
{ return __builtin_frexpf(__x, __exp); } 
# 323
inline long double frexp(long double __x, int *__exp) 
# 324
{ return __builtin_frexpl(__x, __exp); } 
# 327
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
frexp(_Tp __x, int *__exp) 
# 332
{ return __builtin_frexp(__x, __exp); } 
# 334
using ::ldexp;
# 338
inline float ldexp(float __x, int __exp) 
# 339
{ return __builtin_ldexpf(__x, __exp); } 
# 342
inline long double ldexp(long double __x, int __exp) 
# 343
{ return __builtin_ldexpl(__x, __exp); } 
# 346
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
ldexp(_Tp __x, int __exp) 
# 351
{ return __builtin_ldexp(__x, __exp); } 
# 353
using ::log;
# 357
inline float log(float __x) 
# 358
{ return __builtin_logf(__x); } 
# 361
inline long double log(long double __x) 
# 362
{ return __builtin_logl(__x); } 
# 365
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log(_Tp __x) 
# 370
{ return __builtin_log(__x); } 
# 372
using ::log10;
# 376
inline float log10(float __x) 
# 377
{ return __builtin_log10f(__x); } 
# 380
inline long double log10(long double __x) 
# 381
{ return __builtin_log10l(__x); } 
# 384
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 388
log10(_Tp __x) 
# 389
{ return __builtin_log10(__x); } 
# 391
using ::modf;
# 395
inline float modf(float __x, float *__iptr) 
# 396
{ return __builtin_modff(__x, __iptr); } 
# 399
inline long double modf(long double __x, long double *__iptr) 
# 400
{ return __builtin_modfl(__x, __iptr); } 
# 403
using ::pow;
# 407
inline float pow(float __x, float __y) 
# 408
{ return __builtin_powf(__x, __y); } 
# 411
inline long double pow(long double __x, long double __y) 
# 412
{ return __builtin_powl(__x, __y); } 
# 418
inline double pow(double __x, int __i) 
# 419
{ return __builtin_powi(__x, __i); } 
# 422
inline float pow(float __x, int __n) 
# 423
{ return __builtin_powif(__x, __n); } 
# 426
inline long double pow(long double __x, int __n) 
# 427
{ return __builtin_powil(__x, __n); } 
# 431
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 434
pow(_Tp __x, _Up __y) 
# 435
{ 
# 436
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 437
return pow((__type)__x, (__type)__y); 
# 438
} 
# 440
using ::sin;
# 444
inline float sin(float __x) 
# 445
{ return __builtin_sinf(__x); } 
# 448
inline long double sin(long double __x) 
# 449
{ return __builtin_sinl(__x); } 
# 452
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sin(_Tp __x) 
# 457
{ return __builtin_sin(__x); } 
# 459
using ::sinh;
# 463
inline float sinh(float __x) 
# 464
{ return __builtin_sinhf(__x); } 
# 467
inline long double sinh(long double __x) 
# 468
{ return __builtin_sinhl(__x); } 
# 471
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sinh(_Tp __x) 
# 476
{ return __builtin_sinh(__x); } 
# 478
using ::sqrt;
# 482
inline float sqrt(float __x) 
# 483
{ return __builtin_sqrtf(__x); } 
# 486
inline long double sqrt(long double __x) 
# 487
{ return __builtin_sqrtl(__x); } 
# 490
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
sqrt(_Tp __x) 
# 495
{ return __builtin_sqrt(__x); } 
# 497
using ::tan;
# 501
inline float tan(float __x) 
# 502
{ return __builtin_tanf(__x); } 
# 505
inline long double tan(long double __x) 
# 506
{ return __builtin_tanl(__x); } 
# 509
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tan(_Tp __x) 
# 514
{ return __builtin_tan(__x); } 
# 516
using ::tanh;
# 520
inline float tanh(float __x) 
# 521
{ return __builtin_tanhf(__x); } 
# 524
inline long double tanh(long double __x) 
# 525
{ return __builtin_tanhl(__x); } 
# 528
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 532
tanh(_Tp __x) 
# 533
{ return __builtin_tanh(__x); } 
# 536
}
# 555 "/usr/include/c++/4.8.2/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 805 "/usr/include/c++/4.8.2/cmath" 3
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 808
fpclassify(_Tp __f) 
# 809
{ 
# 810
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 811
return __builtin_fpclassify(0, 1, 4, 3, 2, (__type)__f); 
# 813
} 
# 815
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 818
isfinite(_Tp __f) 
# 819
{ 
# 820
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 821
return __builtin_isfinite((__type)__f); 
# 822
} 
# 824
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 827
isinf(_Tp __f) 
# 828
{ 
# 829
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 830
return __builtin_isinf((__type)__f); 
# 831
} 
# 833
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 836
isnan(_Tp __f) 
# 837
{ 
# 838
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 839
return __builtin_isnan((__type)__f); 
# 840
} 
# 842
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 845
isnormal(_Tp __f) 
# 846
{ 
# 847
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 848
return __builtin_isnormal((__type)__f); 
# 849
} 
# 851
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 854
signbit(_Tp __f) 
# 855
{ 
# 856
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 857
return __builtin_signbit((__type)__f); 
# 858
} 
# 860
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 863
isgreater(_Tp __f1, _Tp __f2) 
# 864
{ 
# 865
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 866
return __builtin_isgreater((__type)__f1, (__type)__f2); 
# 867
} 
# 869
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 872
isgreaterequal(_Tp __f1, _Tp __f2) 
# 873
{ 
# 874
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 875
return __builtin_isgreaterequal((__type)__f1, (__type)__f2); 
# 876
} 
# 878
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 881
isless(_Tp __f1, _Tp __f2) 
# 882
{ 
# 883
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 884
return __builtin_isless((__type)__f1, (__type)__f2); 
# 885
} 
# 887
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 890
islessequal(_Tp __f1, _Tp __f2) 
# 891
{ 
# 892
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 893
return __builtin_islessequal((__type)__f1, (__type)__f2); 
# 894
} 
# 896
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 899
islessgreater(_Tp __f1, _Tp __f2) 
# 900
{ 
# 901
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 902
return __builtin_islessgreater((__type)__f1, (__type)__f2); 
# 903
} 
# 905
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 908
isunordered(_Tp __f1, _Tp __f2) 
# 909
{ 
# 910
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 911
return __builtin_isunordered((__type)__f1, (__type)__f2); 
# 912
} 
# 917
}
# 114 "/usr/include/c++/4.8.2/cstdlib" 3
namespace std __attribute((__visibility__("default"))) { 
# 118
using ::div_t;
# 119
using ::ldiv_t;
# 121
using ::abort;
# 122
using ::abs;
# 123
using ::atexit;
# 129
using ::atof;
# 130
using ::atoi;
# 131
using ::atol;
# 132
using ::bsearch;
# 133
using ::calloc;
# 134
using ::div;
# 135
using ::exit;
# 136
using ::free;
# 137
using ::getenv;
# 138
using ::labs;
# 139
using ::ldiv;
# 140
using ::malloc;
# 142
using ::mblen;
# 143
using ::mbstowcs;
# 144
using ::mbtowc;
# 146
using ::qsort;
# 152
using ::rand;
# 153
using ::realloc;
# 154
using ::srand;
# 155
using ::strtod;
# 156
using ::strtol;
# 157
using ::strtoul;
# 158
using ::system;
# 160
using ::wcstombs;
# 161
using ::wctomb;
# 166
inline long abs(long __i) { return __builtin_labs(__i); } 
# 169
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 174
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 179
inline __int128_t abs(__int128_t __x) { return (__x >= (0)) ? __x : (-__x); } 
# 183
}
# 196 "/usr/include/c++/4.8.2/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 201
using ::lldiv_t;
# 207
using ::_Exit;
# 211
using ::llabs;
# 214
inline lldiv_t div(long long __n, long long __d) 
# 215
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 217
using ::lldiv;
# 228 "/usr/include/c++/4.8.2/cstdlib" 3
using ::atoll;
# 229
using ::strtoll;
# 230
using ::strtoull;
# 232
using ::strtof;
# 233
using ::strtold;
# 236
}
# 238
namespace std { 
# 241
using __gnu_cxx::lldiv_t;
# 243
using __gnu_cxx::_Exit;
# 245
using __gnu_cxx::llabs;
# 246
using __gnu_cxx::div;
# 247
using __gnu_cxx::lldiv;
# 249
using __gnu_cxx::atoll;
# 250
using __gnu_cxx::strtof;
# 251
using __gnu_cxx::strtoll;
# 252
using __gnu_cxx::strtoull;
# 253
using __gnu_cxx::strtold;
# 254
}
# 8984 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
__attribute((always_inline)) inline int signbit(float x); 
# 8988
__attribute((always_inline)) inline int signbit(double x); 
# 8990
__attribute((always_inline)) inline int signbit(long double x); 
# 8992
__attribute((always_inline)) inline int isfinite(float x); 
# 8996
__attribute((always_inline)) inline int isfinite(double x); 
# 8998
__attribute((always_inline)) inline int isfinite(long double x); 
# 9005
__attribute((always_inline)) inline int isnan(float x); 
# 9013
extern "C" __attribute((always_inline)) inline int isnan(double x) throw(); 
# 9018
__attribute((always_inline)) inline int isnan(long double x); 
# 9026
__attribute((always_inline)) inline int isinf(float x); 
# 9035 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern "C" __attribute((always_inline)) inline int isinf(double x) throw(); 
# 9040
__attribute((always_inline)) inline int isinf(long double x); 
# 9098 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
namespace std { 
# 9100
template< class T> extern T __pow_helper(T, int); 
# 9101
template< class T> extern T __cmath_power(T, unsigned); 
# 9102
}
# 9104
using std::abs;
# 9105
using std::fabs;
# 9106
using std::ceil;
# 9107
using std::floor;
# 9108
using std::sqrt;
# 9110
using std::pow;
# 9112
using std::log;
# 9113
using std::log10;
# 9114
using std::fmod;
# 9115
using std::modf;
# 9116
using std::exp;
# 9117
using std::frexp;
# 9118
using std::ldexp;
# 9119
using std::asin;
# 9120
using std::sin;
# 9121
using std::sinh;
# 9122
using std::acos;
# 9123
using std::cos;
# 9124
using std::cosh;
# 9125
using std::atan;
# 9126
using std::atan2;
# 9127
using std::tan;
# 9128
using std::tanh;
# 9493 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
namespace std { 
# 9502 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern inline long long abs(long long); 
# 9512 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern inline long abs(long); 
# 9513
extern inline float abs(float); 
# 9514
extern inline double abs(double); 
# 9515
extern inline float fabs(float); 
# 9516
extern inline float ceil(float); 
# 9517
extern inline float floor(float); 
# 9518
extern inline float sqrt(float); 
# 9519
extern inline float pow(float, float); 
# 9528 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
extern inline float pow(float, int); 
# 9529
extern inline double pow(double, int); 
# 9534
extern inline float log(float); 
# 9535
extern inline float log10(float); 
# 9536
extern inline float fmod(float, float); 
# 9537
extern inline float modf(float, float *); 
# 9538
extern inline float exp(float); 
# 9539
extern inline float frexp(float, int *); 
# 9540
extern inline float ldexp(float, int); 
# 9541
extern inline float asin(float); 
# 9542
extern inline float sin(float); 
# 9543
extern inline float sinh(float); 
# 9544
extern inline float acos(float); 
# 9545
extern inline float cos(float); 
# 9546
extern inline float cosh(float); 
# 9547
extern inline float atan(float); 
# 9548
extern inline float atan2(float, float); 
# 9549
extern inline float tan(float); 
# 9550
extern inline float tanh(float); 
# 9624 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
}
# 9761 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
static inline float logb(float a); 
# 9763
static inline int ilogb(float a); 
# 9765
static inline float scalbn(float a, int b); 
# 9767
static inline float scalbln(float a, long b); 
# 9769
static inline float exp2(float a); 
# 9771
static inline float expm1(float a); 
# 9773
static inline float log2(float a); 
# 9775
static inline float log1p(float a); 
# 9777
static inline float acosh(float a); 
# 9779
static inline float asinh(float a); 
# 9781
static inline float atanh(float a); 
# 9783
static inline float hypot(float a, float b); 
# 9785
static inline float cbrt(float a); 
# 9787
static inline float erf(float a); 
# 9789
static inline float erfc(float a); 
# 9791
static inline float lgamma(float a); 
# 9793
static inline float tgamma(float a); 
# 9795
static inline float copysign(float a, float b); 
# 9797
static inline float nextafter(float a, float b); 
# 9799
static inline float remainder(float a, float b); 
# 9801
static inline float remquo(float a, float b, int * quo); 
# 9803
static inline float round(float a); 
# 9805
static inline long lround(float a); 
# 9807
static inline long long llround(float a); 
# 9809
static inline float trunc(float a); 
# 9811
static inline float rint(float a); 
# 9813
static inline long lrint(float a); 
# 9815
static inline long long llrint(float a); 
# 9817
static inline float nearbyint(float a); 
# 9819
static inline float fdim(float a, float b); 
# 9821
static inline float fma(float a, float b, float c); 
# 9823
static inline float fmax(float a, float b); 
# 9825
static inline float fmin(float a, float b); 
# 9864 "/usr/local/cuda-10.1/include/crt/math_functions.h" 3
static inline float exp10(float a); 
# 9866
static inline float rsqrt(float a); 
# 9868
static inline float rcbrt(float a); 
# 9870
static inline float sinpi(float a); 
# 9872
static inline float cospi(float a); 
# 9874
static inline void sincospi(float a, float * sptr, float * cptr); 
# 9876
static inline void sincos(float a, float * sptr, float * cptr); 
# 9878
static inline float j0(float a); 
# 9880
static inline float j1(float a); 
# 9882
static inline float jn(int n, float a); 
# 9884
static inline float y0(float a); 
# 9886
static inline float y1(float a); 
# 9888
static inline float yn(int n, float a); 
# 9890
static inline float cyl_bessel_i0(float a); 
# 9892
static inline float cyl_bessel_i1(float a); 
# 9894
static inline float erfinv(float a); 
# 9896
static inline float erfcinv(float a); 
# 9898
static inline float normcdfinv(float a); 
# 9900
static inline float normcdf(float a); 
# 9902
static inline float erfcx(float a); 
# 9904
static inline double copysign(double a, float b); 
# 9906
static inline double copysign(float a, double b); 
# 9908
static inline unsigned min(unsigned a, unsigned b); 
# 9910
static inline unsigned min(int a, unsigned b); 
# 9912
static inline unsigned min(unsigned a, int b); 
# 9914
static inline long min(long a, long b); 
# 9916
static inline unsigned long min(unsigned long a, unsigned long b); 
# 9918
static inline unsigned long min(long a, unsigned long b); 
# 9920
static inline unsigned long min(unsigned long a, long b); 
# 9922
static inline long long min(long long a, long long b); 
# 9924
static inline unsigned long long min(unsigned long long a, unsigned long long b); 
# 9926
static inline unsigned long long min(long long a, unsigned long long b); 
# 9928
static inline unsigned long long min(unsigned long long a, long long b); 
# 9930
static inline float min(float a, float b); 
# 9932
static inline double min(double a, double b); 
# 9934
static inline double min(float a, double b); 
# 9936
static inline double min(double a, float b); 
# 9938
static inline unsigned max(unsigned a, unsigned b); 
# 9940
static inline unsigned max(int a, unsigned b); 
# 9942
static inline unsigned max(unsigned a, int b); 
# 9944
static inline long max(long a, long b); 
# 9946
static inline unsigned long max(unsigned long a, unsigned long b); 
# 9948
static inline unsigned long max(long a, unsigned long b); 
# 9950
static inline unsigned long max(unsigned long a, long b); 
# 9952
static inline long long max(long long a, long long b); 
# 9954
static inline unsigned long long max(unsigned long long a, unsigned long long b); 
# 9956
static inline unsigned long long max(long long a, unsigned long long b); 
# 9958
static inline unsigned long long max(unsigned long long a, long long b); 
# 9960
static inline float max(float a, float b); 
# 9962
static inline double max(double a, double b); 
# 9964
static inline double max(float a, double b); 
# 9966
static inline double max(double a, float b); 
# 327 "/usr/local/cuda-10.1/include/crt/math_functions.hpp" 3
__attribute((always_inline)) inline int signbit(float x) { return __signbitf(x); } 
# 331
__attribute((always_inline)) inline int signbit(double x) { return __signbit(x); } 
# 333
__attribute((always_inline)) inline int signbit(long double x) { return __signbitl(x); } 
# 344 "/usr/local/cuda-10.1/include/crt/math_functions.hpp" 3
__attribute((always_inline)) inline int isfinite(float x) { return __finitef(x); } 
# 359 "/usr/local/cuda-10.1/include/crt/math_functions.hpp" 3
__attribute((always_inline)) inline int isfinite(double x) { return __finite(x); } 
# 372 "/usr/local/cuda-10.1/include/crt/math_functions.hpp" 3
__attribute((always_inline)) inline int isfinite(long double x) { return __finitel(x); } 
# 375
__attribute((always_inline)) inline int isnan(float x) { return __isnanf(x); } 
# 379
__attribute((always_inline)) inline int isnan(double x) throw() { return __isnan(x); } 
# 381
__attribute((always_inline)) inline int isnan(long double x) { return __isnanl(x); } 
# 383
__attribute((always_inline)) inline int isinf(float x) { return __isinff(x); } 
# 387
__attribute((always_inline)) inline int isinf(double x) throw() { return __isinf(x); } 
# 389
__attribute((always_inline)) inline int isinf(long double x) { return __isinfl(x); } 
# 585 "/usr/local/cuda-10.1/include/crt/math_functions.hpp" 3
static inline float logb(float a) 
# 586
{ 
# 587
return logbf(a); 
# 588
} 
# 590
static inline int ilogb(float a) 
# 591
{ 
# 592
return ilogbf(a); 
# 593
} 
# 595
static inline float scalbn(float a, int b) 
# 596
{ 
# 597
return scalbnf(a, b); 
# 598
} 
# 600
static inline float scalbln(float a, long b) 
# 601
{ 
# 602
return scalblnf(a, b); 
# 603
} 
# 605
static inline float exp2(float a) 
# 606
{ 
# 607
return exp2f(a); 
# 608
} 
# 610
static inline float expm1(float a) 
# 611
{ 
# 612
return expm1f(a); 
# 613
} 
# 615
static inline float log2(float a) 
# 616
{ 
# 617
return log2f(a); 
# 618
} 
# 620
static inline float log1p(float a) 
# 621
{ 
# 622
return log1pf(a); 
# 623
} 
# 625
static inline float acosh(float a) 
# 626
{ 
# 627
return acoshf(a); 
# 628
} 
# 630
static inline float asinh(float a) 
# 631
{ 
# 632
return asinhf(a); 
# 633
} 
# 635
static inline float atanh(float a) 
# 636
{ 
# 637
return atanhf(a); 
# 638
} 
# 640
static inline float hypot(float a, float b) 
# 641
{ 
# 642
return hypotf(a, b); 
# 643
} 
# 645
static inline float cbrt(float a) 
# 646
{ 
# 647
return cbrtf(a); 
# 648
} 
# 650
static inline float erf(float a) 
# 651
{ 
# 652
return erff(a); 
# 653
} 
# 655
static inline float erfc(float a) 
# 656
{ 
# 657
return erfcf(a); 
# 658
} 
# 660
static inline float lgamma(float a) 
# 661
{ 
# 662
return lgammaf(a); 
# 663
} 
# 665
static inline float tgamma(float a) 
# 666
{ 
# 667
return tgammaf(a); 
# 668
} 
# 670
static inline float copysign(float a, float b) 
# 671
{ 
# 672
return copysignf(a, b); 
# 673
} 
# 675
static inline float nextafter(float a, float b) 
# 676
{ 
# 677
return nextafterf(a, b); 
# 678
} 
# 680
static inline float remainder(float a, float b) 
# 681
{ 
# 682
return remainderf(a, b); 
# 683
} 
# 685
static inline float remquo(float a, float b, int *quo) 
# 686
{ 
# 687
return remquof(a, b, quo); 
# 688
} 
# 690
static inline float round(float a) 
# 691
{ 
# 692
return roundf(a); 
# 693
} 
# 695
static inline long lround(float a) 
# 696
{ 
# 697
return lroundf(a); 
# 698
} 
# 700
static inline long long llround(float a) 
# 701
{ 
# 702
return llroundf(a); 
# 703
} 
# 705
static inline float trunc(float a) 
# 706
{ 
# 707
return truncf(a); 
# 708
} 
# 710
static inline float rint(float a) 
# 711
{ 
# 712
return rintf(a); 
# 713
} 
# 715
static inline long lrint(float a) 
# 716
{ 
# 717
return lrintf(a); 
# 718
} 
# 720
static inline long long llrint(float a) 
# 721
{ 
# 722
return llrintf(a); 
# 723
} 
# 725
static inline float nearbyint(float a) 
# 726
{ 
# 727
return nearbyintf(a); 
# 728
} 
# 730
static inline float fdim(float a, float b) 
# 731
{ 
# 732
return fdimf(a, b); 
# 733
} 
# 735
static inline float fma(float a, float b, float c) 
# 736
{ 
# 737
return fmaf(a, b, c); 
# 738
} 
# 740
static inline float fmax(float a, float b) 
# 741
{ 
# 742
return fmaxf(a, b); 
# 743
} 
# 745
static inline float fmin(float a, float b) 
# 746
{ 
# 747
return fminf(a, b); 
# 748
} 
# 756
static inline float exp10(float a) 
# 757
{ 
# 758
return exp10f(a); 
# 759
} 
# 761
static inline float rsqrt(float a) 
# 762
{ 
# 763
return rsqrtf(a); 
# 764
} 
# 766
static inline float rcbrt(float a) 
# 767
{ 
# 768
return rcbrtf(a); 
# 769
} 
# 771
static inline float sinpi(float a) 
# 772
{ 
# 773
return sinpif(a); 
# 774
} 
# 776
static inline float cospi(float a) 
# 777
{ 
# 778
return cospif(a); 
# 779
} 
# 781
static inline void sincospi(float a, float *sptr, float *cptr) 
# 782
{ 
# 783
sincospif(a, sptr, cptr); 
# 784
} 
# 786
static inline void sincos(float a, float *sptr, float *cptr) 
# 787
{ 
# 788
sincosf(a, sptr, cptr); 
# 789
} 
# 791
static inline float j0(float a) 
# 792
{ 
# 793
return j0f(a); 
# 794
} 
# 796
static inline float j1(float a) 
# 797
{ 
# 798
return j1f(a); 
# 799
} 
# 801
static inline float jn(int n, float a) 
# 802
{ 
# 803
return jnf(n, a); 
# 804
} 
# 806
static inline float y0(float a) 
# 807
{ 
# 808
return y0f(a); 
# 809
} 
# 811
static inline float y1(float a) 
# 812
{ 
# 813
return y1f(a); 
# 814
} 
# 816
static inline float yn(int n, float a) 
# 817
{ 
# 818
return ynf(n, a); 
# 819
} 
# 821
static inline float cyl_bessel_i0(float a) 
# 822
{ 
# 823
return cyl_bessel_i0f(a); 
# 824
} 
# 826
static inline float cyl_bessel_i1(float a) 
# 827
{ 
# 828
return cyl_bessel_i1f(a); 
# 829
} 
# 831
static inline float erfinv(float a) 
# 832
{ 
# 833
return erfinvf(a); 
# 834
} 
# 836
static inline float erfcinv(float a) 
# 837
{ 
# 838
return erfcinvf(a); 
# 839
} 
# 841
static inline float normcdfinv(float a) 
# 842
{ 
# 843
return normcdfinvf(a); 
# 844
} 
# 846
static inline float normcdf(float a) 
# 847
{ 
# 848
return normcdff(a); 
# 849
} 
# 851
static inline float erfcx(float a) 
# 852
{ 
# 853
return erfcxf(a); 
# 854
} 
# 856
static inline double copysign(double a, float b) 
# 857
{ 
# 858
return copysign(a, (double)b); 
# 859
} 
# 861
static inline double copysign(float a, double b) 
# 862
{ 
# 863
return copysign((double)a, b); 
# 864
} 
# 866
static inline unsigned min(unsigned a, unsigned b) 
# 867
{ 
# 868
return umin(a, b); 
# 869
} 
# 871
static inline unsigned min(int a, unsigned b) 
# 872
{ 
# 873
return umin((unsigned)a, b); 
# 874
} 
# 876
static inline unsigned min(unsigned a, int b) 
# 877
{ 
# 878
return umin(a, (unsigned)b); 
# 879
} 
# 881
static inline long min(long a, long b) 
# 882
{ 
# 888
if (sizeof(long) == sizeof(int)) { 
# 892
return (long)min((int)a, (int)b); 
# 893
} else { 
# 894
return (long)llmin((long long)a, (long long)b); 
# 895
}  
# 896
} 
# 898
static inline unsigned long min(unsigned long a, unsigned long b) 
# 899
{ 
# 903
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 907
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 908
} else { 
# 909
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 910
}  
# 911
} 
# 913
static inline unsigned long min(long a, unsigned long b) 
# 914
{ 
# 918
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 922
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 923
} else { 
# 924
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 925
}  
# 926
} 
# 928
static inline unsigned long min(unsigned long a, long b) 
# 929
{ 
# 933
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 937
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 938
} else { 
# 939
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 940
}  
# 941
} 
# 943
static inline long long min(long long a, long long b) 
# 944
{ 
# 945
return llmin(a, b); 
# 946
} 
# 948
static inline unsigned long long min(unsigned long long a, unsigned long long b) 
# 949
{ 
# 950
return ullmin(a, b); 
# 951
} 
# 953
static inline unsigned long long min(long long a, unsigned long long b) 
# 954
{ 
# 955
return ullmin((unsigned long long)a, b); 
# 956
} 
# 958
static inline unsigned long long min(unsigned long long a, long long b) 
# 959
{ 
# 960
return ullmin(a, (unsigned long long)b); 
# 961
} 
# 963
static inline float min(float a, float b) 
# 964
{ 
# 965
return fminf(a, b); 
# 966
} 
# 968
static inline double min(double a, double b) 
# 969
{ 
# 970
return fmin(a, b); 
# 971
} 
# 973
static inline double min(float a, double b) 
# 974
{ 
# 975
return fmin((double)a, b); 
# 976
} 
# 978
static inline double min(double a, float b) 
# 979
{ 
# 980
return fmin(a, (double)b); 
# 981
} 
# 983
static inline unsigned max(unsigned a, unsigned b) 
# 984
{ 
# 985
return umax(a, b); 
# 986
} 
# 988
static inline unsigned max(int a, unsigned b) 
# 989
{ 
# 990
return umax((unsigned)a, b); 
# 991
} 
# 993
static inline unsigned max(unsigned a, int b) 
# 994
{ 
# 995
return umax(a, (unsigned)b); 
# 996
} 
# 998
static inline long max(long a, long b) 
# 999
{ 
# 1004
if (sizeof(long) == sizeof(int)) { 
# 1008
return (long)max((int)a, (int)b); 
# 1009
} else { 
# 1010
return (long)llmax((long long)a, (long long)b); 
# 1011
}  
# 1012
} 
# 1014
static inline unsigned long max(unsigned long a, unsigned long b) 
# 1015
{ 
# 1019
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1023
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1024
} else { 
# 1025
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1026
}  
# 1027
} 
# 1029
static inline unsigned long max(long a, unsigned long b) 
# 1030
{ 
# 1034
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1038
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1039
} else { 
# 1040
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1041
}  
# 1042
} 
# 1044
static inline unsigned long max(unsigned long a, long b) 
# 1045
{ 
# 1049
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1053
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1054
} else { 
# 1055
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1056
}  
# 1057
} 
# 1059
static inline long long max(long long a, long long b) 
# 1060
{ 
# 1061
return llmax(a, b); 
# 1062
} 
# 1064
static inline unsigned long long max(unsigned long long a, unsigned long long b) 
# 1065
{ 
# 1066
return ullmax(a, b); 
# 1067
} 
# 1069
static inline unsigned long long max(long long a, unsigned long long b) 
# 1070
{ 
# 1071
return ullmax((unsigned long long)a, b); 
# 1072
} 
# 1074
static inline unsigned long long max(unsigned long long a, long long b) 
# 1075
{ 
# 1076
return ullmax(a, (unsigned long long)b); 
# 1077
} 
# 1079
static inline float max(float a, float b) 
# 1080
{ 
# 1081
return fmaxf(a, b); 
# 1082
} 
# 1084
static inline double max(double a, double b) 
# 1085
{ 
# 1086
return fmax(a, b); 
# 1087
} 
# 1089
static inline double max(float a, double b) 
# 1090
{ 
# 1091
return fmax((double)a, b); 
# 1092
} 
# 1094
static inline double max(double a, float b) 
# 1095
{ 
# 1096
return fmax(a, (double)b); 
# 1097
} 
# 1108 "/usr/local/cuda-10.1/include/crt/math_functions.hpp" 3
inline int min(int a, int b) 
# 1109
{ 
# 1110
return (a < b) ? a : b; 
# 1111
} 
# 1113
inline unsigned umin(unsigned a, unsigned b) 
# 1114
{ 
# 1115
return (a < b) ? a : b; 
# 1116
} 
# 1118
inline long long llmin(long long a, long long b) 
# 1119
{ 
# 1120
return (a < b) ? a : b; 
# 1121
} 
# 1123
inline unsigned long long ullmin(unsigned long long a, unsigned long long 
# 1124
b) 
# 1125
{ 
# 1126
return (a < b) ? a : b; 
# 1127
} 
# 1129
inline int max(int a, int b) 
# 1130
{ 
# 1131
return (a > b) ? a : b; 
# 1132
} 
# 1134
inline unsigned umax(unsigned a, unsigned b) 
# 1135
{ 
# 1136
return (a > b) ? a : b; 
# 1137
} 
# 1139
inline long long llmax(long long a, long long b) 
# 1140
{ 
# 1141
return (a > b) ? a : b; 
# 1142
} 
# 1144
inline unsigned long long ullmax(unsigned long long a, unsigned long long 
# 1145
b) 
# 1146
{ 
# 1147
return (a > b) ? a : b; 
# 1148
} 
# 74 "/usr/local/cuda-10.1/include/cuda_surface_types.h" 3
template< class T, int dim = 1> 
# 75
struct surface : public surfaceReference { 
# 78
surface() 
# 79
{ 
# 80
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 81
} 
# 83
surface(cudaChannelFormatDesc desc) 
# 84
{ 
# 85
(channelDesc) = desc; 
# 86
} 
# 88
}; 
# 90
template< int dim> 
# 91
struct surface< void, dim>  : public surfaceReference { 
# 94
surface() 
# 95
{ 
# 96
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 97
} 
# 99
}; 
# 74 "/usr/local/cuda-10.1/include/cuda_texture_types.h" 3
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 75
struct texture : public textureReference { 
# 78
texture(int norm = 0, cudaTextureFilterMode 
# 79
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 80
aMode = cudaAddressModeClamp) 
# 81
{ 
# 82
(normalized) = norm; 
# 83
(filterMode) = fMode; 
# 84
((addressMode)[0]) = aMode; 
# 85
((addressMode)[1]) = aMode; 
# 86
((addressMode)[2]) = aMode; 
# 87
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 88
(sRGB) = 0; 
# 89
} 
# 91
texture(int norm, cudaTextureFilterMode 
# 92
fMode, cudaTextureAddressMode 
# 93
aMode, cudaChannelFormatDesc 
# 94
desc) 
# 95
{ 
# 96
(normalized) = norm; 
# 97
(filterMode) = fMode; 
# 98
((addressMode)[0]) = aMode; 
# 99
((addressMode)[1]) = aMode; 
# 100
((addressMode)[2]) = aMode; 
# 101
(channelDesc) = desc; 
# 102
(sRGB) = 0; 
# 103
} 
# 105
}; 
# 89 "/usr/local/cuda-10.1/include/crt/device_functions.h" 3
extern "C" {
# 3217 "/usr/local/cuda-10.1/include/crt/device_functions.h" 3
}
# 3225
__attribute__((unused)) static inline int mulhi(int a, int b); 
# 3227
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b); 
# 3229
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b); 
# 3231
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b); 
# 3233
__attribute__((unused)) static inline long long mul64hi(long long a, long long b); 
# 3235
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b); 
# 3237
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b); 
# 3239
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b); 
# 3241
__attribute__((unused)) static inline int float_as_int(float a); 
# 3243
__attribute__((unused)) static inline float int_as_float(int a); 
# 3245
__attribute__((unused)) static inline unsigned float_as_uint(float a); 
# 3247
__attribute__((unused)) static inline float uint_as_float(unsigned a); 
# 3249
__attribute__((unused)) static inline float saturate(float a); 
# 3251
__attribute__((unused)) static inline int mul24(int a, int b); 
# 3253
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b); 
# 3255
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero); 
# 3257
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero); 
# 3259
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest); 
# 3261
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 90 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int mulhi(int a, int b) 
# 91
{int volatile ___ = 1;(void)a;(void)b;
# 93
::exit(___);}
#if 0
# 91
{ 
# 92
return __mulhi(a, b); 
# 93
} 
#endif
# 95 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b) 
# 96
{int volatile ___ = 1;(void)a;(void)b;
# 98
::exit(___);}
#if 0
# 96
{ 
# 97
return __umulhi(a, b); 
# 98
} 
#endif
# 100 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b) 
# 101
{int volatile ___ = 1;(void)a;(void)b;
# 103
::exit(___);}
#if 0
# 101
{ 
# 102
return __umulhi((unsigned)a, b); 
# 103
} 
#endif
# 105 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b) 
# 106
{int volatile ___ = 1;(void)a;(void)b;
# 108
::exit(___);}
#if 0
# 106
{ 
# 107
return __umulhi(a, (unsigned)b); 
# 108
} 
#endif
# 110 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline long long mul64hi(long long a, long long b) 
# 111
{int volatile ___ = 1;(void)a;(void)b;
# 113
::exit(___);}
#if 0
# 111
{ 
# 112
return __mul64hi(a, b); 
# 113
} 
#endif
# 115 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b) 
# 116
{int volatile ___ = 1;(void)a;(void)b;
# 118
::exit(___);}
#if 0
# 116
{ 
# 117
return __umul64hi(a, b); 
# 118
} 
#endif
# 120 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b) 
# 121
{int volatile ___ = 1;(void)a;(void)b;
# 123
::exit(___);}
#if 0
# 121
{ 
# 122
return __umul64hi((unsigned long long)a, b); 
# 123
} 
#endif
# 125 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b) 
# 126
{int volatile ___ = 1;(void)a;(void)b;
# 128
::exit(___);}
#if 0
# 126
{ 
# 127
return __umul64hi(a, (unsigned long long)b); 
# 128
} 
#endif
# 130 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int float_as_int(float a) 
# 131
{int volatile ___ = 1;(void)a;
# 133
::exit(___);}
#if 0
# 131
{ 
# 132
return __float_as_int(a); 
# 133
} 
#endif
# 135 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float int_as_float(int a) 
# 136
{int volatile ___ = 1;(void)a;
# 138
::exit(___);}
#if 0
# 136
{ 
# 137
return __int_as_float(a); 
# 138
} 
#endif
# 140 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned float_as_uint(float a) 
# 141
{int volatile ___ = 1;(void)a;
# 143
::exit(___);}
#if 0
# 141
{ 
# 142
return __float_as_uint(a); 
# 143
} 
#endif
# 145 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float uint_as_float(unsigned a) 
# 146
{int volatile ___ = 1;(void)a;
# 148
::exit(___);}
#if 0
# 146
{ 
# 147
return __uint_as_float(a); 
# 148
} 
#endif
# 149 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float saturate(float a) 
# 150
{int volatile ___ = 1;(void)a;
# 152
::exit(___);}
#if 0
# 150
{ 
# 151
return __saturatef(a); 
# 152
} 
#endif
# 154 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int mul24(int a, int b) 
# 155
{int volatile ___ = 1;(void)a;(void)b;
# 157
::exit(___);}
#if 0
# 155
{ 
# 156
return __mul24(a, b); 
# 157
} 
#endif
# 159 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b) 
# 160
{int volatile ___ = 1;(void)a;(void)b;
# 162
::exit(___);}
#if 0
# 160
{ 
# 161
return __umul24(a, b); 
# 162
} 
#endif
# 164 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode) 
# 165
{int volatile ___ = 1;(void)a;(void)mode;
# 170
::exit(___);}
#if 0
# 165
{ 
# 166
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 170
} 
#endif
# 172 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode) 
# 173
{int volatile ___ = 1;(void)a;(void)mode;
# 178
::exit(___);}
#if 0
# 173
{ 
# 174
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 178
} 
#endif
# 180 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode) 
# 181
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 181
{ 
# 182
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 186
} 
#endif
# 188 "/usr/local/cuda-10.1/include/crt/device_functions.hpp" 3
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode) 
# 189
{int volatile ___ = 1;(void)a;(void)mode;
# 194
::exit(___);}
#if 0
# 189
{ 
# 190
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 194
} 
#endif
# 106 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 120 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 120
{ } 
#endif
# 122 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 122
{ } 
#endif
# 124 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 128
{ } 
#endif
# 130 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 130
{ } 
#endif
# 132 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 132
{ } 
#endif
# 134 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 134
{ } 
#endif
# 136 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 136
{ } 
#endif
# 138 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 138
{ } 
#endif
# 140 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 140
{ } 
#endif
# 142 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 144
{ } 
#endif
# 146 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 146
{ } 
#endif
# 171 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
extern "C" {
# 180
}
# 189 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 189
{ } 
#endif
# 191 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 193
{ } 
#endif
# 195 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 195
{ } 
#endif
# 197 "/usr/local/cuda-10.1/include/device_atomic_functions.h" 3
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 197
{ } 
#endif
# 87 "/usr/local/cuda-10.1/include/crt/device_double_functions.h" 3
extern "C" {
# 1139 "/usr/local/cuda-10.1/include/crt/device_double_functions.h" 3
}
# 1147
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1149
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1151
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1153
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1155
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1157
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1159
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1161
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1163
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1165
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1167
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1169
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1171
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 93 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 94
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 99
::exit(___);}
#if 0
# 94
{ 
# 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 99
} 
#endif
# 101 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 102
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 107
::exit(___);}
#if 0
# 102
{ 
# 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 107
} 
#endif
# 109 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 110
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 115
::exit(___);}
#if 0
# 110
{ 
# 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 115
} 
#endif
# 117 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 118
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 123
::exit(___);}
#if 0
# 118
{ 
# 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 123
} 
#endif
# 125 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 126
{int volatile ___ = 1;(void)a;(void)mode;
# 131
::exit(___);}
#if 0
# 126
{ 
# 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 131
} 
#endif
# 133 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 134
{int volatile ___ = 1;(void)a;(void)mode;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 139
} 
#endif
# 141 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 142
{int volatile ___ = 1;(void)a;(void)mode;
# 147
::exit(___);}
#if 0
# 142
{ 
# 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 147
} 
#endif
# 149 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 150
{int volatile ___ = 1;(void)a;(void)mode;
# 155
::exit(___);}
#if 0
# 150
{ 
# 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 155
} 
#endif
# 157 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 158
{int volatile ___ = 1;(void)a;(void)mode;
# 163
::exit(___);}
#if 0
# 158
{ 
# 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 163
} 
#endif
# 165 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 166
{int volatile ___ = 1;(void)a;(void)mode;
# 171
::exit(___);}
#if 0
# 166
{ 
# 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 171
} 
#endif
# 173 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 174
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 174
{ 
# 175
return (double)a; 
# 176
} 
#endif
# 178 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 179
{int volatile ___ = 1;(void)a;(void)mode;
# 181
::exit(___);}
#if 0
# 179
{ 
# 180
return (double)a; 
# 181
} 
#endif
# 183 "/usr/local/cuda-10.1/include/crt/device_double_functions.hpp" 3
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 184
{int volatile ___ = 1;(void)a;(void)mode;
# 186
::exit(___);}
#if 0
# 184
{ 
# 185
return (double)a; 
# 186
} 
#endif
# 89 "/usr/local/cuda-10.1/include/sm_20_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 89
{ } 
#endif
# 100 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 104 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 104
{ } 
#endif
# 106 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/local/cuda-10.1/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 303 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 303
{ } 
#endif
# 306 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 306
{ } 
#endif
# 309 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 309
{ } 
#endif
# 312 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 312
{ } 
#endif
# 315 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 315
{ } 
#endif
# 318 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 318
{ } 
#endif
# 321 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 321
{ } 
#endif
# 324 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 324
{ } 
#endif
# 327 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 327
{ } 
#endif
# 330 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 330
{ } 
#endif
# 333 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 333
{ } 
#endif
# 336 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 336
{ } 
#endif
# 339 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 339
{ } 
#endif
# 342 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 342
{ } 
#endif
# 345 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 345
{ } 
#endif
# 348 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 348
{ } 
#endif
# 351 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 351
{ } 
#endif
# 354 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 354
{ } 
#endif
# 357 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 357
{ } 
#endif
# 360 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 360
{ } 
#endif
# 363 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 363
{ } 
#endif
# 366 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 366
{ } 
#endif
# 369 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 369
{ } 
#endif
# 372 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 372
{ } 
#endif
# 375 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 375
{ } 
#endif
# 378 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 378
{ } 
#endif
# 381 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 381
{ } 
#endif
# 384 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 384
{ } 
#endif
# 387 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 387
{ } 
#endif
# 390 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 390
{ } 
#endif
# 393 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 393
{ } 
#endif
# 396 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 396
{ } 
#endif
# 399 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 399
{ } 
#endif
# 402 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 402
{ } 
#endif
# 405 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 405
{ } 
#endif
# 408 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 408
{ } 
#endif
# 411 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 411
{ } 
#endif
# 414 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 414
{ } 
#endif
# 417 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 417
{ } 
#endif
# 420 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 420
{ } 
#endif
# 423 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 423
{ } 
#endif
# 426 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 426
{ } 
#endif
# 429 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 429
{ } 
#endif
# 432 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 432
{ } 
#endif
# 435 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 435
{ } 
#endif
# 438 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 439
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 439
{ } 
#endif
# 442 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 443
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 443
{ } 
#endif
# 446 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 447
compare, unsigned long long 
# 448
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 448
{ } 
#endif
# 451 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 452
compare, unsigned long long 
# 453
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 453
{ } 
#endif
# 456 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 456
{ } 
#endif
# 459 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 459
{ } 
#endif
# 462 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 462
{ } 
#endif
# 465 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 465
{ } 
#endif
# 468 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 468
{ } 
#endif
# 471 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 471
{ } 
#endif
# 474 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 474
{ } 
#endif
# 477 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 477
{ } 
#endif
# 480 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 480
{ } 
#endif
# 483 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 483
{ } 
#endif
# 486 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 486
{ } 
#endif
# 489 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 489
{ } 
#endif
# 492 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 492
{ } 
#endif
# 495 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 495
{ } 
#endif
# 498 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 498
{ } 
#endif
# 501 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 501
{ } 
#endif
# 504 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 504
{ } 
#endif
# 507 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 507
{ } 
#endif
# 510 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 510
{ } 
#endif
# 513 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 513
{ } 
#endif
# 516 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 516
{ } 
#endif
# 519 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 519
{ } 
#endif
# 522 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 522
{ } 
#endif
# 525 "/usr/local/cuda-10.1/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 525
{ } 
#endif
# 90 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
extern "C" {
# 1475 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
}
# 1482
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1482
{ } 
#endif
# 1484 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1484
{ } 
#endif
# 1486 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1486
{ } 
#endif
# 1488 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1488
{ } 
#endif
# 1493 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1493
{ } 
#endif
# 1494 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1494
{ } 
#endif
# 1495 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1495
{ } 
#endif
# 1496 "/usr/local/cuda-10.1/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1496
{ } 
#endif
# 102 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 110
{ } 
#endif
# 119 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 121
{ } 
#endif
# 122 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 122
{ } 
#endif
# 123 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 124
{ } 
#endif
# 125 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 130
{ } 
#endif
# 133 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 148 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 159
{ } 
#endif
# 162 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 177 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 187 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/usr/local/cuda-10.1/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 87 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 87
{ } 
#endif
# 88 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 88
{ } 
#endif
# 90 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 91 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 116 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 116
{ } 
#endif
# 117 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 118 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 118
{ } 
#endif
# 119 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 123 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 139 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 151 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 155
{ } 
#endif
# 159 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 160
{ } 
#endif
# 162 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 187 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 191
{ } 
#endif
# 195 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 195
{ } 
#endif
# 196 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 196
{ } 
#endif
# 198 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 199
{ } 
#endif
# 200 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 211 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 215
{ } 
#endif
# 216 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 223 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 224 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 224
{ } 
#endif
# 225 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 227 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 227
{ } 
#endif
# 244 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 244
{ } 
#endif
# 256 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 256
{ } 
#endif
# 269 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 269
{ } 
#endif
# 281 "/usr/local/cuda-10.1/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 281
{ } 
#endif
# 89 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 93
{ } 
#endif
# 95 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 96
{ } 
#endif
# 98 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 99
{ } 
#endif
# 106 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda-10.1/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 110
{ } 
#endif
# 93 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/local/cuda-10.1/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 115
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 116
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 120
::exit(___);}
#if 0
# 116
{ 
# 120
} 
#endif
# 122 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 123
__attribute((always_inline)) __attribute__((unused)) static inline T surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 124
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 130
::exit(___);}
#if 0
# 124
{ 
# 130
} 
#endif
# 132 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 133
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 134
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 138
::exit(___);}
#if 0
# 134
{ 
# 138
} 
#endif
# 141 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 142
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 143
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 147
::exit(___);}
#if 0
# 143
{ 
# 147
} 
#endif
# 149 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 150
__attribute((always_inline)) __attribute__((unused)) static inline T surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 151
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 157
::exit(___);}
#if 0
# 151
{ 
# 157
} 
#endif
# 159 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 160
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 161
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 165
::exit(___);}
#if 0
# 161
{ 
# 165
} 
#endif
# 168 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 169
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 170
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 174
::exit(___);}
#if 0
# 170
{ 
# 174
} 
#endif
# 176 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 177
__attribute((always_inline)) __attribute__((unused)) static inline T surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 178
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 184
::exit(___);}
#if 0
# 178
{ 
# 184
} 
#endif
# 186 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 187
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 188
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 192
::exit(___);}
#if 0
# 188
{ 
# 192
} 
#endif
# 196 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 197
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 198
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 202
::exit(___);}
#if 0
# 198
{ 
# 202
} 
#endif
# 204 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 205
__attribute((always_inline)) __attribute__((unused)) static inline T surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 206
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 212
::exit(___);}
#if 0
# 206
{ 
# 212
} 
#endif
# 215 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 216
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 217
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 221
::exit(___);}
#if 0
# 217
{ 
# 221
} 
#endif
# 224 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 225
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 226
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 230
::exit(___);}
#if 0
# 226
{ 
# 230
} 
#endif
# 232 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 233
__attribute((always_inline)) __attribute__((unused)) static inline T surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 234
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 240
::exit(___);}
#if 0
# 234
{ 
# 240
} 
#endif
# 243 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 244
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 245
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 249
::exit(___);}
#if 0
# 245
{ 
# 249
} 
#endif
# 252 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 253
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 254
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 258
::exit(___);}
#if 0
# 254
{ 
# 258
} 
#endif
# 260 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 261
__attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 262
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 269
::exit(___);}
#if 0
# 262
{ 
# 269
} 
#endif
# 271 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 272
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 273
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 277
::exit(___);}
#if 0
# 273
{ 
# 277
} 
#endif
# 280 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 281
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 282
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 286
::exit(___);}
#if 0
# 282
{ 
# 286
} 
#endif
# 288 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 289
__attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 290
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 296
::exit(___);}
#if 0
# 290
{ 
# 296
} 
#endif
# 298 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 299
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 300
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 304
::exit(___);}
#if 0
# 300
{ 
# 304
} 
#endif
# 307 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 308
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 309
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 313
::exit(___);}
#if 0
# 309
{ 
# 313
} 
#endif
# 315 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 316
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 317
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 321
::exit(___);}
#if 0
# 317
{ 
# 321
} 
#endif
# 325 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 326
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 327
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 331
::exit(___);}
#if 0
# 327
{ 
# 331
} 
#endif
# 333 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 334
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 335
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 339
::exit(___);}
#if 0
# 335
{ 
# 339
} 
#endif
# 342 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 343
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 344
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 348
::exit(___);}
#if 0
# 344
{ 
# 348
} 
#endif
# 350 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 351
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 352
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 356
::exit(___);}
#if 0
# 352
{ 
# 356
} 
#endif
# 359 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 360
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 361
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 365
::exit(___);}
#if 0
# 361
{ 
# 365
} 
#endif
# 367 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 368
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 369
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 373
::exit(___);}
#if 0
# 369
{ 
# 373
} 
#endif
# 376 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 377
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 378
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 382
::exit(___);}
#if 0
# 378
{ 
# 382
} 
#endif
# 384 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 385
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 386
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 390
::exit(___);}
#if 0
# 386
{ 
# 390
} 
#endif
# 393 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 394
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 395
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 399
::exit(___);}
#if 0
# 395
{ 
# 399
} 
#endif
# 401 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 402
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 403
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 407
::exit(___);}
#if 0
# 403
{ 
# 407
} 
#endif
# 411 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 412
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 413
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 417
::exit(___);}
#if 0
# 413
{ 
# 417
} 
#endif
# 419 "/usr/local/cuda-10.1/include/surface_functions.h" 3
template< class T> 
# 420
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 421
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 425
::exit(___);}
#if 0
# 421
{ 
# 425
} 
#endif
# 66 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 67
struct __nv_tex_rmet_ret { }; 
# 69
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
# 70
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
# 71
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
# 72
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
# 73
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
# 74
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
# 75
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
# 76
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
# 77
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
# 79
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
# 80
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
# 81
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
# 82
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
# 83
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
# 84
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
# 85
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
# 86
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
# 88
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
# 89
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
# 90
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
# 91
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
# 92
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
# 93
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
# 94
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
# 95
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
# 107 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
# 108
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
# 109
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
# 110
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
# 113
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
# 125 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 126
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) 
# 127
{int volatile ___ = 1;(void)t;(void)x;
# 133
::exit(___);}
#if 0
# 127
{ 
# 133
} 
#endif
# 135 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 136
struct __nv_tex_rmnf_ret { }; 
# 138
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
# 139
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
# 140
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
# 141
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
# 142
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
# 143
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
# 144
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
# 145
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
# 146
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
# 147
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
# 148
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
# 149
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
# 150
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
# 151
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
# 152
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 153
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
# 154
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 156
template< class T> 
# 157
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 158
{int volatile ___ = 1;(void)t;(void)x;
# 165
::exit(___);}
#if 0
# 158
{ 
# 165
} 
#endif
# 168 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 169
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) 
# 170
{int volatile ___ = 1;(void)t;(void)x;
# 176
::exit(___);}
#if 0
# 170
{ 
# 176
} 
#endif
# 178 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 179
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 180
{int volatile ___ = 1;(void)t;(void)x;
# 187
::exit(___);}
#if 0
# 180
{ 
# 187
} 
#endif
# 191 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 192
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) 
# 193
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 200
::exit(___);}
#if 0
# 193
{ 
# 200
} 
#endif
# 202 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 203
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 204
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 211
::exit(___);}
#if 0
# 204
{ 
# 211
} 
#endif
# 215 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 216
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) 
# 217
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 223
::exit(___);}
#if 0
# 217
{ 
# 223
} 
#endif
# 225 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 226
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 227
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 234
::exit(___);}
#if 0
# 227
{ 
# 234
} 
#endif
# 238 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 239
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 240
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 246
::exit(___);}
#if 0
# 240
{ 
# 246
} 
#endif
# 248 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 249
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 250
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 257
::exit(___);}
#if 0
# 250
{ 
# 257
} 
#endif
# 260 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 261
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 262
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 268
::exit(___);}
#if 0
# 262
{ 
# 268
} 
#endif
# 270 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 271
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 272
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 279
::exit(___);}
#if 0
# 272
{ 
# 279
} 
#endif
# 282 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 283
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 284
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 290
::exit(___);}
#if 0
# 284
{ 
# 290
} 
#endif
# 292 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 293
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 294
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 301
::exit(___);}
#if 0
# 294
{ 
# 301
} 
#endif
# 304 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 305
struct __nv_tex2dgather_ret { }; 
# 306
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
# 307
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
# 308
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
# 309
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
# 310
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
# 311
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
# 312
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
# 313
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
# 314
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
# 315
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
# 316
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
# 318
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
# 319
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
# 320
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
# 321
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
# 322
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
# 323
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
# 324
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
# 325
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
# 326
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
# 327
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
# 329
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
# 330
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
# 331
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
# 332
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
# 333
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
# 334
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
# 335
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
# 336
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
# 337
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
# 338
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
# 340
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
# 341
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
# 342
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
# 343
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
# 344
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
# 346
template< class T> 
# 347
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 348
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 355
::exit(___);}
#if 0
# 348
{ 
# 355
} 
#endif
# 358 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
# 359
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
# 360
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
# 361
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
# 362
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
# 363
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
# 364
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
# 365
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
# 366
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
# 367
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
# 368
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
# 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 370
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
# 371
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
# 372
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
# 373
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
# 374
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
# 375
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
# 376
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
# 377
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
# 378
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
# 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 381
template< class T> 
# 382
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_rmnf_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 383
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 390
::exit(___);}
#if 0
# 383
{ 
# 390
} 
#endif
# 394 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 395
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) 
# 396
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 402
::exit(___);}
#if 0
# 396
{ 
# 402
} 
#endif
# 404 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 405
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) 
# 406
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 413
::exit(___);}
#if 0
# 406
{ 
# 413
} 
#endif
# 416 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 417
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) 
# 418
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 424
::exit(___);}
#if 0
# 418
{ 
# 424
} 
#endif
# 426 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 427
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) 
# 428
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 435
::exit(___);}
#if 0
# 428
{ 
# 435
} 
#endif
# 438 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 439
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) 
# 440
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 446
::exit(___);}
#if 0
# 440
{ 
# 446
} 
#endif
# 448 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 449
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) 
# 450
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 457
::exit(___);}
#if 0
# 450
{ 
# 457
} 
#endif
# 460 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 461
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) 
# 462
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 468
::exit(___);}
#if 0
# 462
{ 
# 468
} 
#endif
# 470 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 471
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) 
# 472
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 479
::exit(___);}
#if 0
# 472
{ 
# 479
} 
#endif
# 482 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 483
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 484
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 490
::exit(___);}
#if 0
# 484
{ 
# 490
} 
#endif
# 492 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 493
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 494
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 501
::exit(___);}
#if 0
# 494
{ 
# 501
} 
#endif
# 504 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 505
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 506
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 512
::exit(___);}
#if 0
# 506
{ 
# 512
} 
#endif
# 514 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 515
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 516
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 523
::exit(___);}
#if 0
# 516
{ 
# 523
} 
#endif
# 527 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 528
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 529
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 535
::exit(___);}
#if 0
# 529
{ 
# 535
} 
#endif
# 537 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 538
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 539
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 546
::exit(___);}
#if 0
# 539
{ 
# 546
} 
#endif
# 550 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 551
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) 
# 552
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 558
::exit(___);}
#if 0
# 552
{ 
# 558
} 
#endif
# 560 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 561
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) 
# 562
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 569
::exit(___);}
#if 0
# 562
{ 
# 569
} 
#endif
# 573 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 574
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 575
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 581
::exit(___);}
#if 0
# 575
{ 
# 581
} 
#endif
# 583 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 584
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 585
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 592
::exit(___);}
#if 0
# 585
{ 
# 592
} 
#endif
# 596 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 597
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 598
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 604
::exit(___);}
#if 0
# 598
{ 
# 604
} 
#endif
# 606 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 607
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 608
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 615
::exit(___);}
#if 0
# 608
{ 
# 615
} 
#endif
# 619 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 620
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) 
# 621
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 627
::exit(___);}
#if 0
# 621
{ 
# 627
} 
#endif
# 629 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 630
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) 
# 631
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 638
::exit(___);}
#if 0
# 631
{ 
# 638
} 
#endif
# 642 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 643
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 644
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 650
::exit(___);}
#if 0
# 644
{ 
# 650
} 
#endif
# 652 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 653
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 654
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 661
::exit(___);}
#if 0
# 654
{ 
# 661
} 
#endif
# 664 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 665
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) 
# 666
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 672
::exit(___);}
#if 0
# 666
{ 
# 672
} 
#endif
# 674 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 675
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) 
# 676
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 683
::exit(___);}
#if 0
# 676
{ 
# 683
} 
#endif
# 686 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 687
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 688
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 694
::exit(___);}
#if 0
# 688
{ 
# 694
} 
#endif
# 696 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 697
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 698
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 705
::exit(___);}
#if 0
# 698
{ 
# 705
} 
#endif
# 708 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 709
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 710
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 716
::exit(___);}
#if 0
# 710
{ 
# 716
} 
#endif
# 718 "/usr/local/cuda-10.1/include/texture_fetch_functions.h" 3
template< class T> 
# 719
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 720
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 727
::exit(___);}
#if 0
# 720
{ 
# 727
} 
#endif
# 60 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> struct __nv_itex_trait { }; 
# 61
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
# 62
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
# 63
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
# 64
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
# 65
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
# 66
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
# 67
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
# 68
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
# 69
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
# 70
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
# 71
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
# 72
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
# 73
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
# 74
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
# 75
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
# 76
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
# 77
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
# 78
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
# 79
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
# 80
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
# 81
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
# 82
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
# 83
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
# 84
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
# 85
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
# 96 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
# 97
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
# 98
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
# 99
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
# 103
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 104
tex1Dfetch(T *ptr, cudaTextureObject_t obj, int x) 
# 105
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 109
::exit(___);}
#if 0
# 105
{ 
# 109
} 
#endif
# 111 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 112
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 113
{int volatile ___ = 1;(void)texObject;(void)x;
# 119
::exit(___);}
#if 0
# 113
{ 
# 119
} 
#endif
# 121 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 122
tex1D(T *ptr, cudaTextureObject_t obj, float x) 
# 123
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 127
::exit(___);}
#if 0
# 123
{ 
# 127
} 
#endif
# 130 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 131
tex1D(cudaTextureObject_t texObject, float x) 
# 132
{int volatile ___ = 1;(void)texObject;(void)x;
# 138
::exit(___);}
#if 0
# 132
{ 
# 138
} 
#endif
# 141 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 142
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y) 
# 143
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
# 147
::exit(___);}
#if 0
# 143
{ 
# 147
} 
#endif
# 149 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 150
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 151
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 157
::exit(___);}
#if 0
# 151
{ 
# 157
} 
#endif
# 159 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 160
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 161
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 165
::exit(___);}
#if 0
# 161
{ 
# 165
} 
#endif
# 167 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 168
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 169
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 175
::exit(___);}
#if 0
# 169
{ 
# 175
} 
#endif
# 177 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 178
tex1DLayered(T *ptr, cudaTextureObject_t obj, float x, int layer) 
# 179
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
# 183
::exit(___);}
#if 0
# 179
{ 
# 183
} 
#endif
# 185 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 186
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 187
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 193
::exit(___);}
#if 0
# 187
{ 
# 193
} 
#endif
# 195 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 196
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer) 
# 197
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
# 201
::exit(___);}
#if 0
# 197
{ 
# 201
} 
#endif
# 203 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 204
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 205
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 211
::exit(___);}
#if 0
# 205
{ 
# 211
} 
#endif
# 214 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 215
texCubemap(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 216
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 220
::exit(___);}
#if 0
# 216
{ 
# 220
} 
#endif
# 223 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 224
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 225
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 231
::exit(___);}
#if 0
# 225
{ 
# 231
} 
#endif
# 234 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 235
texCubemapLayered(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer) 
# 236
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
# 240
::exit(___);}
#if 0
# 236
{ 
# 240
} 
#endif
# 242 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 243
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 244
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 250
::exit(___);}
#if 0
# 244
{ 
# 250
} 
#endif
# 252 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 253
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, int comp = 0) 
# 254
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
# 258
::exit(___);}
#if 0
# 254
{ 
# 258
} 
#endif
# 260 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 261
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 262
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 268
::exit(___);}
#if 0
# 262
{ 
# 268
} 
#endif
# 272 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 273
tex1DLod(T *ptr, cudaTextureObject_t obj, float x, float level) 
# 274
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
# 278
::exit(___);}
#if 0
# 274
{ 
# 278
} 
#endif
# 280 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 281
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 282
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 288
::exit(___);}
#if 0
# 282
{ 
# 288
} 
#endif
# 291 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 292
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level) 
# 293
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
# 297
::exit(___);}
#if 0
# 293
{ 
# 297
} 
#endif
# 299 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 300
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 301
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 307
::exit(___);}
#if 0
# 301
{ 
# 307
} 
#endif
# 310 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 311
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 312
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 316
::exit(___);}
#if 0
# 312
{ 
# 316
} 
#endif
# 318 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 319
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 320
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 326
::exit(___);}
#if 0
# 320
{ 
# 326
} 
#endif
# 329 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 330
tex1DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, int layer, float level) 
# 331
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
# 335
::exit(___);}
#if 0
# 331
{ 
# 335
} 
#endif
# 337 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 338
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 339
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 345
::exit(___);}
#if 0
# 339
{ 
# 345
} 
#endif
# 348 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 349
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level) 
# 350
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
# 354
::exit(___);}
#if 0
# 350
{ 
# 354
} 
#endif
# 356 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 357
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 358
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 364
::exit(___);}
#if 0
# 358
{ 
# 364
} 
#endif
# 367 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 368
texCubemapLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 369
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 373
::exit(___);}
#if 0
# 369
{ 
# 373
} 
#endif
# 375 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 376
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 377
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 383
::exit(___);}
#if 0
# 377
{ 
# 383
} 
#endif
# 386 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 387
texCubemapGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 388
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 392
::exit(___);}
#if 0
# 388
{ 
# 392
} 
#endif
# 394 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 395
texCubemapGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 396
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 402
::exit(___);}
#if 0
# 396
{ 
# 402
} 
#endif
# 404 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 405
texCubemapLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
# 406
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 410
::exit(___);}
#if 0
# 406
{ 
# 410
} 
#endif
# 412 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 413
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 414
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 420
::exit(___);}
#if 0
# 414
{ 
# 420
} 
#endif
# 422 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 423
tex1DGrad(T *ptr, cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
# 424
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
# 428
::exit(___);}
#if 0
# 424
{ 
# 428
} 
#endif
# 430 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 431
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 432
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 438
::exit(___);}
#if 0
# 432
{ 
# 438
} 
#endif
# 441 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 442
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy) 
# 443
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 448
::exit(___);}
#if 0
# 443
{ 
# 448
} 
#endif
# 450 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 451
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 452
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 458
::exit(___);}
#if 0
# 452
{ 
# 458
} 
#endif
# 461 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 462
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 463
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 467
::exit(___);}
#if 0
# 463
{ 
# 467
} 
#endif
# 469 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 470
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 471
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 477
::exit(___);}
#if 0
# 471
{ 
# 477
} 
#endif
# 480 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 481
tex1DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
# 482
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 486
::exit(___);}
#if 0
# 482
{ 
# 486
} 
#endif
# 488 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 489
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 490
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 496
::exit(___);}
#if 0
# 490
{ 
# 496
} 
#endif
# 499 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 500
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 501
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 505
::exit(___);}
#if 0
# 501
{ 
# 505
} 
#endif
# 507 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 508
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 509
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 515
::exit(___);}
#if 0
# 509
{ 
# 515
} 
#endif
# 518 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 519
texCubemapLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 520
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 524
::exit(___);}
#if 0
# 520
{ 
# 524
} 
#endif
# 526 "/usr/local/cuda-10.1/include/texture_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 527
texCubemapLayeredGrad(cudaTextureObject_t texObject, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 528
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 534
::exit(___);}
#if 0
# 528
{ 
# 534
} 
#endif
# 59 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> struct __nv_isurf_trait { }; 
# 60
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
# 61
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
# 62
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
# 63
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
# 64
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
# 65
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
# 66
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
# 67
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
# 68
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
# 69
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
# 70
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
# 71
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
# 72
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
# 73
template<> struct __nv_isurf_trait< long long>  { typedef void type; }; 
# 74
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
# 75
template<> struct __nv_isurf_trait< unsigned long long>  { typedef void type; }; 
# 76
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
# 77
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
# 78
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
# 80
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
# 81
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
# 82
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
# 83
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
# 84
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
# 85
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
# 86
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
# 87
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
# 88
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
# 90
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
# 91
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
# 92
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
# 93
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
# 94
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
# 95
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
# 96
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
# 99
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 100
surf1Dread(T *ptr, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 101
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
# 105
::exit(___);}
#if 0
# 101
{ 
# 105
} 
#endif
# 107 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 108
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 109
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 115
::exit(___);}
#if 0
# 109
{ 
# 115
} 
#endif
# 117 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 118
surf2Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 119
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
# 123
::exit(___);}
#if 0
# 119
{ 
# 123
} 
#endif
# 125 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 126
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 127
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 133
::exit(___);}
#if 0
# 127
{ 
# 133
} 
#endif
# 136 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 137
surf3Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 138
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 142
::exit(___);}
#if 0
# 138
{ 
# 142
} 
#endif
# 144 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 145
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 146
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 152
::exit(___);}
#if 0
# 146
{ 
# 152
} 
#endif
# 154 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 155
surf1DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 156
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
# 160
::exit(___);}
#if 0
# 156
{ 
# 160
} 
#endif
# 162 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 163
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 164
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 170
::exit(___);}
#if 0
# 164
{ 
# 170
} 
#endif
# 172 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 173
surf2DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 174
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 178
::exit(___);}
#if 0
# 174
{ 
# 178
} 
#endif
# 180 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 181
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 182
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 188
::exit(___);}
#if 0
# 182
{ 
# 188
} 
#endif
# 190 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 191
surfCubemapread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 192
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 196
::exit(___);}
#if 0
# 192
{ 
# 196
} 
#endif
# 198 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 199
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 200
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 206
::exit(___);}
#if 0
# 200
{ 
# 206
} 
#endif
# 208 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 209
surfCubemapLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 210
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 214
::exit(___);}
#if 0
# 210
{ 
# 214
} 
#endif
# 216 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static T 
# 217
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 218
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 224
::exit(___);}
#if 0
# 218
{ 
# 224
} 
#endif
# 226 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 227
surf1Dwrite(T val, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 228
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
# 232
::exit(___);}
#if 0
# 228
{ 
# 232
} 
#endif
# 234 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 235
surf2Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 236
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
# 240
::exit(___);}
#if 0
# 236
{ 
# 240
} 
#endif
# 242 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 243
surf3Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 244
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 248
::exit(___);}
#if 0
# 244
{ 
# 248
} 
#endif
# 250 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 251
surf1DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 252
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
# 256
::exit(___);}
#if 0
# 252
{ 
# 256
} 
#endif
# 258 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 259
surf2DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 260
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 264
::exit(___);}
#if 0
# 260
{ 
# 264
} 
#endif
# 266 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 267
surfCubemapwrite(T val, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 268
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 272
::exit(___);}
#if 0
# 268
{ 
# 272
} 
#endif
# 274 "/usr/local/cuda-10.1/include/surface_indirect_functions.h" 3
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 275
surfCubemapLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 276
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 280
::exit(___);}
#if 0
# 276
{ 
# 280
} 
#endif
# 3296 "/usr/local/cuda-10.1/include/crt/device_functions.h" 3
extern "C" unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
# 68 "/usr/local/cuda-10.1/include/device_launch_parameters.h" 3
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 199 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 200
cudaLaunchKernel(const T *
# 201
func, dim3 
# 202
gridDim, dim3 
# 203
blockDim, void **
# 204
args, size_t 
# 205
sharedMem = 0, cudaStream_t 
# 206
stream = 0) 
# 208
{ 
# 209
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 210
} 
# 261 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 262
cudaLaunchCooperativeKernel(const T *
# 263
func, dim3 
# 264
gridDim, dim3 
# 265
blockDim, void **
# 266
args, size_t 
# 267
sharedMem = 0, cudaStream_t 
# 268
stream = 0) 
# 270
{ 
# 271
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 272
} 
# 305 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 306
event, unsigned 
# 307
flags) 
# 309
{ 
# 310
return ::cudaEventCreateWithFlags(event, flags); 
# 311
} 
# 370 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
static inline cudaError_t cudaMallocHost(void **
# 371
ptr, size_t 
# 372
size, unsigned 
# 373
flags) 
# 375
{ 
# 376
return ::cudaHostAlloc(ptr, size, flags); 
# 377
} 
# 379
template< class T> static inline cudaError_t 
# 380
cudaHostAlloc(T **
# 381
ptr, size_t 
# 382
size, unsigned 
# 383
flags) 
# 385
{ 
# 386
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 387
} 
# 389
template< class T> static inline cudaError_t 
# 390
cudaHostGetDevicePointer(T **
# 391
pDevice, void *
# 392
pHost, unsigned 
# 393
flags) 
# 395
{ 
# 396
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 397
} 
# 499 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 500
cudaMallocManaged(T **
# 501
devPtr, size_t 
# 502
size, unsigned 
# 503
flags = 1) 
# 505
{ 
# 506
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 507
} 
# 589 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 590
cudaStreamAttachMemAsync(cudaStream_t 
# 591
stream, T *
# 592
devPtr, size_t 
# 593
length = 0, unsigned 
# 594
flags = 4) 
# 596
{ 
# 597
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 598
} 
# 600
template< class T> inline cudaError_t 
# 601
cudaMalloc(T **
# 602
devPtr, size_t 
# 603
size) 
# 605
{ 
# 606
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 607
} 
# 609
template< class T> static inline cudaError_t 
# 610
cudaMallocHost(T **
# 611
ptr, size_t 
# 612
size, unsigned 
# 613
flags = 0) 
# 615
{ 
# 616
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 617
} 
# 619
template< class T> static inline cudaError_t 
# 620
cudaMallocPitch(T **
# 621
devPtr, size_t *
# 622
pitch, size_t 
# 623
width, size_t 
# 624
height) 
# 626
{ 
# 627
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 628
} 
# 667 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 668
cudaMemcpyToSymbol(const T &
# 669
symbol, const void *
# 670
src, size_t 
# 671
count, size_t 
# 672
offset = 0, cudaMemcpyKind 
# 673
kind = cudaMemcpyHostToDevice) 
# 675
{ 
# 676
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 677
} 
# 721 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 722
cudaMemcpyToSymbolAsync(const T &
# 723
symbol, const void *
# 724
src, size_t 
# 725
count, size_t 
# 726
offset = 0, cudaMemcpyKind 
# 727
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 728
stream = 0) 
# 730
{ 
# 731
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 732
} 
# 769 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 770
cudaMemcpyFromSymbol(void *
# 771
dst, const T &
# 772
symbol, size_t 
# 773
count, size_t 
# 774
offset = 0, cudaMemcpyKind 
# 775
kind = cudaMemcpyDeviceToHost) 
# 777
{ 
# 778
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 779
} 
# 823 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 824
cudaMemcpyFromSymbolAsync(void *
# 825
dst, const T &
# 826
symbol, size_t 
# 827
count, size_t 
# 828
offset = 0, cudaMemcpyKind 
# 829
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 830
stream = 0) 
# 832
{ 
# 833
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 834
} 
# 859 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 860
cudaGetSymbolAddress(void **
# 861
devPtr, const T &
# 862
symbol) 
# 864
{ 
# 865
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 866
} 
# 891 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 892
cudaGetSymbolSize(size_t *
# 893
size, const T &
# 894
symbol) 
# 896
{ 
# 897
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 898
} 
# 935 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 936
cudaBindTexture(size_t *
# 937
offset, const texture< T, dim, readMode>  &
# 938
tex, const void *
# 939
devPtr, const cudaChannelFormatDesc &
# 940
desc, size_t 
# 941
size = ((2147483647) * 2U) + 1U) 
# 943
{ 
# 944
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 945
} 
# 981 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 982
cudaBindTexture(size_t *
# 983
offset, const texture< T, dim, readMode>  &
# 984
tex, const void *
# 985
devPtr, size_t 
# 986
size = ((2147483647) * 2U) + 1U) 
# 988
{ 
# 989
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 990
} 
# 1038 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1039
cudaBindTexture2D(size_t *
# 1040
offset, const texture< T, dim, readMode>  &
# 1041
tex, const void *
# 1042
devPtr, const cudaChannelFormatDesc &
# 1043
desc, size_t 
# 1044
width, size_t 
# 1045
height, size_t 
# 1046
pitch) 
# 1048
{ 
# 1049
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 1050
} 
# 1097 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1098
cudaBindTexture2D(size_t *
# 1099
offset, const texture< T, dim, readMode>  &
# 1100
tex, const void *
# 1101
devPtr, size_t 
# 1102
width, size_t 
# 1103
height, size_t 
# 1104
pitch) 
# 1106
{ 
# 1107
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
# 1108
} 
# 1140 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1141
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1142
tex, cudaArray_const_t 
# 1143
array, const cudaChannelFormatDesc &
# 1144
desc) 
# 1146
{ 
# 1147
return ::cudaBindTextureToArray(&tex, array, &desc); 
# 1148
} 
# 1179 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1180
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1181
tex, cudaArray_const_t 
# 1182
array) 
# 1184
{ 
# 1185
cudaChannelFormatDesc desc; 
# 1186
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 1188
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 1189
} 
# 1221 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1222
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1223
tex, cudaMipmappedArray_const_t 
# 1224
mipmappedArray, const cudaChannelFormatDesc &
# 1225
desc) 
# 1227
{ 
# 1228
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
# 1229
} 
# 1260 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1261
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1262
tex, cudaMipmappedArray_const_t 
# 1263
mipmappedArray) 
# 1265
{ 
# 1266
cudaChannelFormatDesc desc; 
# 1267
cudaArray_t levelArray; 
# 1268
cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
# 1270
if (err != (cudaSuccess)) { 
# 1271
return err; 
# 1272
}  
# 1273
err = ::cudaGetChannelDesc(&desc, levelArray); 
# 1275
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
# 1276
} 
# 1303 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1304
cudaUnbindTexture(const texture< T, dim, readMode>  &
# 1305
tex) 
# 1307
{ 
# 1308
return ::cudaUnbindTexture(&tex); 
# 1309
} 
# 1339 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1340
cudaGetTextureAlignmentOffset(size_t *
# 1341
offset, const texture< T, dim, readMode>  &
# 1342
tex) 
# 1344
{ 
# 1345
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
# 1346
} 
# 1391 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1392
cudaFuncSetCacheConfig(T *
# 1393
func, cudaFuncCache 
# 1394
cacheConfig) 
# 1396
{ 
# 1397
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1398
} 
# 1400
template< class T> static inline cudaError_t 
# 1401
cudaFuncSetSharedMemConfig(T *
# 1402
func, cudaSharedMemConfig 
# 1403
config) 
# 1405
{ 
# 1406
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1407
} 
# 1436 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> inline cudaError_t 
# 1437
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1438
numBlocks, T 
# 1439
func, int 
# 1440
blockSize, size_t 
# 1441
dynamicSMemSize) 
# 1442
{ 
# 1443
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1444
} 
# 1487 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> inline cudaError_t 
# 1488
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 1489
numBlocks, T 
# 1490
func, int 
# 1491
blockSize, size_t 
# 1492
dynamicSMemSize, unsigned 
# 1493
flags) 
# 1494
{ 
# 1495
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 1496
} 
# 1501
class __cudaOccupancyB2DHelper { 
# 1502
size_t n; 
# 1504
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 1505
size_t operator()(int) 
# 1506
{ 
# 1507
return n; 
# 1508
} 
# 1509
}; 
# 1556 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class UnaryFunction, class T> static inline cudaError_t 
# 1557
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 1558
minGridSize, int *
# 1559
blockSize, T 
# 1560
func, UnaryFunction 
# 1561
blockSizeToDynamicSMemSize, int 
# 1562
blockSizeLimit = 0, unsigned 
# 1563
flags = 0) 
# 1564
{ 
# 1565
cudaError_t status; 
# 1568
int device; 
# 1569
cudaFuncAttributes attr; 
# 1572
int maxThreadsPerMultiProcessor; 
# 1573
int warpSize; 
# 1574
int devMaxThreadsPerBlock; 
# 1575
int multiProcessorCount; 
# 1576
int funcMaxThreadsPerBlock; 
# 1577
int occupancyLimit; 
# 1578
int granularity; 
# 1581
int maxBlockSize = 0; 
# 1582
int numBlocks = 0; 
# 1583
int maxOccupancy = 0; 
# 1586
int blockSizeToTryAligned; 
# 1587
int blockSizeToTry; 
# 1588
int blockSizeLimitAligned; 
# 1589
int occupancyInBlocks; 
# 1590
int occupancyInThreads; 
# 1591
size_t dynamicSMemSize; 
# 1597
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 1598
return cudaErrorInvalidValue; 
# 1599
}  
# 1605
status = ::cudaGetDevice(&device); 
# 1606
if (status != (cudaSuccess)) { 
# 1607
return status; 
# 1608
}  
# 1610
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 1614
if (status != (cudaSuccess)) { 
# 1615
return status; 
# 1616
}  
# 1618
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 1622
if (status != (cudaSuccess)) { 
# 1623
return status; 
# 1624
}  
# 1626
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 1630
if (status != (cudaSuccess)) { 
# 1631
return status; 
# 1632
}  
# 1634
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 1638
if (status != (cudaSuccess)) { 
# 1639
return status; 
# 1640
}  
# 1642
status = cudaFuncGetAttributes(&attr, func); 
# 1643
if (status != (cudaSuccess)) { 
# 1644
return status; 
# 1645
}  
# 1647
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 1653
occupancyLimit = maxThreadsPerMultiProcessor; 
# 1654
granularity = warpSize; 
# 1656
if (blockSizeLimit == 0) { 
# 1657
blockSizeLimit = devMaxThreadsPerBlock; 
# 1658
}  
# 1660
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 1661
blockSizeLimit = devMaxThreadsPerBlock; 
# 1662
}  
# 1664
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 1665
blockSizeLimit = funcMaxThreadsPerBlock; 
# 1666
}  
# 1668
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 1670
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 1674
if (blockSizeLimit < blockSizeToTryAligned) { 
# 1675
blockSizeToTry = blockSizeLimit; 
# 1676
} else { 
# 1677
blockSizeToTry = blockSizeToTryAligned; 
# 1678
}  
# 1680
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 1682
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 1689
if (status != (cudaSuccess)) { 
# 1690
return status; 
# 1691
}  
# 1693
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 1695
if (occupancyInThreads > maxOccupancy) { 
# 1696
maxBlockSize = blockSizeToTry; 
# 1697
numBlocks = occupancyInBlocks; 
# 1698
maxOccupancy = occupancyInThreads; 
# 1699
}  
# 1703
if (occupancyLimit == maxOccupancy) { 
# 1704
break; 
# 1705
}  
# 1706
}  
# 1714
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 1715
(*blockSize) = maxBlockSize; 
# 1717
return status; 
# 1718
} 
# 1751 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class UnaryFunction, class T> static inline cudaError_t 
# 1752
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 1753
minGridSize, int *
# 1754
blockSize, T 
# 1755
func, UnaryFunction 
# 1756
blockSizeToDynamicSMemSize, int 
# 1757
blockSizeLimit = 0) 
# 1758
{ 
# 1759
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 1760
} 
# 1796 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1797
cudaOccupancyMaxPotentialBlockSize(int *
# 1798
minGridSize, int *
# 1799
blockSize, T 
# 1800
func, size_t 
# 1801
dynamicSMemSize = 0, int 
# 1802
blockSizeLimit = 0) 
# 1803
{ 
# 1804
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 1805
} 
# 1855 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1856
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 1857
minGridSize, int *
# 1858
blockSize, T 
# 1859
func, size_t 
# 1860
dynamicSMemSize = 0, int 
# 1861
blockSizeLimit = 0, unsigned 
# 1862
flags = 0) 
# 1863
{ 
# 1864
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 1865
} 
# 1896 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> inline cudaError_t 
# 1897
cudaFuncGetAttributes(cudaFuncAttributes *
# 1898
attr, T *
# 1899
entry) 
# 1901
{ 
# 1902
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 1903
} 
# 1941 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T> static inline cudaError_t 
# 1942
cudaFuncSetAttribute(T *
# 1943
entry, cudaFuncAttribute 
# 1944
attr, int 
# 1945
value) 
# 1947
{ 
# 1948
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
# 1949
} 
# 1973 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim> 
# 1974
__attribute((deprecated)) static inline cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
# 1975
surf, cudaArray_const_t 
# 1976
array, const cudaChannelFormatDesc &
# 1977
desc) 
# 1979
{ 
# 1980
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
# 1981
} 
# 2004 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
template< class T, int dim> 
# 2005
__attribute((deprecated)) static inline cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
# 2006
surf, cudaArray_const_t 
# 2007
array) 
# 2009
{ 
# 2010
cudaChannelFormatDesc desc; 
# 2011
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 2013
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 2014
} 
# 2025 "/usr/local/cuda-10.1/include/cuda_runtime.h" 3
#pragma GCC diagnostic pop
# 65 "/usr/include/assert.h" 3
extern "C" {
# 68
extern void __assert_fail(const char * __assertion, const char * __file, unsigned __line, const char * __function) throw()
# 70
 __attribute((__noreturn__)); 
# 73
extern void __assert_perror_fail(int __errnum, const char * __file, unsigned __line, const char * __function) throw()
# 75
 __attribute((__noreturn__)); 
# 80
extern void __assert(const char * __assertion, const char * __file, int __line) throw()
# 81
 __attribute((__noreturn__)); 
# 84
}
# 29 "/usr/include/stdio.h" 3
extern "C" {
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE; 
# 48
typedef _IO_FILE FILE; 
# 64 "/usr/include/stdio.h" 3
typedef _IO_FILE __FILE; 
# 94 "/usr/include/wchar.h" 3
typedef 
# 83
struct { 
# 84
int __count; 
# 86
union { 
# 88
unsigned __wch; 
# 92
char __wchb[4]; 
# 93
} __value; 
# 94
} __mbstate_t; 
# 25 "/usr/include/_G_config.h" 3
typedef 
# 22
struct { 
# 23
__off_t __pos; 
# 24
__mbstate_t __state; 
# 25
} _G_fpos_t; 
# 30
typedef 
# 27
struct { 
# 28
__off64_t __pos; 
# 29
__mbstate_t __state; 
# 30
} _G_fpos64_t; 
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list; 
# 145 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE; 
# 155 "/usr/include/libio.h" 3
typedef void _IO_lock_t; 
# 161
struct _IO_marker { 
# 162
_IO_marker *_next; 
# 163
_IO_FILE *_sbuf; 
# 167
int _pos; 
# 178 "/usr/include/libio.h" 3
}; 
# 181
enum __codecvt_result { 
# 183
__codecvt_ok, 
# 184
__codecvt_partial, 
# 185
__codecvt_error, 
# 186
__codecvt_noconv
# 187
}; 
# 246 "/usr/include/libio.h" 3
struct _IO_FILE { 
# 247
int _flags; 
# 252
char *_IO_read_ptr; 
# 253
char *_IO_read_end; 
# 254
char *_IO_read_base; 
# 255
char *_IO_write_base; 
# 256
char *_IO_write_ptr; 
# 257
char *_IO_write_end; 
# 258
char *_IO_buf_base; 
# 259
char *_IO_buf_end; 
# 261
char *_IO_save_base; 
# 262
char *_IO_backup_base; 
# 263
char *_IO_save_end; 
# 265
_IO_marker *_markers; 
# 267
_IO_FILE *_chain; 
# 269
int _fileno; 
# 273
int _flags2; 
# 275
__off_t _old_offset; 
# 279
unsigned short _cur_column; 
# 280
signed char _vtable_offset; 
# 281
char _shortbuf[1]; 
# 285
_IO_lock_t *_lock; 
# 294 "/usr/include/libio.h" 3
__off64_t _offset; 
# 303 "/usr/include/libio.h" 3
void *__pad1; 
# 304
void *__pad2; 
# 305
void *__pad3; 
# 306
void *__pad4; 
# 307
size_t __pad5; 
# 309
int _mode; 
# 311
char _unused2[(((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t)]; 
# 313
}; 
# 319
struct _IO_FILE_plus; 
# 321
extern _IO_FILE_plus _IO_2_1_stdin_; 
# 322
extern _IO_FILE_plus _IO_2_1_stdout_; 
# 323
extern _IO_FILE_plus _IO_2_1_stderr_; 
# 339 "/usr/include/libio.h" 3
typedef __ssize_t __io_read_fn(void * __cookie, char * __buf, size_t __nbytes); 
# 347
typedef __ssize_t __io_write_fn(void * __cookie, const char * __buf, size_t __n); 
# 356
typedef int __io_seek_fn(void * __cookie, __off64_t * __pos, int __w); 
# 359
typedef int __io_close_fn(void * __cookie); 
# 364
typedef __io_read_fn cookie_read_function_t; 
# 365
typedef __io_write_fn cookie_write_function_t; 
# 366
typedef __io_seek_fn cookie_seek_function_t; 
# 367
typedef __io_close_fn cookie_close_function_t; 
# 376
typedef 
# 371
struct { 
# 372
__io_read_fn *read; 
# 373
__io_write_fn *write; 
# 374
__io_seek_fn *seek; 
# 375
__io_close_fn *close; 
# 376
} _IO_cookie_io_functions_t; 
# 377
typedef _IO_cookie_io_functions_t cookie_io_functions_t; 
# 379
struct _IO_cookie_file; 
# 382
extern void _IO_cookie_init(_IO_cookie_file * __cfile, int __read_write, void * __cookie, _IO_cookie_io_functions_t __fns); 
# 388
extern "C" {
# 391
extern int __underflow(_IO_FILE *); 
# 392
extern int __uflow(_IO_FILE *); 
# 393
extern int __overflow(_IO_FILE *, int); 
# 435 "/usr/include/libio.h" 3
extern int _IO_getc(_IO_FILE * __fp); 
# 436
extern int _IO_putc(int __c, _IO_FILE * __fp); 
# 437
extern int _IO_feof(_IO_FILE * __fp) throw(); 
# 438
extern int _IO_ferror(_IO_FILE * __fp) throw(); 
# 440
extern int _IO_peekc_locked(_IO_FILE * __fp); 
# 446
extern void _IO_flockfile(_IO_FILE *) throw(); 
# 447
extern void _IO_funlockfile(_IO_FILE *) throw(); 
# 448
extern int _IO_ftrylockfile(_IO_FILE *) throw(); 
# 465 "/usr/include/libio.h" 3
extern int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__); 
# 467
extern int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list); 
# 469
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t); 
# 470
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t); 
# 472
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int); 
# 473
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int); 
# 475
extern void _IO_free_backup_area(_IO_FILE *) throw(); 
# 527 "/usr/include/libio.h" 3
}
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list; 
# 110 "/usr/include/stdio.h" 3
typedef _G_fpos_t fpos_t; 
# 116
typedef _G_fpos64_t fpos64_t; 
# 168 "/usr/include/stdio.h" 3
extern _IO_FILE *stdin; 
# 169
extern _IO_FILE *stdout; 
# 170
extern _IO_FILE *stderr; 
# 178
extern int remove(const char * __filename) throw(); 
# 180
extern int rename(const char * __old, const char * __new) throw(); 
# 185
extern int renameat(int __oldfd, const char * __old, int __newfd, const char * __new) throw(); 
# 195
extern FILE *tmpfile(); 
# 205 "/usr/include/stdio.h" 3
extern FILE *tmpfile64(); 
# 209
extern char *tmpnam(char * __s) throw(); 
# 215
extern char *tmpnam_r(char * __s) throw(); 
# 227 "/usr/include/stdio.h" 3
extern char *tempnam(const char * __dir, const char * __pfx) throw()
# 228
 __attribute((__malloc__)); 
# 237
extern int fclose(FILE * __stream); 
# 242
extern int fflush(FILE * __stream); 
# 252 "/usr/include/stdio.h" 3
extern int fflush_unlocked(FILE * __stream); 
# 262 "/usr/include/stdio.h" 3
extern int fcloseall(); 
# 272
extern FILE *fopen(const char *__restrict__ __filename, const char *__restrict__ __modes); 
# 278
extern FILE *freopen(const char *__restrict__ __filename, const char *__restrict__ __modes, FILE *__restrict__ __stream); 
# 297 "/usr/include/stdio.h" 3
extern FILE *fopen64(const char *__restrict__ __filename, const char *__restrict__ __modes); 
# 299
extern FILE *freopen64(const char *__restrict__ __filename, const char *__restrict__ __modes, FILE *__restrict__ __stream); 
# 306
extern FILE *fdopen(int __fd, const char * __modes) throw(); 
# 312
extern FILE *fopencookie(void *__restrict__ __magic_cookie, const char *__restrict__ __modes, _IO_cookie_io_functions_t __io_funcs) throw(); 
# 319
extern FILE *fmemopen(void * __s, size_t __len, const char * __modes) throw(); 
# 325
extern FILE *open_memstream(char ** __bufloc, size_t * __sizeloc) throw(); 
# 332
extern void setbuf(FILE *__restrict__ __stream, char *__restrict__ __buf) throw(); 
# 336
extern int setvbuf(FILE *__restrict__ __stream, char *__restrict__ __buf, int __modes, size_t __n) throw(); 
# 343
extern void setbuffer(FILE *__restrict__ __stream, char *__restrict__ __buf, size_t __size) throw(); 
# 347
extern void setlinebuf(FILE * __stream) throw(); 
# 356
extern int fprintf(FILE *__restrict__ __stream, const char *__restrict__ __format, ...); 
# 362
extern int printf(const char *__restrict__ __format, ...); 
# 364
extern int sprintf(char *__restrict__ __s, const char *__restrict__ __format, ...) throw(); 
# 371
extern int vfprintf(FILE *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg); 
# 377
extern int vprintf(const char *__restrict__ __format, __gnuc_va_list __arg); 
# 379
extern int vsprintf(char *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg) throw(); 
# 386
extern int snprintf(char *__restrict__ __s, size_t __maxlen, const char *__restrict__ __format, ...) throw()
# 388
 __attribute((__format__(__printf__, 3, 4))); 
# 390
extern int vsnprintf(char *__restrict__ __s, size_t __maxlen, const char *__restrict__ __format, __gnuc_va_list __arg) throw()
# 392
 __attribute((__format__(__printf__, 3, 0))); 
# 399
extern int vasprintf(char **__restrict__ __ptr, const char *__restrict__ __f, __gnuc_va_list __arg) throw()
# 401
 __attribute((__format__(__printf__, 2, 0))); 
# 402
extern int __asprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, ...) throw()
# 404
 __attribute((__format__(__printf__, 2, 3))); 
# 405
extern int asprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, ...) throw()
# 407
 __attribute((__format__(__printf__, 2, 3))); 
# 412
extern int vdprintf(int __fd, const char *__restrict__ __fmt, __gnuc_va_list __arg)
# 414
 __attribute((__format__(__printf__, 2, 0))); 
# 415
extern int dprintf(int __fd, const char *__restrict__ __fmt, ...)
# 416
 __attribute((__format__(__printf__, 2, 3))); 
# 425
extern int fscanf(FILE *__restrict__ __stream, const char *__restrict__ __format, ...); 
# 431
extern int scanf(const char *__restrict__ __format, ...); 
# 433
extern int sscanf(const char *__restrict__ __s, const char *__restrict__ __format, ...) throw(); 
# 471 "/usr/include/stdio.h" 3
extern int vfscanf(FILE *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg)
# 473
 __attribute((__format__(__scanf__, 2, 0))); 
# 479
extern int vscanf(const char *__restrict__ __format, __gnuc_va_list __arg)
# 480
 __attribute((__format__(__scanf__, 1, 0))); 
# 483
extern int vsscanf(const char *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg) throw()
# 485
 __attribute((__format__(__scanf__, 2, 0))); 
# 531 "/usr/include/stdio.h" 3
extern int fgetc(FILE * __stream); 
# 532
extern int getc(FILE * __stream); 
# 538
extern int getchar(); 
# 550 "/usr/include/stdio.h" 3
extern int getc_unlocked(FILE * __stream); 
# 551
extern int getchar_unlocked(); 
# 561 "/usr/include/stdio.h" 3
extern int fgetc_unlocked(FILE * __stream); 
# 573
extern int fputc(int __c, FILE * __stream); 
# 574
extern int putc(int __c, FILE * __stream); 
# 580
extern int putchar(int __c); 
# 594 "/usr/include/stdio.h" 3
extern int fputc_unlocked(int __c, FILE * __stream); 
# 602
extern int putc_unlocked(int __c, FILE * __stream); 
# 603
extern int putchar_unlocked(int __c); 
# 610
extern int getw(FILE * __stream); 
# 613
extern int putw(int __w, FILE * __stream); 
# 622
extern char *fgets(char *__restrict__ __s, int __n, FILE *__restrict__ __stream); 
# 638 "/usr/include/stdio.h" 3
extern char *gets(char * __s) __attribute((__deprecated__)); 
# 649 "/usr/include/stdio.h" 3
extern char *fgets_unlocked(char *__restrict__ __s, int __n, FILE *__restrict__ __stream); 
# 665 "/usr/include/stdio.h" 3
extern __ssize_t __getdelim(char **__restrict__ __lineptr, size_t *__restrict__ __n, int __delimiter, FILE *__restrict__ __stream); 
# 668
extern __ssize_t getdelim(char **__restrict__ __lineptr, size_t *__restrict__ __n, int __delimiter, FILE *__restrict__ __stream); 
# 678
extern __ssize_t getline(char **__restrict__ __lineptr, size_t *__restrict__ __n, FILE *__restrict__ __stream); 
# 689
extern int fputs(const char *__restrict__ __s, FILE *__restrict__ __stream); 
# 695
extern int puts(const char * __s); 
# 702
extern int ungetc(int __c, FILE * __stream); 
# 709
extern size_t fread(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __stream); 
# 715
extern size_t fwrite(const void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __s); 
# 726 "/usr/include/stdio.h" 3
extern int fputs_unlocked(const char *__restrict__ __s, FILE *__restrict__ __stream); 
# 737 "/usr/include/stdio.h" 3
extern size_t fread_unlocked(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __stream); 
# 739
extern size_t fwrite_unlocked(const void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __stream); 
# 749
extern int fseek(FILE * __stream, long __off, int __whence); 
# 754
extern long ftell(FILE * __stream); 
# 759
extern void rewind(FILE * __stream); 
# 773 "/usr/include/stdio.h" 3
extern int fseeko(FILE * __stream, __off_t __off, int __whence); 
# 778
extern __off_t ftello(FILE * __stream); 
# 798 "/usr/include/stdio.h" 3
extern int fgetpos(FILE *__restrict__ __stream, fpos_t *__restrict__ __pos); 
# 803
extern int fsetpos(FILE * __stream, const fpos_t * __pos); 
# 818 "/usr/include/stdio.h" 3
extern int fseeko64(FILE * __stream, __off64_t __off, int __whence); 
# 819
extern __off64_t ftello64(FILE * __stream); 
# 820
extern int fgetpos64(FILE *__restrict__ __stream, fpos64_t *__restrict__ __pos); 
# 821
extern int fsetpos64(FILE * __stream, const fpos64_t * __pos); 
# 826
extern void clearerr(FILE * __stream) throw(); 
# 828
extern int feof(FILE * __stream) throw(); 
# 830
extern int ferror(FILE * __stream) throw(); 
# 835
extern void clearerr_unlocked(FILE * __stream) throw(); 
# 836
extern int feof_unlocked(FILE * __stream) throw(); 
# 837
extern int ferror_unlocked(FILE * __stream) throw(); 
# 846
extern void perror(const char * __s); 
# 26 "/usr/include/bits/sys_errlist.h" 3
extern int sys_nerr; 
# 27
extern const char *const sys_errlist[]; 
# 30
extern int _sys_nerr; 
# 31
extern const char *const _sys_errlist[]; 
# 858 "/usr/include/stdio.h" 3
extern int fileno(FILE * __stream) throw(); 
# 863
extern int fileno_unlocked(FILE * __stream) throw(); 
# 873 "/usr/include/stdio.h" 3
extern FILE *popen(const char * __command, const char * __modes); 
# 879
extern int pclose(FILE * __stream); 
# 885
extern char *ctermid(char * __s) throw(); 
# 891
extern char *cuserid(char * __s); 
# 896
struct obstack; 
# 899
extern int obstack_printf(obstack *__restrict__ __obstack, const char *__restrict__ __format, ...) throw()
# 901
 __attribute((__format__(__printf__, 2, 3))); 
# 902
extern int obstack_vprintf(obstack *__restrict__ __obstack, const char *__restrict__ __format, __gnuc_va_list __args) throw()
# 905
 __attribute((__format__(__printf__, 2, 0))); 
# 913
extern void flockfile(FILE * __stream) throw(); 
# 917
extern int ftrylockfile(FILE * __stream) throw(); 
# 920
extern void funlockfile(FILE * __stream) throw(); 
# 943 "/usr/include/stdio.h" 3
}
# 20 "../.././mpi_s/mpi.h"
extern "C" {
# 25
typedef int MPI_Handle; 
# 26
typedef MPI_Handle MPI_Comm; 
# 27
typedef MPI_Handle MPI_Group; 
# 28
typedef MPI_Handle MPI_Datatype; 
# 29
typedef MPI_Handle MPI_Request; 
# 30
typedef MPI_Handle MPI_Op; 
# 31
typedef MPI_Handle MPI_Errhandler; 
# 36
typedef 
# 33
struct { 
# 34
int MPI_SOURCE; 
# 35
int MPI_TAG; 
# 36
} MPI_Status; 
# 38
typedef MPI_Handle MPI_Aint; 
# 44
enum return_codes { MPI_SUCCESS}; 
# 56 "../.././mpi_s/mpi.h"
enum error_specifiers { MPI_ERRORS_ARE_FATAL, MPI_ERRORS_RETURN}; 
# 58
enum elementary_datatypes { MPI_CHAR, 
# 59
MPI_SHORT, 
# 60
MPI_INT, 
# 61
MPI_LONG, 
# 62
MPI_UNSIGNED_CHAR, 
# 63
MPI_UNSIGNED_SHORT, 
# 64
MPI_UNSIGNED, 
# 65
MPI_UNSIGNED_LONG, 
# 66
MPI_FLOAT, 
# 67
MPI_DOUBLE, 
# 68
MPI_LONG_DOUBLE, 
# 69
MPI_BYTE, 
# 70
MPI_PACKED}; 
# 72
enum collective_operations { MPI_MAX, 
# 73
MPI_MIN, 
# 74
MPI_SUM, 
# 75
MPI_PROD, 
# 76
MPI_MAXLOC, 
# 77
MPI_MINLOC, 
# 78
MPI_BAND, 
# 79
MPI_BOR, 
# 80
MPI_BXOR, 
# 81
MPI_LAND, 
# 82
MPI_LOR, 
# 83
MPI_LXOR}; 
# 92 "../.././mpi_s/mpi.h"
enum reserved_communicators { MPI_COMM_WORLD, MPI_COMM_SELF}; 
# 109 "../.././mpi_s/mpi.h"
int MPI_Barrier(MPI_Comm comm); 
# 110
int MPI_Bcast(void * buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm); 
# 112
int MPI_Comm_rank(MPI_Comm comm, int * rank); 
# 113
int MPI_Comm_size(MPI_Comm comm, int * size); 
# 114
int MPI_Comm_group(MPI_Comm comm, MPI_Group * grp); 
# 116
int MPI_Send(void * buf, int count, MPI_Datatype type, int dest, int tag, MPI_Comm comm); 
# 119
int MPI_Recv(void * buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status * status); 
# 121
int MPI_Irecv(void * buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request * request); 
# 124
int MPI_Ssend(void * buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm); 
# 126
int MPI_Isend(void * buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request); 
# 128
int MPI_Issend(void * buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request); 
# 132
int MPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status * status); 
# 133
int MPI_Sendrecv(void * sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, void * recvbuf, int recvcount, MPI_Datatype recvtype, int source, MPI_Datatype recvtag, MPI_Comm comm, MPI_Status * status); 
# 138
int MPI_Reduce(void * sendbuf, void * recvbuf, int count, MPI_Datatype type, MPI_Op op, int root, MPI_Comm comm); 
# 142
int MPI_Type_indexed(int count, int * array_of_blocklengths, int * array_of_displacements, MPI_Datatype oldtype, MPI_Datatype * newtype); 
# 145
int MPI_Type_contiguous(int count, MPI_Datatype oldtype, MPI_Datatype * newtype); 
# 147
int MPI_Type_vector(int count, int blocklength, int stride, MPI_Datatype oldtype, MPI_Datatype * newtype); 
# 149
int MPI_Type_struct(int count, int * array_of_blocklengths, MPI_Aint * array_of_displacements, MPI_Datatype * array_of_types, MPI_Datatype * newtype); 
# 152
int MPI_Address(void * location, MPI_Aint * address); 
# 153
int MPI_Type_commit(MPI_Datatype * datatype); 
# 154
int MPI_Type_free(MPI_Datatype * datatype); 
# 155
int MPI_Waitall(int count, MPI_Request * array_of_requests, MPI_Status * array_of_statuses); 
# 157
int MPI_Waitany(int count, MPI_Request  array_of_req[], int * index, MPI_Status * status); 
# 159
int MPI_Gather(void * sendbuf, int sendcount, MPI_Datatype sendtype, void * recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm); 
# 162
int MPI_Gatherv(const void * sendbuf, int sendcount, MPI_Datatype sendtype, void * recvbuf, const int * recvcounts, const int * displ, MPI_Datatype recvtype, int root, MPI_Comm comm); 
# 165
int MPI_Allgather(void * sendbuf, int sendcount, MPI_Datatype sendtype, void * recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm); 
# 168
int MPI_Allreduce(void * send, void * recv, int count, MPI_Datatype type, MPI_Op op, MPI_Comm comm); 
# 171
int MPI_Comm_split(MPI_Comm comm, int colour, int key, MPI_Comm * newcomm); 
# 172
int MPI_Comm_free(MPI_Comm * comm); 
# 173
int MPI_Comm_dup(MPI_Comm oldcomm, MPI_Comm * newcomm); 
# 178
int MPI_Cart_create(MPI_Comm comm_old, int ndims, int * dims, int * periods, int reoerder, MPI_Comm * comm_cart); 
# 180
int MPI_Dims_create(int nnodes, int ndims, int * dims); 
# 181
int MPI_Cart_get(MPI_Comm comm, int maxdims, int * dims, int * periods, int * coords); 
# 183
int MPI_Cart_rank(MPI_Comm comm, int * coords, int * rank); 
# 184
int MPI_Cart_coords(MPI_Comm comm, int rank, int maxdims, int * coords); 
# 185
int MPI_Cart_shift(MPI_Comm comm, int direction, int disp, int * rank_source, int * rank_dest); 
# 187
int MPI_Cart_sub(MPI_Comm comm, int * remain_dims, MPI_Comm * new_comm); 
# 191
int MPI_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler); 
# 193
double MPI_Wtime(); 
# 194
double MPI_Wtick(); 
# 196
int MPI_Init(int * argc, char *** argv); 
# 197
int MPI_Finalize(); 
# 198
int MPI_Initialized(int * flag); 
# 199
int MPI_Abort(MPI_Comm comm, int errorcode); 
# 208 "../.././mpi_s/mpi.h"
int MPI_Comm_set_errhandler(MPI_Comm comm, MPI_Errhandler erhandler); 
# 209
int MPI_Get_address(const void * location, MPI_Aint * address); 
# 210
int MPI_Group_translate_ranks(MPI_Group grp1, int n, const int * ranks1, MPI_Group grp2, int * ranks2); 
# 212
int MPI_Type_create_struct(int count, int * arry_of_blocklens, const MPI_Aint * array_of_displacements, const MPI_Datatype * array_of_datatypes, MPI_Datatype * newtype); 
# 216
int MPI_Type_create_resized(MPI_Datatype oldtype, MPI_Aint ub, MPI_Aint extent, MPI_Datatype * newtype); 
# 220
}
# 48 "/usr/include/stdint.h" 3
typedef unsigned char uint8_t; 
# 49
typedef unsigned short uint16_t; 
# 51
typedef unsigned uint32_t; 
# 55
typedef unsigned long uint64_t; 
# 65 "/usr/include/stdint.h" 3
typedef signed char int_least8_t; 
# 66
typedef short int_least16_t; 
# 67
typedef int int_least32_t; 
# 69
typedef long int_least64_t; 
# 76
typedef unsigned char uint_least8_t; 
# 77
typedef unsigned short uint_least16_t; 
# 78
typedef unsigned uint_least32_t; 
# 80
typedef unsigned long uint_least64_t; 
# 90 "/usr/include/stdint.h" 3
typedef signed char int_fast8_t; 
# 92
typedef long int_fast16_t; 
# 93
typedef long int_fast32_t; 
# 94
typedef long int_fast64_t; 
# 103 "/usr/include/stdint.h" 3
typedef unsigned char uint_fast8_t; 
# 105
typedef unsigned long uint_fast16_t; 
# 106
typedef unsigned long uint_fast32_t; 
# 107
typedef unsigned long uint_fast64_t; 
# 119 "/usr/include/stdint.h" 3
typedef long intptr_t; 
# 122
typedef unsigned long uintptr_t; 
# 134 "/usr/include/stdint.h" 3
typedef long intmax_t; 
# 135
typedef unsigned long uintmax_t; 
# 65 "/usr/include/assert.h" 3
extern "C" {
# 68
extern void __assert_fail(const char * __assertion, const char * __file, unsigned __line, const char * __function) throw()
# 70
 __attribute((__noreturn__)); 
# 73
extern void __assert_perror_fail(int __errnum, const char * __file, unsigned __line, const char * __function) throw()
# 75
 __attribute((__noreturn__)); 
# 80
extern void __assert(const char * __assertion, const char * __file, int __line) throw()
# 81
 __attribute((__noreturn__)); 
# 84
}
# 37 "/opt/rocm-3.3.0/hip/include/hip/hip_runtime_api.h" 3
enum { 
# 38
HIP_SUCCESS, 
# 39
HIP_ERROR_INVALID_VALUE, 
# 40
HIP_ERROR_NOT_INITIALIZED, 
# 41
HIP_ERROR_LAUNCH_OUT_OF_RESOURCES
# 42
}; 
# 73
typedef 
# 44
struct { 
# 46
unsigned hasGlobalInt32Atomics:1; 
# 47
unsigned hasGlobalFloatAtomicExch:1; 
# 48
unsigned hasSharedInt32Atomics:1; 
# 49
unsigned hasSharedFloatAtomicExch:1; 
# 50
unsigned hasFloatAtomicAdd:1; 
# 53
unsigned hasGlobalInt64Atomics:1; 
# 54
unsigned hasSharedInt64Atomics:1; 
# 57
unsigned hasDoubles:1; 
# 60
unsigned hasWarpVote:1; 
# 61
unsigned hasWarpBallot:1; 
# 62
unsigned hasWarpShuffle:1; 
# 63
unsigned hasFunnelShift:1; 
# 66
unsigned hasThreadFenceSystem:1; 
# 67
unsigned hasSyncThreadsExt:1; 
# 70
unsigned hasSurfaceFuncs:1; 
# 71
unsigned has3dGrid:1; 
# 72
unsigned hasDynamicParallelism:1; 
# 73
} hipDeviceArch_t; 
# 132 "/opt/rocm-3.3.0/hip/include/hip/hip_runtime_api.h" 3
typedef 
# 83
struct hipDeviceProp_t { 
# 84
char name[256]; 
# 85
size_t totalGlobalMem; 
# 86
size_t sharedMemPerBlock; 
# 87
int regsPerBlock; 
# 88
int warpSize; 
# 89
int maxThreadsPerBlock; 
# 90
int maxThreadsDim[3]; 
# 91
int maxGridSize[3]; 
# 92
int clockRate; 
# 93
int memoryClockRate; 
# 94
int memoryBusWidth; 
# 95
size_t totalConstMem; 
# 96
int major; 
# 99
int minor; 
# 102
int multiProcessorCount; 
# 103
int l2CacheSize; 
# 104
int maxThreadsPerMultiProcessor; 
# 105
int computeMode; 
# 106
int clockInstructionRate; 
# 108
hipDeviceArch_t arch; 
# 109
int concurrentKernels; 
# 110
int pciDomainID; 
# 111
int pciBusID; 
# 112
int pciDeviceID; 
# 113
size_t maxSharedMemoryPerMultiProcessor; 
# 114
int isMultiGpuBoard; 
# 115
int canMapHostMemory; 
# 116
int gcnArch; 
# 117
int integrated; 
# 118
int cooperativeLaunch; 
# 119
int cooperativeMultiDeviceLaunch; 
# 120
int maxTexture1D; 
# 121
int maxTexture2D[2]; 
# 122
int maxTexture3D[3]; 
# 123
unsigned *hdpMemFlushCntl; 
# 124
unsigned *hdpRegFlushCntl; 
# 125
size_t memPitch; 
# 126
size_t textureAlignment; 
# 127
size_t texturePitchAlignment; 
# 128
int kernelExecTimeoutEnabled; 
# 129
int ECCEnabled; 
# 130
int tccDriver; 
# 132
} hipDeviceProp_t; 
# 145
typedef 
# 138
enum hipMemoryType { 
# 139
hipMemoryTypeHost, 
# 140
hipMemoryTypeDevice, 
# 142
hipMemoryTypeArray, 
# 144
hipMemoryTypeUnified
# 145
} hipMemoryType; 
# 159
typedef 
# 151
struct hipPointerAttribute_t { 
# 152
enum hipMemoryType memoryType; 
# 153
int device; 
# 154
void *devicePointer; 
# 155
void *hostPointer; 
# 156
int isManaged; 
# 157
unsigned allocationFlags; 
# 159
} hipPointerAttribute_t; 
# 270 "/opt/rocm-3.3.0/hip/include/hip/hip_runtime_api.h" 3
typedef 
# 185
enum hipError_t { 
# 186
hipSuccess, 
# 187
hipErrorInvalidValue, 
# 189
hipErrorOutOfMemory, 
# 191
hipErrorMemoryAllocation = 2, 
# 192
hipErrorNotInitialized, 
# 194
hipErrorInitializationError = 3, 
# 195
hipErrorDeinitialized, 
# 196
hipErrorProfilerDisabled, 
# 197
hipErrorProfilerNotInitialized, 
# 198
hipErrorProfilerAlreadyStarted, 
# 199
hipErrorProfilerAlreadyStopped, 
# 200
hipErrorInvalidConfiguration, 
# 201
hipErrorInvalidSymbol = 13, 
# 202
hipErrorInvalidDevicePointer = 17, 
# 203
hipErrorInvalidMemcpyDirection = 21, 
# 204
hipErrorInsufficientDriver = 35, 
# 205
hipErrorMissingConfiguration = 52, 
# 206
hipErrorPriorLaunchFailure, 
# 207
hipErrorInvalidDeviceFunction = 98, 
# 208
hipErrorNoDevice = 100, 
# 209
hipErrorInvalidDevice, 
# 210
hipErrorInvalidImage = 200, 
# 211
hipErrorInvalidContext, 
# 212
hipErrorContextAlreadyCurrent, 
# 213
hipErrorMapFailed = 205, 
# 215
hipErrorMapBufferObjectFailed = 205, 
# 216
hipErrorUnmapFailed, 
# 217
hipErrorArrayIsMapped, 
# 218
hipErrorAlreadyMapped, 
# 219
hipErrorNoBinaryForGpu, 
# 220
hipErrorAlreadyAcquired, 
# 221
hipErrorNotMapped, 
# 222
hipErrorNotMappedAsArray, 
# 223
hipErrorNotMappedAsPointer, 
# 224
hipErrorECCNotCorrectable, 
# 225
hipErrorUnsupportedLimit, 
# 226
hipErrorContextAlreadyInUse, 
# 227
hipErrorPeerAccessUnsupported, 
# 228
hipErrorInvalidKernelFile, 
# 229
hipErrorInvalidGraphicsContext, 
# 230
hipErrorInvalidSource = 300, 
# 231
hipErrorFileNotFound, 
# 232
hipErrorSharedObjectSymbolNotFound, 
# 233
hipErrorSharedObjectInitFailed, 
# 234
hipErrorOperatingSystem, 
# 235
hipErrorInvalidHandle = 400, 
# 237
hipErrorInvalidResourceHandle = 400, 
# 238
hipErrorNotFound = 500, 
# 239
hipErrorNotReady = 600, 
# 243
hipErrorIllegalAddress = 700, 
# 244
hipErrorLaunchOutOfResources, 
# 245
hipErrorLaunchTimeOut, 
# 246
hipErrorPeerAccessAlreadyEnabled = 704, 
# 248
hipErrorPeerAccessNotEnabled, 
# 250
hipErrorSetOnActiveProcess = 708, 
# 251
hipErrorAssert = 710, 
# 252
hipErrorHostMemoryAlreadyRegistered = 712, 
# 254
hipErrorHostMemoryNotRegistered, 
# 256
hipErrorLaunchFailure = 719, 
# 258
hipErrorCooperativeLaunchTooLarge, 
# 262
hipErrorNotSupported = 801, 
# 263
hipErrorUnknown = 999, 
# 265
hipErrorRuntimeMemory = 1052, 
# 267
hipErrorRuntimeOther, 
# 269
hipErrorTbd
# 270
} hipError_t; 
# 334 "/opt/rocm-3.3.0/hip/include/hip/hip_runtime_api.h" 3
typedef 
# 279
enum hipDeviceAttribute_t { 
# 280
hipDeviceAttributeMaxThreadsPerBlock, 
# 281
hipDeviceAttributeMaxBlockDimX, 
# 282
hipDeviceAttributeMaxBlockDimY, 
# 283
hipDeviceAttributeMaxBlockDimZ, 
# 284
hipDeviceAttributeMaxGridDimX, 
# 285
hipDeviceAttributeMaxGridDimY, 
# 286
hipDeviceAttributeMaxGridDimZ, 
# 287
hipDeviceAttributeMaxSharedMemoryPerBlock, 
# 289
hipDeviceAttributeTotalConstantMemory, 
# 290
hipDeviceAttributeWarpSize, 
# 291
hipDeviceAttributeMaxRegistersPerBlock, 
# 295
hipDeviceAttributeClockRate, 
# 296
hipDeviceAttributeMemoryClockRate, 
# 297
hipDeviceAttributeMemoryBusWidth, 
# 298
hipDeviceAttributeMultiprocessorCount, 
# 299
hipDeviceAttributeComputeMode, 
# 300
hipDeviceAttributeL2CacheSize, 
# 302
hipDeviceAttributeMaxThreadsPerMultiProcessor, 
# 304
hipDeviceAttributeComputeCapabilityMajor, 
# 305
hipDeviceAttributeComputeCapabilityMinor, 
# 306
hipDeviceAttributeConcurrentKernels, 
# 308
hipDeviceAttributePciBusId, 
# 309
hipDeviceAttributePciDeviceId, 
# 310
hipDeviceAttributeMaxSharedMemoryPerMultiprocessor, 
# 312
hipDeviceAttributeIsMultiGpuBoard, 
# 313
hipDeviceAttributeIntegrated, 
# 314
hipDeviceAttributeCooperativeLaunch, 
# 315
hipDeviceAttributeCooperativeMultiDeviceLaunch, 
# 317
hipDeviceAttributeMaxTexture1DWidth, 
# 318
hipDeviceAttributeMaxTexture2DWidth, 
# 319
hipDeviceAttributeMaxTexture2DHeight, 
# 320
hipDeviceAttributeMaxTexture3DWidth, 
# 321
hipDeviceAttributeMaxTexture3DHeight, 
# 322
hipDeviceAttributeMaxTexture3DDepth, 
# 324
hipDeviceAttributeHdpMemFlushCntl, 
# 325
hipDeviceAttributeHdpRegFlushCntl, 
# 327
hipDeviceAttributeMaxPitch, 
# 328
hipDeviceAttributeTextureAlignment, 
# 329
hipDeviceAttributeTexturePitchAlignment, 
# 330
hipDeviceAttributeKernelExecTimeout, 
# 331
hipDeviceAttributeCanMapHostMemory, 
# 332
hipDeviceAttributeEccEnabled
# 334
} hipDeviceAttribute_t; 
# 336
enum hipComputeMode { 
# 337
hipComputeModeDefault, 
# 338
hipComputeModeExclusive, 
# 339
hipComputeModeProhibited, 
# 340
hipComputeModeExclusiveProcess
# 341
}; 
# 59 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef uint32_t cuuint32_t; 
# 60
typedef uint64_t cuuint64_t; 
# 240 "/usr/local/cuda-10.1/include/cuda.h" 3
extern "C" {
# 250 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef unsigned long long CUdeviceptr; 
# 257
typedef int CUdevice; 
# 258
typedef struct CUctx_st *CUcontext; 
# 259
typedef struct CUmod_st *CUmodule; 
# 260
typedef struct CUfunc_st *CUfunction; 
# 261
typedef struct CUarray_st *CUarray; 
# 262
typedef struct CUmipmappedArray_st *CUmipmappedArray; 
# 263
typedef struct CUtexref_st *CUtexref; 
# 264
typedef struct CUsurfref_st *CUsurfref; 
# 265
typedef CUevent_st *CUevent; 
# 266
typedef CUstream_st *CUstream; 
# 267
typedef struct CUgraphicsResource_st *CUgraphicsResource; 
# 268
typedef unsigned long long CUtexObject; 
# 269
typedef unsigned long long CUsurfObject; 
# 270
typedef struct CUextMemory_st *CUexternalMemory; 
# 271
typedef struct CUextSemaphore_st *CUexternalSemaphore; 
# 272
typedef CUgraph_st *CUgraph; 
# 273
typedef CUgraphNode_st *CUgraphNode; 
# 274
typedef CUgraphExec_st *CUgraphExec; 
# 295 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 293
struct CUipcEventHandle_st { 
# 294
char reserved[64]; 
# 295
} CUipcEventHandle; 
# 302
typedef 
# 300
struct CUipcMemHandle_st { 
# 301
char reserved[64]; 
# 302
} CUipcMemHandle; 
# 309
typedef 
# 307
enum CUipcMem_flags_enum { 
# 308
CU_IPC_MEM_LAZY_ENABLE_PEER_ACCESS = 1
# 309
} CUipcMem_flags; 
# 320
typedef 
# 316
enum CUmemAttach_flags_enum { 
# 317
CU_MEM_ATTACH_GLOBAL = 1, 
# 318
CU_MEM_ATTACH_HOST, 
# 319
CU_MEM_ATTACH_SINGLE = 4
# 320
} CUmemAttach_flags; 
# 337
typedef 
# 325
enum CUctx_flags_enum { 
# 326
CU_CTX_SCHED_AUTO, 
# 327
CU_CTX_SCHED_SPIN, 
# 328
CU_CTX_SCHED_YIELD, 
# 329
CU_CTX_SCHED_BLOCKING_SYNC = 4, 
# 330
CU_CTX_BLOCKING_SYNC = 4, 
# 333
CU_CTX_SCHED_MASK = 7, 
# 334
CU_CTX_MAP_HOST, 
# 335
CU_CTX_LMEM_RESIZE_TO_MAX = 16, 
# 336
CU_CTX_FLAGS_MASK = 31
# 337
} CUctx_flags; 
# 345
typedef 
# 342
enum CUstream_flags_enum { 
# 343
CU_STREAM_DEFAULT, 
# 344
CU_STREAM_NON_BLOCKING
# 345
} CUstream_flags; 
# 375 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 370
enum CUevent_flags_enum { 
# 371
CU_EVENT_DEFAULT, 
# 372
CU_EVENT_BLOCKING_SYNC, 
# 373
CU_EVENT_DISABLE_TIMING, 
# 374
CU_EVENT_INTERPROCESS = 4
# 375
} CUevent_flags; 
# 399 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 381 "/usr/local/cuda-10.1/include/cuda.h" 3
enum CUstreamWaitValue_flags_enum { 
# 382
CU_STREAM_WAIT_VALUE_GEQ, 
# 385
CU_STREAM_WAIT_VALUE_EQ, 
# 386
CU_STREAM_WAIT_VALUE_AND, 
# 387
CU_STREAM_WAIT_VALUE_NOR, 
# 390
CU_STREAM_WAIT_VALUE_FLUSH = 1073741824
# 399 "/usr/local/cuda-10.1/include/cuda.h" 3
} CUstreamWaitValue_flags; 
# 412
typedef 
# 404
enum CUstreamWriteValue_flags_enum { 
# 405
CU_STREAM_WRITE_VALUE_DEFAULT, 
# 406
CU_STREAM_WRITE_VALUE_NO_MEMORY_BARRIER
# 412
} CUstreamWriteValue_flags; 
# 424
typedef 
# 417
enum CUstreamBatchMemOpType_enum { 
# 418
CU_STREAM_MEM_OP_WAIT_VALUE_32 = 1, 
# 419
CU_STREAM_MEM_OP_WRITE_VALUE_32, 
# 420
CU_STREAM_MEM_OP_WAIT_VALUE_64 = 4, 
# 421
CU_STREAM_MEM_OP_WRITE_VALUE_64, 
# 422
CU_STREAM_MEM_OP_FLUSH_REMOTE_WRITES = 3
# 424
} CUstreamBatchMemOpType; 
# 456
typedef 
# 429
union CUstreamBatchMemOpParams_union { 
# 430
CUstreamBatchMemOpType operation; 
# 431
struct CUstreamMemOpWaitValueParams_st { 
# 432
CUstreamBatchMemOpType operation; 
# 433
CUdeviceptr address; 
# 434
union { 
# 435
cuuint32_t value; 
# 436
cuuint64_t value64; 
# 437
}; 
# 438
unsigned flags; 
# 439
CUdeviceptr alias; 
# 440
} waitValue; 
# 441
struct CUstreamMemOpWriteValueParams_st { 
# 442
CUstreamBatchMemOpType operation; 
# 443
CUdeviceptr address; 
# 444
union { 
# 445
cuuint32_t value; 
# 446
cuuint64_t value64; 
# 447
}; 
# 448
unsigned flags; 
# 449
CUdeviceptr alias; 
# 450
} writeValue; 
# 451
struct CUstreamMemOpFlushRemoteWritesParams_st { 
# 452
CUstreamBatchMemOpType operation; 
# 453
unsigned flags; 
# 454
} flushRemoteWrites; 
# 455
cuuint64_t pad[6]; 
# 456
} CUstreamBatchMemOpParams; 
# 465
typedef 
# 462
enum CUoccupancy_flags_enum { 
# 463
CU_OCCUPANCY_DEFAULT, 
# 464
CU_OCCUPANCY_DISABLE_CACHING_OVERRIDE
# 465
} CUoccupancy_flags; 
# 479
typedef 
# 470
enum CUarray_format_enum { 
# 471
CU_AD_FORMAT_UNSIGNED_INT8 = 1, 
# 472
CU_AD_FORMAT_UNSIGNED_INT16, 
# 473
CU_AD_FORMAT_UNSIGNED_INT32, 
# 474
CU_AD_FORMAT_SIGNED_INT8 = 8, 
# 475
CU_AD_FORMAT_SIGNED_INT16, 
# 476
CU_AD_FORMAT_SIGNED_INT32, 
# 477
CU_AD_FORMAT_HALF = 16, 
# 478
CU_AD_FORMAT_FLOAT = 32
# 479
} CUarray_format; 
# 489
typedef 
# 484
enum CUaddress_mode_enum { 
# 485
CU_TR_ADDRESS_MODE_WRAP, 
# 486
CU_TR_ADDRESS_MODE_CLAMP, 
# 487
CU_TR_ADDRESS_MODE_MIRROR, 
# 488
CU_TR_ADDRESS_MODE_BORDER
# 489
} CUaddress_mode; 
# 497
typedef 
# 494
enum CUfilter_mode_enum { 
# 495
CU_TR_FILTER_MODE_POINT, 
# 496
CU_TR_FILTER_MODE_LINEAR
# 497
} CUfilter_mode; 
# 610
typedef 
# 502
enum CUdevice_attribute_enum { 
# 503
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1, 
# 504
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X, 
# 505
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y, 
# 506
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z, 
# 507
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X, 
# 508
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y, 
# 509
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z, 
# 510
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK, 
# 511
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8, 
# 512
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY, 
# 513
CU_DEVICE_ATTRIBUTE_WARP_SIZE, 
# 514
CU_DEVICE_ATTRIBUTE_MAX_PITCH, 
# 515
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK, 
# 516
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12, 
# 517
CU_DEVICE_ATTRIBUTE_CLOCK_RATE, 
# 518
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT, 
# 519
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP, 
# 520
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT, 
# 521
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT, 
# 522
CU_DEVICE_ATTRIBUTE_INTEGRATED, 
# 523
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY, 
# 524
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE, 
# 525
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH, 
# 526
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH, 
# 527
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT, 
# 528
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH, 
# 529
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT, 
# 530
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH, 
# 531
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH, 
# 532
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT, 
# 533
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS, 
# 534
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27, 
# 535
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT, 
# 536
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES, 
# 537
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT, 
# 538
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS, 
# 539
CU_DEVICE_ATTRIBUTE_ECC_ENABLED, 
# 540
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID, 
# 541
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID, 
# 542
CU_DEVICE_ATTRIBUTE_TCC_DRIVER, 
# 543
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE, 
# 544
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH, 
# 545
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE, 
# 546
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR, 
# 547
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT, 
# 548
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING, 
# 549
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH, 
# 550
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS, 
# 551
CU_DEVICE_ATTRIBUTE_CAN_TEX2D_GATHER, 
# 552
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_WIDTH, 
# 553
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_HEIGHT, 
# 554
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH_ALTERNATE, 
# 555
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT_ALTERNATE, 
# 556
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH_ALTERNATE, 
# 557
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID, 
# 558
CU_DEVICE_ATTRIBUTE_TEXTURE_PITCH_ALIGNMENT, 
# 559
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_WIDTH, 
# 560
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_WIDTH, 
# 561
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_LAYERS, 
# 562
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_WIDTH, 
# 563
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_WIDTH, 
# 564
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_HEIGHT, 
# 565
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_WIDTH, 
# 566
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_HEIGHT, 
# 567
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_DEPTH, 
# 568
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_WIDTH, 
# 569
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_LAYERS, 
# 570
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_WIDTH, 
# 571
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_HEIGHT, 
# 572
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_LAYERS, 
# 573
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_WIDTH, 
# 574
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_WIDTH, 
# 575
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_LAYERS, 
# 576
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LINEAR_WIDTH, 
# 577
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_WIDTH, 
# 578
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_HEIGHT, 
# 579
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_PITCH, 
# 580
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_MIPMAPPED_WIDTH, 
# 581
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_MIPMAPPED_HEIGHT, 
# 582
CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR, 
# 583
CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR, 
# 584
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_MIPMAPPED_WIDTH, 
# 585
CU_DEVICE_ATTRIBUTE_STREAM_PRIORITIES_SUPPORTED, 
# 586
CU_DEVICE_ATTRIBUTE_GLOBAL_L1_CACHE_SUPPORTED, 
# 587
CU_DEVICE_ATTRIBUTE_LOCAL_L1_CACHE_SUPPORTED, 
# 588
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_MULTIPROCESSOR, 
# 589
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_MULTIPROCESSOR, 
# 590
CU_DEVICE_ATTRIBUTE_MANAGED_MEMORY, 
# 591
CU_DEVICE_ATTRIBUTE_MULTI_GPU_BOARD, 
# 592
CU_DEVICE_ATTRIBUTE_MULTI_GPU_BOARD_GROUP_ID, 
# 593
CU_DEVICE_ATTRIBUTE_HOST_NATIVE_ATOMIC_SUPPORTED, 
# 594
CU_DEVICE_ATTRIBUTE_SINGLE_TO_DOUBLE_PRECISION_PERF_RATIO, 
# 595
CU_DEVICE_ATTRIBUTE_PAGEABLE_MEMORY_ACCESS, 
# 596
CU_DEVICE_ATTRIBUTE_CONCURRENT_MANAGED_ACCESS, 
# 597
CU_DEVICE_ATTRIBUTE_COMPUTE_PREEMPTION_SUPPORTED, 
# 598
CU_DEVICE_ATTRIBUTE_CAN_USE_HOST_POINTER_FOR_REGISTERED_MEM, 
# 599
CU_DEVICE_ATTRIBUTE_CAN_USE_STREAM_MEM_OPS, 
# 600
CU_DEVICE_ATTRIBUTE_CAN_USE_64_BIT_STREAM_MEM_OPS, 
# 601
CU_DEVICE_ATTRIBUTE_CAN_USE_STREAM_WAIT_VALUE_NOR, 
# 602
CU_DEVICE_ATTRIBUTE_COOPERATIVE_LAUNCH, 
# 603
CU_DEVICE_ATTRIBUTE_COOPERATIVE_MULTI_DEVICE_LAUNCH, 
# 604
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK_OPTIN, 
# 605
CU_DEVICE_ATTRIBUTE_CAN_FLUSH_REMOTE_WRITES, 
# 606
CU_DEVICE_ATTRIBUTE_HOST_REGISTER_SUPPORTED, 
# 607
CU_DEVICE_ATTRIBUTE_PAGEABLE_MEMORY_ACCESS_USES_HOST_PAGE_TABLES, 
# 608
CU_DEVICE_ATTRIBUTE_DIRECT_MANAGED_MEM_ACCESS_FROM_HOST, 
# 609
CU_DEVICE_ATTRIBUTE_MAX
# 610
} CUdevice_attribute; 
# 626
typedef 
# 615
struct CUdevprop_st { 
# 616
int maxThreadsPerBlock; 
# 617
int maxThreadsDim[3]; 
# 618
int maxGridSize[3]; 
# 619
int sharedMemPerBlock; 
# 620
int totalConstantMemory; 
# 621
int SIMDWidth; 
# 622
int memPitch; 
# 623
int regsPerBlock; 
# 624
int clockRate; 
# 625
int textureAlign; 
# 626
} CUdevprop; 
# 641
typedef 
# 631
enum CUpointer_attribute_enum { 
# 632
CU_POINTER_ATTRIBUTE_CONTEXT = 1, 
# 633
CU_POINTER_ATTRIBUTE_MEMORY_TYPE, 
# 634
CU_POINTER_ATTRIBUTE_DEVICE_POINTER, 
# 635
CU_POINTER_ATTRIBUTE_HOST_POINTER, 
# 636
CU_POINTER_ATTRIBUTE_P2P_TOKENS, 
# 637
CU_POINTER_ATTRIBUTE_SYNC_MEMOPS, 
# 638
CU_POINTER_ATTRIBUTE_BUFFER_ID, 
# 639
CU_POINTER_ATTRIBUTE_IS_MANAGED, 
# 640
CU_POINTER_ATTRIBUTE_DEVICE_ORDINAL
# 641
} CUpointer_attribute; 
# 719 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 646 "/usr/local/cuda-10.1/include/cuda.h" 3
enum CUfunction_attribute_enum { 
# 652
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK, 
# 659
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES, 
# 665
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES, 
# 670
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES, 
# 675
CU_FUNC_ATTRIBUTE_NUM_REGS, 
# 684 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_FUNC_ATTRIBUTE_PTX_VERSION, 
# 693 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_FUNC_ATTRIBUTE_BINARY_VERSION, 
# 699
CU_FUNC_ATTRIBUTE_CACHE_MODE_CA, 
# 707
CU_FUNC_ATTRIBUTE_MAX_DYNAMIC_SHARED_SIZE_BYTES, 
# 716 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_FUNC_ATTRIBUTE_PREFERRED_SHARED_MEMORY_CARVEOUT, 
# 718
CU_FUNC_ATTRIBUTE_MAX
# 719
} CUfunction_attribute; 
# 729
typedef 
# 724
enum CUfunc_cache_enum { 
# 725
CU_FUNC_CACHE_PREFER_NONE, 
# 726
CU_FUNC_CACHE_PREFER_SHARED, 
# 727
CU_FUNC_CACHE_PREFER_L1, 
# 728
CU_FUNC_CACHE_PREFER_EQUAL
# 729
} CUfunc_cache; 
# 738
typedef 
# 734
enum CUsharedconfig_enum { 
# 735
CU_SHARED_MEM_CONFIG_DEFAULT_BANK_SIZE, 
# 736
CU_SHARED_MEM_CONFIG_FOUR_BYTE_BANK_SIZE, 
# 737
CU_SHARED_MEM_CONFIG_EIGHT_BYTE_BANK_SIZE
# 738
} CUsharedconfig; 
# 747
typedef 
# 743
enum CUshared_carveout_enum { 
# 744
CU_SHAREDMEM_CARVEOUT_DEFAULT = (-1), 
# 745
CU_SHAREDMEM_CARVEOUT_MAX_SHARED = 100, 
# 746
CU_SHAREDMEM_CARVEOUT_MAX_L1 = 0
# 747
} CUshared_carveout; 
# 757
typedef 
# 752
enum CUmemorytype_enum { 
# 753
CU_MEMORYTYPE_HOST = 1, 
# 754
CU_MEMORYTYPE_DEVICE, 
# 755
CU_MEMORYTYPE_ARRAY, 
# 756
CU_MEMORYTYPE_UNIFIED
# 757
} CUmemorytype; 
# 766
typedef 
# 762
enum CUcomputemode_enum { 
# 763
CU_COMPUTEMODE_DEFAULT, 
# 764
CU_COMPUTEMODE_PROHIBITED = 2, 
# 765
CU_COMPUTEMODE_EXCLUSIVE_PROCESS
# 766
} CUcomputemode; 
# 778
typedef 
# 771
enum CUmem_advise_enum { 
# 772
CU_MEM_ADVISE_SET_READ_MOSTLY = 1, 
# 773
CU_MEM_ADVISE_UNSET_READ_MOSTLY, 
# 774
CU_MEM_ADVISE_SET_PREFERRED_LOCATION, 
# 775
CU_MEM_ADVISE_UNSET_PREFERRED_LOCATION, 
# 776
CU_MEM_ADVISE_SET_ACCESSED_BY, 
# 777
CU_MEM_ADVISE_UNSET_ACCESSED_BY
# 778
} CUmem_advise; 
# 785
typedef 
# 780
enum CUmem_range_attribute_enum { 
# 781
CU_MEM_RANGE_ATTRIBUTE_READ_MOSTLY = 1, 
# 782
CU_MEM_RANGE_ATTRIBUTE_PREFERRED_LOCATION, 
# 783
CU_MEM_RANGE_ATTRIBUTE_ACCESSED_BY, 
# 784
CU_MEM_RANGE_ATTRIBUTE_LAST_PREFETCH_LOCATION
# 785
} CUmem_range_attribute; 
# 960 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 790 "/usr/local/cuda-10.1/include/cuda.h" 3
enum CUjit_option_enum { 
# 797
CU_JIT_MAX_REGISTERS, 
# 812 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_THREADS_PER_BLOCK, 
# 820
CU_JIT_WALL_TIME, 
# 829 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_INFO_LOG_BUFFER, 
# 838 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES, 
# 847 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_ERROR_LOG_BUFFER, 
# 856 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES, 
# 864
CU_JIT_OPTIMIZATION_LEVEL, 
# 872
CU_JIT_TARGET_FROM_CUCONTEXT, 
# 880
CU_JIT_TARGET, 
# 889 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_FALLBACK_STRATEGY, 
# 897
CU_JIT_GENERATE_DEBUG_INFO, 
# 904
CU_JIT_LOG_VERBOSE, 
# 911
CU_JIT_GENERATE_LINE_INFO, 
# 919
CU_JIT_CACHE_MODE, 
# 924
CU_JIT_NEW_SM3X_OPT, 
# 925
CU_JIT_FAST_COMPILE, 
# 939 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_GLOBAL_SYMBOL_NAMES, 
# 948 "/usr/local/cuda-10.1/include/cuda.h" 3
CU_JIT_GLOBAL_SYMBOL_ADDRESSES, 
# 956
CU_JIT_GLOBAL_SYMBOL_COUNT, 
# 958
CU_JIT_NUM_OPTIONS
# 960
} CUjit_option; 
# 982
typedef 
# 965
enum CUjit_target_enum { 
# 967
CU_TARGET_COMPUTE_20 = 20, 
# 968
CU_TARGET_COMPUTE_21, 
# 969
CU_TARGET_COMPUTE_30 = 30, 
# 970
CU_TARGET_COMPUTE_32 = 32, 
# 971
CU_TARGET_COMPUTE_35 = 35, 
# 972
CU_TARGET_COMPUTE_37 = 37, 
# 973
CU_TARGET_COMPUTE_50 = 50, 
# 974
CU_TARGET_COMPUTE_52 = 52, 
# 975
CU_TARGET_COMPUTE_53, 
# 976
CU_TARGET_COMPUTE_60 = 60, 
# 977
CU_TARGET_COMPUTE_61, 
# 978
CU_TARGET_COMPUTE_62, 
# 979
CU_TARGET_COMPUTE_70 = 70, 
# 980
CU_TARGET_COMPUTE_72 = 72, 
# 981
CU_TARGET_COMPUTE_75 = 75
# 982
} CUjit_target; 
# 993
typedef 
# 987
enum CUjit_fallback_enum { 
# 989
CU_PREFER_PTX, 
# 991
CU_PREFER_BINARY
# 993
} CUjit_fallback; 
# 1003
typedef 
# 998
enum CUjit_cacheMode_enum { 
# 1000
CU_JIT_CACHE_OPTION_NONE, 
# 1001
CU_JIT_CACHE_OPTION_CG, 
# 1002
CU_JIT_CACHE_OPTION_CA
# 1003
} CUjit_cacheMode; 
# 1041
typedef 
# 1008
enum CUjitInputType_enum { 
# 1014
CU_JIT_INPUT_CUBIN, 
# 1020
CU_JIT_INPUT_PTX, 
# 1026
CU_JIT_INPUT_FATBINARY, 
# 1032
CU_JIT_INPUT_OBJECT, 
# 1038
CU_JIT_INPUT_LIBRARY, 
# 1040
CU_JIT_NUM_INPUT_TYPES
# 1041
} CUjitInputType; 
# 1044
typedef struct CUlinkState_st *CUlinkState; 
# 1056
typedef 
# 1050
enum CUgraphicsRegisterFlags_enum { 
# 1051
CU_GRAPHICS_REGISTER_FLAGS_NONE, 
# 1052
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY, 
# 1053
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD, 
# 1054
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4, 
# 1055
CU_GRAPHICS_REGISTER_FLAGS_TEXTURE_GATHER = 8
# 1056
} CUgraphicsRegisterFlags; 
# 1065
typedef 
# 1061
enum CUgraphicsMapResourceFlags_enum { 
# 1062
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE, 
# 1063
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY, 
# 1064
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 1065
} CUgraphicsMapResourceFlags; 
# 1077
typedef 
# 1070
enum CUarray_cubemap_face_enum { 
# 1071
CU_CUBEMAP_FACE_POSITIVE_X, 
# 1072
CU_CUBEMAP_FACE_NEGATIVE_X, 
# 1073
CU_CUBEMAP_FACE_POSITIVE_Y, 
# 1074
CU_CUBEMAP_FACE_NEGATIVE_Y, 
# 1075
CU_CUBEMAP_FACE_POSITIVE_Z, 
# 1076
CU_CUBEMAP_FACE_NEGATIVE_Z
# 1077
} CUarray_cubemap_face; 
# 1090
typedef 
# 1082
enum CUlimit_enum { 
# 1083
CU_LIMIT_STACK_SIZE, 
# 1084
CU_LIMIT_PRINTF_FIFO_SIZE, 
# 1085
CU_LIMIT_MALLOC_HEAP_SIZE, 
# 1086
CU_LIMIT_DEV_RUNTIME_SYNC_DEPTH, 
# 1087
CU_LIMIT_DEV_RUNTIME_PENDING_LAUNCH_COUNT, 
# 1088
CU_LIMIT_MAX_L2_FETCH_GRANULARITY, 
# 1089
CU_LIMIT_MAX
# 1090
} CUlimit; 
# 1100
typedef 
# 1095
enum CUresourcetype_enum { 
# 1096
CU_RESOURCE_TYPE_ARRAY, 
# 1097
CU_RESOURCE_TYPE_MIPMAPPED_ARRAY, 
# 1098
CU_RESOURCE_TYPE_LINEAR, 
# 1099
CU_RESOURCE_TYPE_PITCH2D
# 1100
} CUresourcetype; 
# 1114 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef void (*CUhostFn)(void * userData); 
# 1130
typedef 
# 1119
struct CUDA_KERNEL_NODE_PARAMS_st { 
# 1120
CUfunction func; 
# 1121
unsigned gridDimX; 
# 1122
unsigned gridDimY; 
# 1123
unsigned gridDimZ; 
# 1124
unsigned blockDimX; 
# 1125
unsigned blockDimY; 
# 1126
unsigned blockDimZ; 
# 1127
unsigned sharedMemBytes; 
# 1128
void **kernelParams; 
# 1129
void **extra; 
# 1130
} CUDA_KERNEL_NODE_PARAMS; 
# 1142
typedef 
# 1135
struct CUDA_MEMSET_NODE_PARAMS_st { 
# 1136
CUdeviceptr dst; 
# 1137
size_t pitch; 
# 1138
unsigned value; 
# 1139
unsigned elementSize; 
# 1140
size_t width; 
# 1141
size_t height; 
# 1142
} CUDA_MEMSET_NODE_PARAMS; 
# 1150
typedef 
# 1147
struct CUDA_HOST_NODE_PARAMS_st { 
# 1148
CUhostFn fn; 
# 1149
void *userData; 
# 1150
} CUDA_HOST_NODE_PARAMS; 
# 1163
typedef 
# 1155
enum CUgraphNodeType_enum { 
# 1156
CU_GRAPH_NODE_TYPE_KERNEL, 
# 1157
CU_GRAPH_NODE_TYPE_MEMCPY, 
# 1158
CU_GRAPH_NODE_TYPE_MEMSET, 
# 1159
CU_GRAPH_NODE_TYPE_HOST, 
# 1160
CU_GRAPH_NODE_TYPE_GRAPH, 
# 1161
CU_GRAPH_NODE_TYPE_EMPTY, 
# 1162
CU_GRAPH_NODE_TYPE_COUNT
# 1163
} CUgraphNodeType; 
# 1173
typedef 
# 1168
enum CUstreamCaptureStatus_enum { 
# 1169
CU_STREAM_CAPTURE_STATUS_NONE, 
# 1170
CU_STREAM_CAPTURE_STATUS_ACTIVE, 
# 1171
CU_STREAM_CAPTURE_STATUS_INVALIDATED
# 1173
} CUstreamCaptureStatus; 
# 1187 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 1183
enum CUstreamCaptureMode_enum { 
# 1184
CU_STREAM_CAPTURE_MODE_GLOBAL, 
# 1185
CU_STREAM_CAPTURE_MODE_THREAD_LOCAL, 
# 1186
CU_STREAM_CAPTURE_MODE_RELAXED
# 1187
} CUstreamCaptureMode; 
# 1690 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 1194 "/usr/local/cuda-10.1/include/cuda.h" 3
enum cudaError_enum { 
# 1200
CUDA_SUCCESS, 
# 1206
CUDA_ERROR_INVALID_VALUE, 
# 1212
CUDA_ERROR_OUT_OF_MEMORY, 
# 1218
CUDA_ERROR_NOT_INITIALIZED, 
# 1223
CUDA_ERROR_DEINITIALIZED, 
# 1230
CUDA_ERROR_PROFILER_DISABLED, 
# 1238
CUDA_ERROR_PROFILER_NOT_INITIALIZED, 
# 1245
CUDA_ERROR_PROFILER_ALREADY_STARTED, 
# 1252
CUDA_ERROR_PROFILER_ALREADY_STOPPED, 
# 1258
CUDA_ERROR_NO_DEVICE = 100, 
# 1264
CUDA_ERROR_INVALID_DEVICE, 
# 1271
CUDA_ERROR_INVALID_IMAGE = 200, 
# 1281 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_INVALID_CONTEXT, 
# 1290 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_CONTEXT_ALREADY_CURRENT, 
# 1295
CUDA_ERROR_MAP_FAILED = 205, 
# 1300
CUDA_ERROR_UNMAP_FAILED, 
# 1306
CUDA_ERROR_ARRAY_IS_MAPPED, 
# 1311
CUDA_ERROR_ALREADY_MAPPED, 
# 1319
CUDA_ERROR_NO_BINARY_FOR_GPU, 
# 1324
CUDA_ERROR_ALREADY_ACQUIRED, 
# 1329
CUDA_ERROR_NOT_MAPPED, 
# 1335
CUDA_ERROR_NOT_MAPPED_AS_ARRAY, 
# 1341
CUDA_ERROR_NOT_MAPPED_AS_POINTER, 
# 1347
CUDA_ERROR_ECC_UNCORRECTABLE, 
# 1353
CUDA_ERROR_UNSUPPORTED_LIMIT, 
# 1360
CUDA_ERROR_CONTEXT_ALREADY_IN_USE, 
# 1366
CUDA_ERROR_PEER_ACCESS_UNSUPPORTED, 
# 1371
CUDA_ERROR_INVALID_PTX, 
# 1376
CUDA_ERROR_INVALID_GRAPHICS_CONTEXT, 
# 1382
CUDA_ERROR_NVLINK_UNCORRECTABLE, 
# 1387
CUDA_ERROR_JIT_COMPILER_NOT_FOUND, 
# 1392
CUDA_ERROR_INVALID_SOURCE = 300, 
# 1397
CUDA_ERROR_FILE_NOT_FOUND, 
# 1402
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND, 
# 1407
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED, 
# 1412
CUDA_ERROR_OPERATING_SYSTEM, 
# 1418
CUDA_ERROR_INVALID_HANDLE = 400, 
# 1424
CUDA_ERROR_ILLEGAL_STATE, 
# 1430
CUDA_ERROR_NOT_FOUND = 500, 
# 1438
CUDA_ERROR_NOT_READY = 600, 
# 1447 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_ILLEGAL_ADDRESS = 700, 
# 1458 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES, 
# 1468 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_LAUNCH_TIMEOUT, 
# 1474
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING, 
# 1481
CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED, 
# 1488
CUDA_ERROR_PEER_ACCESS_NOT_ENABLED, 
# 1494
CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE = 708, 
# 1501
CUDA_ERROR_CONTEXT_IS_DESTROYED, 
# 1509
CUDA_ERROR_ASSERT, 
# 1516
CUDA_ERROR_TOO_MANY_PEERS, 
# 1522
CUDA_ERROR_HOST_MEMORY_ALREADY_REGISTERED, 
# 1528
CUDA_ERROR_HOST_MEMORY_NOT_REGISTERED, 
# 1537 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_HARDWARE_STACK_ERROR, 
# 1545
CUDA_ERROR_ILLEGAL_INSTRUCTION, 
# 1554 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_MISALIGNED_ADDRESS, 
# 1565 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_INVALID_ADDRESS_SPACE, 
# 1573
CUDA_ERROR_INVALID_PC, 
# 1584 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_LAUNCH_FAILED, 
# 1593 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_COOPERATIVE_LAUNCH_TOO_LARGE, 
# 1598
CUDA_ERROR_NOT_PERMITTED = 800, 
# 1604
CUDA_ERROR_NOT_SUPPORTED, 
# 1613 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_SYSTEM_NOT_READY, 
# 1620
CUDA_ERROR_SYSTEM_DRIVER_MISMATCH, 
# 1629 "/usr/local/cuda-10.1/include/cuda.h" 3
CUDA_ERROR_COMPAT_NOT_SUPPORTED_ON_DEVICE, 
# 1635
CUDA_ERROR_STREAM_CAPTURE_UNSUPPORTED = 900, 
# 1641
CUDA_ERROR_STREAM_CAPTURE_INVALIDATED, 
# 1647
CUDA_ERROR_STREAM_CAPTURE_MERGE, 
# 1652
CUDA_ERROR_STREAM_CAPTURE_UNMATCHED, 
# 1658
CUDA_ERROR_STREAM_CAPTURE_UNJOINED, 
# 1665
CUDA_ERROR_STREAM_CAPTURE_ISOLATION, 
# 1671
CUDA_ERROR_STREAM_CAPTURE_IMPLICIT, 
# 1677
CUDA_ERROR_CAPTURED_EVENT, 
# 1684
CUDA_ERROR_STREAM_CAPTURE_WRONG_THREAD, 
# 1689
CUDA_ERROR_UNKNOWN = 999
# 1690
} CUresult; 
# 1701
typedef 
# 1695
enum CUdevice_P2PAttribute_enum { 
# 1696
CU_DEVICE_P2P_ATTRIBUTE_PERFORMANCE_RANK = 1, 
# 1697
CU_DEVICE_P2P_ATTRIBUTE_ACCESS_SUPPORTED, 
# 1698
CU_DEVICE_P2P_ATTRIBUTE_NATIVE_ATOMIC_SUPPORTED, 
# 1699
CU_DEVICE_P2P_ATTRIBUTE_ACCESS_ACCESS_SUPPORTED, 
# 1700
CU_DEVICE_P2P_ATTRIBUTE_CUDA_ARRAY_ACCESS_SUPPORTED = 4
# 1701
} CUdevice_P2PAttribute; 
# 1709
typedef void (*CUstreamCallback)(CUstream hStream, CUresult status, void * userData); 
# 1717
typedef size_t (*CUoccupancyB2DSize)(int blockSize); 
# 1793 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 1772
struct CUDA_MEMCPY2D_st { 
# 1773
size_t srcXInBytes; 
# 1774
size_t srcY; 
# 1776
CUmemorytype srcMemoryType; 
# 1777
const void *srcHost; 
# 1778
CUdeviceptr srcDevice; 
# 1779
CUarray srcArray; 
# 1780
size_t srcPitch; 
# 1782
size_t dstXInBytes; 
# 1783
size_t dstY; 
# 1785
CUmemorytype dstMemoryType; 
# 1786
void *dstHost; 
# 1787
CUdeviceptr dstDevice; 
# 1788
CUarray dstArray; 
# 1789
size_t dstPitch; 
# 1791
size_t WidthInBytes; 
# 1792
size_t Height; 
# 1793
} CUDA_MEMCPY2D; 
# 1826
typedef 
# 1798
struct CUDA_MEMCPY3D_st { 
# 1799
size_t srcXInBytes; 
# 1800
size_t srcY; 
# 1801
size_t srcZ; 
# 1802
size_t srcLOD; 
# 1803
CUmemorytype srcMemoryType; 
# 1804
const void *srcHost; 
# 1805
CUdeviceptr srcDevice; 
# 1806
CUarray srcArray; 
# 1807
void *reserved0; 
# 1808
size_t srcPitch; 
# 1809
size_t srcHeight; 
# 1811
size_t dstXInBytes; 
# 1812
size_t dstY; 
# 1813
size_t dstZ; 
# 1814
size_t dstLOD; 
# 1815
CUmemorytype dstMemoryType; 
# 1816
void *dstHost; 
# 1817
CUdeviceptr dstDevice; 
# 1818
CUarray dstArray; 
# 1819
void *reserved1; 
# 1820
size_t dstPitch; 
# 1821
size_t dstHeight; 
# 1823
size_t WidthInBytes; 
# 1824
size_t Height; 
# 1825
size_t Depth; 
# 1826
} CUDA_MEMCPY3D; 
# 1859
typedef 
# 1831
struct CUDA_MEMCPY3D_PEER_st { 
# 1832
size_t srcXInBytes; 
# 1833
size_t srcY; 
# 1834
size_t srcZ; 
# 1835
size_t srcLOD; 
# 1836
CUmemorytype srcMemoryType; 
# 1837
const void *srcHost; 
# 1838
CUdeviceptr srcDevice; 
# 1839
CUarray srcArray; 
# 1840
CUcontext srcContext; 
# 1841
size_t srcPitch; 
# 1842
size_t srcHeight; 
# 1844
size_t dstXInBytes; 
# 1845
size_t dstY; 
# 1846
size_t dstZ; 
# 1847
size_t dstLOD; 
# 1848
CUmemorytype dstMemoryType; 
# 1849
void *dstHost; 
# 1850
CUdeviceptr dstDevice; 
# 1851
CUarray dstArray; 
# 1852
CUcontext dstContext; 
# 1853
size_t dstPitch; 
# 1854
size_t dstHeight; 
# 1856
size_t WidthInBytes; 
# 1857
size_t Height; 
# 1858
size_t Depth; 
# 1859
} CUDA_MEMCPY3D_PEER; 
# 1871
typedef 
# 1864
struct CUDA_ARRAY_DESCRIPTOR_st { 
# 1866
size_t Width; 
# 1867
size_t Height; 
# 1869
CUarray_format Format; 
# 1870
unsigned NumChannels; 
# 1871
} CUDA_ARRAY_DESCRIPTOR; 
# 1885
typedef 
# 1876
struct CUDA_ARRAY3D_DESCRIPTOR_st { 
# 1878
size_t Width; 
# 1879
size_t Height; 
# 1880
size_t Depth; 
# 1882
CUarray_format Format; 
# 1883
unsigned NumChannels; 
# 1884
unsigned Flags; 
# 1885
} CUDA_ARRAY3D_DESCRIPTOR; 
# 1925 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 1894
struct CUDA_RESOURCE_DESC_st { 
# 1896
CUresourcetype resType; 
# 1898
union { 
# 1899
struct { 
# 1900
CUarray hArray; 
# 1901
} array; 
# 1902
struct { 
# 1903
CUmipmappedArray hMipmappedArray; 
# 1904
} mipmap; 
# 1905
struct { 
# 1906
CUdeviceptr devPtr; 
# 1907
CUarray_format format; 
# 1908
unsigned numChannels; 
# 1909
size_t sizeInBytes; 
# 1910
} linear; 
# 1911
struct { 
# 1912
CUdeviceptr devPtr; 
# 1913
CUarray_format format; 
# 1914
unsigned numChannels; 
# 1915
size_t width; 
# 1916
size_t height; 
# 1917
size_t pitchInBytes; 
# 1918
} pitch2D; 
# 1919
struct { 
# 1920
int reserved[32]; 
# 1921
} reserved; 
# 1922
} res; 
# 1924
unsigned flags; 
# 1925
} CUDA_RESOURCE_DESC; 
# 1941
typedef 
# 1930
struct CUDA_TEXTURE_DESC_st { 
# 1931
CUaddress_mode addressMode[3]; 
# 1932
CUfilter_mode filterMode; 
# 1933
unsigned flags; 
# 1934
unsigned maxAnisotropy; 
# 1935
CUfilter_mode mipmapFilterMode; 
# 1936
float mipmapLevelBias; 
# 1937
float minMipmapLevelClamp; 
# 1938
float maxMipmapLevelClamp; 
# 1939
float borderColor[4]; 
# 1940
int reserved[12]; 
# 1941
} CUDA_TEXTURE_DESC; 
# 1983
typedef 
# 1946
enum CUresourceViewFormat_enum { 
# 1948
CU_RES_VIEW_FORMAT_NONE, 
# 1949
CU_RES_VIEW_FORMAT_UINT_1X8, 
# 1950
CU_RES_VIEW_FORMAT_UINT_2X8, 
# 1951
CU_RES_VIEW_FORMAT_UINT_4X8, 
# 1952
CU_RES_VIEW_FORMAT_SINT_1X8, 
# 1953
CU_RES_VIEW_FORMAT_SINT_2X8, 
# 1954
CU_RES_VIEW_FORMAT_SINT_4X8, 
# 1955
CU_RES_VIEW_FORMAT_UINT_1X16, 
# 1956
CU_RES_VIEW_FORMAT_UINT_2X16, 
# 1957
CU_RES_VIEW_FORMAT_UINT_4X16, 
# 1958
CU_RES_VIEW_FORMAT_SINT_1X16, 
# 1959
CU_RES_VIEW_FORMAT_SINT_2X16, 
# 1960
CU_RES_VIEW_FORMAT_SINT_4X16, 
# 1961
CU_RES_VIEW_FORMAT_UINT_1X32, 
# 1962
CU_RES_VIEW_FORMAT_UINT_2X32, 
# 1963
CU_RES_VIEW_FORMAT_UINT_4X32, 
# 1964
CU_RES_VIEW_FORMAT_SINT_1X32, 
# 1965
CU_RES_VIEW_FORMAT_SINT_2X32, 
# 1966
CU_RES_VIEW_FORMAT_SINT_4X32, 
# 1967
CU_RES_VIEW_FORMAT_FLOAT_1X16, 
# 1968
CU_RES_VIEW_FORMAT_FLOAT_2X16, 
# 1969
CU_RES_VIEW_FORMAT_FLOAT_4X16, 
# 1970
CU_RES_VIEW_FORMAT_FLOAT_1X32, 
# 1971
CU_RES_VIEW_FORMAT_FLOAT_2X32, 
# 1972
CU_RES_VIEW_FORMAT_FLOAT_4X32, 
# 1973
CU_RES_VIEW_FORMAT_UNSIGNED_BC1, 
# 1974
CU_RES_VIEW_FORMAT_UNSIGNED_BC2, 
# 1975
CU_RES_VIEW_FORMAT_UNSIGNED_BC3, 
# 1976
CU_RES_VIEW_FORMAT_UNSIGNED_BC4, 
# 1977
CU_RES_VIEW_FORMAT_SIGNED_BC4, 
# 1978
CU_RES_VIEW_FORMAT_UNSIGNED_BC5, 
# 1979
CU_RES_VIEW_FORMAT_SIGNED_BC5, 
# 1980
CU_RES_VIEW_FORMAT_UNSIGNED_BC6H, 
# 1981
CU_RES_VIEW_FORMAT_SIGNED_BC6H, 
# 1982
CU_RES_VIEW_FORMAT_UNSIGNED_BC7
# 1983
} CUresourceViewFormat; 
# 1999
typedef 
# 1988
struct CUDA_RESOURCE_VIEW_DESC_st { 
# 1990
CUresourceViewFormat format; 
# 1991
size_t width; 
# 1992
size_t height; 
# 1993
size_t depth; 
# 1994
unsigned firstMipmapLevel; 
# 1995
unsigned lastMipmapLevel; 
# 1996
unsigned firstLayer; 
# 1997
unsigned lastLayer; 
# 1998
unsigned reserved[16]; 
# 1999
} CUDA_RESOURCE_VIEW_DESC; 
# 2007
typedef 
# 2004
struct CUDA_POINTER_ATTRIBUTE_P2P_TOKENS_st { 
# 2005
unsigned long long p2pToken; 
# 2006
unsigned vaSpaceToken; 
# 2007
} CUDA_POINTER_ATTRIBUTE_P2P_TOKENS; 
# 2027 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 2016
struct CUDA_LAUNCH_PARAMS_st { 
# 2017
CUfunction function; 
# 2018
unsigned gridDimX; 
# 2019
unsigned gridDimY; 
# 2020
unsigned gridDimZ; 
# 2021
unsigned blockDimX; 
# 2022
unsigned blockDimY; 
# 2023
unsigned blockDimZ; 
# 2024
unsigned sharedMemBytes; 
# 2025
CUstream hStream; 
# 2026
void **kernelParams; 
# 2027
} CUDA_LAUNCH_PARAMS; 
# 2057 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 2036
enum CUexternalMemoryHandleType_enum { 
# 2040
CU_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD = 1, 
# 2044
CU_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32, 
# 2048
CU_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT, 
# 2052
CU_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP, 
# 2056
CU_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE
# 2057
} CUexternalMemoryHandleType; 
# 2112 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 2067 "/usr/local/cuda-10.1/include/cuda.h" 3
struct CUDA_EXTERNAL_MEMORY_HANDLE_DESC_st { 
# 2071
CUexternalMemoryHandleType type; 
# 2072
union { 
# 2078
int fd; 
# 2091 "/usr/local/cuda-10.1/include/cuda.h" 3
struct { 
# 2095
void *handle; 
# 2100
const void *name; 
# 2101
} win32; 
# 2102
} handle; 
# 2106
unsigned long long size; 
# 2110
unsigned flags; 
# 2111
unsigned reserved[16]; 
# 2112
} CUDA_EXTERNAL_MEMORY_HANDLE_DESC; 
# 2131
typedef 
# 2117
struct CUDA_EXTERNAL_MEMORY_BUFFER_DESC_st { 
# 2121
unsigned long long offset; 
# 2125
unsigned long long size; 
# 2129
unsigned flags; 
# 2130
unsigned reserved[16]; 
# 2131
} CUDA_EXTERNAL_MEMORY_BUFFER_DESC; 
# 2151
typedef 
# 2136
struct CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC_st { 
# 2141
unsigned long long offset; 
# 2145
CUDA_ARRAY3D_DESCRIPTOR arrayDesc; 
# 2149
unsigned numLevels; 
# 2150
unsigned reserved[16]; 
# 2151
} CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC; 
# 2173
typedef 
# 2156
enum CUexternalSemaphoreHandleType_enum { 
# 2160
CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD = 1, 
# 2164
CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32, 
# 2168
CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT, 
# 2172
CU_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE
# 2173
} CUexternalSemaphoreHandleType; 
# 2218 "/usr/local/cuda-10.1/include/cuda.h" 3
typedef 
# 2178 "/usr/local/cuda-10.1/include/cuda.h" 3
struct CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC_st { 
# 2182
CUexternalSemaphoreHandleType type; 
# 2183
union { 
# 2189
int fd; 
# 2201 "/usr/local/cuda-10.1/include/cuda.h" 3
struct { 
# 2205
void *handle; 
# 2210
const void *name; 
# 2211
} win32; 
# 2212
} handle; 
# 2216
unsigned flags; 
# 2217
unsigned reserved[16]; 
# 2218
} CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC; 
# 2241
typedef 
# 2223
struct CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS_st { 
# 2224
struct { 
# 2228
struct { 
# 2232
unsigned long long value; 
# 2233
} fence; 
# 2234
unsigned reserved[16]; 
# 2235
} params; 
# 2239
unsigned flags; 
# 2240
unsigned reserved[16]; 
# 2241
} CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS; 
# 2264
typedef 
# 2246
struct CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS_st { 
# 2247
struct { 
# 2251
struct { 
# 2255
unsigned long long value; 
# 2256
} fence; 
# 2257
unsigned reserved[16]; 
# 2258
} params; 
# 2262
unsigned flags; 
# 2263
unsigned reserved[16]; 
# 2264
} CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS; 
# 2434 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGetErrorString(CUresult error, const char ** pStr); 
# 2455 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGetErrorName(CUresult error, const char ** pStr); 
# 2489 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuInit(unsigned Flags); 
# 2527 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDriverGetVersion(int * driverVersion); 
# 2569 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGet(CUdevice * device, int ordinal); 
# 2597 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGetCount(int * count); 
# 2628 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGetName(char * name, int len, CUdevice dev); 
# 2657 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGetUuid(CUuuid * uuid, CUdevice dev); 
# 2717 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceTotalMem_v2(size_t * bytes, CUdevice dev); 
# 2922 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGetAttribute(int * pi, CUdevice_attribute attrib, CUdevice dev); 
# 3000 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuDeviceGetProperties(CUdevprop * prop, CUdevice dev); 
# 3034 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuDeviceComputeCapability(int * major, int * minor, CUdevice dev); 
# 3102 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDevicePrimaryCtxRetain(CUcontext * pctx, CUdevice dev); 
# 3136 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDevicePrimaryCtxRelease(CUdevice dev); 
# 3201 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDevicePrimaryCtxSetFlags(CUdevice dev, unsigned flags); 
# 3227 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDevicePrimaryCtxGetState(CUdevice dev, unsigned * flags, int * active); 
# 3265 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDevicePrimaryCtxReset(CUdevice dev); 
# 3377 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxCreate_v2(CUcontext * pctx, unsigned flags, CUdevice dev); 
# 3417 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxDestroy_v2(CUcontext ctx); 
# 3453 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxPushCurrent_v2(CUcontext ctx); 
# 3487 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxPopCurrent_v2(CUcontext * pctx); 
# 3517 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxSetCurrent(CUcontext ctx); 
# 3540 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetCurrent(CUcontext * pctx); 
# 3571 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetDevice(CUdevice * device); 
# 3600 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetFlags(unsigned * flags); 
# 3631 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxSynchronize(); 
# 3723 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxSetLimit(CUlimit limit, size_t value); 
# 3764 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetLimit(size_t * pvalue, CUlimit limit); 
# 3808 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetCacheConfig(CUfunc_cache * pconfig); 
# 3859 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxSetCacheConfig(CUfunc_cache config); 
# 3902 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetSharedMemConfig(CUsharedconfig * pConfig); 
# 3955 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxSetSharedMemConfig(CUsharedconfig config); 
# 3994 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetApiVersion(CUcontext ctx, unsigned * version); 
# 4034 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 4089 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuCtxAttach(CUcontext * pctx, unsigned flags); 
# 4125 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuCtxDetach(CUcontext ctx); 
# 4180 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleLoad(CUmodule * module, const char * fname); 
# 4217 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleLoadData(CUmodule * module, const void * image); 
# 4260 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleLoadDataEx(CUmodule * module, const void * image, unsigned numOptions, CUjit_option * options, void ** optionValues); 
# 4302 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleLoadFatBinary(CUmodule * module, const void * fatCubin); 
# 4327 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleUnload(CUmodule hmod); 
# 4357 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleGetFunction(CUfunction * hfunc, CUmodule hmod, const char * name); 
# 4393 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleGetGlobal_v2(CUdeviceptr * dptr, size_t * bytes, CUmodule hmod, const char * name); 
# 4428 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleGetTexRef(CUtexref * pTexRef, CUmodule hmod, const char * name); 
# 4460 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuModuleGetSurfRef(CUsurfref * pSurfRef, CUmodule hmod, const char * name); 
# 4503 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLinkCreate_v2(unsigned numOptions, CUjit_option * options, void ** optionValues, CUlinkState * stateOut); 
# 4540 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLinkAddData_v2(CUlinkState state, CUjitInputType type, void * data, size_t size, const char * name, unsigned numOptions, CUjit_option * options, void ** optionValues); 
# 4579 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLinkAddFile_v2(CUlinkState state, CUjitInputType type, const char * path, unsigned numOptions, CUjit_option * options, void ** optionValues); 
# 4606 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLinkComplete(CUlinkState state, void ** cubinOut, size_t * sizeOut); 
# 4620 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLinkDestroy(CUlinkState state); 
# 4669 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemGetInfo_v2(size_t * free, size_t * total); 
# 4703 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemAlloc_v2(CUdeviceptr * dptr, size_t bytesize); 
# 4765 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemAllocPitch_v2(CUdeviceptr * dptr, size_t * pPitch, size_t WidthInBytes, size_t Height, unsigned ElementSizeBytes); 
# 4795 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemFree_v2(CUdeviceptr dptr); 
# 4829 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemGetAddressRange_v2(CUdeviceptr * pbase, size_t * psize, CUdeviceptr dptr); 
# 4876 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemAllocHost_v2(void ** pp, size_t bytesize); 
# 4907 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemFreeHost(void * p); 
# 4989 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemHostAlloc(void ** pp, size_t bytesize, unsigned Flags); 
# 5043 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr * pdptr, void * p, unsigned Flags); 
# 5071 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemHostGetFlags(unsigned * pFlags, void * p); 
# 5183 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemAllocManaged(CUdeviceptr * dptr, size_t bytesize, unsigned flags); 
# 5216 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGetByPCIBusId(CUdevice * dev, const char * pciBusId); 
# 5248 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGetPCIBusId(char * pciBusId, int len, CUdevice dev); 
# 5293 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuIpcGetEventHandle(CUipcEventHandle * pHandle, CUevent event); 
# 5333 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuIpcOpenEventHandle(CUevent * phEvent, CUipcEventHandle handle); 
# 5373 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuIpcGetMemHandle(CUipcMemHandle * pHandle, CUdeviceptr dptr); 
# 5430 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuIpcOpenMemHandle(CUdeviceptr * pdptr, CUipcMemHandle handle, unsigned Flags); 
# 5463 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuIpcCloseMemHandle(CUdeviceptr dptr); 
# 5549 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemHostRegister_v2(void * p, size_t bytesize, unsigned Flags); 
# 5575 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemHostUnregister(void * p); 
# 5614 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy(CUdeviceptr dst, CUdeviceptr src, size_t ByteCount); 
# 5644 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyPeer(CUdeviceptr dstDevice, CUcontext dstContext, CUdeviceptr srcDevice, CUcontext srcContext, size_t ByteCount); 
# 5682 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyHtoD_v2(CUdeviceptr dstDevice, const void * srcHost, size_t ByteCount); 
# 5717 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyDtoH_v2(void * dstHost, CUdeviceptr srcDevice, size_t ByteCount); 
# 5753 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyDtoD_v2(CUdeviceptr dstDevice, CUdeviceptr srcDevice, size_t ByteCount); 
# 5789 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyDtoA_v2(CUarray dstArray, size_t dstOffset, CUdeviceptr srcDevice, size_t ByteCount); 
# 5827 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyAtoD_v2(CUdeviceptr dstDevice, CUarray srcArray, size_t srcOffset, size_t ByteCount); 
# 5863 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyHtoA_v2(CUarray dstArray, size_t dstOffset, const void * srcHost, size_t ByteCount); 
# 5899 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyAtoH_v2(void * dstHost, CUarray srcArray, size_t srcOffset, size_t ByteCount); 
# 5939 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyAtoA_v2(CUarray dstArray, size_t dstOffset, CUarray srcArray, size_t srcOffset, size_t ByteCount); 
# 6103 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D * pCopy); 
# 6265 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D * pCopy); 
# 6434 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D * pCopy); 
# 6460 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy3DPeer(const CUDA_MEMCPY3D_PEER * pCopy); 
# 6504 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyAsync(CUdeviceptr dst, CUdeviceptr src, size_t ByteCount, CUstream hStream); 
# 6537 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyPeerAsync(CUdeviceptr dstDevice, CUcontext dstContext, CUdeviceptr srcDevice, CUcontext srcContext, size_t ByteCount, CUstream hStream); 
# 6579 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr dstDevice, const void * srcHost, size_t ByteCount, CUstream hStream); 
# 6619 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyDtoHAsync_v2(void * dstHost, CUdeviceptr srcDevice, size_t ByteCount, CUstream hStream); 
# 6660 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr dstDevice, CUdeviceptr srcDevice, size_t ByteCount, CUstream hStream); 
# 6701 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyHtoAAsync_v2(CUarray dstArray, size_t dstOffset, const void * srcHost, size_t ByteCount, CUstream hStream); 
# 6742 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpyAtoHAsync_v2(void * dstHost, CUarray srcArray, size_t srcOffset, size_t ByteCount, CUstream hStream); 
# 6911 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D * pCopy, CUstream hStream); 
# 7085 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D * pCopy, CUstream hStream); 
# 7113 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemcpy3DPeerAsync(const CUDA_MEMCPY3D_PEER * pCopy, CUstream hStream); 
# 7150 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD8_v2(CUdeviceptr dstDevice, unsigned char uc, size_t N); 
# 7185 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD16_v2(CUdeviceptr dstDevice, unsigned short us, size_t N); 
# 7220 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD32_v2(CUdeviceptr dstDevice, unsigned ui, size_t N); 
# 7260 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD2D8_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned char uc, size_t Width, size_t Height); 
# 7301 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD2D16_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned short us, size_t Width, size_t Height); 
# 7342 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD2D32_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned ui, size_t Width, size_t Height); 
# 7379 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD8Async(CUdeviceptr dstDevice, unsigned char uc, size_t N, CUstream hStream); 
# 7416 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD16Async(CUdeviceptr dstDevice, unsigned short us, size_t N, CUstream hStream); 
# 7452 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD32Async(CUdeviceptr dstDevice, unsigned ui, size_t N, CUstream hStream); 
# 7494 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD2D8Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned char uc, size_t Width, size_t Height, CUstream hStream); 
# 7537 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD2D16Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned short us, size_t Width, size_t Height, CUstream hStream); 
# 7580 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemsetD2D32Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned ui, size_t Width, size_t Height, CUstream hStream); 
# 7684 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuArrayCreate_v2(CUarray * pHandle, const CUDA_ARRAY_DESCRIPTOR * pAllocateArray); 
# 7718 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR * pArrayDescriptor, CUarray hArray); 
# 7751 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuArrayDestroy(CUarray hArray); 
# 7932 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuArray3DCreate_v2(CUarray * pHandle, const CUDA_ARRAY3D_DESCRIPTOR * pAllocateArray); 
# 7970 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR * pArrayDescriptor, CUarray hArray); 
# 8115 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMipmappedArrayCreate(CUmipmappedArray * pHandle, const CUDA_ARRAY3D_DESCRIPTOR * pMipmappedArrayDesc, unsigned numMipmapLevels); 
# 8145 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMipmappedArrayGetLevel(CUarray * pLevelArray, CUmipmappedArray hMipmappedArray, unsigned level); 
# 8170 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMipmappedArrayDestroy(CUmipmappedArray hMipmappedArray); 
# 8422 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuPointerGetAttribute(void * data, CUpointer_attribute attribute, CUdeviceptr ptr); 
# 8492 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemPrefetchAsync(CUdeviceptr devPtr, size_t count, CUdevice dstDevice, CUstream hStream); 
# 8606 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemAdvise(CUdeviceptr devPtr, size_t count, CUmem_advise advice, CUdevice device); 
# 8664 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemRangeGetAttribute(void * data, size_t dataSize, CUmem_range_attribute attribute, CUdeviceptr devPtr, size_t count); 
# 8704 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuMemRangeGetAttributes(void ** data, size_t * dataSizes, CUmem_range_attribute * attributes, size_t numAttributes, CUdeviceptr devPtr, size_t count); 
# 8748 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuPointerSetAttribute(const void * value, CUpointer_attribute attribute, CUdeviceptr ptr); 
# 8793 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuPointerGetAttributes(unsigned numAttributes, CUpointer_attribute * attributes, void ** data, CUdeviceptr ptr); 
# 8843 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamCreate(CUstream * phStream, unsigned Flags); 
# 8892 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamCreateWithPriority(CUstream * phStream, unsigned flags, int priority); 
# 8923 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamGetPriority(CUstream hStream, int * priority); 
# 8951 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamGetFlags(CUstream hStream, unsigned * flags); 
# 8997 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamGetCtx(CUstream hStream, CUcontext * pctx); 
# 9030 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamWaitEvent(CUstream hStream, CUevent hEvent, unsigned Flags); 
# 9105 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamAddCallback(CUstream hStream, CUstreamCallback callback, void * userData, unsigned flags); 
# 9145 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamBeginCapture_v2(CUstream hStream, CUstreamCaptureMode mode); 
# 9201 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuThreadExchangeStreamCaptureMode(CUstreamCaptureMode * mode); 
# 9234 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamEndCapture(CUstream hStream, CUgraph * phGraph); 
# 9274 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamIsCapturing(CUstream hStream, CUstreamCaptureStatus * captureStatus); 
# 9302 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamGetCaptureInfo(CUstream hStream, CUstreamCaptureStatus * captureStatus, cuuint64_t * id); 
# 9394 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamAttachMemAsync(CUstream hStream, CUdeviceptr dptr, size_t length, unsigned flags); 
# 9426 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamQuery(CUstream hStream); 
# 9455 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamSynchronize(CUstream hStream); 
# 9486 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamDestroy_v2(CUstream hStream); 
# 9543 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuEventCreate(CUevent * phEvent, unsigned Flags); 
# 9584 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuEventRecord(CUevent hEvent, CUstream hStream); 
# 9616 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuEventQuery(CUevent hEvent); 
# 9647 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuEventSynchronize(CUevent hEvent); 
# 9677 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuEventDestroy_v2(CUevent hEvent); 
# 9722 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuEventElapsedTime(float * pMilliseconds, CUevent hStart, CUevent hEnd); 
# 9862 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuImportExternalMemory(CUexternalMemory * extMem_out, const CUDA_EXTERNAL_MEMORY_HANDLE_DESC * memHandleDesc); 
# 9915 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuExternalMemoryGetMappedBuffer(CUdeviceptr * devPtr, CUexternalMemory extMem, const CUDA_EXTERNAL_MEMORY_BUFFER_DESC * bufferDesc); 
# 9964 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuExternalMemoryGetMappedMipmappedArray(CUmipmappedArray * mipmap, CUexternalMemory extMem, const CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC * mipmapDesc); 
# 9986 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDestroyExternalMemory(CUexternalMemory extMem); 
# 10083 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuImportExternalSemaphore(CUexternalSemaphore * extSem_out, const CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC * semHandleDesc); 
# 10121 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuSignalExternalSemaphoresAsync(const CUexternalSemaphore * extSemArray, const CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS * paramsArray, unsigned numExtSems, CUstream stream); 
# 10163 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuWaitExternalSemaphoresAsync(const CUexternalSemaphore * extSemArray, const CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS * paramsArray, unsigned numExtSems, CUstream stream); 
# 10184 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDestroyExternalSemaphore(CUexternalSemaphore extSem); 
# 10271 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamWaitValue32(CUstream stream, CUdeviceptr addr, cuuint32_t value, unsigned flags); 
# 10306 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamWaitValue64(CUstream stream, CUdeviceptr addr, cuuint64_t value, unsigned flags); 
# 10341 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamWriteValue32(CUstream stream, CUdeviceptr addr, cuuint32_t value, unsigned flags); 
# 10375 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamWriteValue64(CUstream stream, CUdeviceptr addr, cuuint64_t value, unsigned flags); 
# 10410 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuStreamBatchMemOp(CUstream stream, unsigned count, CUstreamBatchMemOpParams * paramArray, unsigned flags); 
# 10484 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuFuncGetAttribute(int * pi, CUfunction_attribute attrib, CUfunction hfunc); 
# 10532 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuFuncSetAttribute(CUfunction hfunc, CUfunction_attribute attrib, int value); 
# 10577 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuFuncSetCacheConfig(CUfunction hfunc, CUfunc_cache config); 
# 10630 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuFuncSetSharedMemConfig(CUfunction hfunc, CUsharedconfig config); 
# 10745 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLaunchKernel(CUfunction f, unsigned gridDimX, unsigned gridDimY, unsigned gridDimZ, unsigned blockDimX, unsigned blockDimY, unsigned blockDimZ, unsigned sharedMemBytes, CUstream hStream, void ** kernelParams, void ** extra); 
# 10834 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLaunchCooperativeKernel(CUfunction f, unsigned gridDimX, unsigned gridDimY, unsigned gridDimZ, unsigned blockDimX, unsigned blockDimY, unsigned blockDimZ, unsigned sharedMemBytes, CUstream hStream, void ** kernelParams); 
# 10978 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLaunchCooperativeKernelMultiDevice(CUDA_LAUNCH_PARAMS * launchParamsList, unsigned numDevices, unsigned flags); 
# 11047 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuLaunchHostFunc(CUstream hStream, CUhostFn fn, void * userData); 
# 11099 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuFuncSetBlockShape(CUfunction hfunc, int x, int y, int z); 
# 11133 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuFuncSetSharedSize(CUfunction hfunc, unsigned bytes); 
# 11165 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuParamSetSize(CUfunction hfunc, unsigned numbytes); 
# 11198 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuParamSeti(CUfunction hfunc, int offset, unsigned value); 
# 11231 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuParamSetf(CUfunction hfunc, int offset, float value); 
# 11266 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuParamSetv(CUfunction hfunc, int offset, void * ptr, unsigned numbytes); 
# 11303 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuLaunch(CUfunction f); 
# 11342 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuLaunchGrid(CUfunction f, int grid_width, int grid_height); 
# 11389 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuLaunchGridAsync(CUfunction f, int grid_width, int grid_height, CUstream hStream); 
# 11414 "/usr/local/cuda-10.1/include/cuda.h" 3
__attribute((deprecated)) CUresult cuParamSetTexRef(CUfunction hfunc, int texunit, CUtexref hTexRef); 
# 11461 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphCreate(CUgraph * phGraph, unsigned flags); 
# 11560 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphAddKernelNode(CUgraphNode * phGraphNode, CUgraph hGraph, const CUgraphNode * dependencies, size_t numDependencies, const CUDA_KERNEL_NODE_PARAMS * nodeParams); 
# 11592 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphKernelNodeGetParams(CUgraphNode hNode, CUDA_KERNEL_NODE_PARAMS * nodeParams); 
# 11615 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphKernelNodeSetParams(CUgraphNode hNode, const CUDA_KERNEL_NODE_PARAMS * nodeParams); 
# 11663 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphAddMemcpyNode(CUgraphNode * phGraphNode, CUgraph hGraph, const CUgraphNode * dependencies, size_t numDependencies, const CUDA_MEMCPY3D * copyParams, CUcontext ctx); 
# 11686 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphMemcpyNodeGetParams(CUgraphNode hNode, CUDA_MEMCPY3D * nodeParams); 
# 11709 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphMemcpyNodeSetParams(CUgraphNode hNode, const CUDA_MEMCPY3D * nodeParams); 
# 11751 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphAddMemsetNode(CUgraphNode * phGraphNode, CUgraph hGraph, const CUgraphNode * dependencies, size_t numDependencies, const CUDA_MEMSET_NODE_PARAMS * memsetParams, CUcontext ctx); 
# 11774 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphMemsetNodeGetParams(CUgraphNode hNode, CUDA_MEMSET_NODE_PARAMS * nodeParams); 
# 11797 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphMemsetNodeSetParams(CUgraphNode hNode, const CUDA_MEMSET_NODE_PARAMS * nodeParams); 
# 11838 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphAddHostNode(CUgraphNode * phGraphNode, CUgraph hGraph, const CUgraphNode * dependencies, size_t numDependencies, const CUDA_HOST_NODE_PARAMS * nodeParams); 
# 11861 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphHostNodeGetParams(CUgraphNode hNode, CUDA_HOST_NODE_PARAMS * nodeParams); 
# 11884 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphHostNodeSetParams(CUgraphNode hNode, const CUDA_HOST_NODE_PARAMS * nodeParams); 
# 11922 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphAddChildGraphNode(CUgraphNode * phGraphNode, CUgraph hGraph, const CUgraphNode * dependencies, size_t numDependencies, CUgraph childGraph); 
# 11946 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphChildGraphNodeGetGraph(CUgraphNode hNode, CUgraph * phGraph); 
# 11984 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphAddEmptyNode(CUgraphNode * phGraphNode, CUgraph hGraph, const CUgraphNode * dependencies, size_t numDependencies); 
# 12009 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphClone(CUgraph * phGraphClone, CUgraph originalGraph); 
# 12035 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphNodeFindInClone(CUgraphNode * phNode, CUgraphNode hOriginalNode, CUgraph hClonedGraph); 
# 12066 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphNodeGetType(CUgraphNode hNode, CUgraphNodeType * type); 
# 12097 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphGetNodes(CUgraph hGraph, CUgraphNode * nodes, size_t * numNodes); 
# 12128 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphGetRootNodes(CUgraph hGraph, CUgraphNode * rootNodes, size_t * numRootNodes); 
# 12162 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphGetEdges(CUgraph hGraph, CUgraphNode * from, CUgraphNode * to, size_t * numEdges); 
# 12193 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphNodeGetDependencies(CUgraphNode hNode, CUgraphNode * dependencies, size_t * numDependencies); 
# 12225 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphNodeGetDependentNodes(CUgraphNode hNode, CUgraphNode * dependentNodes, size_t * numDependentNodes); 
# 12254 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphAddDependencies(CUgraph hGraph, const CUgraphNode * from, const CUgraphNode * to, size_t numDependencies); 
# 12283 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphRemoveDependencies(CUgraph hGraph, const CUgraphNode * from, const CUgraphNode * to, size_t numDependencies); 
# 12307 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphDestroyNode(CUgraphNode hNode); 
# 12343 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphInstantiate(CUgraphExec * phGraphExec, CUgraph hGraph, CUgraphNode * phErrorNode, char * logBuffer, size_t bufferSize); 
# 12377 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphExecKernelNodeSetParams(CUgraphExec hGraphExec, CUgraphNode hNode, const CUDA_KERNEL_NODE_PARAMS * nodeParams); 
# 12404 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphLaunch(CUgraphExec hGraphExec, CUstream hStream); 
# 12428 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphExecDestroy(CUgraphExec hGraphExec); 
# 12448 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphDestroy(CUgraph hGraph); 
# 12488 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, CUfunction func, int blockSize, size_t dynamicSMemSize); 
# 12530 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, CUfunction func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 12582 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuOccupancyMaxPotentialBlockSize(int * minGridSize, int * blockSize, CUfunction func, CUoccupancyB2DSize blockSizeToDynamicSMemSize, size_t dynamicSMemSize, int blockSizeLimit); 
# 12628 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuOccupancyMaxPotentialBlockSizeWithFlags(int * minGridSize, int * blockSize, CUfunction func, CUoccupancyB2DSize blockSizeToDynamicSMemSize, size_t dynamicSMemSize, int blockSizeLimit, unsigned flags); 
# 12674 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetArray(CUtexref hTexRef, CUarray hArray, unsigned Flags); 
# 12704 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetMipmappedArray(CUtexref hTexRef, CUmipmappedArray hMipmappedArray, unsigned Flags); 
# 12751 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetAddress_v2(size_t * ByteOffset, CUtexref hTexRef, CUdeviceptr dptr, size_t bytes); 
# 12806 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetAddress2D_v3(CUtexref hTexRef, const CUDA_ARRAY_DESCRIPTOR * desc, CUdeviceptr dptr, size_t Pitch); 
# 12842 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetFormat(CUtexref hTexRef, CUarray_format fmt, int NumPackedComponents); 
# 12888 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetAddressMode(CUtexref hTexRef, int dim, CUaddress_mode am); 
# 12924 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetFilterMode(CUtexref hTexRef, CUfilter_mode fm); 
# 12960 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetMipmapFilterMode(CUtexref hTexRef, CUfilter_mode fm); 
# 12989 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetMipmapLevelBias(CUtexref hTexRef, float bias); 
# 13020 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetMipmapLevelClamp(CUtexref hTexRef, float minMipmapLevelClamp, float maxMipmapLevelClamp); 
# 13050 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetMaxAnisotropy(CUtexref hTexRef, unsigned maxAniso); 
# 13086 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetBorderColor(CUtexref hTexRef, float * pBorderColor); 
# 13127 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefSetFlags(CUtexref hTexRef, unsigned Flags); 
# 13155 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetAddress_v2(CUdeviceptr * pdptr, CUtexref hTexRef); 
# 13183 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetArray(CUarray * phArray, CUtexref hTexRef); 
# 13210 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetMipmappedArray(CUmipmappedArray * phMipmappedArray, CUtexref hTexRef); 
# 13238 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetAddressMode(CUaddress_mode * pam, CUtexref hTexRef, int dim); 
# 13264 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetFilterMode(CUfilter_mode * pfm, CUtexref hTexRef); 
# 13292 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetFormat(CUarray_format * pFormat, int * pNumChannels, CUtexref hTexRef); 
# 13318 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetMipmapFilterMode(CUfilter_mode * pfm, CUtexref hTexRef); 
# 13344 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetMipmapLevelBias(float * pbias, CUtexref hTexRef); 
# 13371 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetMipmapLevelClamp(float * pminMipmapLevelClamp, float * pmaxMipmapLevelClamp, CUtexref hTexRef); 
# 13397 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetMaxAnisotropy(int * pmaxAniso, CUtexref hTexRef); 
# 13426 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetBorderColor(float * pBorderColor, CUtexref hTexRef); 
# 13451 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefGetFlags(unsigned * pFlags, CUtexref hTexRef); 
# 13476 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefCreate(CUtexref * pTexRef); 
# 13496 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexRefDestroy(CUtexref hTexRef); 
# 13540 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuSurfRefSetArray(CUsurfref hSurfRef, CUarray hArray, unsigned Flags); 
# 13563 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuSurfRefGetArray(CUarray * phArray, CUsurfref hSurfRef); 
# 13787 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexObjectCreate(CUtexObject * pTexObject, const CUDA_RESOURCE_DESC * pResDesc, const CUDA_TEXTURE_DESC * pTexDesc, const CUDA_RESOURCE_VIEW_DESC * pResViewDesc); 
# 13807 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexObjectDestroy(CUtexObject texObject); 
# 13828 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexObjectGetResourceDesc(CUDA_RESOURCE_DESC * pResDesc, CUtexObject texObject); 
# 13849 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexObjectGetTextureDesc(CUDA_TEXTURE_DESC * pTexDesc, CUtexObject texObject); 
# 13871 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuTexObjectGetResourceViewDesc(CUDA_RESOURCE_VIEW_DESC * pResViewDesc, CUtexObject texObject); 
# 13914 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuSurfObjectCreate(CUsurfObject * pSurfObject, const CUDA_RESOURCE_DESC * pResDesc); 
# 13934 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuSurfObjectDestroy(CUsurfObject surfObject); 
# 13955 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuSurfObjectGetResourceDesc(CUDA_RESOURCE_DESC * pResDesc, CUsurfObject surfObject); 
# 14000 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceCanAccessPeer(int * canAccessPeer, CUdevice dev, CUdevice peerDev); 
# 14051 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxEnablePeerAccess(CUcontext peerContext, unsigned Flags); 
# 14078 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuCtxDisablePeerAccess(CUcontext peerContext); 
# 14122 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuDeviceGetP2PAttribute(int * value, CUdevice_P2PAttribute attrib, CUdevice srcDevice, CUdevice dstDevice); 
# 14168 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphicsUnregisterResource(CUgraphicsResource resource); 
# 14208 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphicsSubResourceGetMappedArray(CUarray * pArray, CUgraphicsResource resource, unsigned arrayIndex, unsigned mipLevel); 
# 14241 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphicsResourceGetMappedMipmappedArray(CUmipmappedArray * pMipmappedArray, CUgraphicsResource resource); 
# 14278 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr * pDevPtr, size_t * pSize, CUgraphicsResource resource); 
# 14320 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphicsResourceSetMapFlags_v2(CUgraphicsResource resource, unsigned flags); 
# 14360 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphicsMapResources(unsigned count, CUgraphicsResource * resources, CUstream hStream); 
# 14397 "/usr/local/cuda-10.1/include/cuda.h" 3
CUresult cuGraphicsUnmapResources(unsigned count, CUgraphicsResource * resources, CUstream hStream); 
# 14401
CUresult cuGetExportTable(const void ** ppExportTable, const CUuuid * pExportTableId); 
# 14746 "/usr/local/cuda-10.1/include/cuda.h" 3
}
# 56 "/usr/local/cuda-10.1/include/cuda_profiler_api.h" 3
extern "C" {
# 122 "/usr/local/cuda-10.1/include/cuda_profiler_api.h" 3
extern cudaError_t cudaProfilerInitialize(const char * configFile, const char * outputFile, cudaOutputMode_t outputMode); 
# 147 "/usr/local/cuda-10.1/include/cuda_profiler_api.h" 3
extern cudaError_t cudaProfilerStart(); 
# 169 "/usr/local/cuda-10.1/include/cuda_profiler_api.h" 3
extern cudaError_t cudaProfilerStop(); 
# 174
}
# 31 "/opt/rocm-3.3.0/hip/include/hip/nvcc_detail/hip_runtime_api.h" 3
extern "C" {
# 51 "/opt/rocm-3.3.0/hip/include/hip/nvcc_detail/hip_runtime_api.h" 3
typedef 
# 45
enum hipMemcpyKind { 
# 46
hipMemcpyHostToHost, 
# 47
hipMemcpyHostToDevice, 
# 48
hipMemcpyDeviceToHost, 
# 49
hipMemcpyDeviceToDevice, 
# 50
hipMemcpyDefault
# 51
} hipMemcpyKind; 
# 69 "/opt/rocm-3.3.0/hip/include/hip/nvcc_detail/hip_runtime_api.h" 3
typedef cudaTextureAddressMode hipTextureAddressMode; 
# 76
typedef cudaTextureFilterMode hipTextureFilterMode; 
# 81
typedef cudaTextureReadMode hipTextureReadMode; 
# 86
typedef cudaChannelFormatKind hipChannelFormatKind; 
# 171 "/opt/rocm-3.3.0/hip/include/hip/nvcc_detail/hip_runtime_api.h" 3
typedef cudaEvent_t hipEvent_t; 
# 172
typedef cudaStream_t hipStream_t; 
# 173
typedef cudaIpcEventHandle_t hipIpcEventHandle_t; 
# 174
typedef cudaIpcMemHandle_t hipIpcMemHandle_t; 
# 175
typedef cudaLimit hipLimit_t; 
# 176
typedef cudaFuncCache hipFuncCache_t; 
# 177
typedef CUcontext hipCtx_t; 
# 178
typedef cudaSharedMemConfig hipSharedMemConfig; 
# 179
typedef CUfunc_cache hipFuncCache; 
# 180
typedef CUjit_option hipJitOption; 
# 181
typedef CUdevice hipDevice_t; 
# 182
typedef CUmodule hipModule_t; 
# 183
typedef CUfunction hipFunction_t; 
# 184
typedef CUdeviceptr hipDeviceptr_t; 
# 185
typedef cudaArray hipArray; 
# 186
typedef cudaArray *hipArray_t; 
# 187
typedef cudaArray *hipArray_const_t; 
# 188
typedef cudaFuncAttributes hipFuncAttributes; 
# 198 "/opt/rocm-3.3.0/hip/include/hip/nvcc_detail/hip_runtime_api.h" 3
typedef cudaTextureObject_t hipTextureObject_t; 
# 199
typedef cudaSurfaceObject_t hipSurfaceObject_t; 
# 207
typedef cudaExtent hipExtent; 
# 208
typedef cudaPitchedPtr hipPitchedPtr; 
# 216
typedef cudaChannelFormatDesc hipChannelFormatDesc; 
# 217
typedef cudaResourceDesc hipResourceDesc; 
# 218
typedef cudaTextureDesc hipTextureDesc; 
# 219
typedef cudaResourceViewDesc hipResourceViewDesc; 
# 238 "/opt/rocm-3.3.0/hip/include/hip/nvcc_detail/hip_runtime_api.h" 3
static inline hipError_t hipCUDAErrorTohipError(cudaError_t cuError) { 
# 239
switch (cuError) { 
# 240
case cudaSuccess:  
# 241
return hipSuccess; 
# 242
case cudaErrorProfilerDisabled:  
# 243
return hipErrorProfilerDisabled; 
# 244
case cudaErrorProfilerNotInitialized:  
# 245
return hipErrorProfilerNotInitialized; 
# 246
case cudaErrorProfilerAlreadyStarted:  
# 247
return hipErrorProfilerAlreadyStarted; 
# 248
case cudaErrorProfilerAlreadyStopped:  
# 249
return hipErrorProfilerAlreadyStopped; 
# 250
case cudaErrorInsufficientDriver:  
# 251
return hipErrorInsufficientDriver; 
# 252
case cudaErrorUnsupportedLimit:  
# 253
return hipErrorUnsupportedLimit; 
# 254
case cudaErrorPeerAccessUnsupported:  
# 255
return hipErrorPeerAccessUnsupported; 
# 256
case cudaErrorInvalidGraphicsContext:  
# 257
return hipErrorInvalidGraphicsContext; 
# 258
case cudaErrorSharedObjectSymbolNotFound:  
# 259
return hipErrorSharedObjectSymbolNotFound; 
# 260
case cudaErrorSharedObjectInitFailed:  
# 261
return hipErrorSharedObjectInitFailed; 
# 262
case cudaErrorOperatingSystem:  
# 263
return hipErrorOperatingSystem; 
# 264
case cudaErrorSetOnActiveProcess:  
# 265
return hipErrorSetOnActiveProcess; 
# 266
case cudaErrorIllegalAddress:  
# 267
return hipErrorIllegalAddress; 
# 268
case cudaErrorInvalidSymbol:  
# 269
return hipErrorInvalidSymbol; 
# 270
case cudaErrorMissingConfiguration:  
# 271
return hipErrorMissingConfiguration; 
# 272
case cudaErrorMemoryAllocation:  
# 273
return hipErrorOutOfMemory; 
# 274
case cudaErrorInitializationError:  
# 275
return hipErrorNotInitialized; 
# 276
case cudaErrorLaunchFailure:  
# 277
return hipErrorLaunchFailure; 
# 278
case cudaErrorCooperativeLaunchTooLarge:  
# 279
return hipErrorCooperativeLaunchTooLarge; 
# 280
case cudaErrorPriorLaunchFailure:  
# 281
return hipErrorPriorLaunchFailure; 
# 282
case cudaErrorLaunchOutOfResources:  
# 283
return hipErrorLaunchOutOfResources; 
# 284
case cudaErrorInvalidDeviceFunction:  
# 285
return hipErrorInvalidDeviceFunction; 
# 286
case cudaErrorInvalidConfiguration:  
# 287
return hipErrorInvalidConfiguration; 
# 288
case cudaErrorInvalidDevice:  
# 289
return hipErrorInvalidDevice; 
# 290
case cudaErrorInvalidValue:  
# 291
return hipErrorInvalidValue; 
# 292
case cudaErrorInvalidDevicePointer:  
# 293
return hipErrorInvalidDevicePointer; 
# 294
case cudaErrorInvalidMemcpyDirection:  
# 295
return hipErrorInvalidMemcpyDirection; 
# 296
case cudaErrorInvalidResourceHandle:  
# 297
return hipErrorInvalidHandle; 
# 298
case cudaErrorNotReady:  
# 299
return hipErrorNotReady; 
# 300
case cudaErrorNoDevice:  
# 301
return hipErrorNoDevice; 
# 302
case cudaErrorPeerAccessAlreadyEnabled:  
# 303
return hipErrorPeerAccessAlreadyEnabled; 
# 304
case cudaErrorPeerAccessNotEnabled:  
# 305
return hipErrorPeerAccessNotEnabled; 
# 306
case cudaErrorHostMemoryAlreadyRegistered:  
# 307
return hipErrorHostMemoryAlreadyRegistered; 
# 308
case cudaErrorHostMemoryNotRegistered:  
# 309
return hipErrorHostMemoryNotRegistered; 
# 310
case cudaErrorMapBufferObjectFailed:  
# 311
return hipErrorMapFailed; 
# 312
case cudaErrorAssert:  
# 313
return hipErrorAssert; 
# 314
case cudaErrorNotSupported:  
# 315
return hipErrorNotSupported; 
# 316
case cudaErrorCudartUnloading:  
# 317
return hipErrorDeinitialized; 
# 318
case cudaErrorInvalidKernelImage:  
# 319
return hipErrorInvalidImage; 
# 320
case cudaErrorUnmapBufferObjectFailed:  
# 321
return hipErrorUnmapFailed; 
# 322
case cudaErrorNoKernelImageForDevice:  
# 323
return hipErrorNoBinaryForGpu; 
# 324
case cudaErrorECCUncorrectable:  
# 325
return hipErrorECCNotCorrectable; 
# 326
case cudaErrorDeviceAlreadyInUse:  
# 327
return hipErrorContextAlreadyInUse; 
# 328
case cudaErrorInvalidPtx:  
# 329
return hipErrorInvalidKernelFile; 
# 330
case cudaErrorLaunchTimeout:  
# 331
return hipErrorLaunchTimeOut; 
# 333
case cudaErrorInvalidSource:  
# 334
return hipErrorInvalidSource; 
# 335
case cudaErrorFileNotFound:  
# 336
return hipErrorFileNotFound; 
# 337
case cudaErrorSymbolNotFound:  
# 338
return hipErrorNotFound; 
# 339
case cudaErrorArrayIsMapped:  
# 340
return hipErrorArrayIsMapped; 
# 341
case cudaErrorNotMappedAsPointer:  
# 342
return hipErrorNotMappedAsPointer; 
# 343
case cudaErrorNotMappedAsArray:  
# 344
return hipErrorNotMappedAsArray; 
# 345
case cudaErrorNotMapped:  
# 346
return hipErrorNotMapped; 
# 347
case cudaErrorAlreadyAcquired:  
# 348
return hipErrorAlreadyAcquired; 
# 349
case cudaErrorAlreadyMapped:  
# 350
return hipErrorAlreadyMapped; 
# 356
case cudaErrorUnknown:  
# 357
default:  
# 358
return hipErrorUnknown; 
# 359
}  
# 360
} 
# 362
static inline hipError_t hipCUResultTohipError(CUresult cuError) { 
# 363
switch (cuError) { 
# 364
case CUDA_SUCCESS:  
# 365
return hipSuccess; 
# 366
case CUDA_ERROR_OUT_OF_MEMORY:  
# 367
return hipErrorOutOfMemory; 
# 368
case CUDA_ERROR_INVALID_VALUE:  
# 369
return hipErrorInvalidValue; 
# 370
case CUDA_ERROR_INVALID_DEVICE:  
# 371
return hipErrorInvalidDevice; 
# 372
case CUDA_ERROR_DEINITIALIZED:  
# 373
return hipErrorDeinitialized; 
# 374
case CUDA_ERROR_NO_DEVICE:  
# 375
return hipErrorNoDevice; 
# 376
case CUDA_ERROR_INVALID_CONTEXT:  
# 377
return hipErrorInvalidContext; 
# 378
case CUDA_ERROR_NOT_INITIALIZED:  
# 379
return hipErrorNotInitialized; 
# 380
case CUDA_ERROR_INVALID_HANDLE:  
# 381
return hipErrorInvalidHandle; 
# 382
case CUDA_ERROR_MAP_FAILED:  
# 383
return hipErrorMapFailed; 
# 384
case CUDA_ERROR_PROFILER_DISABLED:  
# 385
return hipErrorProfilerDisabled; 
# 386
case CUDA_ERROR_PROFILER_NOT_INITIALIZED:  
# 387
return hipErrorProfilerNotInitialized; 
# 388
case CUDA_ERROR_PROFILER_ALREADY_STARTED:  
# 389
return hipErrorProfilerAlreadyStarted; 
# 390
case CUDA_ERROR_PROFILER_ALREADY_STOPPED:  
# 391
return hipErrorProfilerAlreadyStopped; 
# 392
case CUDA_ERROR_INVALID_IMAGE:  
# 393
return hipErrorInvalidImage; 
# 394
case CUDA_ERROR_CONTEXT_ALREADY_CURRENT:  
# 395
return hipErrorContextAlreadyCurrent; 
# 396
case CUDA_ERROR_UNMAP_FAILED:  
# 397
return hipErrorUnmapFailed; 
# 398
case CUDA_ERROR_ARRAY_IS_MAPPED:  
# 399
return hipErrorArrayIsMapped; 
# 400
case CUDA_ERROR_ALREADY_MAPPED:  
# 401
return hipErrorAlreadyMapped; 
# 402
case CUDA_ERROR_NO_BINARY_FOR_GPU:  
# 403
return hipErrorNoBinaryForGpu; 
# 404
case CUDA_ERROR_ALREADY_ACQUIRED:  
# 405
return hipErrorAlreadyAcquired; 
# 406
case CUDA_ERROR_NOT_MAPPED:  
# 407
return hipErrorNotMapped; 
# 408
case CUDA_ERROR_NOT_MAPPED_AS_ARRAY:  
# 409
return hipErrorNotMappedAsArray; 
# 410
case CUDA_ERROR_NOT_MAPPED_AS_POINTER:  
# 411
return hipErrorNotMappedAsPointer; 
# 412
case CUDA_ERROR_ECC_UNCORRECTABLE:  
# 413
return hipErrorECCNotCorrectable; 
# 414
case CUDA_ERROR_UNSUPPORTED_LIMIT:  
# 415
return hipErrorUnsupportedLimit; 
# 416
case CUDA_ERROR_CONTEXT_ALREADY_IN_USE:  
# 417
return hipErrorContextAlreadyInUse; 
# 418
case CUDA_ERROR_PEER_ACCESS_UNSUPPORTED:  
# 419
return hipErrorPeerAccessUnsupported; 
# 420
case CUDA_ERROR_INVALID_PTX:  
# 421
return hipErrorInvalidKernelFile; 
# 422
case CUDA_ERROR_INVALID_GRAPHICS_CONTEXT:  
# 423
return hipErrorInvalidGraphicsContext; 
# 424
case CUDA_ERROR_INVALID_SOURCE:  
# 425
return hipErrorInvalidSource; 
# 426
case CUDA_ERROR_FILE_NOT_FOUND:  
# 427
return hipErrorFileNotFound; 
# 428
case CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND:  
# 429
return hipErrorSharedObjectSymbolNotFound; 
# 430
case CUDA_ERROR_SHARED_OBJECT_INIT_FAILED:  
# 431
return hipErrorSharedObjectInitFailed; 
# 432
case CUDA_ERROR_OPERATING_SYSTEM:  
# 433
return hipErrorOperatingSystem; 
# 434
case CUDA_ERROR_NOT_FOUND:  
# 435
return hipErrorNotFound; 
# 436
case CUDA_ERROR_NOT_READY:  
# 437
return hipErrorNotReady; 
# 438
case CUDA_ERROR_ILLEGAL_ADDRESS:  
# 439
return hipErrorIllegalAddress; 
# 440
case CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES:  
# 441
return hipErrorLaunchOutOfResources; 
# 442
case CUDA_ERROR_LAUNCH_TIMEOUT:  
# 443
return hipErrorLaunchTimeOut; 
# 444
case CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED:  
# 445
return hipErrorPeerAccessAlreadyEnabled; 
# 446
case CUDA_ERROR_PEER_ACCESS_NOT_ENABLED:  
# 447
return hipErrorPeerAccessNotEnabled; 
# 448
case CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE:  
# 449
return hipErrorSetOnActiveProcess; 
# 450
case CUDA_ERROR_ASSERT:  
# 451
return hipErrorAssert; 
# 452
case CUDA_ERROR_HOST_MEMORY_ALREADY_REGISTERED:  
# 453
return hipErrorHostMemoryAlreadyRegistered; 
# 454
case CUDA_ERROR_HOST_MEMORY_NOT_REGISTERED:  
# 455
return hipErrorHostMemoryNotRegistered; 
# 456
case CUDA_ERROR_LAUNCH_FAILED:  
# 457
return hipErrorLaunchFailure; 
# 458
case CUDA_ERROR_COOPERATIVE_LAUNCH_TOO_LARGE:  
# 459
return hipErrorCooperativeLaunchTooLarge; 
# 460
case CUDA_ERROR_NOT_SUPPORTED:  
# 461
return hipErrorNotSupported; 
# 462
case CUDA_ERROR_UNKNOWN:  
# 463
default:  
# 464
return hipErrorUnknown; 
# 465
}  
# 466
} 
# 468
static inline cudaError_t hipErrorToCudaError(hipError_t hError) { 
# 469
switch (hError) { 
# 470
case hipSuccess:  
# 471
return cudaSuccess; 
# 472
case hipErrorOutOfMemory:  
# 473
return cudaErrorMemoryAllocation; 
# 474
case hipErrorProfilerDisabled:  
# 475
return cudaErrorProfilerDisabled; 
# 476
case hipErrorProfilerNotInitialized:  
# 477
return cudaErrorProfilerNotInitialized; 
# 478
case hipErrorProfilerAlreadyStarted:  
# 479
return cudaErrorProfilerAlreadyStarted; 
# 480
case hipErrorProfilerAlreadyStopped:  
# 481
return cudaErrorProfilerAlreadyStopped; 
# 482
case hipErrorInvalidConfiguration:  
# 483
return cudaErrorInvalidConfiguration; 
# 484
case hipErrorLaunchOutOfResources:  
# 485
return cudaErrorLaunchOutOfResources; 
# 486
case hipErrorInvalidValue:  
# 487
return cudaErrorInvalidValue; 
# 488
case hipErrorInvalidHandle:  
# 489
return cudaErrorInvalidResourceHandle; 
# 490
case hipErrorInvalidDevice:  
# 491
return cudaErrorInvalidDevice; 
# 492
case hipErrorInvalidMemcpyDirection:  
# 493
return cudaErrorInvalidMemcpyDirection; 
# 494
case hipErrorInvalidDevicePointer:  
# 495
return cudaErrorInvalidDevicePointer; 
# 496
case hipErrorNotInitialized:  
# 497
return cudaErrorInitializationError; 
# 498
case hipErrorNoDevice:  
# 499
return cudaErrorNoDevice; 
# 500
case hipErrorNotReady:  
# 501
return cudaErrorNotReady; 
# 502
case hipErrorPeerAccessNotEnabled:  
# 503
return cudaErrorPeerAccessNotEnabled; 
# 504
case hipErrorPeerAccessAlreadyEnabled:  
# 505
return cudaErrorPeerAccessAlreadyEnabled; 
# 506
case hipErrorHostMemoryAlreadyRegistered:  
# 507
return cudaErrorHostMemoryAlreadyRegistered; 
# 508
case hipErrorHostMemoryNotRegistered:  
# 509
return cudaErrorHostMemoryNotRegistered; 
# 510
case hipErrorDeinitialized:  
# 511
return cudaErrorCudartUnloading; 
# 512
case hipErrorInvalidSymbol:  
# 513
return cudaErrorInvalidSymbol; 
# 514
case hipErrorInsufficientDriver:  
# 515
return cudaErrorInsufficientDriver; 
# 516
case hipErrorMissingConfiguration:  
# 517
return cudaErrorMissingConfiguration; 
# 518
case hipErrorPriorLaunchFailure:  
# 519
return cudaErrorPriorLaunchFailure; 
# 520
case hipErrorInvalidDeviceFunction:  
# 521
return cudaErrorInvalidDeviceFunction; 
# 522
case hipErrorInvalidImage:  
# 523
return cudaErrorInvalidKernelImage; 
# 524
case hipErrorInvalidContext:  
# 528
return cudaErrorUnknown; 
# 530
case hipErrorMapFailed:  
# 531
return cudaErrorMapBufferObjectFailed; 
# 532
case hipErrorUnmapFailed:  
# 533
return cudaErrorUnmapBufferObjectFailed; 
# 534
case hipErrorArrayIsMapped:  
# 536
return cudaErrorArrayIsMapped; 
# 540
case hipErrorAlreadyMapped:  
# 542
return cudaErrorAlreadyMapped; 
# 546
case hipErrorNoBinaryForGpu:  
# 547
return cudaErrorNoKernelImageForDevice; 
# 548
case hipErrorAlreadyAcquired:  
# 550
return cudaErrorAlreadyAcquired; 
# 554
case hipErrorNotMapped:  
# 556
return cudaErrorNotMapped; 
# 560
case hipErrorNotMappedAsArray:  
# 562
return cudaErrorNotMappedAsArray; 
# 566
case hipErrorNotMappedAsPointer:  
# 568
return cudaErrorNotMappedAsPointer; 
# 572
case hipErrorECCNotCorrectable:  
# 573
return cudaErrorECCUncorrectable; 
# 574
case hipErrorUnsupportedLimit:  
# 575
return cudaErrorUnsupportedLimit; 
# 576
case hipErrorContextAlreadyInUse:  
# 577
return cudaErrorDeviceAlreadyInUse; 
# 578
case hipErrorPeerAccessUnsupported:  
# 579
return cudaErrorPeerAccessUnsupported; 
# 580
case hipErrorInvalidKernelFile:  
# 581
return cudaErrorInvalidPtx; 
# 582
case hipErrorInvalidGraphicsContext:  
# 583
return cudaErrorInvalidGraphicsContext; 
# 584
case hipErrorInvalidSource:  
# 586
return cudaErrorInvalidSource; 
# 590
case hipErrorFileNotFound:  
# 592
return cudaErrorFileNotFound; 
# 596
case hipErrorSharedObjectSymbolNotFound:  
# 597
return cudaErrorSharedObjectSymbolNotFound; 
# 598
case hipErrorSharedObjectInitFailed:  
# 599
return cudaErrorSharedObjectInitFailed; 
# 600
case hipErrorOperatingSystem:  
# 601
return cudaErrorOperatingSystem; 
# 602
case hipErrorNotFound:  
# 604
return cudaErrorSymbolNotFound; 
# 608
case hipErrorIllegalAddress:  
# 609
return cudaErrorIllegalAddress; 
# 610
case hipErrorLaunchTimeOut:  
# 611
return cudaErrorLaunchTimeout; 
# 612
case hipErrorSetOnActiveProcess:  
# 613
return cudaErrorSetOnActiveProcess; 
# 614
case hipErrorLaunchFailure:  
# 615
return cudaErrorLaunchFailure; 
# 616
case hipErrorCooperativeLaunchTooLarge:  
# 617
return cudaErrorCooperativeLaunchTooLarge; 
# 618
case hipErrorNotSupported:  
# 619
return cudaErrorNotSupported; 
# 621
case hipErrorRuntimeMemory:  
# 623
case hipErrorRuntimeOther:  
# 624
case hipErrorUnknown:  
# 625
case hipErrorTbd:  
# 626
default:  
# 627
return cudaErrorUnknown; 
# 628
}  
# 629
} 
# 631
static inline cudaMemcpyKind hipMemcpyKindToCudaMemcpyKind(hipMemcpyKind kind) { 
# 632
switch (kind) { 
# 633
case hipMemcpyHostToHost:  
# 634
return cudaMemcpyHostToHost; 
# 635
case hipMemcpyHostToDevice:  
# 636
return cudaMemcpyHostToDevice; 
# 637
case hipMemcpyDeviceToHost:  
# 638
return cudaMemcpyDeviceToHost; 
# 639
case hipMemcpyDeviceToDevice:  
# 640
return cudaMemcpyDeviceToDevice; 
# 641
default:  
# 642
return cudaMemcpyDefault; 
# 643
}  
# 644
} 
# 646
static inline cudaTextureAddressMode hipTextureAddressModeToCudaTextureAddressMode(hipTextureAddressMode 
# 647
kind) { 
# 648
switch (kind) { 
# 649
case cudaAddressModeWrap:  
# 650
return cudaAddressModeWrap; 
# 651
case cudaAddressModeClamp:  
# 652
return cudaAddressModeClamp; 
# 653
case cudaAddressModeMirror:  
# 654
return cudaAddressModeMirror; 
# 655
case cudaAddressModeBorder:  
# 656
return cudaAddressModeBorder; 
# 657
default:  
# 658
return cudaAddressModeWrap; 
# 659
}  
# 660
} 
# 662
static inline cudaTextureFilterMode hipTextureFilterModeToCudaTextureFilterMode(hipTextureFilterMode 
# 663
kind) { 
# 664
switch (kind) { 
# 665
case cudaFilterModePoint:  
# 666
return cudaFilterModePoint; 
# 667
case cudaFilterModeLinear:  
# 668
return cudaFilterModeLinear; 
# 669
default:  
# 670
return cudaFilterModePoint; 
# 671
}  
# 672
} 
# 674
static inline cudaTextureReadMode hipTextureReadModeToCudaTextureReadMode(hipTextureReadMode kind) { 
# 675
switch (kind) { 
# 676
case cudaReadModeElementType:  
# 677
return cudaReadModeElementType; 
# 678
case cudaReadModeNormalizedFloat:  
# 679
return cudaReadModeNormalizedFloat; 
# 680
default:  
# 681
return cudaReadModeElementType; 
# 682
}  
# 683
} 
# 685
static inline cudaChannelFormatKind hipChannelFormatKindToCudaChannelFormatKind(hipChannelFormatKind 
# 686
kind) { 
# 687
switch (kind) { 
# 688
case cudaChannelFormatKindSigned:  
# 689
return cudaChannelFormatKindSigned; 
# 690
case cudaChannelFormatKindUnsigned:  
# 691
return cudaChannelFormatKindUnsigned; 
# 692
case cudaChannelFormatKindFloat:  
# 693
return cudaChannelFormatKindFloat; 
# 694
case cudaChannelFormatKindNone:  
# 695
return cudaChannelFormatKindNone; 
# 696
default:  
# 697
return cudaChannelFormatKindNone; 
# 698
}  
# 699
} 
# 705
typedef void (*hipStreamCallback_t)(hipStream_t stream, hipError_t status, void * userData); 
# 706
static inline hipError_t hipInit(unsigned flags) { 
# 707
return hipCUResultTohipError(cuInit(flags)); 
# 708
} 
# 710
static inline hipError_t hipDeviceReset() { return hipCUDAErrorTohipError(cudaDeviceReset()); } 
# 712
static inline hipError_t hipGetLastError() { return hipCUDAErrorTohipError(cudaGetLastError()); } 
# 714
static inline hipError_t hipPeekAtLastError() { 
# 715
return hipCUDAErrorTohipError(cudaPeekAtLastError()); 
# 716
} 
# 718
static inline hipError_t hipMalloc(void **ptr, size_t size) { 
# 719
return hipCUDAErrorTohipError(cudaMalloc(ptr, size)); 
# 720
} 
# 722
static inline hipError_t hipMallocPitch(void **ptr, size_t *pitch, size_t width, size_t height) { 
# 723
return hipCUDAErrorTohipError(cudaMallocPitch(ptr, pitch, width, height)); 
# 724
} 
# 726
static inline hipError_t hipMemAllocPitch(hipDeviceptr_t *dptr, size_t *pitch, size_t widthInBytes, size_t height, unsigned elementSizeBytes) { 
# 727
return hipCUResultTohipError(cuMemAllocPitch_v2(dptr, pitch, widthInBytes, height, elementSizeBytes)); 
# 728
} 
# 730
static inline hipError_t hipMalloc3D(hipPitchedPtr *pitchedDevPtr, hipExtent extent) { 
# 731
return hipCUDAErrorTohipError(cudaMalloc3D(pitchedDevPtr, extent)); 
# 732
} 
# 734
static inline hipError_t hipFree(void *ptr) { return hipCUDAErrorTohipError(cudaFree(ptr)); } 
# 736
static inline hipError_t hipMallocHost(void ** ptr, size_t size)
# 737
 __attribute((deprecated("use hipHostMalloc instead"))); 
# 738
static inline hipError_t hipMallocHost(void **ptr, size_t size) { 
# 739
return hipCUDAErrorTohipError(cudaMallocHost(ptr, size)); 
# 740
} 
# 742
static inline hipError_t hipMemAllocHost(void ** ptr, size_t size)
# 743
 __attribute((deprecated("use hipHostMalloc instead"))); 
# 744
static inline hipError_t hipMemAllocHost(void **ptr, size_t size) { 
# 745
return hipCUResultTohipError(cuMemAllocHost_v2(ptr, size)); 
# 746
} 
# 748
static inline hipError_t hipHostAlloc(void ** ptr, size_t size, unsigned flags)
# 749
 __attribute((deprecated("use hipHostMalloc instead"))); 
# 750
static inline hipError_t hipHostAlloc(void **ptr, size_t size, unsigned flags) { 
# 751
return hipCUDAErrorTohipError(cudaHostAlloc(ptr, size, flags)); 
# 752
} 
# 754
static inline hipError_t hipHostMalloc(void **ptr, size_t size, unsigned flags) { 
# 755
return hipCUDAErrorTohipError(cudaHostAlloc(ptr, size, flags)); 
# 756
} 
# 758
static inline hipError_t hipMallocManaged(void **ptr, size_t size, unsigned flags) { 
# 759
return hipCUDAErrorTohipError(cudaMallocManaged(ptr, size, flags)); 
# 760
} 
# 762
static inline hipError_t hipMallocArray(hipArray **array, const hipChannelFormatDesc *desc, size_t 
# 763
width, size_t height, unsigned 
# 764
flags = 0) { 
# 765
return hipCUDAErrorTohipError(cudaMallocArray(array, desc, width, height, flags)); 
# 766
} 
# 768
static inline hipError_t hipMalloc3DArray(hipArray **array, const hipChannelFormatDesc *desc, hipExtent 
# 769
extent, unsigned flags) { 
# 770
return hipCUDAErrorTohipError(cudaMalloc3DArray(array, desc, extent, flags)); 
# 771
} 
# 773
static inline hipError_t hipFreeArray(hipArray *array) { 
# 774
return hipCUDAErrorTohipError(cudaFreeArray(array)); 
# 775
} 
# 777
static inline hipError_t hipHostGetDevicePointer(void **devPtr, void *hostPtr, unsigned flags) { 
# 778
return hipCUDAErrorTohipError(cudaHostGetDevicePointer(devPtr, hostPtr, flags)); 
# 779
} 
# 781
static inline hipError_t hipHostGetFlags(unsigned *flagsPtr, void *hostPtr) { 
# 782
return hipCUDAErrorTohipError(cudaHostGetFlags(flagsPtr, hostPtr)); 
# 783
} 
# 785
static inline hipError_t hipHostRegister(void *ptr, size_t size, unsigned flags) { 
# 786
return hipCUDAErrorTohipError(cudaHostRegister(ptr, size, flags)); 
# 787
} 
# 789
static inline hipError_t hipHostUnregister(void *ptr) { 
# 790
return hipCUDAErrorTohipError(cudaHostUnregister(ptr)); 
# 791
} 
# 793
static inline hipError_t hipFreeHost(void * ptr)
# 794
 __attribute((deprecated("use hipHostFree instead"))); 
# 795
static inline hipError_t hipFreeHost(void *ptr) { 
# 796
return hipCUDAErrorTohipError(cudaFreeHost(ptr)); 
# 797
} 
# 799
static inline hipError_t hipHostFree(void *ptr) { 
# 800
return hipCUDAErrorTohipError(cudaFreeHost(ptr)); 
# 801
} 
# 803
static inline hipError_t hipSetDevice(int device) { 
# 804
return hipCUDAErrorTohipError(cudaSetDevice(device)); 
# 805
} 
# 807
static inline hipError_t hipChooseDevice(int *device, const hipDeviceProp_t *prop) { 
# 808
cudaDeviceProp cdprop; 
# 809
memset(&cdprop, 0, sizeof(cudaDeviceProp)); 
# 810
(cdprop.major) = (prop->major); 
# 811
(cdprop.minor) = (prop->minor); 
# 812
(cdprop.totalGlobalMem) = (prop->totalGlobalMem); 
# 813
(cdprop.sharedMemPerBlock) = (prop->sharedMemPerBlock); 
# 814
(cdprop.regsPerBlock) = (prop->regsPerBlock); 
# 815
(cdprop.warpSize) = (prop->warpSize); 
# 816
(cdprop.maxThreadsPerBlock) = (prop->maxThreadsPerBlock); 
# 817
(cdprop.clockRate) = (prop->clockRate); 
# 818
(cdprop.totalConstMem) = (prop->totalConstMem); 
# 819
(cdprop.multiProcessorCount) = (prop->multiProcessorCount); 
# 820
(cdprop.l2CacheSize) = (prop->l2CacheSize); 
# 821
(cdprop.maxThreadsPerMultiProcessor) = (prop->maxThreadsPerMultiProcessor); 
# 822
(cdprop.computeMode) = (prop->computeMode); 
# 823
(cdprop.canMapHostMemory) = (prop->canMapHostMemory); 
# 824
(cdprop.memoryClockRate) = (prop->memoryClockRate); 
# 825
(cdprop.memoryBusWidth) = (prop->memoryBusWidth); 
# 826
return hipCUDAErrorTohipError(cudaChooseDevice(device, &cdprop)); 
# 827
} 
# 829
static inline hipError_t hipMemcpyHtoD(hipDeviceptr_t dst, void *src, size_t size) { 
# 830
return hipCUResultTohipError(cuMemcpyHtoD_v2(dst, src, size)); 
# 831
} 
# 833
static inline hipError_t hipMemcpyDtoH(void *dst, hipDeviceptr_t src, size_t size) { 
# 834
return hipCUResultTohipError(cuMemcpyDtoH_v2(dst, src, size)); 
# 835
} 
# 837
static inline hipError_t hipMemcpyDtoD(hipDeviceptr_t dst, hipDeviceptr_t src, size_t size) { 
# 838
return hipCUResultTohipError(cuMemcpyDtoD_v2(dst, src, size)); 
# 839
} 
# 841
static inline hipError_t hipMemcpyHtoDAsync(hipDeviceptr_t dst, void *src, size_t size, hipStream_t 
# 842
stream) { 
# 843
return hipCUResultTohipError(cuMemcpyHtoDAsync_v2(dst, src, size, stream)); 
# 844
} 
# 846
static inline hipError_t hipMemcpyDtoHAsync(void *dst, hipDeviceptr_t src, size_t size, hipStream_t 
# 847
stream) { 
# 848
return hipCUResultTohipError(cuMemcpyDtoHAsync_v2(dst, src, size, stream)); 
# 849
} 
# 851
static inline hipError_t hipMemcpyDtoDAsync(hipDeviceptr_t dst, hipDeviceptr_t src, size_t size, hipStream_t 
# 852
stream) { 
# 853
return hipCUResultTohipError(cuMemcpyDtoDAsync_v2(dst, src, size, stream)); 
# 854
} 
# 856
static inline hipError_t hipMemcpy(void *dst, const void *src, size_t sizeBytes, hipMemcpyKind 
# 857
copyKind) { 
# 858
return hipCUDAErrorTohipError(cudaMemcpy(dst, src, sizeBytes, hipMemcpyKindToCudaMemcpyKind(copyKind))); 
# 860
} 
# 863
inline hipError_t hipMemcpyWithStream(void *dst, const void *src, size_t 
# 864
sizeBytes, hipMemcpyKind copyKind, hipStream_t 
# 865
stream) { 
# 866
cudaError_t error = cudaMemcpyAsync(dst, src, sizeBytes, hipMemcpyKindToCudaMemcpyKind(copyKind), stream); 
# 870
if (error != (cudaSuccess)) { return hipCUDAErrorTohipError(error); }  
# 872
return hipCUDAErrorTohipError(cudaStreamSynchronize(stream)); 
# 873
} 
# 875
static inline hipError_t hipMemcpyAsync(void *dst, const void *src, size_t sizeBytes, hipMemcpyKind 
# 876
copyKind, hipStream_t stream = 0) { 
# 877
return hipCUDAErrorTohipError(cudaMemcpyAsync(dst, src, sizeBytes, hipMemcpyKindToCudaMemcpyKind(copyKind), stream)); 
# 879
} 
# 881
static inline hipError_t hipMemcpyToSymbol(const void *symbol, const void *src, size_t sizeBytes, size_t 
# 882
offset = 0, hipMemcpyKind 
# 883
copyType = hipMemcpyHostToDevice) { 
# 884
return hipCUDAErrorTohipError(cudaMemcpyToSymbol(symbol, src, sizeBytes, offset, hipMemcpyKindToCudaMemcpyKind(copyType))); 
# 886
} 
# 888
static inline hipError_t hipMemcpyToSymbolAsync(const void *symbol, const void *src, size_t 
# 889
sizeBytes, size_t offset, hipMemcpyKind 
# 890
copyType, hipStream_t 
# 891
stream = 0) { 
# 892
return hipCUDAErrorTohipError(cudaMemcpyToSymbolAsync(symbol, src, sizeBytes, offset, hipMemcpyKindToCudaMemcpyKind(copyType), stream)); 
# 894
} 
# 896
static inline hipError_t hipMemcpyFromSymbol(void *dst, const void *symbolName, size_t sizeBytes, size_t 
# 897
offset = 0, hipMemcpyKind 
# 898
kind = hipMemcpyDeviceToHost) { 
# 899
return hipCUDAErrorTohipError(cudaMemcpyFromSymbol(dst, symbolName, sizeBytes, offset, hipMemcpyKindToCudaMemcpyKind(kind))); 
# 901
} 
# 903
static inline hipError_t hipMemcpyFromSymbolAsync(void *dst, const void *symbolName, size_t 
# 904
sizeBytes, size_t offset, hipMemcpyKind 
# 905
kind, hipStream_t 
# 906
stream = 0) { 
# 907
return hipCUDAErrorTohipError(cudaMemcpyFromSymbolAsync(dst, symbolName, sizeBytes, offset, hipMemcpyKindToCudaMemcpyKind(kind), stream)); 
# 909
} 
# 911
static inline hipError_t hipGetSymbolAddress(void **devPtr, const void *symbolName) { 
# 912
return hipCUDAErrorTohipError(cudaGetSymbolAddress(devPtr, symbolName)); 
# 913
} 
# 915
static inline hipError_t hipGetSymbolSize(size_t *size, const void *symbolName) { 
# 916
return hipCUDAErrorTohipError(cudaGetSymbolSize(size, symbolName)); 
# 917
} 
# 919
static inline hipError_t hipMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t 
# 920
width, size_t height, hipMemcpyKind kind) { 
# 921
return hipCUDAErrorTohipError(cudaMemcpy2D(dst, dpitch, src, spitch, width, height, hipMemcpyKindToCudaMemcpyKind(kind))); 
# 923
} 
# 925
static inline hipError_t hipMemcpyParam2D(const CUDA_MEMCPY2D *pCopy) { 
# 926
return hipCUResultTohipError(cuMemcpy2D_v2(pCopy)); 
# 927
} 
# 929
static inline hipError_t hipMemcpyParam2DAsync(const CUDA_MEMCPY2D *pCopy, hipStream_t stream = 0) { 
# 930
return hipCUResultTohipError(cuMemcpy2DAsync_v2(pCopy, stream)); 
# 931
} 
# 933
static inline hipError_t hipMemcpy3D(const cudaMemcpy3DParms *p) 
# 934
{ 
# 935
return hipCUDAErrorTohipError(cudaMemcpy3D(p)); 
# 936
} 
# 938
static inline hipError_t hipMemcpy3DAsync(const cudaMemcpy3DParms *p, hipStream_t stream) 
# 939
{ 
# 940
return hipCUDAErrorTohipError(cudaMemcpy3DAsync(p, stream)); 
# 941
} 
# 943
static inline hipError_t hipMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t 
# 944
width, size_t height, hipMemcpyKind kind, hipStream_t 
# 945
stream) { 
# 946
return hipCUDAErrorTohipError(cudaMemcpy2DAsync(dst, dpitch, src, spitch, width, height, hipMemcpyKindToCudaMemcpyKind(kind), stream)); 
# 948
} 
# 950
static inline hipError_t hipMemcpy2DToArray(hipArray *dst, size_t wOffset, size_t hOffset, const void *
# 951
src, size_t spitch, size_t width, size_t 
# 952
height, hipMemcpyKind kind) { 
# 953
return hipCUDAErrorTohipError(cudaMemcpy2DToArray(dst, wOffset, hOffset, src, spitch, width, height, hipMemcpyKindToCudaMemcpyKind(kind))); 
# 955
} 
# 957
static inline hipError_t hipMemcpyToArray(hipArray *dst, size_t wOffset, size_t hOffset, const void *
# 958
src, size_t count, hipMemcpyKind kind) { 
# 959
return hipCUDAErrorTohipError(cudaMemcpyToArray(dst, wOffset, hOffset, src, count, hipMemcpyKindToCudaMemcpyKind(kind))); 
# 961
} 
# 963
static inline hipError_t hipMemcpyFromArray(void *dst, hipArray_const_t srcArray, size_t wOffset, size_t 
# 964
hOffset, size_t count, hipMemcpyKind kind) { 
# 965
return hipCUDAErrorTohipError(cudaMemcpyFromArray(dst, srcArray, wOffset, hOffset, count, hipMemcpyKindToCudaMemcpyKind(kind))); 
# 967
} 
# 969
static inline hipError_t hipMemcpyAtoH(void *dst, hipArray *srcArray, size_t srcOffset, size_t 
# 970
count) { 
# 971
return hipCUResultTohipError(cuMemcpyAtoH_v2(dst, (CUarray)srcArray, srcOffset, count)); 
# 972
} 
# 974
static inline hipError_t hipMemcpyHtoA(hipArray *dstArray, size_t dstOffset, const void *srcHost, size_t 
# 975
count) { 
# 976
return hipCUResultTohipError(cuMemcpyHtoA_v2((CUarray)dstArray, dstOffset, srcHost, count)); 
# 977
} 
# 979
static inline hipError_t hipDeviceSynchronize() { 
# 980
return hipCUDAErrorTohipError(cudaDeviceSynchronize()); 
# 981
} 
# 983
static inline hipError_t hipDeviceGetCacheConfig(hipFuncCache_t *pCacheConfig) { 
# 984
return hipCUDAErrorTohipError(cudaDeviceGetCacheConfig(pCacheConfig)); 
# 985
} 
# 987
static inline hipError_t hipDeviceSetCacheConfig(hipFuncCache_t cacheConfig) { 
# 988
return hipCUDAErrorTohipError(cudaDeviceSetCacheConfig(cacheConfig)); 
# 989
} 
# 991
static inline const char *hipGetErrorString(hipError_t error) { 
# 992
return cudaGetErrorString(hipErrorToCudaError(error)); 
# 993
} 
# 995
static inline const char *hipGetErrorName(hipError_t error) { 
# 996
return cudaGetErrorName(hipErrorToCudaError(error)); 
# 997
} 
# 999
static inline hipError_t hipGetDeviceCount(int *count) { 
# 1000
return hipCUDAErrorTohipError(cudaGetDeviceCount(count)); 
# 1001
} 
# 1003
static inline hipError_t hipGetDevice(int *device) { 
# 1004
return hipCUDAErrorTohipError(cudaGetDevice(device)); 
# 1005
} 
# 1007
static inline hipError_t hipIpcCloseMemHandle(void *devPtr) { 
# 1008
return hipCUDAErrorTohipError(cudaIpcCloseMemHandle(devPtr)); 
# 1009
} 
# 1011
static inline hipError_t hipIpcGetEventHandle(hipIpcEventHandle_t *handle, hipEvent_t event) { 
# 1012
return hipCUDAErrorTohipError(cudaIpcGetEventHandle(handle, event)); 
# 1013
} 
# 1015
static inline hipError_t hipIpcGetMemHandle(hipIpcMemHandle_t *handle, void *devPtr) { 
# 1016
return hipCUDAErrorTohipError(cudaIpcGetMemHandle(handle, devPtr)); 
# 1017
} 
# 1019
static inline hipError_t hipIpcOpenEventHandle(hipEvent_t *event, hipIpcEventHandle_t handle) { 
# 1020
return hipCUDAErrorTohipError(cudaIpcOpenEventHandle(event, handle)); 
# 1021
} 
# 1023
static inline hipError_t hipIpcOpenMemHandle(void **devPtr, hipIpcMemHandle_t handle, unsigned 
# 1024
flags) { 
# 1025
return hipCUDAErrorTohipError(cudaIpcOpenMemHandle(devPtr, handle, flags)); 
# 1026
} 
# 1028
static inline hipError_t hipMemset(void *devPtr, int value, size_t count) { 
# 1029
return hipCUDAErrorTohipError(cudaMemset(devPtr, value, count)); 
# 1030
} 
# 1032
static inline hipError_t hipMemsetD32(hipDeviceptr_t devPtr, int value, size_t count) { 
# 1033
return hipCUResultTohipError(cuMemsetD32_v2(devPtr, value, count)); 
# 1034
} 
# 1036
static inline hipError_t hipMemsetAsync(void *devPtr, int value, size_t count, hipStream_t 
# 1037
stream = 0) { 
# 1038
return hipCUDAErrorTohipError(cudaMemsetAsync(devPtr, value, count, stream)); 
# 1039
} 
# 1041
static inline hipError_t hipMemsetD32Async(hipDeviceptr_t devPtr, int value, size_t count, hipStream_t 
# 1042
stream = 0) { 
# 1043
return hipCUResultTohipError(cuMemsetD32Async(devPtr, value, count, stream)); 
# 1044
} 
# 1046
static inline hipError_t hipMemsetD8(hipDeviceptr_t dest, unsigned char value, size_t sizeBytes) { 
# 1047
return hipCUResultTohipError(cuMemsetD8_v2(dest, value, sizeBytes)); 
# 1048
} 
# 1050
static inline hipError_t hipMemsetD8Async(hipDeviceptr_t dest, unsigned char value, size_t sizeBytes, hipStream_t 
# 1051
stream = 0) { 
# 1052
return hipCUResultTohipError(cuMemsetD8Async(dest, value, sizeBytes, stream)); 
# 1053
} 
# 1055
static inline hipError_t hipMemsetD16(hipDeviceptr_t dest, unsigned short value, size_t sizeBytes) { 
# 1056
return hipCUResultTohipError(cuMemsetD16_v2(dest, value, sizeBytes)); 
# 1057
} 
# 1059
static inline hipError_t hipMemsetD16Async(hipDeviceptr_t dest, unsigned short value, size_t sizeBytes, hipStream_t 
# 1060
stream = 0) { 
# 1061
return hipCUResultTohipError(cuMemsetD16Async(dest, value, sizeBytes, stream)); 
# 1062
} 
# 1064
static inline hipError_t hipMemset2D(void *dst, size_t pitch, int value, size_t width, size_t height) { 
# 1065
return hipCUDAErrorTohipError(cudaMemset2D(dst, pitch, value, width, height)); 
# 1066
} 
# 1068
static inline hipError_t hipMemset2DAsync(void *dst, size_t pitch, int value, size_t width, size_t height, hipStream_t stream = 0) { 
# 1069
return hipCUDAErrorTohipError(cudaMemset2DAsync(dst, pitch, value, width, height, stream)); 
# 1070
} 
# 1072
static inline hipError_t hipMemset3D(hipPitchedPtr pitchedDevPtr, int value, hipExtent extent) { 
# 1073
return hipCUDAErrorTohipError(cudaMemset3D(pitchedDevPtr, value, extent)); 
# 1074
} 
# 1076
static inline hipError_t hipMemset3DAsync(hipPitchedPtr pitchedDevPtr, int value, hipExtent extent, hipStream_t stream = 0) { 
# 1077
return hipCUDAErrorTohipError(cudaMemset3DAsync(pitchedDevPtr, value, extent, stream)); 
# 1078
} 
# 1080
static inline hipError_t hipGetDeviceProperties(hipDeviceProp_t *p_prop, int device) { 
# 1081
cudaDeviceProp cdprop; 
# 1082
cudaError_t cerror; 
# 1083
cerror = cudaGetDeviceProperties(&cdprop, device); 
# 1085
strncpy(p_prop->name, cdprop.name, 256); 
# 1086
(p_prop->totalGlobalMem) = (cdprop.totalGlobalMem); 
# 1087
(p_prop->sharedMemPerBlock) = (cdprop.sharedMemPerBlock); 
# 1088
(p_prop->regsPerBlock) = (cdprop.regsPerBlock); 
# 1089
(p_prop->warpSize) = (cdprop.warpSize); 
# 1090
(p_prop->maxThreadsPerBlock) = (cdprop.maxThreadsPerBlock); 
# 1091
for (int i = 0; i < 3; i++) { 
# 1092
((p_prop->maxThreadsDim)[i]) = ((cdprop.maxThreadsDim)[i]); 
# 1093
((p_prop->maxGridSize)[i]) = ((cdprop.maxGridSize)[i]); 
# 1094
}  
# 1095
(p_prop->clockRate) = (cdprop.clockRate); 
# 1096
(p_prop->memoryClockRate) = (cdprop.memoryClockRate); 
# 1097
(p_prop->memoryBusWidth) = (cdprop.memoryBusWidth); 
# 1098
(p_prop->totalConstMem) = (cdprop.totalConstMem); 
# 1099
(p_prop->major) = (cdprop.major); 
# 1100
(p_prop->minor) = (cdprop.minor); 
# 1101
(p_prop->multiProcessorCount) = (cdprop.multiProcessorCount); 
# 1102
(p_prop->l2CacheSize) = (cdprop.l2CacheSize); 
# 1103
(p_prop->maxThreadsPerMultiProcessor) = (cdprop.maxThreadsPerMultiProcessor); 
# 1104
(p_prop->computeMode) = (cdprop.computeMode); 
# 1105
(p_prop->clockInstructionRate) = (cdprop.clockRate); 
# 1107
int ccVers = ((p_prop->major) * 100) + ((p_prop->minor) * 10); 
# 1108
((p_prop->arch).hasGlobalInt32Atomics) = (ccVers >= 110); 
# 1109
((p_prop->arch).hasGlobalFloatAtomicExch) = (ccVers >= 110); 
# 1110
((p_prop->arch).hasSharedInt32Atomics) = (ccVers >= 120); 
# 1111
((p_prop->arch).hasSharedFloatAtomicExch) = (ccVers >= 120); 
# 1112
((p_prop->arch).hasFloatAtomicAdd) = (ccVers >= 200); 
# 1113
((p_prop->arch).hasGlobalInt64Atomics) = (ccVers >= 120); 
# 1114
((p_prop->arch).hasSharedInt64Atomics) = (ccVers >= 110); 
# 1115
((p_prop->arch).hasDoubles) = (ccVers >= 130); 
# 1116
((p_prop->arch).hasWarpVote) = (ccVers >= 120); 
# 1117
((p_prop->arch).hasWarpBallot) = (ccVers >= 200); 
# 1118
((p_prop->arch).hasWarpShuffle) = (ccVers >= 300); 
# 1119
((p_prop->arch).hasFunnelShift) = (ccVers >= 350); 
# 1120
((p_prop->arch).hasThreadFenceSystem) = (ccVers >= 200); 
# 1121
((p_prop->arch).hasSyncThreadsExt) = (ccVers >= 200); 
# 1122
((p_prop->arch).hasSurfaceFuncs) = (ccVers >= 200); 
# 1123
((p_prop->arch).has3dGrid) = (ccVers >= 200); 
# 1124
((p_prop->arch).hasDynamicParallelism) = (ccVers >= 350); 
# 1126
(p_prop->concurrentKernels) = (cdprop.concurrentKernels); 
# 1127
(p_prop->pciDomainID) = (cdprop.pciDomainID); 
# 1128
(p_prop->pciBusID) = (cdprop.pciBusID); 
# 1129
(p_prop->pciDeviceID) = (cdprop.pciDeviceID); 
# 1130
(p_prop->maxSharedMemoryPerMultiProcessor) = (cdprop.sharedMemPerMultiprocessor); 
# 1131
(p_prop->isMultiGpuBoard) = (cdprop.isMultiGpuBoard); 
# 1132
(p_prop->canMapHostMemory) = (cdprop.canMapHostMemory); 
# 1133
(p_prop->gcnArch) = 0; 
# 1134
(p_prop->integrated) = (cdprop.integrated); 
# 1135
(p_prop->cooperativeLaunch) = (cdprop.cooperativeLaunch); 
# 1136
(p_prop->cooperativeMultiDeviceLaunch) = (cdprop.cooperativeMultiDeviceLaunch); 
# 1138
(p_prop->maxTexture1D) = (cdprop.maxTexture1D); 
# 1139
((p_prop->maxTexture2D)[0]) = ((cdprop.maxTexture2D)[0]); 
# 1140
((p_prop->maxTexture2D)[1]) = ((cdprop.maxTexture2D)[1]); 
# 1141
((p_prop->maxTexture3D)[0]) = ((cdprop.maxTexture3D)[0]); 
# 1142
((p_prop->maxTexture3D)[1]) = ((cdprop.maxTexture3D)[1]); 
# 1143
((p_prop->maxTexture3D)[2]) = ((cdprop.maxTexture3D)[2]); 
# 1145
(p_prop->memPitch) = (cdprop.memPitch); 
# 1146
(p_prop->textureAlignment) = (cdprop.textureAlignment); 
# 1147
(p_prop->texturePitchAlignment) = (cdprop.texturePitchAlignment); 
# 1148
(p_prop->kernelExecTimeoutEnabled) = (cdprop.kernelExecTimeoutEnabled); 
# 1149
(p_prop->ECCEnabled) = (cdprop.ECCEnabled); 
# 1150
(p_prop->tccDriver) = (cdprop.tccDriver); 
# 1152
return hipCUDAErrorTohipError(cerror); 
# 1153
} 
# 1155
static inline hipError_t hipDeviceGetAttribute(int *pi, hipDeviceAttribute_t attr, int device) { 
# 1156
cudaDeviceAttr cdattr; 
# 1157
cudaError_t cerror; 
# 1159
switch (attr) { 
# 1160
case hipDeviceAttributeMaxThreadsPerBlock:  
# 1161
cdattr = cudaDevAttrMaxThreadsPerBlock; 
# 1162
break; 
# 1163
case hipDeviceAttributeMaxBlockDimX:  
# 1164
cdattr = cudaDevAttrMaxBlockDimX; 
# 1165
break; 
# 1166
case hipDeviceAttributeMaxBlockDimY:  
# 1167
cdattr = cudaDevAttrMaxBlockDimY; 
# 1168
break; 
# 1169
case hipDeviceAttributeMaxBlockDimZ:  
# 1170
cdattr = cudaDevAttrMaxBlockDimZ; 
# 1171
break; 
# 1172
case hipDeviceAttributeMaxGridDimX:  
# 1173
cdattr = cudaDevAttrMaxGridDimX; 
# 1174
break; 
# 1175
case hipDeviceAttributeMaxGridDimY:  
# 1176
cdattr = cudaDevAttrMaxGridDimY; 
# 1177
break; 
# 1178
case hipDeviceAttributeMaxGridDimZ:  
# 1179
cdattr = cudaDevAttrMaxGridDimZ; 
# 1180
break; 
# 1181
case hipDeviceAttributeMaxSharedMemoryPerBlock:  
# 1182
cdattr = cudaDevAttrMaxSharedMemoryPerBlock; 
# 1183
break; 
# 1184
case hipDeviceAttributeTotalConstantMemory:  
# 1185
cdattr = cudaDevAttrTotalConstantMemory; 
# 1186
break; 
# 1187
case hipDeviceAttributeWarpSize:  
# 1188
cdattr = cudaDevAttrWarpSize; 
# 1189
break; 
# 1190
case hipDeviceAttributeMaxRegistersPerBlock:  
# 1191
cdattr = cudaDevAttrMaxRegistersPerBlock; 
# 1192
break; 
# 1193
case hipDeviceAttributeClockRate:  
# 1194
cdattr = cudaDevAttrClockRate; 
# 1195
break; 
# 1196
case hipDeviceAttributeMemoryClockRate:  
# 1197
cdattr = cudaDevAttrMemoryClockRate; 
# 1198
break; 
# 1199
case hipDeviceAttributeMemoryBusWidth:  
# 1200
cdattr = cudaDevAttrGlobalMemoryBusWidth; 
# 1201
break; 
# 1202
case hipDeviceAttributeMultiprocessorCount:  
# 1203
cdattr = cudaDevAttrMultiProcessorCount; 
# 1204
break; 
# 1205
case hipDeviceAttributeComputeMode:  
# 1206
cdattr = cudaDevAttrComputeMode; 
# 1207
break; 
# 1208
case hipDeviceAttributeL2CacheSize:  
# 1209
cdattr = cudaDevAttrL2CacheSize; 
# 1210
break; 
# 1211
case hipDeviceAttributeMaxThreadsPerMultiProcessor:  
# 1212
cdattr = cudaDevAttrMaxThreadsPerMultiProcessor; 
# 1213
break; 
# 1214
case hipDeviceAttributeComputeCapabilityMajor:  
# 1215
cdattr = cudaDevAttrComputeCapabilityMajor; 
# 1216
break; 
# 1217
case hipDeviceAttributeComputeCapabilityMinor:  
# 1218
cdattr = cudaDevAttrComputeCapabilityMinor; 
# 1219
break; 
# 1220
case hipDeviceAttributeConcurrentKernels:  
# 1221
cdattr = cudaDevAttrConcurrentKernels; 
# 1222
break; 
# 1223
case hipDeviceAttributePciBusId:  
# 1224
cdattr = cudaDevAttrPciBusId; 
# 1225
break; 
# 1226
case hipDeviceAttributePciDeviceId:  
# 1227
cdattr = cudaDevAttrPciDeviceId; 
# 1228
break; 
# 1229
case hipDeviceAttributeMaxSharedMemoryPerMultiprocessor:  
# 1230
cdattr = cudaDevAttrMaxSharedMemoryPerMultiprocessor; 
# 1231
break; 
# 1232
case hipDeviceAttributeIsMultiGpuBoard:  
# 1233
cdattr = cudaDevAttrIsMultiGpuBoard; 
# 1234
break; 
# 1235
case hipDeviceAttributeIntegrated:  
# 1236
cdattr = cudaDevAttrIntegrated; 
# 1237
break; 
# 1238
case hipDeviceAttributeMaxTexture1DWidth:  
# 1239
cdattr = cudaDevAttrMaxTexture1DWidth; 
# 1240
break; 
# 1241
case hipDeviceAttributeMaxTexture2DWidth:  
# 1242
cdattr = cudaDevAttrMaxTexture2DWidth; 
# 1243
break; 
# 1244
case hipDeviceAttributeMaxTexture2DHeight:  
# 1245
cdattr = cudaDevAttrMaxTexture2DHeight; 
# 1246
break; 
# 1247
case hipDeviceAttributeMaxTexture3DWidth:  
# 1248
cdattr = cudaDevAttrMaxTexture3DWidth; 
# 1249
break; 
# 1250
case hipDeviceAttributeMaxTexture3DHeight:  
# 1251
cdattr = cudaDevAttrMaxTexture3DHeight; 
# 1252
break; 
# 1253
case hipDeviceAttributeMaxTexture3DDepth:  
# 1254
cdattr = cudaDevAttrMaxTexture3DDepth; 
# 1255
break; 
# 1256
case hipDeviceAttributeMaxPitch:  
# 1257
cdattr = cudaDevAttrMaxPitch; 
# 1258
break; 
# 1259
case hipDeviceAttributeTextureAlignment:  
# 1260
cdattr = cudaDevAttrTextureAlignment; 
# 1261
break; 
# 1262
case hipDeviceAttributeTexturePitchAlignment:  
# 1263
cdattr = cudaDevAttrTexturePitchAlignment; 
# 1264
break; 
# 1265
case hipDeviceAttributeKernelExecTimeout:  
# 1266
cdattr = cudaDevAttrKernelExecTimeout; 
# 1267
break; 
# 1268
case hipDeviceAttributeCanMapHostMemory:  
# 1269
cdattr = cudaDevAttrCanMapHostMemory; 
# 1270
break; 
# 1271
case hipDeviceAttributeEccEnabled:  
# 1272
cdattr = cudaDevAttrEccEnabled; 
# 1273
break; 
# 1274
default:  
# 1275
return hipCUDAErrorTohipError(cudaErrorInvalidValue); 
# 1276
}  
# 1278
cerror = cudaDeviceGetAttribute(pi, cdattr, device); 
# 1280
return hipCUDAErrorTohipError(cerror); 
# 1281
} 
# 1283
static inline hipError_t hipOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, const void *
# 1284
func, int 
# 1285
blockSize, size_t 
# 1286
dynamicSMemSize) { 
# 1287
cudaError_t cerror; 
# 1288
cerror = cudaOccupancyMaxActiveBlocksPerMultiprocessor(numBlocks, func, blockSize, dynamicSMemSize); 
# 1290
return hipCUDAErrorTohipError(cerror); 
# 1291
} 
# 1293
static inline hipError_t hipPointerGetAttributes(hipPointerAttribute_t *attributes, const void *ptr) { 
# 1294
cudaPointerAttributes cPA; 
# 1295
hipError_t err = hipCUDAErrorTohipError(cudaPointerGetAttributes(&cPA, ptr)); 
# 1296
if (err == (hipSuccess)) { 
# 1297
switch (cPA.memoryType) { 
# 1298
case cudaMemoryTypeDevice:  
# 1299
(attributes->memoryType) = hipMemoryTypeDevice; 
# 1300
break; 
# 1301
case cudaMemoryTypeHost:  
# 1302
(attributes->memoryType) = hipMemoryTypeHost; 
# 1303
break; 
# 1304
default:  
# 1305
return hipErrorUnknown; 
# 1306
}  
# 1307
(attributes->device) = (cPA.device); 
# 1308
(attributes->devicePointer) = (cPA.devicePointer); 
# 1309
(attributes->hostPointer) = (cPA.hostPointer); 
# 1310
(attributes->isManaged) = 0; 
# 1311
(attributes->allocationFlags) = (0); 
# 1312
}  
# 1313
return err; 
# 1314
} 
# 1316
static inline hipError_t hipMemGetInfo(size_t *free, size_t *total) { 
# 1317
return hipCUDAErrorTohipError(cudaMemGetInfo(free, total)); 
# 1318
} 
# 1320
static inline hipError_t hipEventCreate(hipEvent_t *event) { 
# 1321
return hipCUDAErrorTohipError(cudaEventCreate(event)); 
# 1322
} 
# 1324
static inline hipError_t hipEventRecord(hipEvent_t event, hipStream_t stream = 0) { 
# 1325
return hipCUDAErrorTohipError(cudaEventRecord(event, stream)); 
# 1326
} 
# 1328
static inline hipError_t hipEventSynchronize(hipEvent_t event) { 
# 1329
return hipCUDAErrorTohipError(cudaEventSynchronize(event)); 
# 1330
} 
# 1332
static inline hipError_t hipEventElapsedTime(float *ms, hipEvent_t start, hipEvent_t stop) { 
# 1333
return hipCUDAErrorTohipError(cudaEventElapsedTime(ms, start, stop)); 
# 1334
} 
# 1336
static inline hipError_t hipEventDestroy(hipEvent_t event) { 
# 1337
return hipCUDAErrorTohipError(cudaEventDestroy(event)); 
# 1338
} 
# 1340
static inline hipError_t hipStreamCreateWithFlags(hipStream_t *stream, unsigned flags) { 
# 1341
return hipCUDAErrorTohipError(cudaStreamCreateWithFlags(stream, flags)); 
# 1342
} 
# 1344
static inline hipError_t hipStreamCreateWithPriority(hipStream_t *stream, unsigned flags, int priority) { 
# 1345
return hipCUDAErrorTohipError(cudaStreamCreateWithPriority(stream, flags, priority)); 
# 1346
} 
# 1348
static inline hipError_t hipDeviceGetStreamPriorityRange(int *leastPriority, int *greatestPriority) { 
# 1349
return hipCUDAErrorTohipError(cudaDeviceGetStreamPriorityRange(leastPriority, greatestPriority)); 
# 1350
} 
# 1352
static inline hipError_t hipStreamCreate(hipStream_t *stream) { 
# 1353
return hipCUDAErrorTohipError(cudaStreamCreate(stream)); 
# 1354
} 
# 1356
static inline hipError_t hipStreamSynchronize(hipStream_t stream) { 
# 1357
return hipCUDAErrorTohipError(cudaStreamSynchronize(stream)); 
# 1358
} 
# 1360
static inline hipError_t hipStreamDestroy(hipStream_t stream) { 
# 1361
return hipCUDAErrorTohipError(cudaStreamDestroy(stream)); 
# 1362
} 
# 1364
static inline hipError_t hipStreamGetFlags(hipStream_t stream, unsigned *flags) { 
# 1365
return hipCUDAErrorTohipError(cudaStreamGetFlags(stream, flags)); 
# 1366
} 
# 1368
static inline hipError_t hipStreamGetPriority(hipStream_t stream, int *priority) { 
# 1369
return hipCUDAErrorTohipError(cudaStreamGetPriority(stream, priority)); 
# 1370
} 
# 1372
static inline hipError_t hipStreamWaitEvent(hipStream_t stream, hipEvent_t event, unsigned 
# 1373
flags) { 
# 1374
return hipCUDAErrorTohipError(cudaStreamWaitEvent(stream, event, flags)); 
# 1375
} 
# 1377
static inline hipError_t hipStreamQuery(hipStream_t stream) { 
# 1378
return hipCUDAErrorTohipError(cudaStreamQuery(stream)); 
# 1379
} 
# 1381
static inline hipError_t hipStreamAddCallback(hipStream_t stream, hipStreamCallback_t callback, void *
# 1382
userData, unsigned flags) { 
# 1383
return hipCUDAErrorTohipError(cudaStreamAddCallback(stream, (cudaStreamCallback_t)callback, userData, flags)); 
# 1385
} 
# 1387
static inline hipError_t hipDriverGetVersion(int *driverVersion) { 
# 1388
cudaError_t err = cudaDriverGetVersion(driverVersion); 
# 1391
(*driverVersion) = 4; 
# 1393
return hipCUDAErrorTohipError(err); 
# 1394
} 
# 1396
static inline hipError_t hipRuntimeGetVersion(int *runtimeVersion) { 
# 1397
return hipCUDAErrorTohipError(cudaRuntimeGetVersion(runtimeVersion)); 
# 1398
} 
# 1400
static inline hipError_t hipDeviceCanAccessPeer(int *canAccessPeer, int device, int peerDevice) { 
# 1401
return hipCUDAErrorTohipError(cudaDeviceCanAccessPeer(canAccessPeer, device, peerDevice)); 
# 1402
} 
# 1404
static inline hipError_t hipDeviceDisablePeerAccess(int peerDevice) { 
# 1405
return hipCUDAErrorTohipError(cudaDeviceDisablePeerAccess(peerDevice)); 
# 1406
} 
# 1408
static inline hipError_t hipDeviceEnablePeerAccess(int peerDevice, unsigned flags) { 
# 1409
return hipCUDAErrorTohipError(cudaDeviceEnablePeerAccess(peerDevice, flags)); 
# 1410
} 
# 1412
static inline hipError_t hipCtxDisablePeerAccess(hipCtx_t peerCtx) { 
# 1413
return hipCUResultTohipError(cuCtxDisablePeerAccess(peerCtx)); 
# 1414
} 
# 1416
static inline hipError_t hipCtxEnablePeerAccess(hipCtx_t peerCtx, unsigned flags) { 
# 1417
return hipCUResultTohipError(cuCtxEnablePeerAccess(peerCtx, flags)); 
# 1418
} 
# 1420
static inline hipError_t hipDevicePrimaryCtxGetState(hipDevice_t dev, unsigned *flags, int *
# 1421
active) { 
# 1422
return hipCUResultTohipError(cuDevicePrimaryCtxGetState(dev, flags, active)); 
# 1423
} 
# 1425
static inline hipError_t hipDevicePrimaryCtxRelease(hipDevice_t dev) { 
# 1426
return hipCUResultTohipError(cuDevicePrimaryCtxRelease(dev)); 
# 1427
} 
# 1429
static inline hipError_t hipDevicePrimaryCtxRetain(hipCtx_t *pctx, hipDevice_t dev) { 
# 1430
return hipCUResultTohipError(cuDevicePrimaryCtxRetain(pctx, dev)); 
# 1431
} 
# 1433
static inline hipError_t hipDevicePrimaryCtxReset(hipDevice_t dev) { 
# 1434
return hipCUResultTohipError(cuDevicePrimaryCtxReset(dev)); 
# 1435
} 
# 1437
static inline hipError_t hipDevicePrimaryCtxSetFlags(hipDevice_t dev, unsigned flags) { 
# 1438
return hipCUResultTohipError(cuDevicePrimaryCtxSetFlags(dev, flags)); 
# 1439
} 
# 1441
static inline hipError_t hipMemGetAddressRange(hipDeviceptr_t *pbase, size_t *psize, hipDeviceptr_t 
# 1442
dptr) { 
# 1443
return hipCUResultTohipError(cuMemGetAddressRange_v2(pbase, psize, dptr)); 
# 1444
} 
# 1446
static inline hipError_t hipMemcpyPeer(void *dst, int dstDevice, const void *src, int srcDevice, size_t 
# 1447
count) { 
# 1448
return hipCUDAErrorTohipError(cudaMemcpyPeer(dst, dstDevice, src, srcDevice, count)); 
# 1449
} 
# 1451
static inline hipError_t hipMemcpyPeerAsync(void *dst, int dstDevice, const void *src, int 
# 1452
srcDevice, size_t count, hipStream_t 
# 1453
stream = 0) { 
# 1454
return hipCUDAErrorTohipError(cudaMemcpyPeerAsync(dst, dstDevice, src, srcDevice, count, stream)); 
# 1456
} 
# 1459
static inline hipError_t hipProfilerStart() { return hipCUDAErrorTohipError(cudaProfilerStart()); } 
# 1461
static inline hipError_t hipProfilerStop() { return hipCUDAErrorTohipError(cudaProfilerStop()); } 
# 1463
static inline hipError_t hipSetDeviceFlags(unsigned flags) { 
# 1464
return hipCUDAErrorTohipError(cudaSetDeviceFlags(flags)); 
# 1465
} 
# 1467
static inline hipError_t hipEventCreateWithFlags(hipEvent_t *event, unsigned flags) { 
# 1468
return hipCUDAErrorTohipError(cudaEventCreateWithFlags(event, flags)); 
# 1469
} 
# 1471
static inline hipError_t hipEventQuery(hipEvent_t event) { 
# 1472
return hipCUDAErrorTohipError(cudaEventQuery(event)); 
# 1473
} 
# 1475
static inline hipError_t hipCtxCreate(hipCtx_t *ctx, unsigned flags, hipDevice_t device) { 
# 1476
return hipCUResultTohipError(cuCtxCreate_v2(ctx, flags, device)); 
# 1477
} 
# 1479
static inline hipError_t hipCtxDestroy(hipCtx_t ctx) { 
# 1480
return hipCUResultTohipError(cuCtxDestroy_v2(ctx)); 
# 1481
} 
# 1483
static inline hipError_t hipCtxPopCurrent(hipCtx_t *ctx) { 
# 1484
return hipCUResultTohipError(cuCtxPopCurrent_v2(ctx)); 
# 1485
} 
# 1487
static inline hipError_t hipCtxPushCurrent(hipCtx_t ctx) { 
# 1488
return hipCUResultTohipError(cuCtxPushCurrent_v2(ctx)); 
# 1489
} 
# 1491
static inline hipError_t hipCtxSetCurrent(hipCtx_t ctx) { 
# 1492
return hipCUResultTohipError(cuCtxSetCurrent(ctx)); 
# 1493
} 
# 1495
static inline hipError_t hipCtxGetCurrent(hipCtx_t *ctx) { 
# 1496
return hipCUResultTohipError(cuCtxGetCurrent(ctx)); 
# 1497
} 
# 1499
static inline hipError_t hipCtxGetDevice(hipDevice_t *device) { 
# 1500
return hipCUResultTohipError(cuCtxGetDevice(device)); 
# 1501
} 
# 1503
static inline hipError_t hipCtxGetApiVersion(hipCtx_t ctx, int *apiVersion) { 
# 1504
return hipCUResultTohipError(cuCtxGetApiVersion(ctx, (unsigned *)apiVersion)); 
# 1505
} 
# 1507
static inline hipError_t hipCtxGetCacheConfig(hipFuncCache *cacheConfig) { 
# 1508
return hipCUResultTohipError(cuCtxGetCacheConfig(cacheConfig)); 
# 1509
} 
# 1511
static inline hipError_t hipCtxSetCacheConfig(hipFuncCache cacheConfig) { 
# 1512
return hipCUResultTohipError(cuCtxSetCacheConfig(cacheConfig)); 
# 1513
} 
# 1515
static inline hipError_t hipCtxSetSharedMemConfig(hipSharedMemConfig config) { 
# 1516
return hipCUResultTohipError(cuCtxSetSharedMemConfig((CUsharedconfig)config)); 
# 1517
} 
# 1519
static inline hipError_t hipCtxGetSharedMemConfig(hipSharedMemConfig *pConfig) { 
# 1520
return hipCUResultTohipError(cuCtxGetSharedMemConfig((CUsharedconfig *)pConfig)); 
# 1521
} 
# 1523
static inline hipError_t hipCtxSynchronize() { 
# 1524
return hipCUResultTohipError(cuCtxSynchronize()); 
# 1525
} 
# 1527
static inline hipError_t hipCtxGetFlags(unsigned *flags) { 
# 1528
return hipCUResultTohipError(cuCtxGetFlags(flags)); 
# 1529
} 
# 1531
static inline hipError_t hipCtxDetach(hipCtx_t ctx) { 
# 1532
return hipCUResultTohipError(cuCtxDetach(ctx)); 
# 1533
} 
# 1535
static inline hipError_t hipDeviceGet(hipDevice_t *device, int ordinal) { 
# 1536
return hipCUResultTohipError(cuDeviceGet(device, ordinal)); 
# 1537
} 
# 1539
static inline hipError_t hipDeviceComputeCapability(int *major, int *minor, hipDevice_t device) { 
# 1540
return hipCUResultTohipError(cuDeviceComputeCapability(major, minor, device)); 
# 1541
} 
# 1543
static inline hipError_t hipDeviceGetName(char *name, int len, hipDevice_t device) { 
# 1544
return hipCUResultTohipError(cuDeviceGetName(name, len, device)); 
# 1545
} 
# 1547
static inline hipError_t hipDeviceGetPCIBusId(char *pciBusId, int len, hipDevice_t device) { 
# 1548
return hipCUDAErrorTohipError(cudaDeviceGetPCIBusId(pciBusId, len, device)); 
# 1549
} 
# 1551
static inline hipError_t hipDeviceGetByPCIBusId(int *device, const char *pciBusId) { 
# 1552
return hipCUDAErrorTohipError(cudaDeviceGetByPCIBusId(device, pciBusId)); 
# 1553
} 
# 1555
static inline hipError_t hipDeviceGetSharedMemConfig(hipSharedMemConfig *config) { 
# 1556
return hipCUDAErrorTohipError(cudaDeviceGetSharedMemConfig(config)); 
# 1557
} 
# 1559
static inline hipError_t hipDeviceSetSharedMemConfig(hipSharedMemConfig config) { 
# 1560
return hipCUDAErrorTohipError(cudaDeviceSetSharedMemConfig(config)); 
# 1561
} 
# 1563
static inline hipError_t hipDeviceGetLimit(size_t *pValue, hipLimit_t limit) { 
# 1564
return hipCUDAErrorTohipError(cudaDeviceGetLimit(pValue, limit)); 
# 1565
} 
# 1567
static inline hipError_t hipDeviceTotalMem(size_t *bytes, hipDevice_t device) { 
# 1568
return hipCUResultTohipError(cuDeviceTotalMem_v2(bytes, device)); 
# 1569
} 
# 1571
static inline hipError_t hipModuleLoad(hipModule_t *module, const char *fname) { 
# 1572
return hipCUResultTohipError(cuModuleLoad(module, fname)); 
# 1573
} 
# 1575
static inline hipError_t hipModuleUnload(hipModule_t hmod) { 
# 1576
return hipCUResultTohipError(cuModuleUnload(hmod)); 
# 1577
} 
# 1579
static inline hipError_t hipModuleGetFunction(hipFunction_t *function, hipModule_t module, const char *
# 1580
kname) { 
# 1581
return hipCUResultTohipError(cuModuleGetFunction(function, module, kname)); 
# 1582
} 
# 1584
static inline hipError_t hipFuncGetAttributes(hipFuncAttributes *attr, const void *func) { 
# 1585
return hipCUDAErrorTohipError(cudaFuncGetAttributes(attr, func)); 
# 1586
} 
# 1588
static inline hipError_t hipFuncGetAttribute(int *value, CUfunction_attribute attrib, hipFunction_t hfunc) { 
# 1589
return hipCUResultTohipError(cuFuncGetAttribute(value, attrib, hfunc)); 
# 1590
} 
# 1592
static inline hipError_t hipModuleGetGlobal(hipDeviceptr_t *dptr, size_t *bytes, hipModule_t hmod, const char *
# 1593
name) { 
# 1594
return hipCUResultTohipError(cuModuleGetGlobal_v2(dptr, bytes, hmod, name)); 
# 1595
} 
# 1597
static inline hipError_t hipModuleLoadData(hipModule_t *module, const void *image) { 
# 1598
return hipCUResultTohipError(cuModuleLoadData(module, image)); 
# 1599
} 
# 1601
static inline hipError_t hipModuleLoadDataEx(hipModule_t *module, const void *image, unsigned 
# 1602
numOptions, hipJitOption *options, void **
# 1603
optionValues) { 
# 1604
return hipCUResultTohipError(cuModuleLoadDataEx(module, image, numOptions, options, optionValues)); 
# 1606
} 
# 1608
static inline hipError_t hipLaunchKernel(const void *function_address, dim3 numBlocks, dim3 
# 1609
dimBlocks, void **args, size_t sharedMemBytes, hipStream_t 
# 1610
stream) 
# 1611
{ 
# 1612
return hipCUDAErrorTohipError(cudaLaunchKernel(function_address, numBlocks, dimBlocks, args, sharedMemBytes, stream)); 
# 1613
} 
# 1615
static inline hipError_t hipModuleLaunchKernel(hipFunction_t f, unsigned gridDimX, unsigned 
# 1616
gridDimY, unsigned gridDimZ, unsigned 
# 1617
blockDimX, unsigned blockDimY, unsigned 
# 1618
blockDimZ, unsigned sharedMemBytes, hipStream_t 
# 1619
stream, void **kernelParams, void **
# 1620
extra) { 
# 1621
return hipCUResultTohipError(cuLaunchKernel(f, gridDimX, gridDimY, gridDimZ, blockDimX, blockDimY, blockDimZ, sharedMemBytes, stream, kernelParams, extra)); 
# 1624
} 
# 1626
static inline hipError_t hipFuncSetCacheConfig(const void *func, hipFuncCache_t cacheConfig) { 
# 1627
return hipCUDAErrorTohipError(cudaFuncSetCacheConfig(func, cacheConfig)); 
# 1628
} 
# 1630
static inline hipError_t hipBindTexture(size_t *offset, textureReference *tex, const void *devPtr, const hipChannelFormatDesc *
# 1631
desc, size_t size = ((2147483647) * 2U) + 1U) { 
# 1632
return hipCUDAErrorTohipError(cudaBindTexture(offset, tex, devPtr, desc, size)); 
# 1633
} 
# 1635
static inline hipError_t hipBindTexture2D(size_t *offset, textureReference *tex, const void *devPtr, const hipChannelFormatDesc *
# 1636
desc, size_t width, size_t height, size_t 
# 1637
pitch) { 
# 1638
return hipCUDAErrorTohipError(cudaBindTexture2D(offset, tex, devPtr, desc, width, height, pitch)); 
# 1639
} 
# 1641
static inline hipChannelFormatDesc hipCreateChannelDesc(int x, int y, int z, int w, hipChannelFormatKind 
# 1642
f) { 
# 1643
return cudaCreateChannelDesc(x, y, z, w, hipChannelFormatKindToCudaChannelFormatKind(f)); 
# 1644
} 
# 1646
static inline hipError_t hipCreateTextureObject(hipTextureObject_t *pTexObject, const hipResourceDesc *
# 1647
pResDesc, const hipTextureDesc *
# 1648
pTexDesc, const hipResourceViewDesc *
# 1649
pResViewDesc) { 
# 1650
return hipCUDAErrorTohipError(cudaCreateTextureObject(pTexObject, pResDesc, pTexDesc, pResViewDesc)); 
# 1652
} 
# 1654
static inline hipError_t hipDestroyTextureObject(hipTextureObject_t textureObject) { 
# 1655
return hipCUDAErrorTohipError(cudaDestroyTextureObject(textureObject)); 
# 1656
} 
# 1658
static inline hipError_t hipCreateSurfaceObject(hipSurfaceObject_t *pSurfObject, const hipResourceDesc *
# 1659
pResDesc) { 
# 1660
return hipCUDAErrorTohipError(cudaCreateSurfaceObject(pSurfObject, pResDesc)); 
# 1661
} 
# 1663
static inline hipError_t hipDestroySurfaceObject(hipSurfaceObject_t surfaceObject) { 
# 1664
return hipCUDAErrorTohipError(cudaDestroySurfaceObject(surfaceObject)); 
# 1665
} 
# 1667
static inline hipError_t hipGetTextureObjectResourceDesc(hipResourceDesc *pResDesc, hipTextureObject_t 
# 1668
textureObject) { 
# 1669
return hipCUDAErrorTohipError(cudaGetTextureObjectResourceDesc(pResDesc, textureObject)); 
# 1670
} 
# 1672
static inline hipError_t hipGetTextureAlignmentOffset(size_t *offset, const textureReference *texref) 
# 1673
{ 
# 1674
return hipCUDAErrorTohipError(cudaGetTextureAlignmentOffset(offset, texref)); 
# 1675
} 
# 1677
static inline hipError_t hipGetChannelDesc(hipChannelFormatDesc *desc, hipArray_const_t array) 
# 1678
{ 
# 1679
return hipCUDAErrorTohipError(cudaGetChannelDesc(desc, array)); 
# 1680
} 
# 1684
}
# 1689
template< class T> static inline hipError_t 
# 1690
hipOccupancyMaxPotentialBlockSize(int *minGridSize, int *blockSize, T func, size_t 
# 1691
dynamicSMemSize = 0, int 
# 1692
blockSizeLimit = 0) { 
# 1693
cudaError_t cerror; 
# 1694
cerror = cudaOccupancyMaxPotentialBlockSize(minGridSize, blockSize, func, dynamicSMemSize, blockSizeLimit); 
# 1695
return hipCUDAErrorTohipError(cerror); 
# 1696
} 
# 1698
template< class T, int dim, cudaTextureReadMode readMode> static inline hipError_t 
# 1699
hipBindTexture(size_t *offset, const texture< T, dim, readMode>  &tex, const void *
# 1700
devPtr, size_t size = ((2147483647) * 2U) + 1U) { 
# 1701
return hipCUDAErrorTohipError(cudaBindTexture(offset, tex, devPtr, size)); 
# 1702
} 
# 1704
template< class T, int dim, cudaTextureReadMode readMode> static inline hipError_t 
# 1705
hipBindTexture(size_t *offset, texture< T, dim, readMode>  &tex, const void *
# 1706
devPtr, const hipChannelFormatDesc &desc, size_t 
# 1707
size = ((2147483647) * 2U) + 1U) { 
# 1708
return hipCUDAErrorTohipError(cudaBindTexture(offset, tex, devPtr, desc, size)); 
# 1709
} 
# 1711
template< class T, int dim, cudaTextureReadMode readMode> static inline hipError_t 
# 1712
hipUnbindTexture(texture< T, dim, readMode>  *tex) { 
# 1713
return hipCUDAErrorTohipError(cudaUnbindTexture(tex)); 
# 1714
} 
# 1716
template< class T, int dim, cudaTextureReadMode readMode> static inline hipError_t 
# 1717
hipUnbindTexture(texture< T, dim, readMode>  &tex) { 
# 1718
return hipCUDAErrorTohipError(cudaUnbindTexture(tex)); 
# 1719
} 
# 1721
template< class T, int dim, cudaTextureReadMode readMode> static inline hipError_t 
# 1722
hipBindTextureToArray(texture< T, dim, readMode>  &tex, hipArray_const_t 
# 1723
array, const hipChannelFormatDesc &
# 1724
desc) { 
# 1725
return hipCUDAErrorTohipError(cudaBindTextureToArray(tex, array, desc)); 
# 1726
} 
# 1728
template< class T, int dim, cudaTextureReadMode readMode> static inline hipError_t 
# 1729
hipBindTextureToArray(texture< T, dim, readMode>  *tex, hipArray_const_t 
# 1730
array, const hipChannelFormatDesc *
# 1731
desc) { 
# 1732
return hipCUDAErrorTohipError(cudaBindTextureToArray(tex, array, desc)); 
# 1733
} 
# 1735
template< class T, int dim, cudaTextureReadMode readMode> static inline hipError_t 
# 1736
hipBindTextureToArray(texture< T, dim, readMode>  &tex, hipArray_const_t 
# 1737
array) { 
# 1738
return hipCUDAErrorTohipError(cudaBindTextureToArray(tex, array)); 
# 1739
} 
# 1741
template< class T> static inline hipChannelFormatDesc 
# 1742
hipCreateChannelDesc() { 
# 1743
return cudaCreateChannelDesc< T> (); 
# 1744
} 
# 368 "/opt/rocm-3.3.0/hip/include/hip/hip_runtime_api.h" 3
template< class T> static inline hipError_t 
# 369
hipMalloc(T **devPtr, size_t size) { 
# 370
return hipMalloc((void **)devPtr, size); 
# 371
} 
# 375
template< class T> static inline hipError_t 
# 376
hipHostMalloc(T **ptr, size_t size, unsigned 
# 377
flags = 0) { 
# 378
return hipHostMalloc((void **)ptr, size, flags); 
# 379
} 
# 381
template< class T> static inline hipError_t 
# 382
hipMallocManaged(T **devPtr, size_t size, unsigned 
# 383
flags = 1) { 
# 384
return hipMallocManaged((void **)devPtr, size, flags); 
# 385
} 
# 32 "/opt/rocm-3.3.0/hip/include/hip/nvcc_detail/hip_runtime.h" 3
typedef int hipLaunchParm; 
# 19 "../.././target/target_hip.h"
typedef hipFuncCache_t tdpFuncCache; 
# 26
typedef hipMemcpyKind tdpMemcpyKind; 
# 27
typedef hipDeviceAttribute_t tdpDeviceAttr; 
# 44 "../.././target/target_hip.h"
typedef hipStream_t tdpStream_t; 
# 45
typedef hipError_t tdpError_t; 
# 39 "../.././target/target.h"
tdpError_t tdpDeviceSetCacheConfig(tdpFuncCache cacheConfig); 
# 40
tdpError_t tdpGetDeviceProperties(hipDeviceProp_t * prop, int); 
# 41
tdpError_t tdpSetDevice(int device); 
# 43
tdpError_t tdpDeviceGetAttribute(int * value, tdpDeviceAttr attr, int device); 
# 46
tdpError_t tdpDeviceGetCacheConfig(tdpFuncCache * cache); 
# 47
tdpError_t tdpDeviceSynchronize(); 
# 48
tdpError_t tdpGetDevice(int * device); 
# 49
tdpError_t tdpGetDeviceCount(int * count); 
# 53
const char *tdpGetErrorName(tdpError_t error); 
# 54
const char *tdpGetErrorString(tdpError_t error); 
# 55
tdpError_t tdpGetLastError(); 
# 56
tdpError_t tdpPeekAtLastError(); 
# 60
tdpError_t tdpStreamCreate(tdpStream_t * stream); 
# 61
tdpError_t tdpStreamDestroy(tdpStream_t stream); 
# 62
tdpError_t tdpStreamSynchronize(tdpStream_t stream); 
# 70
tdpError_t tdpFreeHost(void * phost); 
# 71
tdpError_t tdpHostAlloc(void ** phost, size_t size, unsigned flags); 
# 73
tdpError_t tdpMallocManaged(void ** devptr, size_t size, unsigned flag); 
# 75
tdpError_t tdpMemcpy(void * dst, const void * src, size_t count, tdpMemcpyKind kind); 
# 77
tdpError_t tdpMemcpyAsync(void * dst, const void * src, size_t count, tdpMemcpyKind kind, tdpStream_t stream); 
# 79
tdpError_t tdpMemset(void * devPtr, int value, size_t count); 
# 82
tdpError_t tdpFree(void * devPtr); 
# 83
tdpError_t tdpMalloc(void ** devRtr, size_t size); 
# 102 "../.././target/target.h"
tdpError_t tdpThreadModelInfo(FILE * fp); 
# 106
__attribute__((unused)) int tdpAtomicAddInt(int * sum, int val); 
# 107
__attribute__((unused)) int tdpAtomicMaxInt(int * maxval, int val); 
# 108
__attribute__((unused)) int tdpAtomicMinInt(int * minval, int val); 
# 109
__attribute__((unused)) double tdpAtomicAddDouble(double * sum, double val); 
# 110
__attribute__((unused)) double tdpAtomicMaxDouble(double * maxval, double val); 
# 111
__attribute__((unused)) double tdpAtomicMinDouble(double * minval, double val); 
# 115
__attribute__((unused)) int tdpAtomicBlockAddInt(int * partsum); 
# 116
__attribute__((unused)) double tdpAtomicBlockAddDouble(double * partsum); 
# 120
void tdpErrorHandler(tdpError_t ifail, const char * file, int line, int fatal); 
# 22 "../.././src/pe.h"
typedef struct pe_s pe_t; 
# 24
typedef enum { PE_QUIET, PE_VERBOSE, PE_OPTION_MAX} pe_enum_t; 
# 26
int pe_create(MPI_Comm parent, pe_enum_t flag, pe_t ** ppe); 
# 27
int pe_free(pe_t * pe); 
# 28
int pe_retain(pe_t * pe); 
# 29
int pe_set(pe_t * pe, pe_enum_t option); 
# 30
int pe_message(pe_t * pe); 
# 31
int pe_mpi_comm(pe_t * pe, MPI_Comm * comm); 
# 32
int pe_mpi_rank(pe_t * pe); 
# 33
int pe_mpi_size(pe_t * pe); 
# 34
int pe_subdirectory(pe_t * pe, char * name); 
# 35
int pe_subdirectory_set(pe_t * pe, const char * name); 
# 36
int pe_info(pe_t * pe, const char * fmt, ...); 
# 37
int pe_fatal(pe_t * pe, const char * fmt, ...); 
# 38
int pe_verbose(pe_t * pe, const char * fmt, ...); 
# 22 "../.././src/coords.h"
typedef struct coords_s cs_t; 
# 26
enum cartesian_directions { X, Y, Z}; 
# 27
enum cartesian_neighbours { FORWARD, BACKWARD}; 
# 28
enum cs_mpi_cart_neighbours { CS_FORW, CS_BACK}; 
# 29
enum upper_triangle { XX, XY, XZ, YY, YZ, ZZ}; 
# 33
int cs_create(pe_t * pe, cs_t ** pcs); 
# 34
int cs_free(cs_t * cs); 
# 35
int cs_retain(cs_t * cs); 
# 36
int cs_init(cs_t * cs); 
# 37
int cs_commit(cs_t * cs); 
# 38
int cs_target(cs_t * cs, cs_t ** target); 
# 40
int cs_decomposition_set(cs_t * cs, const int  irequest[3]); 
# 41
int cs_periodicity_set(cs_t * cs, const int  iper[3]); 
# 42
int cs_ntotal_set(cs_t * cs, const int  ntotal[3]); 
# 43
int cs_nhalo_set(cs_t * cs, int nhalo); 
# 44
int cs_reorder_set(cs_t * cs, int reorder); 
# 45
int cs_info(cs_t * cs); 
# 46
int cs_cart_comm(cs_t * cs, MPI_Comm * comm); 
# 47
int cs_periodic_comm(cs_t * cs, MPI_Comm * comm); 
# 48
int cs_cart_neighb(cs_t * cs, int forwback, int dim); 
# 49
int cs_cart_rank(cs_t * cs); 
# 50
int cs_pe_rank(cs_t * cs); 
# 54
int cs_cartsz(cs_t * cs, int  cartsz[3]); 
# 55
int cs_cart_coords(cs_t * cs, int  coords[3]); 
# 56
int cs_lmin(cs_t * cs, double  lmin[3]); 
# 57
int cs_ltot(cs_t * cs, double  ltot[3]); 
# 58
int cs_periodic(cs_t * cs, int  period[3]); 
# 59
int cs_nlocal(cs_t * cs, int  n[3]); 
# 60
int cs_nlocal_offset(cs_t * cs, int  n[3]); 
# 61
int cs_nhalo(cs_t * cs, int * nhalo); 
# 62
int cs_index(cs_t * cs, int ic, int jc, int kc); 
# 63
int cs_ntotal(cs_t * cs, int  ntotal[3]); 
# 64
int cs_nsites(cs_t * cs, int * nsites); 
# 65
int cs_minimum_distance(cs_t * cs, const double  r1[3], const double  r2[3], double  r12[3]); 
# 67
int cs_index_to_ijk(cs_t * cs, int index, int  coords[3]); 
# 68
int cs_strides(cs_t * cs, int * xs, int * ys, int * zs); 
# 69
int cs_nall(cs_t * cs, int  nall[3]); 
# 73
int cs_cart_shift(MPI_Comm comm, int dim, int direction, int * rank); 
# 37 "../.././src/util.h"
int is_bigendian(); 
# 38
double reverse_byte_order_double(char *); 
# 39
int util_reverse_byte_order(void * arg, void * res, MPI_Datatype type); 
# 41
double dot_product(const double  a[3], const double  b[3]); 
# 42
void cross_product(const double  a[3], const double  b[3], double  result[3]); 
# 44
double modulus(const double  a[3]); 
# 45
void rotate_vector(double [3], const double [3]); 
# 47
int imin(const int i, const int j); 
# 48
int imax(const int i, const int j); 
# 49
double dmin(const double a, const double b); 
# 50
double dmax(const double a, const double b); 
# 52
int util_jacobi(double  a[3][3], double  vals[3], double  vecs[3][3]); 
# 53
int util_jacobi_sort(double  a[3][3], double  vals[3], double  vecs[3][3]); 
# 54
int util_discrete_volume_sphere(double  r0[3], double a0, double * vn); 
# 55
int util_gauss_jordan(const int n, double * a, double * b); 
# 56
int util_dpythag(double a, double b, double * p); 
# 57
int util_svd(int m, int n, double ** u, double * w, double ** v); 
# 58
int util_svd_solve(int m, int n, double ** a, double * b, double * x); 
# 59
int util_matrix_create(int m, int n, double *** p); 
# 60
int util_vector_create(int m, double ** p); 
# 61
int util_matrix_free(int m, double *** p); 
# 62
int util_vector_free(double ** p); 
# 63
int util_matrix_invert(int n, double ** a); 
# 65
int util_random_unit_vector(int * state, double  rhat[3]); 
# 66
int util_ranlcg_reap_uniform(int * state, double * r); 
# 67
int util_ranlcg_reap_gaussian(int * state, double  r[2]); 
# 69
int util_str_tolower(char * str, size_t maxlen); 
# 32 "../.././src/io_options.h"
enum io_mode_enum { IO_MODE_INVALID, IO_MODE_SINGLE, IO_MODE_MULTIPLE}; 
# 36
enum io_record_format_enum { IO_RECORD_INVALID, 
# 37
IO_RECORD_ASCII, 
# 38
IO_RECORD_BINARY}; 
# 42
enum io_metadata_version_enum { IO_METADATA_INVALID, 
# 43
IO_METADATA_SINGLE_V1, 
# 44
IO_METADATA_MULTI_V1}; 
# 48
typedef io_mode_enum io_mode_enum_t; 
# 49
typedef io_record_format_enum io_record_format_enum_t; 
# 50
typedef io_metadata_version_enum io_metadata_version_enum_t; 
# 52
struct io_options_s { 
# 53
io_mode_enum_t mode; 
# 54
io_record_format_enum_t iorformat; 
# 55
io_metadata_version_enum_t metadata_version; 
# 56
int report; 
# 57
int asynchronous; 
# 58
}; 
# 60
typedef io_options_s io_options_t; 
# 62
io_mode_enum_t io_mode_default(); 
# 63
io_record_format_enum_t io_record_format_default(); 
# 64
io_metadata_version_enum_t io_metadata_version_default(); 
# 65
io_options_t io_options_default(); 
# 67
int io_options_valid(const io_options_t * options); 
# 68
int io_options_mode_valid(io_mode_enum_t mode); 
# 69
int io_options_record_format_valid(io_record_format_enum_t iorformat); 
# 70
int io_options_metadata_version_valid(const io_options_t * options); 
# 22 "../.././src/runtime.h"
typedef struct rt_s rt_t; 
# 24
int rt_create(pe_t * pe, rt_t ** prt); 
# 25
int rt_free(rt_t * rt); 
# 26
int rt_read_input_file(rt_t * rt, const char * filename); 
# 27
int rt_info(rt_t * rt); 
# 28
int rt_int_parameter(rt_t * rt, const char * key, int * ivalue); 
# 29
int rt_int_parameter_vector(rt_t * rt, const char * key, int  ivalue[3]); 
# 30
int rt_double_parameter(rt_t * rt, const char * key, double * value); 
# 31
int rt_double_parameter_vector(rt_t * rt, const char * key, double  value[3]); 
# 32
int rt_string_parameter(rt_t * rt, const char * key, char * s, unsigned len); 
# 33
int rt_switch(rt_t * rt, const char * key); 
# 34
int rt_active_keys(rt_t * rt, int * nactive); 
# 35
int rt_add_key_value(rt_t * rt, const char * key, const char * value); 
# 25 "../.././src/io_options_rt.h"
int io_options_rt(pe_t * pe, rt_t * rt, const char * keystub, io_options_t * opts); 
# 27
int io_options_rt_mode(pe_t * pe, rt_t * rt, const char * key, io_mode_enum_t * mode); 
# 29
int io_options_rt_record_format(pe_t * pe, rt_t * rt, const char * key, io_record_format_enum_t * options); 
# 26 "../.././src/io_info_args.h"
enum io_info_rw_enum { IO_INFO_NONE, 
# 27
IO_INFO_READ_ONLY, 
# 28
IO_INFO_WRITE_ONLY, 
# 29
IO_INFO_READ_WRITE}; 
# 31
typedef io_info_rw_enum io_info_rw_enum_t; 
# 32
typedef struct io_info_args_s io_info_args_t; 
# 36
struct io_info_args_s { 
# 37
io_options_t input; 
# 38
io_options_t output; 
# 39
int grid[3]; 
# 40
int nfreq; 
# 41
}; 
# 43
io_info_args_t io_info_args_default(); 
# 44
int io_info_args_iogrid_valid(int  iogrid[3]); 
# 33 "../.././src/io_harness.h"
typedef 
# 28
enum io_format_enum { IO_FORMAT_NULL, 
# 29
IO_FORMAT_ASCII, 
# 30
IO_FORMAT_BINARY, 
# 31
IO_FORMAT_ASCII_SERIAL, 
# 32
IO_FORMAT_BINARY_SERIAL, 
# 33
IO_FORMAT_DEFAULT} io_format_enum_t; 
# 35
typedef struct io_implementation_s io_implementation_t; 
# 36
typedef struct io_info_s io_info_t; 
# 39
typedef int (*io_rw_cb_ft)(FILE * fp, int index, void * self); 
# 42
typedef struct io_info_arg_s io_info_arg_t; 
# 44
struct io_info_arg_s { 
# 45
int grid[3]; 
# 46
}; 
# 48
struct io_implementation_s { 
# 49
char name[8192]; 
# 50
io_rw_cb_ft write_ascii; 
# 51
io_rw_cb_ft write_binary; 
# 52
io_rw_cb_ft read_ascii; 
# 53
io_rw_cb_ft read_binary; 
# 54
size_t bytesize_ascii; 
# 55
size_t bytesize_binary; 
# 56
}; 
# 58
typedef struct io_decomposition_s io_decomposition_t; 
# 60
struct io_decomposition_s { 
# 61
int n_io; 
# 62
int index; 
# 63
MPI_Comm xcomm; 
# 64
MPI_Comm comm; 
# 65
int rank; 
# 66
int size; 
# 67
int ngroup[3]; 
# 68
int coords[3]; 
# 69
int nsite[3]; 
# 70
int offset[3]; 
# 71
}; 
# 73
struct io_info_s { 
# 74
pe_t *pe; 
# 75
cs_t *cs; 
# 77
io_info_args_t args; 
# 78
io_implementation_t impl; 
# 79
io_decomposition_t *comm; 
# 81
io_decomposition_t *io_comm; 
# 82
size_t bytesize; 
# 83
size_t bytesize_ascii; 
# 84
size_t bytesize_binary; 
# 85
int nsites; 
# 86
int maxlocal; 
# 87
int metadata_written; 
# 88
int processor_independent; 
# 89
int single_file_read; 
# 90
int report; 
# 91
char metadata_stub[4096]; 
# 92
char name[4096]; 
# 93
io_rw_cb_ft write_data; 
# 94
io_rw_cb_ft write_ascii; 
# 95
io_rw_cb_ft write_binary; 
# 96
io_rw_cb_ft read_data; 
# 97
io_rw_cb_ft read_ascii; 
# 98
io_rw_cb_ft read_binary; 
# 99
}; 
# 101
int io_info_create(pe_t * pe, cs_t * cs, io_info_arg_t * arg, io_info_t ** pinfo); 
# 103
int io_info_free(io_info_t *); 
# 105
int io_info_create_impl(pe_t * pe, cs_t * cs, io_info_args_t arg, io_implementation_t impl, io_info_t ** info); 
# 108
int io_info_input_bytesize(io_info_t * info, size_t * bs); 
# 109
int io_info_output_bytesize(io_info_t * info, size_t * bs); 
# 111
void io_info_set_name(io_info_t *, const char *); 
# 112
void io_info_set_write(io_info_t *, int (*)(FILE *, int, int, int)); 
# 113
void io_info_set_read(io_info_t *, int (*)(FILE *, int, int, int)); 
# 114
void io_info_set_processor_independent(io_info_t *); 
# 115
void io_info_set_processor_dependent(io_info_t *); 
# 116
void io_info_single_file_set(io_info_t * info); 
# 118
int io_info_set_bytesize(io_info_t * p, io_format_enum_t t, size_t); 
# 119
int io_write_metadata(io_info_t * info); 
# 120
int io_write_metadata_file(io_info_t * info, char * filestub); 
# 121
int io_info_metadata_filestub_set(io_info_t * info, const char * filestub); 
# 123
int io_remove(const char * filename_stub, io_info_t * obj); 
# 124
int io_remove_metadata(io_info_t * obj, const char * file_stub); 
# 125
int io_info_format_set(io_info_t * obj, int form_in, int form_out); 
# 126
int io_info_format_in_set(io_info_t * obj, int form_in); 
# 127
int io_info_format_out_set(io_info_t * obj, int form_out); 
# 129
int io_info_read_set(io_info_t * obj, int format, io_rw_cb_ft); 
# 130
int io_info_write_set(io_info_t * obj, int format, io_rw_cb_ft); 
# 131
int io_write_data(io_info_t * obj, const char * filename_stub, void * data); 
# 132
int io_read_data(io_info_t * obj, const char * filename_stub, void * data); 
# 65 "/usr/include/assert.h" 3
extern "C" {
# 68
extern void __assert_fail(const char * __assertion, const char * __file, unsigned __line, const char * __function) throw()
# 70
 __attribute((__noreturn__)); 
# 73
extern void __assert_perror_fail(int __errnum, const char * __file, unsigned __line, const char * __function) throw()
# 75
 __attribute((__noreturn__)); 
# 80
extern void __assert(const char * __assertion, const char * __file, int __line) throw()
# 81
 __attribute((__noreturn__)); 
# 84
}
# 60 "../.././src/memory.h"
int mem_addr_rank0(int nsites, int index); 
# 62
int mem_addr_rank1(int nsites, int na, int index, int ia); 
# 64
int mem_addr_rank2(int nsites, int na, int nb, int index, int ia, int ib); 
# 118 "../.././src/memory.h"
typedef 
# 115
enum data_model_enum_type { DATA_MODEL_AOS, 
# 116
DATA_MODEL_SOA, 
# 117
DATA_MODEL_AOSOA
# 118
} data_model_enum_t; 
# 141 "../.././src/memory.h"
int forward_addr_rank0_assert(int line, const char * file, int nsites, int index); 
# 144
int forward_addr_rank1_assert(int line, const char * file, int nsites, int na, int index, int ia); 
# 147
int forward_addr_rank2_assert(int line, const char * file, int nsites, int na, int nb, int index, int ia, int ib); 
# 151
int forward_addr_rank3_assert(int line, const char * file, int nsites, int na, int nb, int nc, int index, int ia, int ib, int ic); 
# 155
int forward_addr_rank4_assert(int line, const char * file, int nsites, int na, int nb, int nc, int nd, int index, int ia, int ib, int ic, int id); 
# 200 "../.././src/memory.h"
int reverse_addr_rank0_assert(int line, const char * file, int nsites, int index); 
# 203
int reverse_addr_rank1_assert(int line, const char * file, int nsites, int na, int index, int ia); 
# 206
int reverse_addr_rank2_assert(int line, const char * file, int nsites, int na, int nb, int index, int ia, int ib); 
# 210
int reverse_addr_rank3_assert(int line, const char * file, int nsites, int na, int nb, int nc, int index, int ia, int ib, int ic); 
# 214
int reverse_addr_rank4_assert(int line, const char * file, int nsites, int na, int nb, int nc, int nd, int index, int ia, int ib, int ic, int id); 
# 296 "../.././src/memory.h"
void *mem_aligned_malloc(size_t alignment, size_t size); 
# 297
void *mem_aligned_calloc(size_t alignment, size_t count, size_t size); 
# 298
void *mem_aligned_realloc(void * ptr, size_t alignment, size_t oldsize, size_t newsize); 
# 18 "../.././src/physics.h"
typedef struct physics_s physics_t; 
# 20
int physics_create(pe_t * pe, physics_t ** phys); 
# 21
int physics_free(physics_t * phys); 
# 23
int physics_rho0_set(physics_t * phys, double rho0); 
# 24
int physics_phi0_set(physics_t * phys, double phi0); 
# 25
int physics_eta_shear_set(physics_t * phys, double eta); 
# 26
int physics_eta_bulk_set(physics_t * phys, double zeta); 
# 27
int physics_kt_set(physics_t * phys, double kt); 
# 28
int physics_b0_set(physics_t * phys, double  b0[3]); 
# 29
int physics_e0_set(physics_t * phys, double  e0[3]); 
# 30
int physics_e0_frequency_set(physics_t * phys, double e0_frequency); 
# 31
int physics_fbody_set(physics_t * phys, double  f[3]); 
# 32
int physics_fgrav_set(physics_t * phys, double  g[3]); 
# 33
int physics_mobility_set(physics_t * phys, double mobility); 
# 34
int physics_control_next_step(physics_t * phys); 
# 35
int physics_control_init_time(physics_t * phys, int nstart, int nstep); 
# 36
int physics_fpulse_set(physics_t * phys, double  fpulse[3]); 
# 37
int physics_fpulse_frequency_set(physics_t * phys, double fpulse_freq); 
# 38
int physics_grad_mu_set(physics_t * phys, double  gm[3]); 
# 40
int physics_ref(physics_t ** ref); 
# 41
int physics_rho0(physics_t * phys, double * rho); 
# 42
int physics_phi0(physics_t * phys, double * phi0); 
# 43
int physics_eta_shear(physics_t * phys, double * eta); 
# 44
int physics_eta_bulk(physics_t * phys, double * zeta); 
# 45
int physics_kt(physics_t * phys, double * kt); 
# 46
int physics_b0(physics_t * phys, double  b0[3]); 
# 47
int physics_e0(physics_t * phys, double  e0[3]); 
# 48
int physics_e0_frequency(physics_t * phys, double * freq); 
# 49
int physics_e0_flag(physics_t * phys); 
# 50
int physics_fbody(physics_t * phys, double  f[3]); 
# 51
int physics_fgrav(physics_t * phys, double  g[3]); 
# 52
int physics_mobility(physics_t * phys, double * mobility); 
# 53
int physics_control_timestep(physics_t * phys); 
# 54
int physics_control_time(physics_t * phys, double * t); 
# 55
int physics_fpulse(physics_t * phys, double  fpulse[3]); 
# 56
int physics_fpulse_frequency(physics_t * phys, double * fpule_frequency); 
# 58
int physics_grad_mu(physics_t * phys, double  gm[3]); 
# 22 "../.././src/leesedwards.h"
typedef struct lees_edw_s lees_edw_t; 
# 23
typedef struct lees_edw_info_s lees_edw_info_t; 
# 25
struct lees_edw_info_s { 
# 26
int nplanes; 
# 27
int type; 
# 28
int period; 
# 29
int nt0; 
# 30
double uy; 
# 31
}; 
# 34
typedef 
# 33
enum lees_edw_enum { LE_SHEAR_TYPE_STEADY, 
# 34
LE_SHEAR_TYPE_OSCILLATORY} lees_edw_enum_t; 
# 37
int lees_edw_create(pe_t * pe, cs_t * coords, lees_edw_info_t * info, lees_edw_t ** le); 
# 39
int lees_edw_free(lees_edw_t * le); 
# 40
int lees_edw_retain(lees_edw_t * le); 
# 41
int lees_edw_commit(lees_edw_t * le); 
# 42
int lees_edw_target(lees_edw_t * le, lees_edw_t ** target); 
# 44
int lees_edw_info(lees_edw_t * le); 
# 45
int lees_edw_comm(lees_edw_t * le, MPI_Comm * comm); 
# 46
int lees_edw_plane_comm(lees_edw_t * le, MPI_Comm * comm); 
# 47
int lees_edw_jstart_to_mpi_ranks(lees_edw_t * le, int, int  send[2], int  recv[2]); 
# 48
int lees_edw_buffer_dy(lees_edw_t * le, int ib, double t0, double * dy); 
# 49
int lees_edw_buffer_du(lees_edw_t * le, int ib, double  ule[3]); 
# 54
int lees_edw_nhalo(lees_edw_t * le, int * nhalo); 
# 55
int lees_edw_nsites(lees_edw_t * le, int * nsites); 
# 56
int lees_edw_nlocal(lees_edw_t * le, int  nlocal[3]); 
# 57
int lees_edw_index(lees_edw_t * le, int ic, int jc, int kc); 
# 58
int lees_edw_strides(lees_edw_t * le, int * xs, int * ys, int * zs); 
# 59
int lees_edw_ltot(lees_edw_t * le, double  ltot[3]); 
# 60
int lees_edw_cartsz(lees_edw_t * le, int  cartsz[3]); 
# 61
int lees_edw_ntotal(lees_edw_t * le, int  ntotal[3]); 
# 62
int lees_edw_nlocal_offset(lees_edw_t * le, int  offset[3]); 
# 63
int lees_edw_cart_coords(lees_edw_t * le, int  cartcoords[3]); 
# 66
int lees_edw_nplane_total(lees_edw_t * le); 
# 67
int lees_edw_nplane_local(lees_edw_t * le); 
# 68
int lees_edw_plane_uy(lees_edw_t * le, double * uy); 
# 69
int lees_edw_plane_uy_now(lees_edw_t * le, double t, double * uy); 
# 70
int lees_edw_plane_dy(lees_edw_t * le, double * dy); 
# 71
int lees_edw_nxbuffer(lees_edw_t * le, int * nxb); 
# 72
int lees_edw_shear_rate(lees_edw_t * le, double * gammadot); 
# 73
int lees_edw_steady_uy(lees_edw_t * le, int ic, double * uy); 
# 74
int lees_edw_plane_location(lees_edw_t * le, int plane); 
# 75
int lees_edw_buffer_displacement(lees_edw_t * le, int ib, double t, double * dy); 
# 76
int lees_edw_block_uy(lees_edw_t * le, int, double * uy); 
# 78
int lees_edw_ibuff_to_real(lees_edw_t * le, int ib); 
# 79
int lees_edw_ic_to_buff(lees_edw_t * le, int ic, int di); 
# 81
void lees_edw_index_v(lees_edw_t * le, int  ic[1], int  jc[1], int  kc[1], int  index[1]); 
# 28 "../.././src/field.h"
typedef struct field_s field_t; 
# 30
typedef enum { FIELD_HALO_HOST, FIELD_HALO_TARGET} field_halo_enum_t; 
# 32
int field_create(pe_t * pe, cs_t * cs, int nf, const char * name, field_t ** pobj); 
# 34
int field_free(field_t * obj); 
# 36
int field_memcpy(field_t * obj, tdpMemcpyKind flag); 
# 37
int field_init(field_t * obj, int nhcomm, lees_edw_t * le); 
# 38
int field_init_io_info(field_t * obj, int  grid[3], int form_in, int form_out); 
# 40
int field_io_info(field_t * obj, io_info_t ** info); 
# 41
int field_halo(field_t * obj); 
# 42
int field_halo_swap(field_t * obj, field_halo_enum_t flag); 
# 43
int field_leesedwards(field_t * obj); 
# 45
int field_nf(field_t * obj, int * nop); 
# 46
int field_scalar(field_t * obj, int index, double * phi); 
# 47
int field_scalar_set(field_t * obj, int index, double phi); 
# 48
int field_vector(field_t * obj, int index, double  p[3]); 
# 49
int field_vector_set(field_t * obj, int index, const double  p[3]); 
# 51
int field_tensor(field_t * obj, int index, double  q[3][3]); 
# 52
int field_tensor_set(field_t * obj, int index, double  q[3][3]); 
# 54
int field_scalar_array(field_t * obj, int index, double * array); 
# 56
int field_scalar_array_set(field_t * obj, int index, const double * array); 
# 21 "../.././src/field_grad.h"
typedef struct field_grad_s field_grad_t; 
# 22
typedef int (*grad_ft)(field_grad_t * fgrad); 
# 24
int field_grad_create(pe_t * pe, field_t * f, int level, field_grad_t ** pobj); 
# 26
void field_grad_free(field_grad_t * obj); 
# 27
int field_grad_set(field_grad_t * obj, grad_ft d2, grad_ft d4); 
# 28
int field_grad_dab_set(field_grad_t * obj, grad_ft dab); 
# 29
int field_grad_compute(field_grad_t * obj); 
# 30
int field_grad_memcpy(field_grad_t * obj, int flag); 
# 32
int field_grad_scalar_grad(field_grad_t * obj, int index, double  grad[3]); 
# 33
int field_grad_scalar_delsq(field_grad_t * obj, int index, double * delsq); 
# 34
int field_grad_scalar_grad_delsq(field_grad_t * obj, int index, double  gd[3]); 
# 35
int field_grad_scalar_delsq_delsq(field_grad_t * obj, int index, double * dd); 
# 36
int field_grad_scalar_dab(field_grad_t * obj, int index, double  d_ab[3][3]); 
# 38
int field_grad_vector_grad(field_grad_t * obj, int index, double  dp[3][3]); 
# 39
int field_grad_vector_delsq(field_grad_t * obj, int index, double  dp[3]); 
# 41
int field_grad_tensor_grad(field_grad_t * obj, int index, double  dq[3][3][3]); 
# 42
int field_grad_tensor_delsq(field_grad_t * obj, int index, double  dsq[3][3]); 
# 22 "../.././src/gradient_3d_7pt_fluid.h"
int grad_3d_7pt_fluid_d2(field_grad_t * fg); 
# 23
int grad_3d_7pt_fluid_d4(field_grad_t * fg); 
# 24
int grad_3d_7pt_fluid_dab(field_grad_t * fg); 
# 20 "../.././src/gradient_3d_27pt_fluid.h"
int grad_3d_27pt_fluid_d2(field_grad_t * fg); 
# 21
int grad_3d_27pt_fluid_d4(field_grad_t * fg); 
# 22
int grad_3d_27pt_fluid_dab(field_grad_t * fg); 
# 24 "../.././src/free_energy.h"
enum fe_id_enum { FE_SYMMETRIC, 
# 25
FE_BRAZOVSKII, 
# 26
FE_POLAR, 
# 27
FE_LC, 
# 28
FE_ELECTRO, 
# 29
FE_ELECTRO_SYMMETRIC, 
# 30
FE_LC_DROPLET}; 
# 32
typedef struct fe_s fe_t; 
# 33
typedef struct fe_vt_s fe_vt_t; 
# 35
typedef int (*fe_free_ft)(fe_t * fe); 
# 36
typedef int (*fe_id_ft)(fe_t * fe); 
# 37
typedef int (*fe_target_ft)(fe_t * fe, fe_t ** target); 
# 38
typedef int (*fe_fed_ft)(fe_t * fe, int index, double * fed); 
# 39
typedef int (*fe_mu_ft)(fe_t * fe, int index, double * mu); 
# 40
typedef int (*fe_str_ft)(fe_t * fe, int index, double  s[3][3]); 
# 41
typedef int (*fe_mu_solv_ft)(fe_t * fe, int index, int k, double * mu); 
# 42
typedef int (*fe_hvector_ft)(fe_t * fe, int index, double  h[3]); 
# 43
typedef int (*fe_htensor_ft)(fe_t * fe, int index, double  h[3][3]); 
# 45
typedef void (*fe_htensor_v_ft)(fe_t * fe, int index, double  h[3][3][1]); 
# 46
typedef void (*fe_stress_v_ft)(fe_t * fe, int index, double  s[3][3][1]); 
# 48
struct fe_vt_s { 
# 50
fe_free_ft free; 
# 51
fe_target_ft target; 
# 52
fe_fed_ft fed; 
# 53
fe_mu_ft mu; 
# 54
fe_mu_solv_ft mu_solv; 
# 55
fe_str_ft stress; 
# 56
fe_str_ft str_symm; 
# 57
fe_str_ft str_anti; 
# 58
fe_hvector_ft hvector; 
# 59
fe_htensor_ft htensor; 
# 60
fe_htensor_v_ft htensor_v; 
# 61
fe_stress_v_ft stress_v; 
# 62
fe_stress_v_ft str_symm_v; 
# 63
fe_stress_v_ft str_anti_v; 
# 64
}; 
# 66
struct fe_s { 
# 67
fe_vt_t *func; 
# 68
int id; 
# 69
int use_stress_relaxation; 
# 70
}; 
# 29 "../.././src/blue_phase.h"
typedef struct fe_lc_s fe_lc_t; 
# 30
typedef struct fe_lc_param_s fe_lc_param_t; 
# 34
struct fe_lc_s { 
# 35
fe_t super; 
# 36
pe_t *pe; 
# 37
cs_t *cs; 
# 38
fe_lc_param_t *param; 
# 39
field_t *q; 
# 40
field_grad_t *dq; 
# 41
field_t *p; 
# 42
field_grad_t *dp; 
# 43
fe_lc_t *target; 
# 44
}; 
# 48
struct fe_lc_param_s { 
# 49
double a0; 
# 50
double q0; 
# 51
double gamma; 
# 52
double kappa0; 
# 53
double kappa1; 
# 55
double xi; 
# 56
double zeta0; 
# 57
double zeta1; 
# 58
double zeta2; 
# 59
double redshift; 
# 60
double rredshift; 
# 61
double epsilon; 
# 62
double amplitude0; 
# 63
double e0coswt[3]; 
# 65
double w1_coll; 
# 66
double w2_coll; 
# 67
double w1_wall; 
# 68
double w2_wall; 
# 69
double nfix[3]; 
# 71
int anchoring_coll; 
# 72
int anchoring_wall; 
# 73
int is_redshift_updated; 
# 74
int is_active; 
# 75
}; 
# 78
enum lc_anchoring_enum { LC_ANCHORING_PLANAR, 
# 79
LC_ANCHORING_NORMAL, 
# 80
LC_ANCHORING_FIXED, 
# 81
LC_ANCHORING_TYPES
# 82
}; 
# 85
int fe_lc_create(pe_t * pe, cs_t * cs, lees_edw_t * le, field_t * q, field_grad_t * dq, fe_lc_t ** fe); 
# 87
int fe_lc_free(fe_lc_t * fe); 
# 88
int fe_lc_param_set(fe_lc_t * fe, fe_lc_param_t values); 
# 89
int fe_lc_param_commit(fe_lc_t * fe); 
# 90
int fe_lc_redshift_set(fe_lc_t * fe, double redshift); 
# 91
int fe_lc_redshift_compute(cs_t * cs, fe_lc_t * fe); 
# 92
int fe_lc_target(fe_lc_t * fe, fe_t ** target); 
# 93
int fe_lc_active_stress(fe_lc_t * fe); 
# 98
int fe_lc_param(fe_lc_t * fe, fe_lc_param_t * vals); 
# 101
int fe_lc_fed(fe_lc_t * fe, int index, double * fed); 
# 104
int fe_lc_mol_field(fe_lc_t * fe, int index, double  h[3][3]); 
# 107
int fe_lc_stress(fe_lc_t * fe, int index, double  s[3][3]); 
# 110
int fe_lc_str_symm(fe_lc_t * fe, int index, double  s[3][3]); 
# 113
int fe_lc_str_anti(fe_lc_t * fe, int index, double  s[3][3]); 
# 116
int fe_lc_compute_fed(fe_lc_t * fe, double gamma, double  q[3][3], double  dq[3][3][3], double * fed); 
# 120
int fe_lc_compute_h(fe_lc_t * fe, double gaama, double  q[3][3], double  dq[3][3][3], double  dsq[3][3], double  h[3][3]); 
# 124
int fe_lc_compute_stress(fe_lc_t * fe, double  q[3][3], double  dq[3][3][3], double  h[3][3], double  sth[3][3]); 
# 127
int fe_lc_compute_stress_active(fe_lc_t * fe, double  q[3][3], double  dp[3][3], double  sa[3][3]); 
# 131
int fe_lc_chirality(fe_lc_t * fe, double * chirality); 
# 134
int fe_lc_reduced_temperature(fe_lc_t * fe, double * tau); 
# 137
int fe_lc_dimensionless_field_strength(fe_lc_t * fe, double * edm); 
# 140
void fe_lc_mol_field_v(fe_lc_t * fe, int index, double  h[3][3][1]); 
# 143
void fe_lc_stress_v(fe_lc_t * fe, int index, double  s[3][3][1]); 
# 146
void fe_lc_str_symm_v(fe_lc_t * fe, int index, double  s[3][3][1]); 
# 149
void fe_lc_str_anti_v(fe_lc_t * fe, int index, double  s[3][3][1]); 
# 152
void fe_lc_compute_h_v(fe_lc_t * fe, double  q[3][3][1], double  dq[3][3][3][1], double  dsq[3][3][1], double  h[3][3][1]); 
# 158
void fe_lc_compute_stress_v(fe_lc_t * fe, double  q[3][3][1], double  dq[3][3][3][1], double  h[3][3][1], double  s[3][3][1]); 
# 168
int fe_lc_amplitude_compute(fe_lc_param_t * param, double * a); 
# 171
int fe_lc_q_uniaxial(fe_lc_param_t * param, const double  n[3], double  q[3][3]); 
# 172
int fe_lc_scalar_ops(double  q[3][3], double  qs[5]); 
# 23 "../.././src/blue_phase_init.h"
int blue_phase_twist_init(cs_t * cs, fe_lc_param_t * param, field_t * fq, int helical_axis); 
# 24
int blue_phase_O8M_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 25
int blue_phase_O2_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 26
int blue_phase_O5_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 27
int blue_phase_H2D_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 28
int blue_phase_H3DA_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 29
int blue_phase_H3DB_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 30
int blue_phase_DTC_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 31
int blue_phase_BPIII_init(cs_t * cs, fe_lc_param_t * param, field_t * fq, const double  specs[3]); 
# 33
int blue_phase_nematic_init(cs_t * cs, fe_lc_param_t * param, field_t * fq, const double  n[3]); 
# 35
int blue_phase_active_nematic_init(cs_t * cs, fe_lc_param_t * param, field_t * fq, const double  n[3]); 
# 37
int lc_active_nematic_init_q2d(cs_t * cs, fe_lc_param_t * param, field_t * q, int istrip); 
# 39
int blue_phase_chi_edge(cs_t * cs, fe_lc_param_t * param, field_t * fq, int n, double z0, double x0); 
# 41
int blue_phase_random_q_init(cs_t * cs, fe_lc_param_t * param, field_t * fq); 
# 42
int blue_phase_random_q_rectangle(cs_t * cs, fe_lc_param_t * param, field_t * q, int  rmin[3], int  rmax[3]); 
# 44
int blue_phase_cf1_init(cs_t * cs, fe_lc_param_t * param, field_t * fq, int axis); 
# 45
int blue_phase_random_cf1_init(cs_t * cs, fe_lc_param_t * param, field_t * fq, int axis); 
# 21 "../.././src/kernel.h"
typedef struct kernel_ctxt_s kernel_ctxt_t; 
# 22
typedef struct kernel_info_s kernel_info_t; 
# 23
typedef struct kernel_param_s kernel_param_t; 
# 28
struct kernel_ctxt_s { 
# 29
kernel_param_t *param; 
# 30
kernel_ctxt_t *target; 
# 31
}; 
# 37
struct kernel_info_s { 
# 38
int imin; 
# 39
int imax; 
# 40
int jmin; 
# 41
int jmax; 
# 42
int kmin; 
# 43
int kmax; 
# 44
}; 
# 47
int kernel_ctxt_create(cs_t * cs, int nsimdvl, kernel_info_t info, kernel_ctxt_t ** p); 
# 49
int kernel_ctxt_launch_param(kernel_ctxt_t * obj, dim3 * nblk, dim3 * ntpb); 
# 50
int kernel_ctxt_info(kernel_ctxt_t * obj, kernel_info_t * lim); 
# 51
int kernel_ctxt_free(kernel_ctxt_t * obj); 
# 53
int kernel_iterations(kernel_ctxt_t * ctxt); 
# 54
int kernel_vector_iterations(kernel_ctxt_t * ctxt); 
# 55
int kernel_baseindex(kernel_ctxt_t * obj, int kindex); 
# 56
int kernel_coords_ic(kernel_ctxt_t * ctxt, int kindex); 
# 57
int kernel_coords_jc(kernel_ctxt_t * ctxt, int kindex); 
# 58
int kernel_coords_kc(kernel_ctxt_t * ctxt, int kindex); 
# 59
int kernel_coords_v(kernel_ctxt_t * ctxt, int kindex, int  ic[1], int  jc[1], int  kc[1]); 
# 64
int kernel_mask(kernel_ctxt_t * ctxt, int ic, int jc, int kc); 
# 66
int kernel_mask_v(kernel_ctxt_t * ctxt, int  ic[1], int  jc[1], int  kc[1], int  mask[1]); 
# 70
int kernel_coords_index(kernel_ctxt_t * ctxt, int ic, int jc, int kc); 
# 72
int kernel_coords_index_v(kernel_ctxt_t * ctxt, int  ic[1], int  jc[1], int  kc[1], int  index[1]); 
# 79
int kernel_launch_param(int iterations, dim3 * nblk, dim3 * ntpb); 
# 18 "tests.h"
void test_assert_info(const int lvalue, int line, const char * file); 
# 28 "tests.h"
int test_angle_cosine_suite(); 
# 29
int test_assumptions_suite(); 
# 30
int test_be_suite(); 
# 31
int test_bp_suite(); 
# 32
int test_bond_fene_suite(); 
# 33
int test_bonds_suite(); 
# 34
int test_build_suite(); 
# 35
int test_colloid_sums_suite(); 
# 36
int test_colloid_suite(); 
# 37
int test_colloids_info_suite(); 
# 38
int test_colloids_halo_suite(); 
# 39
int test_coords_suite(); 
# 40
int test_ewald_suite(); 
# 41
int test_fe_electro_suite(); 
# 42
int test_fe_electro_symm_suite(); 
# 43
int test_field_suite(); 
# 44
int test_field_grad_suite(); 
# 45
int test_halo_suite(); 
# 46
int test_hydro_suite(); 
# 47
int test_io_suite(); 
# 48
int test_io_options_suite(); 
# 49
int test_io_options_rt_suite(); 
# 50
int test_le_suite(); 
# 51
int test_kernel_suite(); 
# 52
int test_lubrication_suite(); 
# 53
int test_map_suite(); 
# 54
int test_model_suite(); 
# 55
int test_nernst_planck_suite(); 
# 56
int test_noise_suite(); 
# 57
int test_pair_lj_cut_suite(); 
# 58
int test_pair_ss_cut_suite(); 
# 59
int test_pair_yukawa_suite(); 
# 60
int test_pe_suite(); 
# 61
int test_phi_ch_suite(); 
# 62
int test_polar_active_suite(); 
# 63
int test_lb_prop_suite(); 
# 64
int test_psi_suite(); 
# 65
int test_psi_sor_suite(); 
# 66
int test_random_suite(); 
# 67
int test_rt_suite(); 
# 68
int test_timer_suite(); 
# 69
int test_util_suite(); 
# 70
int test_visc_arrhenius_suite(); 
# 37 "test_blue_phase.c"
static void multiply_gradient(double [3][3][3], double); 
# 38
static void multiply_delsq(double [3][3], double); 
# 39
static int test_o8m_struct(pe_t * pe, cs_t * cs, lees_edw_t * le, fe_lc_t * fe, field_t * fq, field_grad_t * fqgrad); 
# 42
static int test_bp_nonfield(); 
# 45
int do_test_fe_lc_device1(pe_t * pe, cs_t * cs, fe_lc_t * fe); 
# 46
void do_test_fe_lc_kernel1(fe_lc_t * fe, fe_lc_param_t ref); 
# 55 "test_blue_phase.c"
int test_bp_suite() { 
# 57
int nhalo = 2; 
# 58
pe_t *pe = (__null); 
# 59
cs_t *cs = (__null); 
# 60
lees_edw_t *le = (__null); 
# 61
field_t *fq = (__null); 
# 62
field_grad_t *fqgrad = (__null); 
# 63
fe_lc_t *fe = (__null); 
# 65
pe_create(MPI_COMM_WORLD, PE_QUIET, &pe); 
# 66
cs_create(pe, &cs); 
# 67
cs_nhalo_set(cs, nhalo); 
# 68
cs_init(cs); 
# 69
lees_edw_create(pe, cs, __null, &le); 
# 71
test_bp_nonfield(); 
# 73
field_create(pe, cs, 5, "q", &fq); 
# 74
field_init(fq, nhalo, le); 
# 75
field_grad_create(pe, fq, 2, &fqgrad); 
# 76
field_grad_set(fqgrad, grad_3d_27pt_fluid_d2, __null); 
# 78
fe_lc_create(pe, cs, le, fq, fqgrad, &fe); 
# 80
test_o8m_struct(pe, cs, le, fe, fq, fqgrad); 
# 81
do_test_fe_lc_device1(pe, cs, fe); 
# 83
fe_lc_free(fe); 
# 84
field_grad_free(fqgrad); 
# 85
field_free(fq); 
# 86
lees_edw_free(le); 
# 87
cs_free(cs); 
# 89
pe_info(pe, "PASS     ./unit/test_blue_phase\n"); 
# 90
pe_free(pe); 
# 92
return 0; 
# 93
} 
# 103 "test_blue_phase.c"
static int test_bp_nonfield() { 
# 105
int ifail = 0; 
# 106
double q[3][3]; 
# 107
double q5[5] = {(1.0), (1.0), (1.0), (1.0), (1.0)}; 
# 111
((q[X])[X]) = (1.0); 
# 112
((q[X])[Y]) = (2.0); 
# 113
((q[X])[Z]) = (0.0); 
# 114
((q[Y])[X]) = (2.0); 
# 115
((q[Y])[Y]) = (-(1.0)); 
# 116
((q[Y])[Z]) = (1.5); 
# 117
((q[Z])[X]) = (0.0); 
# 118
((q[Z])[Y]) = (1.5); 
# 119
((q[Z])[Z]) = (0.0); 
# 121
ifail = fe_lc_scalar_ops(q, q5); 
# 130 "test_blue_phase.c"
test_assert_info(ifail == 0, 130, "test_blue_phase.c"); 
# 131
test_assert_info(fabs((q5[0]) - (2.521438499999999916)) < ((1.192092896e-07F)), 131, "test_blue_phase.c"); 
# 132
test_assert_info(fabs((q5[1]) - (0.7487967199999999712)) < ((1.192092896e-07F)), 132, "test_blue_phase.c"); 
# 133
test_assert_info(fabs((q5[2]) - (0.5696240900000000273)) < ((1.192092896e-07F)), 133, "test_blue_phase.c"); 
# 134
test_assert_info(fabs((q5[3]) - (0.3388685200000000064)) < ((1.192092896e-07F)), 134, "test_blue_phase.c"); 
# 135
test_assert_info(fabs((q5[4]) - (0.9541113300000000352)) < ((1.192092896e-07F)), 135, "test_blue_phase.c"); 
# 137
return 0; 
# 138
} 
# 175 "test_blue_phase.c"
int test_o8m_struct(pe_t *pe, cs_t *cs, lees_edw_t *le, fe_lc_t *fe, field_t *
# 176
fq, field_grad_t *
# 177
fqgrad) { 
# 179
int nf; 
# 180
int ic, jc, kc, index; 
# 181
int numhalftwists = 1; 
# 182
int numunitcells = 16; 
# 183
int nlocal[3]; 
# 185
double a0 = (0.01438471099999999968); 
# 186
double gamma = (3.176470600000000033); 
# 187
double q0; 
# 188
double kappa = (0.01000000000000000021); 
# 189
double epsilon = (41.39999999999999858); 
# 191
double xi = (0.6999999999999999556); 
# 192
double amplitude = (-(0.2000000000000000111)); 
# 194
double q[3][3]; 
# 195
double dq[3][3][3]; 
# 196
double dsq[3][3]; 
# 197
double h[3][3]; 
# 198
double field[3]; 
# 199
double value, vtest; 
# 200
double e; 
# 201
double ltot[3]; 
# 202
fe_lc_param_t param = {(0)}; 
# 203
physics_t *phys = (__null); 
# 204
const double pi_ = (3.141592653589793116); 
# 206
(pe) ? static_cast< void>(0) : __assert_fail("pe", "test_blue_phase.c", 206, __PRETTY_FUNCTION__); 
# 207
(le) ? static_cast< void>(0) : __assert_fail("le", "test_blue_phase.c", 207, __PRETTY_FUNCTION__); 
# 209
physics_create(pe, &phys); 
# 211
lees_edw_ltot(le, ltot); 
# 212
lees_edw_nlocal(le, nlocal); 
# 217
(fq) ? static_cast< void>(0) : __assert_fail("fq", "test_blue_phase.c", 217, __PRETTY_FUNCTION__); 
# 218
(fqgrad) ? static_cast< void>(0) : __assert_fail("fqgrad", "test_blue_phase.c", 218, __PRETTY_FUNCTION__); 
# 219
field_nf(fq, &nf); 
# 220
test_assert_info(nf == 5, 220, "test_blue_phase.c"); 
# 224
q0 = (((((sqrt((2.0)) * (4.0)) * atan((1.0))) * numhalftwists) * numunitcells) / (ltot[Y])); 
# 226
(param.a0) = a0; 
# 227
(param.gamma) = gamma; 
# 228
(param.kappa0) = kappa; 
# 229
(param.kappa1) = kappa; 
# 230
(param.q0) = q0; 
# 231
(param.xi) = xi; 
# 232
(param.amplitude0) = amplitude; 
# 233
(param.redshift) = (1.0); 
# 234
(param.rredshift) = (1.0); 
# 235
(param.epsilon) = epsilon; 
# 236
fe_lc_param_set(fe, param); 
# 237
fe_lc_param_commit(fe); 
# 241
value = (sqrt(((108.0) * kappa) / (a0 * gamma)) * q0); 
# 244
fe_lc_chirality(fe, &vtest); 
# 245
test_assert_info(fabs(value - vtest) < (9.999999999999999988e-15), 245, "test_blue_phase.c"); 
# 248
value = (((27.0) * ((1.0) - (gamma / (3.0)))) / gamma); 
# 251
fe_lc_reduced_temperature(fe, &vtest); 
# 252
test_assert_info(fabs(value - vtest) < (9.999999999999999988e-15), 252, "test_blue_phase.c"); 
# 259
blue_phase_O8M_init(cs, &param, fq); 
# 261
ic = 1; 
# 262
jc = 1; 
# 263
kc = 1; 
# 264
index = lees_edw_index(le, ic, jc, kc); 
# 265
field_tensor(fq, index, q); 
# 267
test_assert_info(fabs(((q[X])[X]) - (0.0)) < (9.999999999999999988e-15), 267, "test_blue_phase.c"); 
# 268
test_assert_info(fabs(((q[X])[Y]) - (-(0.2828427124746200061))) < (9.999999999999999988e-15), 268, "test_blue_phase.c"); 
# 269
test_assert_info(fabs(((q[X])[Z]) - (-(0.2828427124746200061))) < (9.999999999999999988e-15), 269, "test_blue_phase.c"); 
# 270
test_assert_info(fabs(((q[Y])[Y]) - (-(0.0))) < (9.999999999999999988e-15), 270, "test_blue_phase.c"); 
# 271
test_assert_info(fabs(((q[Y])[Z]) - (-(0.2828427124746200061))) < (9.999999999999999988e-15), 271, "test_blue_phase.c"); 
# 274
ic = 1; 
# 275
jc = 1; 
# 276
kc = 2; 
# 277
index = lees_edw_index(le, ic, jc, kc); 
# 278
field_tensor(fq, index, q); 
# 281
test_assert_info(fabs(((q[X])[X]) - (+(0.2000000000000000111))) < (9.999999999999999988e-15), 281, "test_blue_phase.c"); 
# 282
test_assert_info(fabs(((q[X])[Y]) - (0.0)) < (9.999999999999999988e-15), 282, "test_blue_phase.c"); 
# 283
test_assert_info(fabs(((q[X])[Z]) - (0.0)) < (9.999999999999999988e-15), 283, "test_blue_phase.c"); 
# 284
test_assert_info(fabs(((q[Y])[Y]) - (-(0.4000000000000000222))) < (9.999999999999999988e-15), 284, "test_blue_phase.c"); 
# 285
test_assert_info(fabs(((q[Y])[Z]) - (-(0.4828427124746200172))) < (9.999999999999999988e-15), 285, "test_blue_phase.c"); 
# 288
ic = 1; 
# 289
jc = 1; 
# 290
kc = 3; 
# 291
index = lees_edw_index(le, ic, jc, kc); 
# 292
field_tensor(fq, index, q); 
# 295
test_assert_info(fabs(((q[X])[X]) - (0.0)) < (9.999999999999999988e-15), 295, "test_blue_phase.c"); 
# 296
test_assert_info(fabs(((q[X])[Y]) - (+(0.2828427124746200061))) < (9.999999999999999988e-15), 296, "test_blue_phase.c"); 
# 297
test_assert_info(fabs(((q[X])[Z]) - (+(0.2828427124746200061))) < (9.999999999999999988e-15), 297, "test_blue_phase.c"); 
# 298
test_assert_info(fabs(((q[Y])[Y]) - (0.0)) < (9.999999999999999988e-15), 298, "test_blue_phase.c"); 
# 299
test_assert_info(fabs(((q[Y])[Z]) - (-(0.2828427124746200061))) < (9.999999999999999988e-15), 299, "test_blue_phase.c"); 
# 302
ic = 1; 
# 303
jc = 12; 
# 304
kc = 4; 
# 305
index = lees_edw_index(le, ic, jc, kc); 
# 306
field_tensor(fq, index, q); 
# 309
test_assert_info(fabs(((q[X])[X]) - (-(0.2000000000000000111))) < (9.999999999999999988e-15), 309, "test_blue_phase.c"); 
# 310
test_assert_info(fabs(((q[X])[Y]) - (-(0.08284271247461999499))) < (9.999999999999999988e-15), 310, "test_blue_phase.c"); 
# 311
test_assert_info(fabs(((q[X])[Z]) - (0.0)) < (9.999999999999999988e-15), 311, "test_blue_phase.c"); 
# 312
test_assert_info(fabs(((q[Y])[Y]) - (+(0.4000000000000000222))) < (9.999999999999999988e-15), 312, "test_blue_phase.c"); 
# 313
test_assert_info(fabs(((q[Y])[Z]) - (0.0)) < (9.999999999999999988e-15), 313, "test_blue_phase.c"); 
# 316
ic = 2; 
# 317
jc = 7; 
# 318
kc = 6; 
# 319
index = lees_edw_index(le, ic, jc, kc); 
# 320
field_tensor(fq, index, q); 
# 323
test_assert_info(fabs(((q[X])[X]) - (-(0.2000000000000000111))) < (9.999999999999999988e-15), 323, "test_blue_phase.c"); 
# 324
test_assert_info(fabs(((q[X])[Y]) - (0.0)) < (9.999999999999999988e-15), 324, "test_blue_phase.c"); 
# 325
test_assert_info(fabs(((q[X])[Z]) - (0.0)) < (9.999999999999999988e-15), 325, "test_blue_phase.c"); 
# 326
test_assert_info(fabs(((q[Y])[Y]) - (-(0.2000000000000000111))) < (9.999999999999999988e-15), 326, "test_blue_phase.c"); 
# 327
test_assert_info(fabs(((q[Y])[Z]) - (-(0.08284271247461999499))) < (9.999999999999999988e-15), 327, "test_blue_phase.c"); 
# 335
for (ic = 1; ic <= (nlocal[X]); ic++) { 
# 336
for (jc = 1; jc <= (nlocal[Y]); jc++) { 
# 337
for (kc = 1; kc <= (nlocal[Z]); kc++) { 
# 339
index = lees_edw_index(le, ic, jc, kc); 
# 340
field_tensor(fq, index, q); 
# 342
value = ((((q[X])[X]) + ((q[Y])[Y])) + ((q[Z])[Z])); 
# 343
test_assert_info(fabs(value - (0.0)) < (9.999999999999999988e-15), 343, "test_blue_phase.c"); 
# 344
test_assert_info(fabs(((q[X])[Y]) - ((q[Y])[X])) < (9.999999999999999988e-15), 344, "test_blue_phase.c"); 
# 345
test_assert_info(fabs(((q[X])[Z]) - ((q[Z])[X])) < (9.999999999999999988e-15), 345, "test_blue_phase.c"); 
# 346
test_assert_info(fabs(((q[Y])[Z]) - ((q[Z])[Y])) < (9.999999999999999988e-15), 346, "test_blue_phase.c"); 
# 347
}  
# 348
}  
# 349
}  
# 359 "test_blue_phase.c"
field_halo_swap(fq, FIELD_HALO_HOST); 
# 361
field_memcpy(fq, hipMemcpyHostToDevice); 
# 362
field_grad_compute(fqgrad); 
# 363
field_grad_memcpy(fqgrad, hipMemcpyDeviceToHost); 
# 365
ic = 1; 
# 366
jc = 1; 
# 367
kc = 1; 
# 368
index = lees_edw_index(le, ic, jc, kc); 
# 369
field_tensor(fq, index, q); 
# 370
field_grad_tensor_grad(fqgrad, index, dq); 
# 371
multiply_gradient(dq, (3.0)); 
# 373
fe_lc_compute_fed(fe, gamma, q, dq, &value); 
# 375
test_assert_info(fabs(value - (0.006060508000000000041)) < (9.999999999999999547e-08), 375, "test_blue_phase.c"); 
# 378
ic = 1; 
# 379
jc = 1; 
# 380
kc = 2; 
# 381
index = lees_edw_index(le, ic, jc, kc); 
# 382
field_tensor(fq, index, q); 
# 383
field_grad_tensor_grad(fqgrad, index, dq); 
# 384
multiply_gradient(dq, (3.0)); 
# 386
fe_lc_compute_fed(fe, gamma, q, dq, &value); 
# 388
test_assert_info(fabs(value - (0.01056203000000000003)) < (9.999999999999999547e-08), 388, "test_blue_phase.c"); 
# 391
ic = 1; 
# 392
jc = 1; 
# 393
kc = 3; 
# 394
index = lees_edw_index(le, ic, jc, kc); 
# 395
field_tensor(fq, index, q); 
# 396
field_grad_tensor_grad(fqgrad, index, dq); 
# 397
multiply_gradient(dq, (3.0)); 
# 399
fe_lc_compute_fed(fe, gamma, q, dq, &value); 
# 402
test_assert_info(fabs(value - (0.006060508000000000041)) < (9.999999999999999547e-08), 402, "test_blue_phase.c"); 
# 405
ic = 1; 
# 406
jc = 12; 
# 407
kc = 4; 
# 408
index = lees_edw_index(le, ic, jc, kc); 
# 409
field_tensor(fq, index, q); 
# 410
field_grad_tensor_grad(fqgrad, index, dq); 
# 411
multiply_gradient(dq, (3.0)); 
# 413
fe_lc_compute_fed(fe, gamma, q, dq, &value); 
# 416
test_assert_info(fabs(value - (0.000660901200000000048)) < (9.999999999999999547e-08), 416, "test_blue_phase.c"); 
# 419
ic = 2; 
# 420
jc = 7; 
# 421
kc = 6; 
# 422
index = lees_edw_index(le, ic, jc, kc); 
# 423
field_tensor(fq, index, q); 
# 424
field_grad_tensor_grad(fqgrad, index, dq); 
# 425
multiply_gradient(dq, (3.0)); 
# 427
fe_lc_compute_fed(fe, gamma, q, dq, &value); 
# 430
test_assert_info(fabs(value - (0.000660901200000000048)) < (9.999999999999999547e-08), 430, "test_blue_phase.c"); 
# 439 "test_blue_phase.c"
ic = 1; 
# 440
jc = 1; 
# 441
kc = 1; 
# 442
index = lees_edw_index(le, ic, jc, kc); 
# 443
field_tensor(fq, index, q); 
# 444
field_grad_tensor_grad(fqgrad, index, dq); 
# 445
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 447
multiply_gradient(dq, (3.0)); 
# 448
multiply_delsq(dsq, (1.5)); 
# 450
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 453
test_assert_info(fabs(((h[X])[X]) - (0.0)) < (9.999999999999999547e-08), 453, "test_blue_phase.c"); 
# 454
test_assert_info(fabs(((h[X])[Y]) - (0.0171193999999999999)) < (9.999999999999999547e-08), 454, "test_blue_phase.c"); 
# 455
test_assert_info(fabs(((h[X])[Z]) - (0.0171193999999999999)) < (9.999999999999999547e-08), 455, "test_blue_phase.c"); 
# 456
test_assert_info(fabs(((h[Y])[Y]) - (0.0)) < (9.999999999999999547e-08), 456, "test_blue_phase.c"); 
# 457
test_assert_info(fabs(((h[Y])[Z]) - (0.0171193999999999999)) < (9.999999999999999547e-08), 457, "test_blue_phase.c"); 
# 461
ic = 1; 
# 462
jc = 1; 
# 463
kc = 2; 
# 464
index = lees_edw_index(le, ic, jc, kc); 
# 465
field_tensor(fq, index, q); 
# 466
field_grad_tensor_grad(fqgrad, index, dq); 
# 467
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 469
multiply_gradient(dq, (3.0)); 
# 470
multiply_delsq(dsq, (1.5)); 
# 472
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 475
test_assert_info(fabs(((h[X])[X]) - (-(0.02051779999999999923))) < (9.999999999999999547e-08), 475, "test_blue_phase.c"); 
# 476
test_assert_info(fabs(((h[X])[Y]) - (0.0)) < (9.999999999999999547e-08), 476, "test_blue_phase.c"); 
# 477
test_assert_info(fabs(((h[X])[Z]) - (+(0.0))) < (9.999999999999999547e-08), 477, "test_blue_phase.c"); 
# 478
test_assert_info(fabs(((h[Y])[Y]) - (+(0.03038290000000000088))) < (9.999999999999999547e-08), 478, "test_blue_phase.c"); 
# 479
test_assert_info(fabs(((h[Y])[Z]) - (+(0.03238909999999999706))) < (9.999999999999999547e-08), 479, "test_blue_phase.c"); 
# 482
ic = 1; 
# 483
jc = 1; 
# 484
kc = 3; 
# 485
index = lees_edw_index(le, ic, jc, kc); 
# 486
field_tensor(fq, index, q); 
# 487
field_grad_tensor_grad(fqgrad, index, dq); 
# 488
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 490
multiply_gradient(dq, (3.0)); 
# 491
multiply_delsq(dsq, (1.5)); 
# 493
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 496
test_assert_info(fabs(((h[X])[X]) - (0.0)) < (9.999999999999999547e-08), 496, "test_blue_phase.c"); 
# 497
test_assert_info(fabs(((h[X])[Y]) - (-(0.0171193999999999999))) < (9.999999999999999547e-08), 497, "test_blue_phase.c"); 
# 498
test_assert_info(fabs(((h[X])[Z]) - (-(0.0171193999999999999))) < (9.999999999999999547e-08), 498, "test_blue_phase.c"); 
# 499
test_assert_info(fabs(((h[Y])[Y]) - (0.0)) < (9.999999999999999547e-08), 499, "test_blue_phase.c"); 
# 500
test_assert_info(fabs(((h[Y])[Z]) - (+(0.0171193999999999999))) < (9.999999999999999547e-08), 500, "test_blue_phase.c"); 
# 503
ic = 1; 
# 504
jc = 12; 
# 505
kc = 4; 
# 506
index = lees_edw_index(le, ic, jc, kc); 
# 507
field_tensor(fq, index, q); 
# 508
field_grad_tensor_grad(fqgrad, index, dq); 
# 509
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 511
multiply_gradient(dq, (3.0)); 
# 512
multiply_delsq(dsq, (1.5)); 
# 514
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 517
test_assert_info(fabs(((h[X])[X]) - (+(0.005729500000000000218))) < (9.999999999999999547e-08), 517, "test_blue_phase.c"); 
# 518
test_assert_info(fabs(((h[X])[Y]) - (0.0023299000000000002)) < (9.999999999999999547e-08), 518, "test_blue_phase.c"); 
# 519
test_assert_info(fabs(((h[X])[Z]) - (0.0)) < (9.999999999999999547e-08), 519, "test_blue_phase.c"); 
# 520
test_assert_info(fabs(((h[Y])[Y]) - (-(0.01114539999999999975))) < (9.999999999999999547e-08), 520, "test_blue_phase.c"); 
# 521
test_assert_info(fabs(((h[Y])[Z]) - (0.0)) < (9.999999999999999547e-08), 521, "test_blue_phase.c"); 
# 524
ic = 2; 
# 525
jc = 7; 
# 526
kc = 6; 
# 527
index = lees_edw_index(le, ic, jc, kc); 
# 528
field_tensor(fq, index, q); 
# 529
field_grad_tensor_grad(fqgrad, index, dq); 
# 530
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 532
multiply_gradient(dq, (3.0)); 
# 533
multiply_delsq(dsq, (1.5)); 
# 535
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 538
test_assert_info(fabs(((h[X])[X]) - (+(0.005415900000000000401))) < (9.999999999999999547e-08), 538, "test_blue_phase.c"); 
# 539
test_assert_info(fabs(((h[X])[Y]) - (0.0)) < (9.999999999999999547e-08), 539, "test_blue_phase.c"); 
# 540
test_assert_info(fabs(((h[X])[Z]) - (0.0)) < (9.999999999999999547e-08), 540, "test_blue_phase.c"); 
# 541
test_assert_info(fabs(((h[Y])[Y]) - (+(0.005729500000000000218))) < (9.999999999999999547e-08), 541, "test_blue_phase.c"); 
# 542
test_assert_info(fabs(((h[Y])[Z]) - (+(0.0023299000000000002))) < (9.999999999999999547e-08), 542, "test_blue_phase.c"); 
# 548
for (ic = 1; ic <= (nlocal[X]); ic++) { 
# 549
for (jc = 1; jc <= (nlocal[Y]); jc++) { 
# 550
for (kc = 1; kc <= (nlocal[Z]); kc++) { 
# 552
index = lees_edw_index(le, ic, jc, kc); 
# 553
fe_lc_mol_field(fe, index, h); 
# 555
test_assert_info(fabs(((h[X])[Y]) - ((h[Y])[X])) < (9.999999999999999988e-15), 555, "test_blue_phase.c"); 
# 556
test_assert_info(fabs(((h[X])[Z]) - ((h[Z])[X])) < (9.999999999999999988e-15), 556, "test_blue_phase.c"); 
# 557
test_assert_info(fabs(((h[Y])[Z]) - ((h[Z])[Y])) < (9.999999999999999988e-15), 557, "test_blue_phase.c"); 
# 558
}  
# 559
}  
# 560
}  
# 569 "test_blue_phase.c"
ic = 1; 
# 570
jc = 1; 
# 571
kc = 1; 
# 572
index = lees_edw_index(le, ic, jc, kc); 
# 573
field_tensor(fq, index, q); 
# 574
field_grad_tensor_grad(fqgrad, index, dq); 
# 575
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 577
multiply_gradient(dq, (3.0)); 
# 578
multiply_delsq(dsq, (1.5)); 
# 580
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 581
fe_lc_compute_stress(fe, q, dq, h, dsq); 
# 585
test_assert_info(fabs(((dsq[X])[X]) - (-(0.007887055999999999928))) < (9.999999999999999547e-08), 585, "test_blue_phase.c"); 
# 586
test_assert_info(fabs(((dsq[X])[Y]) - (-(0.008924220000000000069))) < (9.999999999999999547e-08), 586, "test_blue_phase.c"); 
# 587
test_assert_info(fabs(((dsq[X])[Z]) - (-(0.009837494000000000446))) < (9.999999999999999547e-08), 587, "test_blue_phase.c"); 
# 588
test_assert_info(fabs(((dsq[Y])[X]) - (-(0.009837494000000000446))) < (9.999999999999999547e-08), 588, "test_blue_phase.c"); 
# 589
test_assert_info(fabs(((dsq[Y])[Y]) - (-(0.007887055999999999928))) < (9.999999999999999547e-08), 589, "test_blue_phase.c"); 
# 590
test_assert_info(fabs(((dsq[Y])[Z]) - (-(0.008924220000000000069))) < (9.999999999999999547e-08), 590, "test_blue_phase.c"); 
# 591
test_assert_info(fabs(((dsq[Z])[X]) - (-(0.008924220000000000069))) < (9.999999999999999547e-08), 591, "test_blue_phase.c"); 
# 592
test_assert_info(fabs(((dsq[Z])[Y]) - (-(0.009837494000000000446))) < (9.999999999999999547e-08), 592, "test_blue_phase.c"); 
# 593
test_assert_info(fabs(((dsq[Z])[Z]) - (-(0.007887055999999999928))) < (9.999999999999999547e-08), 593, "test_blue_phase.c"); 
# 597
ic = 1; 
# 598
jc = 1; 
# 599
kc = 2; 
# 600
index = lees_edw_index(le, ic, jc, kc); 
# 601
field_tensor(fq, index, q); 
# 602
field_grad_tensor_grad(fqgrad, index, dq); 
# 603
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 605
multiply_gradient(dq, (3.0)); 
# 606
multiply_delsq(dsq, (1.5)); 
# 608
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 609
fe_lc_compute_stress(fe, q, dq, h, dsq); 
# 612
test_assert_info(fabs(((dsq[X])[X]) - (0.007375081999999999818)) < (9.999999999999999547e-08), 612, "test_blue_phase.c"); 
# 613
test_assert_info(fabs(((dsq[X])[Y]) - (0.0)) < (9.999999999999999547e-08), 613, "test_blue_phase.c"); 
# 614
test_assert_info(fabs(((dsq[X])[Z]) - (0.0)) < (9.999999999999999547e-08), 614, "test_blue_phase.c"); 
# 615
test_assert_info(fabs(((dsq[Y])[X]) - (0.0)) < (9.999999999999999547e-08), 615, "test_blue_phase.c"); 
# 616
test_assert_info(fabs(((dsq[Y])[Y]) - (-(0.04179480000000000001))) < (9.999999999999999547e-08), 616, "test_blue_phase.c"); 
# 617
test_assert_info(fabs(((dsq[Y])[Z]) - (-(0.027481789999999999))) < (9.999999999999999547e-08), 617, "test_blue_phase.c"); 
# 618
test_assert_info(fabs(((dsq[Z])[X]) - (0.0)) < (9.999999999999999547e-08), 618, "test_blue_phase.c"); 
# 619
test_assert_info(fabs(((dsq[Z])[Y]) - (-(0.02871796000000000071))) < (9.999999999999999547e-08), 619, "test_blue_phase.c"); 
# 620
test_assert_info(fabs(((dsq[Z])[Z]) - (-(0.00532916399999999995))) < (9.999999999999999547e-08), 620, "test_blue_phase.c"); 
# 623
ic = 1; 
# 624
jc = 1; 
# 625
kc = 3; 
# 626
index = lees_edw_index(le, ic, jc, kc); 
# 627
field_tensor(fq, index, q); 
# 628
field_grad_tensor_grad(fqgrad, index, dq); 
# 629
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 631
multiply_gradient(dq, (3.0)); 
# 632
multiply_delsq(dsq, (1.5)); 
# 634
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 635
fe_lc_compute_stress(fe, q, dq, h, dsq); 
# 638
test_assert_info(fabs(((dsq[X])[X]) - (-(0.007887055999999999928))) < (9.999999999999999547e-08), 638, "test_blue_phase.c"); 
# 639
test_assert_info(fabs(((dsq[X])[Y]) - (0.008924220000000000069)) < (9.999999999999999547e-08), 639, "test_blue_phase.c"); 
# 640
test_assert_info(fabs(((dsq[X])[Z]) - (0.009837494000000000446)) < (9.999999999999999547e-08), 640, "test_blue_phase.c"); 
# 641
test_assert_info(fabs(((dsq[Y])[X]) - (0.009837494000000000446)) < (9.999999999999999547e-08), 641, "test_blue_phase.c"); 
# 642
test_assert_info(fabs(((dsq[Y])[Y]) - (-(0.007887055999999999928))) < (9.999999999999999547e-08), 642, "test_blue_phase.c"); 
# 643
test_assert_info(fabs(((dsq[Y])[Z]) - (-(0.008924220000000000069))) < (9.999999999999999547e-08), 643, "test_blue_phase.c"); 
# 644
test_assert_info(fabs(((dsq[Z])[X]) - (0.008924220000000000069)) < (9.999999999999999547e-08), 644, "test_blue_phase.c"); 
# 645
test_assert_info(fabs(((dsq[Z])[Y]) - (-(0.009837494000000000446))) < (9.999999999999999547e-08), 645, "test_blue_phase.c"); 
# 646
test_assert_info(fabs(((dsq[Z])[Z]) - (-(0.007887055999999999928))) < (9.999999999999999547e-08), 646, "test_blue_phase.c"); 
# 649
ic = 1; 
# 650
jc = 12; 
# 651
kc = 4; 
# 652
index = lees_edw_index(le, ic, jc, kc); 
# 653
field_tensor(fq, index, q); 
# 654
field_grad_tensor_grad(fqgrad, index, dq); 
# 655
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 657
multiply_gradient(dq, (3.0)); 
# 658
multiply_delsq(dsq, (1.5)); 
# 660
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 661
fe_lc_compute_stress(fe, q, dq, h, dsq); 
# 664
test_assert_info(fabs(((dsq[X])[X]) - (0.0002779621000000000132)) < (9.999999999999999547e-08), 664, "test_blue_phase.c"); 
# 665
test_assert_info(fabs(((dsq[X])[Y]) - (0.000718062299999999991)) < (9.999999999999999547e-08), 665, "test_blue_phase.c"); 
# 666
test_assert_info(fabs(((dsq[X])[Z]) - (0.0)) < (9.999999999999999547e-08), 666, "test_blue_phase.c"); 
# 667
test_assert_info(fabs(((dsq[Y])[X]) - (0.001308445000000000094)) < (9.999999999999999547e-08), 667, "test_blue_phase.c"); 
# 668
test_assert_info(fabs(((dsq[Y])[Y]) - (-(0.005056451000000000001))) < (9.999999999999999547e-08), 668, "test_blue_phase.c"); 
# 669
test_assert_info(fabs(((dsq[Y])[Z]) - (0.0)) < (9.999999999999999547e-08), 669, "test_blue_phase.c"); 
# 670
test_assert_info(fabs(((dsq[Z])[X]) - (0.0)) < (9.999999999999999547e-08), 670, "test_blue_phase.c"); 
# 671
test_assert_info(fabs(((dsq[Z])[Y]) - (0.0)) < (9.999999999999999547e-08), 671, "test_blue_phase.c"); 
# 672
test_assert_info(fabs(((dsq[Z])[Z]) - (-(0.0001007305000000000006))) < (9.999999999999999547e-08), 672, "test_blue_phase.c"); 
# 675
ic = 2; 
# 676
jc = 7; 
# 677
kc = 6; 
# 678
index = lees_edw_index(le, ic, jc, kc); 
# 679
field_tensor(fq, index, q); 
# 680
field_grad_tensor_grad(fqgrad, index, dq); 
# 681
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 683
multiply_gradient(dq, (3.0)); 
# 684
multiply_delsq(dsq, (1.5)); 
# 686
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 687
fe_lc_compute_stress(fe, q, dq, h, dsq); 
# 690
test_assert_info(fabs(((dsq[X])[X]) - (-(0.0001007305000000000006))) < (9.999999999999999547e-08), 690, "test_blue_phase.c"); 
# 691
test_assert_info(fabs(((dsq[X])[Y]) - (0.0)) < (9.999999999999999547e-08), 691, "test_blue_phase.c"); 
# 692
test_assert_info(fabs(((dsq[X])[Z]) - (0.0)) < (9.999999999999999547e-08), 692, "test_blue_phase.c"); 
# 693
test_assert_info(fabs(((dsq[Y])[X]) - (0.0)) < (9.999999999999999547e-08), 693, "test_blue_phase.c"); 
# 694
test_assert_info(fabs(((dsq[Y])[Y]) - (0.0002779621000000000132)) < (9.999999999999999547e-08), 694, "test_blue_phase.c"); 
# 695
test_assert_info(fabs(((dsq[Y])[Z]) - (0.000718062299999999991)) < (9.999999999999999547e-08), 695, "test_blue_phase.c"); 
# 696
test_assert_info(fabs(((dsq[Z])[X]) - (0.0)) < (9.999999999999999547e-08), 696, "test_blue_phase.c"); 
# 697
test_assert_info(fabs(((dsq[Z])[Y]) - (0.001308445000000000094)) < (9.999999999999999547e-08), 697, "test_blue_phase.c"); 
# 698
test_assert_info(fabs(((dsq[Z])[Z]) - (-(0.005056451000000000001))) < (9.999999999999999547e-08), 698, "test_blue_phase.c"); 
# 706
(field[X]) = (0.0); 
# 707
(field[Y]) = (0.0); 
# 708
(field[Z]) = (1.0); 
# 710
physics_e0_set(phys, field); 
# 711
fe_lc_param_commit(fe); 
# 714
e = sqrt((((27.0) * epsilon) * (1.0)) / ((((32.0) * pi_) * a0) * gamma)); 
# 717
fe_lc_dimensionless_field_strength(fe, &value); 
# 718
test_assert_info(fabs(value - e) < (9.999999999999999547e-08), 718, "test_blue_phase.c"); 
# 721
(field[X]) = (1.0); 
# 722
(field[Y]) = (1.0); 
# 723
(field[Z]) = (1.0); 
# 725
physics_e0_set(phys, field); 
# 727
e = sqrt((((27.0) * epsilon) * (3.0)) / ((((32.0) * pi_) * a0) * gamma)); 
# 729
fe_lc_dimensionless_field_strength(fe, &value); 
# 731
test_assert_info(fabs(value - e) < (9.999999999999999547e-08), 731, "test_blue_phase.c"); 
# 736
(field[X]) = ((0.01282096899999999977) / sqrt((3.0))); 
# 737
(field[Y]) = (field[X]); 
# 738
(field[Z]) = (field[X]); 
# 741
physics_e0_set(phys, field); 
# 743
fe_lc_dimensionless_field_strength(fe, &value); 
# 744
fe_lc_param_commit(fe); 
# 746
test_assert_info(fabs(value - (0.2000000000000000111)) < (9.999999999999999547e-08), 746, "test_blue_phase.c"); 
# 753
field_halo(fq); 
# 754
field_grad_set(fqgrad, grad_3d_7pt_fluid_d2, __null); 
# 756
field_memcpy(fq, hipMemcpyHostToDevice); 
# 757
field_grad_compute(fqgrad); 
# 758
field_grad_memcpy(fqgrad, hipMemcpyDeviceToHost); 
# 760
ic = 1; 
# 761
jc = 1; 
# 762
kc = 1; 
# 763
index = lees_edw_index(le, ic, jc, kc); 
# 764
field_tensor(fq, index, q); 
# 766
field_grad_tensor_grad(fqgrad, index, dq); 
# 767
fe_lc_compute_fed(fe, gamma, q, dq, &value); 
# 770
test_assert_info(fabs(value - (0.006162622399999999681)) < (9.999999999999999547e-08), 770, "test_blue_phase.c"); 
# 773
ic = 2; 
# 774
jc = 7; 
# 775
kc = 6; 
# 776
index = lees_edw_index(le, ic, jc, kc); 
# 777
field_tensor(fq, index, q); 
# 778
field_grad_tensor_grad(fqgrad, index, dq); 
# 780
fe_lc_compute_fed(fe, gamma, q, dq, &value); 
# 782
test_assert_info(fabs(value - (0.0006708707400000000305)) < (9.999999999999999547e-08), 782, "test_blue_phase.c"); 
# 785
(field[X]) = (0.01282096899999999977); 
# 786
(field[Y]) = (0.0); 
# 787
(field[Z]) = (0.0); 
# 789
physics_e0_set(phys, field); 
# 790
fe_lc_param_commit(fe); 
# 792
fe_lc_dimensionless_field_strength(fe, &value); 
# 794
test_assert_info(fabs(value - (0.2000000000000000111)) < (9.999999999999999547e-08), 794, "test_blue_phase.c"); 
# 800
ic = 1; 
# 801
jc = 1; 
# 802
kc = 1; 
# 803
index = lees_edw_index(le, ic, jc, kc); 
# 804
field_tensor(fq, index, q); 
# 805
field_grad_tensor_grad(fqgrad, index, dq); 
# 806
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 808
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 812
test_assert_info(fabs(((h[X])[X]) - (0.0001203426800000000009)) < (9.999999999999999547e-08), 812, "test_blue_phase.c"); 
# 813
test_assert_info(fabs(((h[X])[Y]) - (0.0171194190000000003)) < (9.999999999999999547e-08), 813, "test_blue_phase.c"); 
# 814
test_assert_info(fabs(((h[X])[Z]) - (0.0171194190000000003)) < (9.999999999999999547e-08), 814, "test_blue_phase.c"); 
# 815
test_assert_info(fabs(((h[Y])[Y]) - (-(6.017133800000000167e-05))) < (9.999999999999999547e-08), 815, "test_blue_phase.c"); 
# 816
test_assert_info(fabs(((h[Y])[Z]) - (0.0171194190000000003)) < (9.999999999999999547e-08), 816, "test_blue_phase.c"); 
# 820
ic = 2; 
# 821
jc = 7; 
# 822
kc = 6; 
# 823
index = lees_edw_index(le, ic, jc, kc); 
# 824
field_tensor(fq, index, q); 
# 825
field_grad_tensor_grad(fqgrad, index, dq); 
# 826
field_grad_tensor_delsq(fqgrad, index, dsq); 
# 828
fe_lc_compute_h(fe, gamma, q, dq, dsq, h); 
# 831
test_assert_info(fabs(((h[X])[X]) - (+(0.005536262900000000001))) < (9.999999999999999547e-08), 831, "test_blue_phase.c"); 
# 832
test_assert_info(fabs(((h[X])[Y]) - (0.0)) < (9.999999999999999547e-08), 832, "test_blue_phase.c"); 
# 833
test_assert_info(fabs(((h[X])[Z]) - (0.0)) < (9.999999999999999547e-08), 833, "test_blue_phase.c"); 
# 834
test_assert_info(fabs(((h[Y])[Y]) - (+(0.005669333399999999627))) < (9.999999999999999547e-08), 834, "test_blue_phase.c"); 
# 835
test_assert_info(fabs(((h[Y])[Z]) - (+(0.002329941600000000074))) < (9.999999999999999547e-08), 835, "test_blue_phase.c"); 
# 842
physics_free(phys); 
# 844
return 0; 
# 845
} 
# 855 "test_blue_phase.c"
void multiply_gradient(double dq[3][3][3], double factor) { 
# 857
int ia, ib, ic; 
# 859
for (ia = 0; ia < 3; ia++) { 
# 860
for (ib = 0; ib < 3; ib++) { 
# 861
for (ic = 0; ic < 3; ic++) { 
# 862
(((dq[ia])[ib])[ic]) *= factor; 
# 863
}  
# 864
}  
# 865
}  
# 868
} 
# 878 "test_blue_phase.c"
void multiply_delsq(double dsq[3][3], double factor) { 
# 880
int ia, ib; 
# 882
for (ia = 0; ia < 3; ia++) { 
# 883
for (ib = 0; ib < 3; ib++) { 
# 884
((dsq[ia])[ib]) *= factor; 
# 885
}  
# 886
}  
# 889
} 
# 897
int do_test_fe_lc_device1(pe_t *pe, cs_t *cs, fe_lc_t *fe) { 
# 900
double a0 = (0.01438471099999999968); 
# 901
double gamma = (3.176470600000000033); 
# 902
double kappa = (0.01000000000000000021); 
# 903
double epsilon = (41.39999999999999858); 
# 904
double redshift = (1.0); 
# 905
fe_lc_param_t param = {(0)}; 
# 907
dim3 nblk, ntpb; 
# 908
physics_t *phys = (__null); 
# 909
fe_lc_t *fetarget = (__null); 
# 911
(pe) ? static_cast< void>(0) : __assert_fail("pe", "test_blue_phase.c", 911, __PRETTY_FUNCTION__); 
# 912
(cs) ? static_cast< void>(0) : __assert_fail("cs", "test_blue_phase.c", 912, __PRETTY_FUNCTION__); 
# 913
(fe) ? static_cast< void>(0) : __assert_fail("fe", "test_blue_phase.c", 913, __PRETTY_FUNCTION__); 
# 915
physics_create(pe, &phys); 
# 917
(param.a0) = a0; 
# 918
(param.gamma) = gamma; 
# 919
(param.kappa0) = kappa; 
# 920
(param.epsilon) = epsilon; 
# 921
(param.redshift) = redshift; 
# 922
fe_lc_param_set(fe, param); 
# 923
fe_lc_param_commit(fe); 
# 925
fe_lc_target(fe, (fe_t **)(&fetarget)); 
# 927
kernel_launch_param(1, &nblk, &ntpb); 
# 928
(ntpb.x) = (1); 
# 930
do { (__cudaPushCallConfiguration(nblk, ntpb, 0, 0)) ? (void)0 : do_test_fe_lc_kernel1(fetarget, param); } while (0); ; 
# 931
tdpDeviceSynchronize(); 
# 933
physics_free(phys); 
# 935
return 0; 
# 936
} 
# 944
void do_test_fe_lc_kernel1(fe_lc_t *fe, fe_lc_param_t ref) ;
#if 0
# 944
{ 
# 946
fe_lc_param_t p; 
# 947
const double pi = (3.141592653589793116); 
# 949
(fe) ? static_cast< void>(0) : __assert_fail("fe", "test_blue_phase.c", 949, __PRETTY_FUNCTION__); 
# 951
fe_lc_param(fe, &p); 
# 955
test_assert_info(fabs((p.a0) - (ref.a0)) < ((double)(2.2204460492503130808e-16L)), 955, "test_blue_phase.c"); 
# 956
test_assert_info(fabs((p.gamma) - (ref.gamma)) < ((double)(2.2204460492503130808e-16L)), 956, "test_blue_phase.c"); 
# 957
test_assert_info(fabs((p.kappa0) - (ref.kappa0)) < ((double)(2.2204460492503130808e-16L)), 957, "test_blue_phase.c"); 
# 958
test_assert_info(fabs((((12.0) * pi) * (p.epsilon)) - (ref.epsilon)) < ((1.192092896e-07F)), 958, "test_blue_phase.c"); 
# 959
test_assert_info(fabs((p.redshift) - (ref.redshift)) < ((double)(2.2204460492503130808e-16L)), 959, "test_blue_phase.c"); 
# 962
} 
#endif

# 1 "test_blue_phase.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__23_test_blue_phase_cpp1_ii_49120326
# 1 "test_blue_phase.cudafe1.stub.c"
#include "test_blue_phase.cudafe1.stub.c"
# 1 "test_blue_phase.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
