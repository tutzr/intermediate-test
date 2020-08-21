# 1 "collision.c"
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
# 61 "/usr/local/cuda/include/cuda_runtime.h" 3
#pragma GCC diagnostic push
# 64
#pragma GCC diagnostic ignored "-Wunused-function"
# 66 "/usr/local/cuda/include/device_types.h" 3
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
# 98 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 98
struct char1 { 
# 100
signed char x; 
# 101
}; 
#endif
# 103 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 103
struct uchar1 { 
# 105
unsigned char x; 
# 106
}; 
#endif
# 109 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 109
struct __attribute((aligned(2))) char2 { 
# 111
signed char x, y; 
# 112
}; 
#endif
# 114 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 114
struct __attribute((aligned(2))) uchar2 { 
# 116
unsigned char x, y; 
# 117
}; 
#endif
# 119 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 119
struct char3 { 
# 121
signed char x, y, z; 
# 122
}; 
#endif
# 124 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 124
struct uchar3 { 
# 126
unsigned char x, y, z; 
# 127
}; 
#endif
# 129 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 129
struct __attribute((aligned(4))) char4 { 
# 131
signed char x, y, z, w; 
# 132
}; 
#endif
# 134 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 134
struct __attribute((aligned(4))) uchar4 { 
# 136
unsigned char x, y, z, w; 
# 137
}; 
#endif
# 139 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 139
struct short1 { 
# 141
short x; 
# 142
}; 
#endif
# 144 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 144
struct ushort1 { 
# 146
unsigned short x; 
# 147
}; 
#endif
# 149 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 149
struct __attribute((aligned(4))) short2 { 
# 151
short x, y; 
# 152
}; 
#endif
# 154 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 154
struct __attribute((aligned(4))) ushort2 { 
# 156
unsigned short x, y; 
# 157
}; 
#endif
# 159 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 159
struct short3 { 
# 161
short x, y, z; 
# 162
}; 
#endif
# 164 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 164
struct ushort3 { 
# 166
unsigned short x, y, z; 
# 167
}; 
#endif
# 169 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 169
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 170 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 170
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 172 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 172
struct int1 { 
# 174
int x; 
# 175
}; 
#endif
# 177 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 177
struct uint1 { 
# 179
unsigned x; 
# 180
}; 
#endif
# 182 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 182
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 183 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 183
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 185 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 185
struct int3 { 
# 187
int x, y, z; 
# 188
}; 
#endif
# 190 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 190
struct uint3 { 
# 192
unsigned x, y, z; 
# 193
}; 
#endif
# 195 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 195
struct __attribute((aligned(16))) int4 { 
# 197
int x, y, z, w; 
# 198
}; 
#endif
# 200 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 200
struct __attribute((aligned(16))) uint4 { 
# 202
unsigned x, y, z, w; 
# 203
}; 
#endif
# 205 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 205
struct long1 { 
# 207
long x; 
# 208
}; 
#endif
# 210 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 210
struct ulong1 { 
# 212
unsigned long x; 
# 213
}; 
#endif
# 220 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 220
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 222
long x, y; 
# 223
}; 
#endif
# 225 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 225
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 227
unsigned long x, y; 
# 228
}; 
#endif
# 232 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 232
struct long3 { 
# 234
long x, y, z; 
# 235
}; 
#endif
# 237 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 237
struct ulong3 { 
# 239
unsigned long x, y, z; 
# 240
}; 
#endif
# 242 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 242
struct __attribute((aligned(16))) long4 { 
# 244
long x, y, z, w; 
# 245
}; 
#endif
# 247 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 247
struct __attribute((aligned(16))) ulong4 { 
# 249
unsigned long x, y, z, w; 
# 250
}; 
#endif
# 252 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 252
struct float1 { 
# 254
float x; 
# 255
}; 
#endif
# 274 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 274
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 279 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 279
struct float3 { 
# 281
float x, y, z; 
# 282
}; 
#endif
# 284 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 284
struct __attribute((aligned(16))) float4 { 
# 286
float x, y, z, w; 
# 287
}; 
#endif
# 289 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 289
struct longlong1 { 
# 291
long long x; 
# 292
}; 
#endif
# 294 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 294
struct ulonglong1 { 
# 296
unsigned long long x; 
# 297
}; 
#endif
# 299 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 299
struct __attribute((aligned(16))) longlong2 { 
# 301
long long x, y; 
# 302
}; 
#endif
# 304 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 304
struct __attribute((aligned(16))) ulonglong2 { 
# 306
unsigned long long x, y; 
# 307
}; 
#endif
# 309 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 309
struct longlong3 { 
# 311
long long x, y, z; 
# 312
}; 
#endif
# 314 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 314
struct ulonglong3 { 
# 316
unsigned long long x, y, z; 
# 317
}; 
#endif
# 319 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 319
struct __attribute((aligned(16))) longlong4 { 
# 321
long long x, y, z, w; 
# 322
}; 
#endif
# 324 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 324
struct __attribute((aligned(16))) ulonglong4 { 
# 326
unsigned long long x, y, z, w; 
# 327
}; 
#endif
# 329 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 329
struct double1 { 
# 331
double x; 
# 332
}; 
#endif
# 334 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 334
struct __attribute((aligned(16))) double2 { 
# 336
double x, y; 
# 337
}; 
#endif
# 339 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 339
struct double3 { 
# 341
double x, y, z; 
# 342
}; 
#endif
# 344 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 344
struct __attribute((aligned(16))) double4 { 
# 346
double x, y, z, w; 
# 347
}; 
#endif
# 361 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef char1 
# 361
char1; 
#endif
# 362 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uchar1 
# 362
uchar1; 
#endif
# 363 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef char2 
# 363
char2; 
#endif
# 364 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uchar2 
# 364
uchar2; 
#endif
# 365 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef char3 
# 365
char3; 
#endif
# 366 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uchar3 
# 366
uchar3; 
#endif
# 367 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef char4 
# 367
char4; 
#endif
# 368 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uchar4 
# 368
uchar4; 
#endif
# 369 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef short1 
# 369
short1; 
#endif
# 370 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ushort1 
# 370
ushort1; 
#endif
# 371 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef short2 
# 371
short2; 
#endif
# 372 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ushort2 
# 372
ushort2; 
#endif
# 373 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef short3 
# 373
short3; 
#endif
# 374 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ushort3 
# 374
ushort3; 
#endif
# 375 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef short4 
# 375
short4; 
#endif
# 376 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ushort4 
# 376
ushort4; 
#endif
# 377 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef int1 
# 377
int1; 
#endif
# 378 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uint1 
# 378
uint1; 
#endif
# 379 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef int2 
# 379
int2; 
#endif
# 380 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uint2 
# 380
uint2; 
#endif
# 381 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef int3 
# 381
int3; 
#endif
# 382 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uint3 
# 382
uint3; 
#endif
# 383 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef int4 
# 383
int4; 
#endif
# 384 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef uint4 
# 384
uint4; 
#endif
# 385 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef long1 
# 385
long1; 
#endif
# 386 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulong1 
# 386
ulong1; 
#endif
# 387 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef long2 
# 387
long2; 
#endif
# 388 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulong2 
# 388
ulong2; 
#endif
# 389 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef long3 
# 389
long3; 
#endif
# 390 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulong3 
# 390
ulong3; 
#endif
# 391 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef long4 
# 391
long4; 
#endif
# 392 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulong4 
# 392
ulong4; 
#endif
# 393 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef float1 
# 393
float1; 
#endif
# 394 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef float2 
# 394
float2; 
#endif
# 395 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef float3 
# 395
float3; 
#endif
# 396 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef float4 
# 396
float4; 
#endif
# 397 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef longlong1 
# 397
longlong1; 
#endif
# 398 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulonglong1 
# 398
ulonglong1; 
#endif
# 399 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef longlong2 
# 399
longlong2; 
#endif
# 400 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulonglong2 
# 400
ulonglong2; 
#endif
# 401 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef longlong3 
# 401
longlong3; 
#endif
# 402 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulonglong3 
# 402
ulonglong3; 
#endif
# 403 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef longlong4 
# 403
longlong4; 
#endif
# 404 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef ulonglong4 
# 404
ulonglong4; 
#endif
# 405 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef double1 
# 405
double1; 
#endif
# 406 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef double2 
# 406
double2; 
#endif
# 407 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef double3 
# 407
double3; 
#endif
# 408 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef double4 
# 408
double4; 
#endif
# 416 "/usr/local/cuda/include/vector_types.h" 3
#if 0
# 416
struct dim3 { 
# 418
unsigned x, y, z; 
# 430
}; 
#endif
# 432 "/usr/local/cuda/include/vector_types.h" 3
#if 0
typedef dim3 
# 432
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
# 189 "/usr/local/cuda/include/driver_types.h" 3
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
# 259 "/usr/local/cuda/include/driver_types.h" 3
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
# 322 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorAddressOfConstant, 
# 331 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorTextureFetchFailed, 
# 340 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorTextureNotBound, 
# 349 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorSynchronizationError, 
# 355
cudaErrorInvalidFilterSetting, 
# 361
cudaErrorInvalidNormSetting, 
# 369
cudaErrorMixedDeviceExecution, 
# 377
cudaErrorNotYetImplemented = 31, 
# 386 "/usr/local/cuda/include/driver_types.h" 3
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
# 427 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorDevicesUnavailable, 
# 440 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorIncompatibleDriverContext = 49, 
# 446
cudaErrorMissingConfiguration = 52, 
# 455 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorPriorLaunchFailure, 
# 462
cudaErrorLaunchMaxDepthExceeded = 65, 
# 470
cudaErrorLaunchFileScopedTex, 
# 478
cudaErrorLaunchFileScopedSurf, 
# 493 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorSyncDepthExceeded, 
# 505 "/usr/local/cuda/include/driver_types.h" 3
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
# 543 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorDeviceUninitialized, 
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
# 711 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorLaunchOutOfResources, 
# 722 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorLaunchTimeout, 
# 728
cudaErrorLaunchIncompatibleTexturing, 
# 735
cudaErrorPeerAccessAlreadyEnabled, 
# 742
cudaErrorPeerAccessNotEnabled, 
# 755 "/usr/local/cuda/include/driver_types.h" 3
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
# 797 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorHardwareStackError, 
# 805
cudaErrorIllegalInstruction, 
# 814 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorMisalignedAddress, 
# 825 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorInvalidAddressSpace, 
# 833
cudaErrorInvalidPc, 
# 844 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorLaunchFailure, 
# 853 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorCooperativeLaunchTooLarge, 
# 858
cudaErrorNotPermitted = 800, 
# 864
cudaErrorNotSupported, 
# 873 "/usr/local/cuda/include/driver_types.h" 3
cudaErrorSystemNotReady, 
# 880
cudaErrorSystemDriverMismatch, 
# 889 "/usr/local/cuda/include/driver_types.h" 3
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
cudaErrorTimeout, 
# 954
cudaErrorGraphExecUpdateFailure, 
# 959
cudaErrorUnknown = 999, 
# 967
cudaErrorApiFailureBase = 10000
# 968
}; 
#endif
# 973 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 973
enum cudaChannelFormatKind { 
# 975
cudaChannelFormatKindSigned, 
# 976
cudaChannelFormatKindUnsigned, 
# 977
cudaChannelFormatKindFloat, 
# 978
cudaChannelFormatKindNone
# 979
}; 
#endif
# 984 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 984
struct cudaChannelFormatDesc { 
# 986
int x; 
# 987
int y; 
# 988
int z; 
# 989
int w; 
# 990
cudaChannelFormatKind f; 
# 991
}; 
#endif
# 996 "/usr/local/cuda/include/driver_types.h" 3
typedef struct cudaArray *cudaArray_t; 
# 1001
typedef const cudaArray *cudaArray_const_t; 
# 1003
struct cudaArray; 
# 1008
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 1013
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 1015
struct cudaMipmappedArray; 
# 1020
#if 0
# 1020
enum cudaMemoryType { 
# 1022
cudaMemoryTypeUnregistered, 
# 1023
cudaMemoryTypeHost, 
# 1024
cudaMemoryTypeDevice, 
# 1025
cudaMemoryTypeManaged
# 1026
}; 
#endif
# 1031 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1031
enum cudaMemcpyKind { 
# 1033
cudaMemcpyHostToHost, 
# 1034
cudaMemcpyHostToDevice, 
# 1035
cudaMemcpyDeviceToHost, 
# 1036
cudaMemcpyDeviceToDevice, 
# 1037
cudaMemcpyDefault
# 1038
}; 
#endif
# 1045 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1045
struct cudaPitchedPtr { 
# 1047
void *ptr; 
# 1048
size_t pitch; 
# 1049
size_t xsize; 
# 1050
size_t ysize; 
# 1051
}; 
#endif
# 1058 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1058
struct cudaExtent { 
# 1060
size_t width; 
# 1061
size_t height; 
# 1062
size_t depth; 
# 1063
}; 
#endif
# 1070 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1070
struct cudaPos { 
# 1072
size_t x; 
# 1073
size_t y; 
# 1074
size_t z; 
# 1075
}; 
#endif
# 1080 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1080
struct cudaMemcpy3DParms { 
# 1082
cudaArray_t srcArray; 
# 1083
cudaPos srcPos; 
# 1084
cudaPitchedPtr srcPtr; 
# 1086
cudaArray_t dstArray; 
# 1087
cudaPos dstPos; 
# 1088
cudaPitchedPtr dstPtr; 
# 1090
cudaExtent extent; 
# 1091
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1092
}; 
#endif
# 1097 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1097
struct cudaMemcpy3DPeerParms { 
# 1099
cudaArray_t srcArray; 
# 1100
cudaPos srcPos; 
# 1101
cudaPitchedPtr srcPtr; 
# 1102
int srcDevice; 
# 1104
cudaArray_t dstArray; 
# 1105
cudaPos dstPos; 
# 1106
cudaPitchedPtr dstPtr; 
# 1107
int dstDevice; 
# 1109
cudaExtent extent; 
# 1110
}; 
#endif
# 1115 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1115
struct cudaMemsetParams { 
# 1116
void *dst; 
# 1117
size_t pitch; 
# 1118
unsigned value; 
# 1119
unsigned elementSize; 
# 1120
size_t width; 
# 1121
size_t height; 
# 1122
}; 
#endif
# 1134 "/usr/local/cuda/include/driver_types.h" 3
typedef void (*cudaHostFn_t)(void * userData); 
# 1139
#if 0
# 1139
struct cudaHostNodeParams { 
# 1140
cudaHostFn_t fn; 
# 1141
void *userData; 
# 1142
}; 
#endif
# 1147 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1147
enum cudaStreamCaptureStatus { 
# 1148
cudaStreamCaptureStatusNone, 
# 1149
cudaStreamCaptureStatusActive, 
# 1150
cudaStreamCaptureStatusInvalidated
# 1152
}; 
#endif
# 1158 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1158
enum cudaStreamCaptureMode { 
# 1159
cudaStreamCaptureModeGlobal, 
# 1160
cudaStreamCaptureModeThreadLocal, 
# 1161
cudaStreamCaptureModeRelaxed
# 1162
}; 
#endif
# 1167 "/usr/local/cuda/include/driver_types.h" 3
struct cudaGraphicsResource; 
# 1172
#if 0
# 1172
enum cudaGraphicsRegisterFlags { 
# 1174
cudaGraphicsRegisterFlagsNone, 
# 1175
cudaGraphicsRegisterFlagsReadOnly, 
# 1176
cudaGraphicsRegisterFlagsWriteDiscard, 
# 1177
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 1178
cudaGraphicsRegisterFlagsTextureGather = 8
# 1179
}; 
#endif
# 1184 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1184
enum cudaGraphicsMapFlags { 
# 1186
cudaGraphicsMapFlagsNone, 
# 1187
cudaGraphicsMapFlagsReadOnly, 
# 1188
cudaGraphicsMapFlagsWriteDiscard
# 1189
}; 
#endif
# 1194 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1194
enum cudaGraphicsCubeFace { 
# 1196
cudaGraphicsCubeFacePositiveX, 
# 1197
cudaGraphicsCubeFaceNegativeX, 
# 1198
cudaGraphicsCubeFacePositiveY, 
# 1199
cudaGraphicsCubeFaceNegativeY, 
# 1200
cudaGraphicsCubeFacePositiveZ, 
# 1201
cudaGraphicsCubeFaceNegativeZ
# 1202
}; 
#endif
# 1207 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1207
enum cudaResourceType { 
# 1209
cudaResourceTypeArray, 
# 1210
cudaResourceTypeMipmappedArray, 
# 1211
cudaResourceTypeLinear, 
# 1212
cudaResourceTypePitch2D
# 1213
}; 
#endif
# 1218 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1218
enum cudaResourceViewFormat { 
# 1220
cudaResViewFormatNone, 
# 1221
cudaResViewFormatUnsignedChar1, 
# 1222
cudaResViewFormatUnsignedChar2, 
# 1223
cudaResViewFormatUnsignedChar4, 
# 1224
cudaResViewFormatSignedChar1, 
# 1225
cudaResViewFormatSignedChar2, 
# 1226
cudaResViewFormatSignedChar4, 
# 1227
cudaResViewFormatUnsignedShort1, 
# 1228
cudaResViewFormatUnsignedShort2, 
# 1229
cudaResViewFormatUnsignedShort4, 
# 1230
cudaResViewFormatSignedShort1, 
# 1231
cudaResViewFormatSignedShort2, 
# 1232
cudaResViewFormatSignedShort4, 
# 1233
cudaResViewFormatUnsignedInt1, 
# 1234
cudaResViewFormatUnsignedInt2, 
# 1235
cudaResViewFormatUnsignedInt4, 
# 1236
cudaResViewFormatSignedInt1, 
# 1237
cudaResViewFormatSignedInt2, 
# 1238
cudaResViewFormatSignedInt4, 
# 1239
cudaResViewFormatHalf1, 
# 1240
cudaResViewFormatHalf2, 
# 1241
cudaResViewFormatHalf4, 
# 1242
cudaResViewFormatFloat1, 
# 1243
cudaResViewFormatFloat2, 
# 1244
cudaResViewFormatFloat4, 
# 1245
cudaResViewFormatUnsignedBlockCompressed1, 
# 1246
cudaResViewFormatUnsignedBlockCompressed2, 
# 1247
cudaResViewFormatUnsignedBlockCompressed3, 
# 1248
cudaResViewFormatUnsignedBlockCompressed4, 
# 1249
cudaResViewFormatSignedBlockCompressed4, 
# 1250
cudaResViewFormatUnsignedBlockCompressed5, 
# 1251
cudaResViewFormatSignedBlockCompressed5, 
# 1252
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1253
cudaResViewFormatSignedBlockCompressed6H, 
# 1254
cudaResViewFormatUnsignedBlockCompressed7
# 1255
}; 
#endif
# 1260 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1260
struct cudaResourceDesc { 
# 1261
cudaResourceType resType; 
# 1263
union { 
# 1264
struct { 
# 1265
cudaArray_t array; 
# 1266
} array; 
# 1267
struct { 
# 1268
cudaMipmappedArray_t mipmap; 
# 1269
} mipmap; 
# 1270
struct { 
# 1271
void *devPtr; 
# 1272
cudaChannelFormatDesc desc; 
# 1273
size_t sizeInBytes; 
# 1274
} linear; 
# 1275
struct { 
# 1276
void *devPtr; 
# 1277
cudaChannelFormatDesc desc; 
# 1278
size_t width; 
# 1279
size_t height; 
# 1280
size_t pitchInBytes; 
# 1281
} pitch2D; 
# 1282
} res; 
# 1283
}; 
#endif
# 1288 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1288
struct cudaResourceViewDesc { 
# 1290
cudaResourceViewFormat format; 
# 1291
size_t width; 
# 1292
size_t height; 
# 1293
size_t depth; 
# 1294
unsigned firstMipmapLevel; 
# 1295
unsigned lastMipmapLevel; 
# 1296
unsigned firstLayer; 
# 1297
unsigned lastLayer; 
# 1298
}; 
#endif
# 1303 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1303
struct cudaPointerAttributes { 
# 1313 "/usr/local/cuda/include/driver_types.h" 3
__attribute((deprecated)) cudaMemoryType memoryType; 
# 1319
cudaMemoryType type; 
# 1330 "/usr/local/cuda/include/driver_types.h" 3
int device; 
# 1336
void *devicePointer; 
# 1345 "/usr/local/cuda/include/driver_types.h" 3
void *hostPointer; 
# 1352
__attribute((deprecated)) int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1353
}; 
#endif
# 1358 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1358
struct cudaFuncAttributes { 
# 1365
size_t sharedSizeBytes; 
# 1371
size_t constSizeBytes; 
# 1376
size_t localSizeBytes; 
# 1383
int maxThreadsPerBlock; 
# 1388
int numRegs; 
# 1395
int ptxVersion; 
# 1402
int binaryVersion; 
# 1408
int cacheModeCA; 
# 1415
int maxDynamicSharedSizeBytes; 
# 1424 "/usr/local/cuda/include/driver_types.h" 3
int preferredShmemCarveout; 
# 1425
}; 
#endif
# 1430 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1430
enum cudaFuncAttribute { 
# 1432
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1433
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1434
cudaFuncAttributeMax
# 1435
}; 
#endif
# 1440 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1440
enum cudaFuncCache { 
# 1442
cudaFuncCachePreferNone, 
# 1443
cudaFuncCachePreferShared, 
# 1444
cudaFuncCachePreferL1, 
# 1445
cudaFuncCachePreferEqual
# 1446
}; 
#endif
# 1452 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1452
enum cudaSharedMemConfig { 
# 1454
cudaSharedMemBankSizeDefault, 
# 1455
cudaSharedMemBankSizeFourByte, 
# 1456
cudaSharedMemBankSizeEightByte
# 1457
}; 
#endif
# 1462 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1462
enum cudaSharedCarveout { 
# 1463
cudaSharedmemCarveoutDefault = (-1), 
# 1464
cudaSharedmemCarveoutMaxShared = 100, 
# 1465
cudaSharedmemCarveoutMaxL1 = 0
# 1466
}; 
#endif
# 1471 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1471
enum cudaComputeMode { 
# 1473
cudaComputeModeDefault, 
# 1474
cudaComputeModeExclusive, 
# 1475
cudaComputeModeProhibited, 
# 1476
cudaComputeModeExclusiveProcess
# 1477
}; 
#endif
# 1482 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1482
enum cudaLimit { 
# 1484
cudaLimitStackSize, 
# 1485
cudaLimitPrintfFifoSize, 
# 1486
cudaLimitMallocHeapSize, 
# 1487
cudaLimitDevRuntimeSyncDepth, 
# 1488
cudaLimitDevRuntimePendingLaunchCount, 
# 1489
cudaLimitMaxL2FetchGranularity
# 1490
}; 
#endif
# 1495 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1495
enum cudaMemoryAdvise { 
# 1497
cudaMemAdviseSetReadMostly = 1, 
# 1498
cudaMemAdviseUnsetReadMostly, 
# 1499
cudaMemAdviseSetPreferredLocation, 
# 1500
cudaMemAdviseUnsetPreferredLocation, 
# 1501
cudaMemAdviseSetAccessedBy, 
# 1502
cudaMemAdviseUnsetAccessedBy
# 1503
}; 
#endif
# 1508 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1508
enum cudaMemRangeAttribute { 
# 1510
cudaMemRangeAttributeReadMostly = 1, 
# 1511
cudaMemRangeAttributePreferredLocation, 
# 1512
cudaMemRangeAttributeAccessedBy, 
# 1513
cudaMemRangeAttributeLastPrefetchLocation
# 1514
}; 
#endif
# 1519 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1519
enum cudaOutputMode { 
# 1521
cudaKeyValuePair, 
# 1522
cudaCSV
# 1523
}; 
#endif
# 1528 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1528
enum cudaDeviceAttr { 
# 1530
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1531
cudaDevAttrMaxBlockDimX, 
# 1532
cudaDevAttrMaxBlockDimY, 
# 1533
cudaDevAttrMaxBlockDimZ, 
# 1534
cudaDevAttrMaxGridDimX, 
# 1535
cudaDevAttrMaxGridDimY, 
# 1536
cudaDevAttrMaxGridDimZ, 
# 1537
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1538
cudaDevAttrTotalConstantMemory, 
# 1539
cudaDevAttrWarpSize, 
# 1540
cudaDevAttrMaxPitch, 
# 1541
cudaDevAttrMaxRegistersPerBlock, 
# 1542
cudaDevAttrClockRate, 
# 1543
cudaDevAttrTextureAlignment, 
# 1544
cudaDevAttrGpuOverlap, 
# 1545
cudaDevAttrMultiProcessorCount, 
# 1546
cudaDevAttrKernelExecTimeout, 
# 1547
cudaDevAttrIntegrated, 
# 1548
cudaDevAttrCanMapHostMemory, 
# 1549
cudaDevAttrComputeMode, 
# 1550
cudaDevAttrMaxTexture1DWidth, 
# 1551
cudaDevAttrMaxTexture2DWidth, 
# 1552
cudaDevAttrMaxTexture2DHeight, 
# 1553
cudaDevAttrMaxTexture3DWidth, 
# 1554
cudaDevAttrMaxTexture3DHeight, 
# 1555
cudaDevAttrMaxTexture3DDepth, 
# 1556
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1557
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1558
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1559
cudaDevAttrSurfaceAlignment, 
# 1560
cudaDevAttrConcurrentKernels, 
# 1561
cudaDevAttrEccEnabled, 
# 1562
cudaDevAttrPciBusId, 
# 1563
cudaDevAttrPciDeviceId, 
# 1564
cudaDevAttrTccDriver, 
# 1565
cudaDevAttrMemoryClockRate, 
# 1566
cudaDevAttrGlobalMemoryBusWidth, 
# 1567
cudaDevAttrL2CacheSize, 
# 1568
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1569
cudaDevAttrAsyncEngineCount, 
# 1570
cudaDevAttrUnifiedAddressing, 
# 1571
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1572
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1573
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1574
cudaDevAttrMaxTexture2DGatherHeight, 
# 1575
cudaDevAttrMaxTexture3DWidthAlt, 
# 1576
cudaDevAttrMaxTexture3DHeightAlt, 
# 1577
cudaDevAttrMaxTexture3DDepthAlt, 
# 1578
cudaDevAttrPciDomainId, 
# 1579
cudaDevAttrTexturePitchAlignment, 
# 1580
cudaDevAttrMaxTextureCubemapWidth, 
# 1581
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1582
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1583
cudaDevAttrMaxSurface1DWidth, 
# 1584
cudaDevAttrMaxSurface2DWidth, 
# 1585
cudaDevAttrMaxSurface2DHeight, 
# 1586
cudaDevAttrMaxSurface3DWidth, 
# 1587
cudaDevAttrMaxSurface3DHeight, 
# 1588
cudaDevAttrMaxSurface3DDepth, 
# 1589
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1590
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1591
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1592
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1593
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1594
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1595
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1596
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1597
cudaDevAttrMaxTexture1DLinearWidth, 
# 1598
cudaDevAttrMaxTexture2DLinearWidth, 
# 1599
cudaDevAttrMaxTexture2DLinearHeight, 
# 1600
cudaDevAttrMaxTexture2DLinearPitch, 
# 1601
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1602
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1603
cudaDevAttrComputeCapabilityMajor, 
# 1604
cudaDevAttrComputeCapabilityMinor, 
# 1605
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1606
cudaDevAttrStreamPrioritiesSupported, 
# 1607
cudaDevAttrGlobalL1CacheSupported, 
# 1608
cudaDevAttrLocalL1CacheSupported, 
# 1609
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1610
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1611
cudaDevAttrManagedMemory, 
# 1612
cudaDevAttrIsMultiGpuBoard, 
# 1613
cudaDevAttrMultiGpuBoardGroupID, 
# 1614
cudaDevAttrHostNativeAtomicSupported, 
# 1615
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1616
cudaDevAttrPageableMemoryAccess, 
# 1617
cudaDevAttrConcurrentManagedAccess, 
# 1618
cudaDevAttrComputePreemptionSupported, 
# 1619
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1620
cudaDevAttrReserved92, 
# 1621
cudaDevAttrReserved93, 
# 1622
cudaDevAttrReserved94, 
# 1623
cudaDevAttrCooperativeLaunch, 
# 1624
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1625
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
# 1626
cudaDevAttrCanFlushRemoteWrites, 
# 1627
cudaDevAttrHostRegisterSupported, 
# 1628
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
# 1629
cudaDevAttrDirectManagedMemAccessFromHost
# 1630
}; 
#endif
# 1636 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1636
enum cudaDeviceP2PAttr { 
# 1637
cudaDevP2PAttrPerformanceRank = 1, 
# 1638
cudaDevP2PAttrAccessSupported, 
# 1639
cudaDevP2PAttrNativeAtomicSupported, 
# 1640
cudaDevP2PAttrCudaArrayAccessSupported
# 1641
}; 
#endif
# 1648 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1648
struct CUuuid_st { 
# 1649
char bytes[16]; 
# 1650
}; 
#endif
# 1651 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef CUuuid_st 
# 1651
CUuuid; 
#endif
# 1653 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef CUuuid_st 
# 1653
cudaUUID_t; 
#endif
# 1658 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1658
struct cudaDeviceProp { 
# 1660
char name[256]; 
# 1661
cudaUUID_t uuid; 
# 1662
char luid[8]; 
# 1663
unsigned luidDeviceNodeMask; 
# 1664
size_t totalGlobalMem; 
# 1665
size_t sharedMemPerBlock; 
# 1666
int regsPerBlock; 
# 1667
int warpSize; 
# 1668
size_t memPitch; 
# 1669
int maxThreadsPerBlock; 
# 1670
int maxThreadsDim[3]; 
# 1671
int maxGridSize[3]; 
# 1672
int clockRate; 
# 1673
size_t totalConstMem; 
# 1674
int major; 
# 1675
int minor; 
# 1676
size_t textureAlignment; 
# 1677
size_t texturePitchAlignment; 
# 1678
int deviceOverlap; 
# 1679
int multiProcessorCount; 
# 1680
int kernelExecTimeoutEnabled; 
# 1681
int integrated; 
# 1682
int canMapHostMemory; 
# 1683
int computeMode; 
# 1684
int maxTexture1D; 
# 1685
int maxTexture1DMipmap; 
# 1686
int maxTexture1DLinear; 
# 1687
int maxTexture2D[2]; 
# 1688
int maxTexture2DMipmap[2]; 
# 1689
int maxTexture2DLinear[3]; 
# 1690
int maxTexture2DGather[2]; 
# 1691
int maxTexture3D[3]; 
# 1692
int maxTexture3DAlt[3]; 
# 1693
int maxTextureCubemap; 
# 1694
int maxTexture1DLayered[2]; 
# 1695
int maxTexture2DLayered[3]; 
# 1696
int maxTextureCubemapLayered[2]; 
# 1697
int maxSurface1D; 
# 1698
int maxSurface2D[2]; 
# 1699
int maxSurface3D[3]; 
# 1700
int maxSurface1DLayered[2]; 
# 1701
int maxSurface2DLayered[3]; 
# 1702
int maxSurfaceCubemap; 
# 1703
int maxSurfaceCubemapLayered[2]; 
# 1704
size_t surfaceAlignment; 
# 1705
int concurrentKernels; 
# 1706
int ECCEnabled; 
# 1707
int pciBusID; 
# 1708
int pciDeviceID; 
# 1709
int pciDomainID; 
# 1710
int tccDriver; 
# 1711
int asyncEngineCount; 
# 1712
int unifiedAddressing; 
# 1713
int memoryClockRate; 
# 1714
int memoryBusWidth; 
# 1715
int l2CacheSize; 
# 1716
int maxThreadsPerMultiProcessor; 
# 1717
int streamPrioritiesSupported; 
# 1718
int globalL1CacheSupported; 
# 1719
int localL1CacheSupported; 
# 1720
size_t sharedMemPerMultiprocessor; 
# 1721
int regsPerMultiprocessor; 
# 1722
int managedMemory; 
# 1723
int isMultiGpuBoard; 
# 1724
int multiGpuBoardGroupID; 
# 1725
int hostNativeAtomicSupported; 
# 1726
int singleToDoublePrecisionPerfRatio; 
# 1727
int pageableMemoryAccess; 
# 1728
int concurrentManagedAccess; 
# 1729
int computePreemptionSupported; 
# 1730
int canUseHostPointerForRegisteredMem; 
# 1731
int cooperativeLaunch; 
# 1732
int cooperativeMultiDeviceLaunch; 
# 1733
size_t sharedMemPerBlockOptin; 
# 1734
int pageableMemoryAccessUsesHostPageTables; 
# 1735
int directManagedMemAccessFromHost; 
# 1736
}; 
#endif
# 1829 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef 
# 1826
struct cudaIpcEventHandle_st { 
# 1828
char reserved[64]; 
# 1829
} cudaIpcEventHandle_t; 
#endif
# 1837 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef 
# 1834
struct cudaIpcMemHandle_st { 
# 1836
char reserved[64]; 
# 1837
} cudaIpcMemHandle_t; 
#endif
# 1842 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1842
enum cudaExternalMemoryHandleType { 
# 1846
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
# 1850
cudaExternalMemoryHandleTypeOpaqueWin32, 
# 1854
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
# 1858
cudaExternalMemoryHandleTypeD3D12Heap, 
# 1862
cudaExternalMemoryHandleTypeD3D12Resource, 
# 1866
cudaExternalMemoryHandleTypeD3D11Resource, 
# 1870
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
# 1874
cudaExternalMemoryHandleTypeNvSciBuf
# 1875
}; 
#endif
# 1917 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1917
struct cudaExternalMemoryHandleDesc { 
# 1921
cudaExternalMemoryHandleType type; 
# 1922
union { 
# 1928
int fd; 
# 1944 "/usr/local/cuda/include/driver_types.h" 3
struct { 
# 1948
void *handle; 
# 1953
const void *name; 
# 1954
} win32; 
# 1959
const void *nvSciBufObject; 
# 1960
} handle; 
# 1964
unsigned long long size; 
# 1968
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1969
}; 
#endif
# 1974 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1974
struct cudaExternalMemoryBufferDesc { 
# 1978
unsigned long long offset; 
# 1982
unsigned long long size; 
# 1986
unsigned flags; 
# 1987
}; 
#endif
# 1992 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 1992
struct cudaExternalMemoryMipmappedArrayDesc { 
# 1997
unsigned long long offset; 
# 2001
cudaChannelFormatDesc formatDesc; 
# 2005
cudaExtent extent; 
# 2010
unsigned flags; 
# 2014
unsigned numLevels; 
# 2015
}; 
#endif
# 2020 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2020
enum cudaExternalSemaphoreHandleType { 
# 2024
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
# 2028
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
# 2032
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
# 2036
cudaExternalSemaphoreHandleTypeD3D12Fence, 
# 2040
cudaExternalSemaphoreHandleTypeD3D11Fence, 
# 2044
cudaExternalSemaphoreHandleTypeNvSciSync, 
# 2048
cudaExternalSemaphoreHandleTypeKeyedMutex, 
# 2052
cudaExternalSemaphoreHandleTypeKeyedMutexKmt
# 2053
}; 
#endif
# 2058 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2058
struct cudaExternalSemaphoreHandleDesc { 
# 2062
cudaExternalSemaphoreHandleType type; 
# 2063
union { 
# 2068
int fd; 
# 2083 "/usr/local/cuda/include/driver_types.h" 3
struct { 
# 2087
void *handle; 
# 2092
const void *name; 
# 2093
} win32; 
# 2097
const void *nvSciSyncObj; 
# 2098
} handle; 
# 2102
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 2103
}; 
#endif
# 2108 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2108
struct cudaExternalSemaphoreSignalParams { 
# 2109
struct { 
# 2113
struct { 
# 2117
unsigned long long value; 
# 2118
} fence; 
# 2119
union { 
# 2124
void *fence; 
# 2125
unsigned long long reserved; 
# 2126
} nvSciSync; 
# 2130
struct { 
# 2134
unsigned long long key; 
# 2135
} keyedMutex; 
# 2136
} params; 
# 2147 "/usr/local/cuda/include/driver_types.h" 3
unsigned flags; 
# 2148
}; 
#endif
# 2153 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2153
struct cudaExternalSemaphoreWaitParams { 
# 2154
struct { 
# 2158
struct { 
# 2162
unsigned long long value; 
# 2163
} fence; 
# 2164
union { 
# 2169
void *fence; 
# 2170
unsigned long long reserved; 
# 2171
} nvSciSync; 
# 2175
struct { 
# 2179
unsigned long long key; 
# 2183
unsigned timeoutMs; 
# 2184
} keyedMutex; 
# 2185
} params; 
# 2196 "/usr/local/cuda/include/driver_types.h" 3
unsigned flags; 
# 2197
}; 
#endif
# 2209 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef cudaError 
# 2209
cudaError_t; 
#endif
# 2214 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef struct CUstream_st *
# 2214
cudaStream_t; 
#endif
# 2219 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef struct CUevent_st *
# 2219
cudaEvent_t; 
#endif
# 2224 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef cudaGraphicsResource *
# 2224
cudaGraphicsResource_t; 
#endif
# 2229 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef cudaOutputMode 
# 2229
cudaOutputMode_t; 
#endif
# 2234 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef struct CUexternalMemory_st *
# 2234
cudaExternalMemory_t; 
#endif
# 2239 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef struct CUexternalSemaphore_st *
# 2239
cudaExternalSemaphore_t; 
#endif
# 2244 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef struct CUgraph_st *
# 2244
cudaGraph_t; 
#endif
# 2249 "/usr/local/cuda/include/driver_types.h" 3
#if 0
typedef struct CUgraphNode_st *
# 2249
cudaGraphNode_t; 
#endif
# 2254 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2254
enum cudaCGScope { 
# 2255
cudaCGScopeInvalid, 
# 2256
cudaCGScopeGrid, 
# 2257
cudaCGScopeMultiGrid
# 2258
}; 
#endif
# 2263 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2263
struct cudaLaunchParams { 
# 2265
void *func; 
# 2266
dim3 gridDim; 
# 2267
dim3 blockDim; 
# 2268
void **args; 
# 2269
size_t sharedMem; 
# 2270
cudaStream_t stream; 
# 2271
}; 
#endif
# 2276 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2276
struct cudaKernelNodeParams { 
# 2277
void *func; 
# 2278
dim3 gridDim; 
# 2279
dim3 blockDim; 
# 2280
unsigned sharedMemBytes; 
# 2281
void **kernelParams; 
# 2282
void **extra; 
# 2283
}; 
#endif
# 2288 "/usr/local/cuda/include/driver_types.h" 3
#if 0
# 2288
enum cudaGraphNodeType { 
# 2289
cudaGraphNodeTypeKernel, 
# 2290
cudaGraphNodeTypeMemcpy, 
# 2291
cudaGraphNodeTypeMemset, 
# 2292
cudaGraphNodeTypeHost, 
# 2293
cudaGraphNodeTypeGraph, 
# 2294
cudaGraphNodeTypeEmpty, 
# 2295
cudaGraphNodeTypeCount
# 2296
}; 
#endif
# 2301 "/usr/local/cuda/include/driver_types.h" 3
typedef struct CUgraphExec_st *cudaGraphExec_t; 
# 2306
#if 0
# 2306
enum cudaGraphExecUpdateResult { 
# 2307
cudaGraphExecUpdateSuccess, 
# 2308
cudaGraphExecUpdateError, 
# 2309
cudaGraphExecUpdateErrorTopologyChanged, 
# 2310
cudaGraphExecUpdateErrorNodeTypeChanged, 
# 2311
cudaGraphExecUpdateErrorFunctionChanged, 
# 2312
cudaGraphExecUpdateErrorParametersChanged, 
# 2313
cudaGraphExecUpdateErrorNotSupported
# 2314
}; 
#endif
# 84 "/usr/local/cuda/include/surface_types.h" 3
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
# 94 "/usr/local/cuda/include/surface_types.h" 3
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
# 103 "/usr/local/cuda/include/surface_types.h" 3
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 114 "/usr/local/cuda/include/surface_types.h" 3
#if 0
typedef unsigned long long 
# 114
cudaSurfaceObject_t; 
#endif
# 84 "/usr/local/cuda/include/texture_types.h" 3
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
# 95 "/usr/local/cuda/include/texture_types.h" 3
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
# 104 "/usr/local/cuda/include/texture_types.h" 3
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
# 113 "/usr/local/cuda/include/texture_types.h" 3
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
# 161 "/usr/local/cuda/include/texture_types.h" 3
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
# 212 "/usr/local/cuda/include/texture_types.h" 3
#if 0
typedef unsigned long long 
# 212
cudaTextureObject_t; 
#endif
# 70 "/usr/local/cuda/include/library_types.h" 3
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
# 121 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
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
# 178 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern void *cudaGetParameterBuffer(size_t alignment, size_t size); 
# 206 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((unused)) extern void *cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 207
__attribute__((unused)) extern cudaError_t cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 208
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 226 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
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
# 245 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern "C" {
# 280 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceReset(); 
# 301 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSynchronize(); 
# 386 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 420 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 453 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 490 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 534 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 565 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 609 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 636 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 666 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 713 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 753 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 796 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 854 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 889 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 931 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadExit(); 
# 957 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSynchronize(); 
# 1006 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 1039 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1075 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1122 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1181 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetLastError(); 
# 1227 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaPeekAtLastError(); 
# 1243 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern const char *cudaGetErrorName(cudaError_t error); 
# 1259 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern const char *cudaGetErrorString(cudaError_t error); 
# 1288 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1559 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
# 1748 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1797 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
# 1837 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 1858 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 1895 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetDevice(int device); 
# 1916 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDevice(int * device); 
# 1947 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 2016 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 2062 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 2102 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 2134 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2180 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2207 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2232 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2263 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2289 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 2297
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2364 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2388 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2413 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2496 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2532 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
# 2583 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
# 2611 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
# 2649 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
# 2677 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaStreamGetCaptureInfo(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus, unsigned long long * pId); 
# 2714 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 2751 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 2790 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 2821 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 2851 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 2878 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 2921 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 3098 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
# 3152 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
# 3211 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
# 3234 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
# 3365 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
# 3430 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3504 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
# 3526 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
# 3591 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 3648 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 3747 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 3796 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 3851 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 3886 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 3925 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 3949 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 3973 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaSetDoubleForHost(double * d); 
# 4039 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
# 4094 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 4138 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 4258 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 4289 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 4322 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 4365 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 4411 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 4440 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFree(void * devPtr); 
# 4463 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeHost(void * ptr); 
# 4486 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 4509 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 4575 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 4659 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 4682 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostUnregister(void * ptr); 
# 4727 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 4749 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 4788 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 4927 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 5066 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 5095 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 5200 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 5231 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 5349 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 5375 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 5397 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 5423 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 5466 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 5501 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 5549 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 5598 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 5647 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 5694 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 5737 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 5780 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 5836 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5871 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 5933 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5990 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6046 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6097 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6148 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6177 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 6211 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 6255 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 6291 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 6332 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 6383 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 6411 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 6438 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 6508 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 6624 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 6683 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 6722 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 6782 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 6824 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 6867 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 6918 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 6968 "/usr/local/cuda/include/cuda_runtime_api.h" 3
__attribute((deprecated)) extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 7134 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 7175 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 7217 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 7239 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 7302 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 7337 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 7376 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 7411 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 7443 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 7481 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 7510 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 7581 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = ((2147483647) * 2U) + 1U); 
# 7640 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
# 7678 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 7718 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
# 7744 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaUnbindTexture(const textureReference * texref); 
# 7773 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
# 7803 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
# 7848 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 7873 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
# 7908 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 7938 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 8153 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 8172 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 8192 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 8212 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 8233 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 8278 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 8297 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 8316 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 8350 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 8375 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 8422 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
# 8519 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
# 8552 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
# 8577 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 8621 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
# 8644 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
# 8667 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 8709 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
# 8732 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
# 8755 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 8796 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
# 8819 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
# 8842 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 8880 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
# 8904 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
# 8941 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
# 8968 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
# 8996 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
# 9027 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
# 9058 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
# 9089 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
# 9123 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
# 9154 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
# 9186 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
# 9217 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 9248 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
# 9274 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphDestroyNode(cudaGraphNode_t node); 
# 9310 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
# 9344 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
# 9385 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
# 9426 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
# 9459 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
# 9534 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t * hErrorNode_out, cudaGraphExecUpdateResult * updateResult_out); 
# 9559 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
# 9580 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
# 9600 "/usr/local/cuda/include/cuda_runtime_api.h" 3
extern cudaError_t cudaGraphDestroy(cudaGraph_t graph); 
# 9605
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 9850 "/usr/local/cuda/include/cuda_runtime_api.h" 3
}
# 104 "/usr/local/cuda/include/channel_descriptor.h" 3
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
# 376 "/usr/local/cuda/include/channel_descriptor.h" 3
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
# 79 "/usr/local/cuda/include/driver_functions.h" 3
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
# 106 "/usr/local/cuda/include/driver_functions.h" 3
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
# 132 "/usr/local/cuda/include/driver_functions.h" 3
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
# 73 "/usr/local/cuda/include/vector_functions.h" 3
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
# 73 "/usr/local/cuda/include/vector_functions.hpp" 3
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
# 80 "/usr/local/cuda/include/crt/common_functions.h" 3
extern "C" {
# 83
extern clock_t clock() throw(); 
# 88
extern void *memset(void *, int, size_t) throw(); 
# 89
extern void *memcpy(void *, const void *, size_t) throw(); 
# 91
}
# 108 "/usr/local/cuda/include/crt/math_functions.h" 3
extern "C" {
# 192 "/usr/local/cuda/include/crt/math_functions.h" 3
extern int abs(int) throw(); 
# 193
extern long labs(long) throw(); 
# 194
extern long long llabs(long long) throw(); 
# 244 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double fabs(double x) throw(); 
# 285 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float fabsf(float x) throw(); 
# 289
extern inline int min(int, int); 
# 291
extern inline unsigned umin(unsigned, unsigned); 
# 292
extern inline long long llmin(long long, long long); 
# 293
extern inline unsigned long long ullmin(unsigned long long, unsigned long long); 
# 314 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float fminf(float x, float y) throw(); 
# 334 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double fmin(double x, double y) throw(); 
# 341
extern inline int max(int, int); 
# 343
extern inline unsigned umax(unsigned, unsigned); 
# 344
extern inline long long llmax(long long, long long); 
# 345
extern inline unsigned long long ullmax(unsigned long long, unsigned long long); 
# 366 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float fmaxf(float x, float y) throw(); 
# 386 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double fmax(double, double) throw(); 
# 430 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double sin(double x) throw(); 
# 463 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double cos(double x) throw(); 
# 482 "/usr/local/cuda/include/crt/math_functions.h" 3
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 498 "/usr/local/cuda/include/crt/math_functions.h" 3
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 543 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double tan(double x) throw(); 
# 612 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double sqrt(double x) throw(); 
# 684 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double rsqrt(double x); 
# 754 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float rsqrtf(float x); 
# 810 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double log2(double x) throw(); 
# 835 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double exp2(double x) throw(); 
# 860 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float exp2f(float x) throw(); 
# 887 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double exp10(double x) throw(); 
# 910 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float exp10f(float x) throw(); 
# 956 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double expm1(double x) throw(); 
# 1001 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float expm1f(float x) throw(); 
# 1056 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float log2f(float x) throw(); 
# 1110 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double log10(double x) throw(); 
# 1181 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double log(double x) throw(); 
# 1275 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double log1p(double x) throw(); 
# 1372 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float log1pf(float x) throw(); 
# 1436 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double floor(double x) throw(); 
# 1475 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double exp(double x) throw(); 
# 1506 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double cosh(double x) throw(); 
# 1536 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double sinh(double x) throw(); 
# 1566 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double tanh(double x) throw(); 
# 1601 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double acosh(double x) throw(); 
# 1639 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float acoshf(float x) throw(); 
# 1655 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double asinh(double x) throw(); 
# 1671 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float asinhf(float x) throw(); 
# 1725 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double atanh(double x) throw(); 
# 1779 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float atanhf(float x) throw(); 
# 1838 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double ldexp(double x, int exp) throw(); 
# 1894 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float ldexpf(float x, int exp) throw(); 
# 1946 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double logb(double x) throw(); 
# 2001 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float logbf(float x) throw(); 
# 2031 "/usr/local/cuda/include/crt/math_functions.h" 3
extern int ilogb(double x) throw(); 
# 2061 "/usr/local/cuda/include/crt/math_functions.h" 3
extern int ilogbf(float x) throw(); 
# 2137 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double scalbn(double x, int n) throw(); 
# 2213 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float scalbnf(float x, int n) throw(); 
# 2289 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double scalbln(double x, long n) throw(); 
# 2365 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float scalblnf(float x, long n) throw(); 
# 2443 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double frexp(double x, int * nptr) throw(); 
# 2518 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float frexpf(float x, int * nptr) throw(); 
# 2532 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double round(double x) throw(); 
# 2549 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float roundf(float x) throw(); 
# 2567 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long lround(double x) throw(); 
# 2585 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long lroundf(float x) throw(); 
# 2603 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long long llround(double x) throw(); 
# 2621 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long long llroundf(float x) throw(); 
# 2673 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float rintf(float x) throw(); 
# 2690 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long lrint(double x) throw(); 
# 2707 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long lrintf(float x) throw(); 
# 2724 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long long llrint(double x) throw(); 
# 2741 "/usr/local/cuda/include/crt/math_functions.h" 3
extern long long llrintf(float x) throw(); 
# 2794 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double nearbyint(double x) throw(); 
# 2847 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float nearbyintf(float x) throw(); 
# 2909 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double ceil(double x) throw(); 
# 2921 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double trunc(double x) throw(); 
# 2936 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float truncf(float x) throw(); 
# 2962 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double fdim(double x, double y) throw(); 
# 2988 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float fdimf(float x, float y) throw(); 
# 3024 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double atan2(double y, double x) throw(); 
# 3055 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double atan(double x) throw(); 
# 3078 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double acos(double x) throw(); 
# 3110 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double asin(double x) throw(); 
# 3156 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double hypot(double x, double y) throw(); 
# 3208 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double rhypot(double x, double y) throw(); 
# 3254 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float hypotf(float x, float y) throw(); 
# 3306 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float rhypotf(float x, float y) throw(); 
# 3350 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double norm3d(double a, double b, double c) throw(); 
# 3401 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double rnorm3d(double a, double b, double c) throw(); 
# 3450 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double norm4d(double a, double b, double c, double d) throw(); 
# 3506 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double rnorm4d(double a, double b, double c, double d) throw(); 
# 3551 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double norm(int dim, const double * t) throw(); 
# 3602 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double rnorm(int dim, const double * t) throw(); 
# 3654 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float rnormf(int dim, const float * a) throw(); 
# 3698 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float normf(int dim, const float * a) throw(); 
# 3743 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float norm3df(float a, float b, float c) throw(); 
# 3794 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float rnorm3df(float a, float b, float c) throw(); 
# 3843 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float norm4df(float a, float b, float c, float d) throw(); 
# 3899 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float rnorm4df(float a, float b, float c, float d) throw(); 
# 3986 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double cbrt(double x) throw(); 
# 4072 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float cbrtf(float x) throw(); 
# 4127 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double rcbrt(double x); 
# 4177 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float rcbrtf(float x); 
# 4237 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double sinpi(double x); 
# 4297 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float sinpif(float x); 
# 4349 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double cospi(double x); 
# 4401 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float cospif(float x); 
# 4431 "/usr/local/cuda/include/crt/math_functions.h" 3
extern void sincospi(double x, double * sptr, double * cptr); 
# 4461 "/usr/local/cuda/include/crt/math_functions.h" 3
extern void sincospif(float x, float * sptr, float * cptr); 
# 4773 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double pow(double x, double y) throw(); 
# 4829 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double modf(double x, double * iptr) throw(); 
# 4888 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double fmod(double x, double y) throw(); 
# 4974 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double remainder(double x, double y) throw(); 
# 5064 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float remainderf(float x, float y) throw(); 
# 5118 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double remquo(double x, double y, int * quo) throw(); 
# 5172 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float remquof(float x, float y, int * quo) throw(); 
# 5213 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double j0(double x) throw(); 
# 5255 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float j0f(float x) throw(); 
# 5316 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double j1(double x) throw(); 
# 5377 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float j1f(float x) throw(); 
# 5420 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double jn(int n, double x) throw(); 
# 5463 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float jnf(int n, float x) throw(); 
# 5515 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double y0(double x) throw(); 
# 5567 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float y0f(float x) throw(); 
# 5619 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double y1(double x) throw(); 
# 5671 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float y1f(float x) throw(); 
# 5724 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double yn(int n, double x) throw(); 
# 5777 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float ynf(int n, float x) throw(); 
# 5804 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double cyl_bessel_i0(double x) throw(); 
# 5830 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float cyl_bessel_i0f(float x) throw(); 
# 5857 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double cyl_bessel_i1(double x) throw(); 
# 5883 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float cyl_bessel_i1f(float x) throw(); 
# 5966 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double erf(double x) throw(); 
# 6048 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float erff(float x) throw(); 
# 6112 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double erfinv(double y); 
# 6169 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float erfinvf(float y); 
# 6208 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double erfc(double x) throw(); 
# 6246 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float erfcf(float x) throw(); 
# 6374 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double lgamma(double x) throw(); 
# 6437 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double erfcinv(double y); 
# 6493 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float erfcinvf(float y); 
# 6551 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double normcdfinv(double y); 
# 6609 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float normcdfinvf(float y); 
# 6652 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double normcdf(double y); 
# 6695 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float normcdff(float y); 
# 6770 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double erfcx(double x); 
# 6845 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float erfcxf(float x); 
# 6979 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float lgammaf(float x) throw(); 
# 7088 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double tgamma(double x) throw(); 
# 7197 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float tgammaf(float x) throw(); 
# 7210 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double copysign(double x, double y) throw(); 
# 7223 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float copysignf(float x, float y) throw(); 
# 7260 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double nextafter(double x, double y) throw(); 
# 7297 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float nextafterf(float x, float y) throw(); 
# 7313 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double nan(const char * tagp) throw(); 
# 7329 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float nanf(const char * tagp) throw(); 
# 7336
extern int __isinff(float) throw(); 
# 7337
extern int __isnanf(float) throw(); 
# 7347 "/usr/local/cuda/include/crt/math_functions.h" 3
extern int __finite(double) throw(); 
# 7348
extern int __finitef(float) throw(); 
# 7349
extern int __signbit(double) throw(); 
# 7350
extern int __isnan(double) throw(); 
# 7351
extern int __isinf(double) throw(); 
# 7354
extern int __signbitf(float) throw(); 
# 7513 "/usr/local/cuda/include/crt/math_functions.h" 3
extern double fma(double x, double y, double z) throw(); 
# 7671 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float fmaf(float x, float y, float z) throw(); 
# 7682 "/usr/local/cuda/include/crt/math_functions.h" 3
extern int __signbitl(long double) throw(); 
# 7688
extern int __finitel(long double) throw(); 
# 7689
extern int __isinfl(long double) throw(); 
# 7690
extern int __isnanl(long double) throw(); 
# 7740 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float acosf(float x) throw(); 
# 7780 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float asinf(float x) throw(); 
# 7820 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float atanf(float x) throw(); 
# 7853 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float atan2f(float y, float x) throw(); 
# 7877 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float cosf(float x) throw(); 
# 7919 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float sinf(float x) throw(); 
# 7961 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float tanf(float x) throw(); 
# 7985 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float coshf(float x) throw(); 
# 8026 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float sinhf(float x) throw(); 
# 8056 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float tanhf(float x) throw(); 
# 8107 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float logf(float x) throw(); 
# 8157 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float expf(float x) throw(); 
# 8208 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float log10f(float x) throw(); 
# 8263 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float modff(float x, float * iptr) throw(); 
# 8571 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float powf(float x, float y) throw(); 
# 8640 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float sqrtf(float x) throw(); 
# 8699 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float ceilf(float x) throw(); 
# 8760 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float floorf(float x) throw(); 
# 8819 "/usr/local/cuda/include/crt/math_functions.h" 3
extern float fmodf(float x, float y) throw(); 
# 8834 "/usr/local/cuda/include/crt/math_functions.h" 3
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
# 8962 "/usr/local/cuda/include/crt/math_functions.h" 3
__attribute((always_inline)) inline int signbit(float x); 
# 8966
__attribute((always_inline)) inline int signbit(double x); 
# 8968
__attribute((always_inline)) inline int signbit(long double x); 
# 8970
__attribute((always_inline)) inline int isfinite(float x); 
# 8974
__attribute((always_inline)) inline int isfinite(double x); 
# 8976
__attribute((always_inline)) inline int isfinite(long double x); 
# 8983
__attribute((always_inline)) inline int isnan(float x); 
# 8991
extern "C" __attribute((always_inline)) inline int isnan(double x) throw(); 
# 8996
__attribute((always_inline)) inline int isnan(long double x); 
# 9004
__attribute((always_inline)) inline int isinf(float x); 
# 9013 "/usr/local/cuda/include/crt/math_functions.h" 3
extern "C" __attribute((always_inline)) inline int isinf(double x) throw(); 
# 9018
__attribute((always_inline)) inline int isinf(long double x); 
# 9076 "/usr/local/cuda/include/crt/math_functions.h" 3
namespace std { 
# 9078
template< class T> extern T __pow_helper(T, int); 
# 9079
template< class T> extern T __cmath_power(T, unsigned); 
# 9080
}
# 9082
using std::abs;
# 9083
using std::fabs;
# 9084
using std::ceil;
# 9085
using std::floor;
# 9086
using std::sqrt;
# 9088
using std::pow;
# 9090
using std::log;
# 9091
using std::log10;
# 9092
using std::fmod;
# 9093
using std::modf;
# 9094
using std::exp;
# 9095
using std::frexp;
# 9096
using std::ldexp;
# 9097
using std::asin;
# 9098
using std::sin;
# 9099
using std::sinh;
# 9100
using std::acos;
# 9101
using std::cos;
# 9102
using std::cosh;
# 9103
using std::atan;
# 9104
using std::atan2;
# 9105
using std::tan;
# 9106
using std::tanh;
# 9471 "/usr/local/cuda/include/crt/math_functions.h" 3
namespace std { 
# 9480 "/usr/local/cuda/include/crt/math_functions.h" 3
extern inline long long abs(long long); 
# 9490 "/usr/local/cuda/include/crt/math_functions.h" 3
extern inline long abs(long); 
# 9491
extern inline float abs(float); 
# 9492
extern inline double abs(double); 
# 9493
extern inline float fabs(float); 
# 9494
extern inline float ceil(float); 
# 9495
extern inline float floor(float); 
# 9496
extern inline float sqrt(float); 
# 9497
extern inline float pow(float, float); 
# 9506 "/usr/local/cuda/include/crt/math_functions.h" 3
extern inline float pow(float, int); 
# 9507
extern inline double pow(double, int); 
# 9512
extern inline float log(float); 
# 9513
extern inline float log10(float); 
# 9514
extern inline float fmod(float, float); 
# 9515
extern inline float modf(float, float *); 
# 9516
extern inline float exp(float); 
# 9517
extern inline float frexp(float, int *); 
# 9518
extern inline float ldexp(float, int); 
# 9519
extern inline float asin(float); 
# 9520
extern inline float sin(float); 
# 9521
extern inline float sinh(float); 
# 9522
extern inline float acos(float); 
# 9523
extern inline float cos(float); 
# 9524
extern inline float cosh(float); 
# 9525
extern inline float atan(float); 
# 9526
extern inline float atan2(float, float); 
# 9527
extern inline float tan(float); 
# 9528
extern inline float tanh(float); 
# 9602 "/usr/local/cuda/include/crt/math_functions.h" 3
}
# 9739 "/usr/local/cuda/include/crt/math_functions.h" 3
static inline float logb(float a); 
# 9741
static inline int ilogb(float a); 
# 9743
static inline float scalbn(float a, int b); 
# 9745
static inline float scalbln(float a, long b); 
# 9747
static inline float exp2(float a); 
# 9749
static inline float expm1(float a); 
# 9751
static inline float log2(float a); 
# 9753
static inline float log1p(float a); 
# 9755
static inline float acosh(float a); 
# 9757
static inline float asinh(float a); 
# 9759
static inline float atanh(float a); 
# 9761
static inline float hypot(float a, float b); 
# 9763
static inline float cbrt(float a); 
# 9765
static inline float erf(float a); 
# 9767
static inline float erfc(float a); 
# 9769
static inline float lgamma(float a); 
# 9771
static inline float tgamma(float a); 
# 9773
static inline float copysign(float a, float b); 
# 9775
static inline float nextafter(float a, float b); 
# 9777
static inline float remainder(float a, float b); 
# 9779
static inline float remquo(float a, float b, int * quo); 
# 9781
static inline float round(float a); 
# 9783
static inline long lround(float a); 
# 9785
static inline long long llround(float a); 
# 9787
static inline float trunc(float a); 
# 9789
static inline float rint(float a); 
# 9791
static inline long lrint(float a); 
# 9793
static inline long long llrint(float a); 
# 9795
static inline float nearbyint(float a); 
# 9797
static inline float fdim(float a, float b); 
# 9799
static inline float fma(float a, float b, float c); 
# 9801
static inline float fmax(float a, float b); 
# 9803
static inline float fmin(float a, float b); 
# 9842 "/usr/local/cuda/include/crt/math_functions.h" 3
static inline float exp10(float a); 
# 9844
static inline float rsqrt(float a); 
# 9846
static inline float rcbrt(float a); 
# 9848
static inline float sinpi(float a); 
# 9850
static inline float cospi(float a); 
# 9852
static inline void sincospi(float a, float * sptr, float * cptr); 
# 9854
static inline void sincos(float a, float * sptr, float * cptr); 
# 9856
static inline float j0(float a); 
# 9858
static inline float j1(float a); 
# 9860
static inline float jn(int n, float a); 
# 9862
static inline float y0(float a); 
# 9864
static inline float y1(float a); 
# 9866
static inline float yn(int n, float a); 
# 9868
static inline float cyl_bessel_i0(float a); 
# 9870
static inline float cyl_bessel_i1(float a); 
# 9872
static inline float erfinv(float a); 
# 9874
static inline float erfcinv(float a); 
# 9876
static inline float normcdfinv(float a); 
# 9878
static inline float normcdf(float a); 
# 9880
static inline float erfcx(float a); 
# 9882
static inline double copysign(double a, float b); 
# 9884
static inline double copysign(float a, double b); 
# 9886
static inline unsigned min(unsigned a, unsigned b); 
# 9888
static inline unsigned min(int a, unsigned b); 
# 9890
static inline unsigned min(unsigned a, int b); 
# 9892
static inline long min(long a, long b); 
# 9894
static inline unsigned long min(unsigned long a, unsigned long b); 
# 9896
static inline unsigned long min(long a, unsigned long b); 
# 9898
static inline unsigned long min(unsigned long a, long b); 
# 9900
static inline long long min(long long a, long long b); 
# 9902
static inline unsigned long long min(unsigned long long a, unsigned long long b); 
# 9904
static inline unsigned long long min(long long a, unsigned long long b); 
# 9906
static inline unsigned long long min(unsigned long long a, long long b); 
# 9908
static inline float min(float a, float b); 
# 9910
static inline double min(double a, double b); 
# 9912
static inline double min(float a, double b); 
# 9914
static inline double min(double a, float b); 
# 9916
static inline unsigned max(unsigned a, unsigned b); 
# 9918
static inline unsigned max(int a, unsigned b); 
# 9920
static inline unsigned max(unsigned a, int b); 
# 9922
static inline long max(long a, long b); 
# 9924
static inline unsigned long max(unsigned long a, unsigned long b); 
# 9926
static inline unsigned long max(long a, unsigned long b); 
# 9928
static inline unsigned long max(unsigned long a, long b); 
# 9930
static inline long long max(long long a, long long b); 
# 9932
static inline unsigned long long max(unsigned long long a, unsigned long long b); 
# 9934
static inline unsigned long long max(long long a, unsigned long long b); 
# 9936
static inline unsigned long long max(unsigned long long a, long long b); 
# 9938
static inline float max(float a, float b); 
# 9940
static inline double max(double a, double b); 
# 9942
static inline double max(float a, double b); 
# 9944
static inline double max(double a, float b); 
# 327 "/usr/local/cuda/include/crt/math_functions.hpp" 3
__attribute((always_inline)) inline int signbit(float x) { return __signbitf(x); } 
# 331
__attribute((always_inline)) inline int signbit(double x) { return __signbit(x); } 
# 333
__attribute((always_inline)) inline int signbit(long double x) { return __signbitl(x); } 
# 344 "/usr/local/cuda/include/crt/math_functions.hpp" 3
__attribute((always_inline)) inline int isfinite(float x) { return __finitef(x); } 
# 359 "/usr/local/cuda/include/crt/math_functions.hpp" 3
__attribute((always_inline)) inline int isfinite(double x) { return __finite(x); } 
# 372 "/usr/local/cuda/include/crt/math_functions.hpp" 3
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
# 585 "/usr/local/cuda/include/crt/math_functions.hpp" 3
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
# 1108 "/usr/local/cuda/include/crt/math_functions.hpp" 3
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
# 74 "/usr/local/cuda/include/cuda_surface_types.h" 3
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
# 74 "/usr/local/cuda/include/cuda_texture_types.h" 3
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
# 89 "/usr/local/cuda/include/crt/device_functions.h" 3
extern "C" {
# 3217 "/usr/local/cuda/include/crt/device_functions.h" 3
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
# 90 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 95 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 100 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 105 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 110 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 115 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 120 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 125 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 130 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 135 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 140 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 145 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 149 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 154 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 159 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 164 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 172 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 180 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 188 "/usr/local/cuda/include/crt/device_functions.hpp" 3
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
# 106 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 120 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 120
{ } 
#endif
# 122 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 122
{ } 
#endif
# 124 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 128
{ } 
#endif
# 130 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 130
{ } 
#endif
# 132 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 132
{ } 
#endif
# 134 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 134
{ } 
#endif
# 136 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 136
{ } 
#endif
# 138 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 138
{ } 
#endif
# 140 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 140
{ } 
#endif
# 142 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 144
{ } 
#endif
# 146 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 146
{ } 
#endif
# 171 "/usr/local/cuda/include/device_atomic_functions.h" 3
extern "C" {
# 180
}
# 189 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 189
{ } 
#endif
# 191 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 193
{ } 
#endif
# 195 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 195
{ } 
#endif
# 197 "/usr/local/cuda/include/device_atomic_functions.h" 3
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 197
{ } 
#endif
# 87 "/usr/local/cuda/include/crt/device_double_functions.h" 3
extern "C" {
# 1139 "/usr/local/cuda/include/crt/device_double_functions.h" 3
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
# 93 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 101 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 109 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 117 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 125 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 133 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 141 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 149 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 157 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 165 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 173 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 178 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 183 "/usr/local/cuda/include/crt/device_double_functions.hpp" 3
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
# 89 "/usr/local/cuda/include/sm_20_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 89
{ } 
#endif
# 100 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 104 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 104
{ } 
#endif
# 106 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 116 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 116
{ } 
#endif
# 118 "/usr/local/cuda/include/sm_32_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 118
{ } 
#endif
# 303 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 303
{ } 
#endif
# 306 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 306
{ } 
#endif
# 309 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 309
{ } 
#endif
# 312 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 312
{ } 
#endif
# 315 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 315
{ } 
#endif
# 318 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 318
{ } 
#endif
# 321 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 321
{ } 
#endif
# 324 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 324
{ } 
#endif
# 327 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 327
{ } 
#endif
# 330 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 330
{ } 
#endif
# 333 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 333
{ } 
#endif
# 336 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 336
{ } 
#endif
# 339 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 339
{ } 
#endif
# 342 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 342
{ } 
#endif
# 345 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 345
{ } 
#endif
# 348 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 348
{ } 
#endif
# 351 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 351
{ } 
#endif
# 354 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 354
{ } 
#endif
# 357 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 357
{ } 
#endif
# 360 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 360
{ } 
#endif
# 363 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 363
{ } 
#endif
# 366 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 366
{ } 
#endif
# 369 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 369
{ } 
#endif
# 372 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 372
{ } 
#endif
# 375 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 375
{ } 
#endif
# 378 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 378
{ } 
#endif
# 381 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 381
{ } 
#endif
# 384 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 384
{ } 
#endif
# 387 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 387
{ } 
#endif
# 390 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 390
{ } 
#endif
# 393 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 393
{ } 
#endif
# 396 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 396
{ } 
#endif
# 399 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 399
{ } 
#endif
# 402 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 402
{ } 
#endif
# 405 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 405
{ } 
#endif
# 408 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 408
{ } 
#endif
# 411 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 411
{ } 
#endif
# 414 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 414
{ } 
#endif
# 417 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 417
{ } 
#endif
# 420 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 420
{ } 
#endif
# 423 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 423
{ } 
#endif
# 426 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 426
{ } 
#endif
# 429 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 429
{ } 
#endif
# 432 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 432
{ } 
#endif
# 435 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 435
{ } 
#endif
# 438 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 439
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 439
{ } 
#endif
# 442 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 443
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 443
{ } 
#endif
# 446 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 447
compare, unsigned long long 
# 448
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 448
{ } 
#endif
# 451 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 452
compare, unsigned long long 
# 453
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 453
{ } 
#endif
# 456 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 456
{ } 
#endif
# 459 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 459
{ } 
#endif
# 462 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 462
{ } 
#endif
# 465 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 465
{ } 
#endif
# 468 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 468
{ } 
#endif
# 471 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 471
{ } 
#endif
# 474 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 474
{ } 
#endif
# 477 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 477
{ } 
#endif
# 480 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 480
{ } 
#endif
# 483 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 483
{ } 
#endif
# 486 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 486
{ } 
#endif
# 489 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 489
{ } 
#endif
# 492 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 492
{ } 
#endif
# 495 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 495
{ } 
#endif
# 498 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 498
{ } 
#endif
# 501 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 501
{ } 
#endif
# 504 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 504
{ } 
#endif
# 507 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 507
{ } 
#endif
# 510 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 510
{ } 
#endif
# 513 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 513
{ } 
#endif
# 516 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 516
{ } 
#endif
# 519 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 519
{ } 
#endif
# 522 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 522
{ } 
#endif
# 525 "/usr/local/cuda/include/sm_60_atomic_functions.h" 3
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 525
{ } 
#endif
# 90 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
extern "C" {
# 1475 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
}
# 1482
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1482
{ } 
#endif
# 1484 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1484
{ } 
#endif
# 1486 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1486
{ } 
#endif
# 1488 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1488
{ } 
#endif
# 1493 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1493
{ } 
#endif
# 1494 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1494
{ } 
#endif
# 1495 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1495
{ } 
#endif
# 1496 "/usr/local/cuda/include/sm_20_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1496
{ } 
#endif
# 102 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 110
{ } 
#endif
# 119 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 121
{ } 
#endif
# 122 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 122
{ } 
#endif
# 123 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 124
{ } 
#endif
# 125 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 130
{ } 
#endif
# 133 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 148 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 158 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 158
{ } 
#endif
# 159 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 159
{ } 
#endif
# 162 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 177 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 187 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/usr/local/cuda/include/sm_30_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 87 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 87
{ } 
#endif
# 88 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 88
{ } 
#endif
# 90 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 91 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 116 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 116
{ } 
#endif
# 117 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 118 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 118
{ } 
#endif
# 119 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 123 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 127
{ } 
#endif
# 128 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 139 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 140 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 140
{ } 
#endif
# 141 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 151 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 152 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 152
{ } 
#endif
# 153 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 155
{ } 
#endif
# 159 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 159
{ } 
#endif
# 160 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 160
{ } 
#endif
# 162 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 162
{ } 
#endif
# 163 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 176
{ } 
#endif
# 177 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 187 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 188
{ } 
#endif
# 189 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 191
{ } 
#endif
# 195 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 195
{ } 
#endif
# 196 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 196
{ } 
#endif
# 198 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 199
{ } 
#endif
# 200 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 211 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 212 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 212
{ } 
#endif
# 213 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 215
{ } 
#endif
# 216 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 223 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 224 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 224
{ } 
#endif
# 225 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 227 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 227
{ } 
#endif
# 244 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 244
{ } 
#endif
# 256 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 256
{ } 
#endif
# 269 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 269
{ } 
#endif
# 281 "/usr/local/cuda/include/sm_32_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 281
{ } 
#endif
# 89 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 93
{ } 
#endif
# 95 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 96
{ } 
#endif
# 98 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 99
{ } 
#endif
# 106 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda/include/sm_61_intrinsics.h" 3
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 110
{ } 
#endif
# 93 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 103
{ } 
#endif
# 104 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 104
{ } 
#endif
# 105 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/local/cuda/include/crt/sm_70_rt.h" 3
__attribute__((unused)) static inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/usr/local/cuda/include/surface_functions.h" 3
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
# 122 "/usr/local/cuda/include/surface_functions.h" 3
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
# 132 "/usr/local/cuda/include/surface_functions.h" 3
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
# 141 "/usr/local/cuda/include/surface_functions.h" 3
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
# 149 "/usr/local/cuda/include/surface_functions.h" 3
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
# 159 "/usr/local/cuda/include/surface_functions.h" 3
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
# 168 "/usr/local/cuda/include/surface_functions.h" 3
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
# 176 "/usr/local/cuda/include/surface_functions.h" 3
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
# 186 "/usr/local/cuda/include/surface_functions.h" 3
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
# 196 "/usr/local/cuda/include/surface_functions.h" 3
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
# 204 "/usr/local/cuda/include/surface_functions.h" 3
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
# 215 "/usr/local/cuda/include/surface_functions.h" 3
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
# 224 "/usr/local/cuda/include/surface_functions.h" 3
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
# 232 "/usr/local/cuda/include/surface_functions.h" 3
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
# 243 "/usr/local/cuda/include/surface_functions.h" 3
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
# 252 "/usr/local/cuda/include/surface_functions.h" 3
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
# 260 "/usr/local/cuda/include/surface_functions.h" 3
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
# 271 "/usr/local/cuda/include/surface_functions.h" 3
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
# 280 "/usr/local/cuda/include/surface_functions.h" 3
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
# 288 "/usr/local/cuda/include/surface_functions.h" 3
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
# 298 "/usr/local/cuda/include/surface_functions.h" 3
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
# 307 "/usr/local/cuda/include/surface_functions.h" 3
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
# 315 "/usr/local/cuda/include/surface_functions.h" 3
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
# 325 "/usr/local/cuda/include/surface_functions.h" 3
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
# 333 "/usr/local/cuda/include/surface_functions.h" 3
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
# 342 "/usr/local/cuda/include/surface_functions.h" 3
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
# 350 "/usr/local/cuda/include/surface_functions.h" 3
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
# 359 "/usr/local/cuda/include/surface_functions.h" 3
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
# 367 "/usr/local/cuda/include/surface_functions.h" 3
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
# 376 "/usr/local/cuda/include/surface_functions.h" 3
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
# 384 "/usr/local/cuda/include/surface_functions.h" 3
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
# 393 "/usr/local/cuda/include/surface_functions.h" 3
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
# 401 "/usr/local/cuda/include/surface_functions.h" 3
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
# 411 "/usr/local/cuda/include/surface_functions.h" 3
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
# 419 "/usr/local/cuda/include/surface_functions.h" 3
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
# 66 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 107 "/usr/local/cuda/include/texture_fetch_functions.h" 3
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
# 108
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
# 109
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
# 110
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
# 113
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
# 125 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 135 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 168 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 178 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 191 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 202 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 215 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 225 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 238 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 248 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 260 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 270 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 282 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 292 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 304 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 358 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 394 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 404 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 416 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 426 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 438 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 448 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 460 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 470 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 482 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 492 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 504 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 514 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 527 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 537 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 550 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 560 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 573 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 583 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 596 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 606 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 619 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 629 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 642 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 652 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 664 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 674 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 686 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 696 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 708 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 718 "/usr/local/cuda/include/texture_fetch_functions.h" 3
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
# 60 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 96 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 111 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 121 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 130 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 141 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 149 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 159 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 167 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 177 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 185 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 195 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 203 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 214 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 223 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 234 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 242 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 252 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 260 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 272 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 280 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 291 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 299 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 310 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 318 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 329 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 337 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 348 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 356 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 367 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 375 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 386 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 394 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 404 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 412 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 422 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 430 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 441 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 450 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 461 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 469 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 480 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 488 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 499 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 507 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 518 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 526 "/usr/local/cuda/include/texture_indirect_functions.h" 3
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
# 59 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 107 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 117 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 125 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 136 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 144 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 154 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 162 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 172 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 180 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 190 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 198 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 208 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 216 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 226 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 234 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 242 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 250 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 258 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 266 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 274 "/usr/local/cuda/include/surface_indirect_functions.h" 3
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
# 3296 "/usr/local/cuda/include/crt/device_functions.h" 3
extern "C" unsigned __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
# 68 "/usr/local/cuda/include/device_launch_parameters.h" 3
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
# 199 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 261 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 305 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 370 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 499 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 589 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 667 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 721 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 769 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 823 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 859 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 891 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 935 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 981 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1038 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1097 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1140 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1179 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1221 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1260 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1303 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1339 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1391 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1436 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1487 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1556 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1751 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1796 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1855 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1896 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1941 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 1973 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 2004 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 2025 "/usr/local/cuda/include/cuda_runtime.h" 3
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
# 20 ".././mpi_s/mpi.h"
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
# 56 ".././mpi_s/mpi.h"
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
# 92 ".././mpi_s/mpi.h"
enum reserved_communicators { MPI_COMM_WORLD, MPI_COMM_SELF}; 
# 109 ".././mpi_s/mpi.h"
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
# 208 ".././mpi_s/mpi.h"
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
# 21 ".././target/target_cuda.h"
typedef cudaFuncCache tdpFuncCache; 
# 28
typedef cudaMemcpyKind tdpMemcpyKind; 
# 29
typedef cudaDeviceAttr tdpDeviceAttr; 
# 46 ".././target/target_cuda.h"
typedef cudaStream_t tdpStream_t; 
# 47
typedef cudaError_t tdpError_t; 
# 36 ".././target/target.h"
tdpError_t tdpDeviceSetCacheConfig(tdpFuncCache cacheConfig); 
# 37
tdpError_t tdpGetDeviceProperties(cudaDeviceProp * prop, int); 
# 38
tdpError_t tdpSetDevice(int device); 
# 40
tdpError_t tdpDeviceGetAttribute(int * value, tdpDeviceAttr attr, int device); 
# 43
tdpError_t tdpDeviceGetCacheConfig(tdpFuncCache * cache); 
# 44
tdpError_t tdpDeviceSynchronize(); 
# 45
tdpError_t tdpGetDevice(int * device); 
# 46
tdpError_t tdpGetDeviceCount(int * count); 
# 50
const char *tdpGetErrorName(tdpError_t error); 
# 51
const char *tdpGetErrorString(tdpError_t error); 
# 52
tdpError_t tdpGetLastError(); 
# 53
tdpError_t tdpPeekAtLastError(); 
# 57
tdpError_t tdpStreamCreate(tdpStream_t * stream); 
# 58
tdpError_t tdpStreamDestroy(tdpStream_t stream); 
# 59
tdpError_t tdpStreamSynchronize(tdpStream_t stream); 
# 67
tdpError_t tdpFreeHost(void * phost); 
# 68
tdpError_t tdpHostAlloc(void ** phost, size_t size, unsigned flags); 
# 70
tdpError_t tdpMallocManaged(void ** devptr, size_t size, unsigned flag); 
# 72
tdpError_t tdpMemcpy(void * dst, const void * src, size_t count, tdpMemcpyKind kind); 
# 74
tdpError_t tdpMemcpyAsync(void * dst, const void * src, size_t count, tdpMemcpyKind kind, tdpStream_t stream); 
# 76
tdpError_t tdpMemset(void * devPtr, int value, size_t count); 
# 79
tdpError_t tdpFree(void * devPtr); 
# 80
tdpError_t tdpMalloc(void ** devRtr, size_t size); 
# 99 ".././target/target.h"
tdpError_t tdpThreadModelInfo(FILE * fp); 
# 103
__attribute__((unused)) int tdpAtomicAddInt(int * sum, int val); 
# 104
__attribute__((unused)) int tdpAtomicMaxInt(int * maxval, int val); 
# 105
__attribute__((unused)) int tdpAtomicMinInt(int * minval, int val); 
# 106
__attribute__((unused)) double tdpAtomicAddDouble(double * sum, double val); 
# 107
__attribute__((unused)) double tdpAtomicMaxDouble(double * maxval, double val); 
# 108
__attribute__((unused)) double tdpAtomicMinDouble(double * minval, double val); 
# 112
__attribute__((unused)) int tdpAtomicBlockAddInt(int * partsum); 
# 113
__attribute__((unused)) double tdpAtomicBlockAddDouble(double * partsum); 
# 117
void tdpErrorHandler(tdpError_t ifail, const char * file, int line, int fatal); 
# 22 "pe.h"
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
# 22 "coords.h"
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
# 37 "util.h"
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
# 7 "coords_s.h"
typedef struct coords_param_s cs_param_t; 
# 9
struct coords_param_s { 
# 10
int nhalo; 
# 11
int nsites; 
# 12
int ntotal[3]; 
# 13
int nlocal[3]; 
# 14
int noffset[3]; 
# 15
int str[3]; 
# 16
int periodic[3]; 
# 18
int mpi_cartsz[3]; 
# 19
int mpi_cartcoords[3]; 
# 21
double lmin[3]; 
# 22
}; 
# 24
struct coords_s { 
# 25
pe_t *pe; 
# 26
int nref; 
# 28
cs_param_t *param; 
# 31
int mpi_cartrank; 
# 32
int reorder; 
# 33
int mpi_cart_neighbours[2][3]; 
# 34
int *listnlocal[3]; 
# 35
int *listnoffset[3]; 
# 37
MPI_Comm commcart; 
# 38
MPI_Comm commperiodic; 
# 40
cs_t *target; 
# 41
}; 
# 18 "physics.h"
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
# 21 "d3q19.h"
enum { NDIM19 = 3}; 
# 22
enum { NVEL19 = 19}; 
# 23
enum { CVXBLOCK19 = 1}; 
# 24
enum { CVYBLOCK19 = 3}; 
# 25
enum { CVZBLOCK19 = 5}; 
# 29
extern const int cv[NVEL19][3]; 
# 30
extern const double wv[NVEL19]; 
# 31
extern const double q_[NVEL19][3][3]; 
# 32
extern const double norm_[NVEL19]; 
# 33
extern const double ma_[NVEL19][NVEL19]; 
# 34
extern const double mi_[NVEL19][NVEL19]; 
# 36
extern const int xblocklen_cv[CVXBLOCK19]; 
# 37
extern const int xdisp_fwd_cv[CVXBLOCK19]; 
# 38
extern const int xdisp_bwd_cv[CVXBLOCK19]; 
# 40
extern const int yblocklen_cv[CVYBLOCK19]; 
# 41
extern const int ydisp_fwd_cv[CVYBLOCK19]; 
# 42
extern const int ydisp_bwd_cv[CVYBLOCK19]; 
# 44
extern const int zblocklen_cv[CVZBLOCK19]; 
# 45
extern const int zdisp_fwd_cv[CVZBLOCK19]; 
# 46
extern const int zdisp_bwd_cv[CVZBLOCK19]; 
# 49 "model.h"
enum { NDIM = 3, 
# 50
NVEL = 19, 
# 51
CVXBLOCK = 1, 
# 52
CVYBLOCK = 3, 
# 53
CVZBLOCK = 5}; 
# 32 "io_options.h"
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
# 22 "runtime.h"
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
# 25 "io_options_rt.h"
int io_options_rt(pe_t * pe, rt_t * rt, const char * keystub, io_options_t * opts); 
# 27
int io_options_rt_mode(pe_t * pe, rt_t * rt, const char * key, io_mode_enum_t * mode); 
# 29
int io_options_rt_record_format(pe_t * pe, rt_t * rt, const char * key, io_record_format_enum_t * options); 
# 26 "io_info_args.h"
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
# 33 "io_harness.h"
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
# 60 "memory.h"
int mem_addr_rank0(int nsites, int index); 
# 62
int mem_addr_rank1(int nsites, int na, int index, int ia); 
# 64
int mem_addr_rank2(int nsites, int na, int nb, int index, int ia, int ib); 
# 118 "memory.h"
typedef 
# 115
enum data_model_enum_type { DATA_MODEL_AOS, 
# 116
DATA_MODEL_SOA, 
# 117
DATA_MODEL_AOSOA
# 118
} data_model_enum_t; 
# 141 "memory.h"
int forward_addr_rank0_assert(int line, const char * file, int nsites, int index); 
# 144
int forward_addr_rank1_assert(int line, const char * file, int nsites, int na, int index, int ia); 
# 147
int forward_addr_rank2_assert(int line, const char * file, int nsites, int na, int nb, int index, int ia, int ib); 
# 151
int forward_addr_rank3_assert(int line, const char * file, int nsites, int na, int nb, int nc, int index, int ia, int ib, int ic); 
# 155
int forward_addr_rank4_assert(int line, const char * file, int nsites, int na, int nb, int nc, int nd, int index, int ia, int ib, int ic, int id); 
# 200 "memory.h"
int reverse_addr_rank0_assert(int line, const char * file, int nsites, int index); 
# 203
int reverse_addr_rank1_assert(int line, const char * file, int nsites, int na, int index, int ia); 
# 206
int reverse_addr_rank2_assert(int line, const char * file, int nsites, int na, int nb, int index, int ia, int ib); 
# 210
int reverse_addr_rank3_assert(int line, const char * file, int nsites, int na, int nb, int nc, int index, int ia, int ib, int ic); 
# 214
int reverse_addr_rank4_assert(int line, const char * file, int nsites, int na, int nb, int nc, int nd, int index, int ia, int ib, int ic, int id); 
# 296 "memory.h"
void *mem_aligned_malloc(size_t alignment, size_t size); 
# 297
void *mem_aligned_calloc(size_t alignment, size_t count, size_t size); 
# 298
void *mem_aligned_realloc(void * ptr, size_t alignment, size_t oldsize, size_t newsize); 
# 63 "model.h"
enum { NHYDRO = 10}; 
# 69
enum { LB_TAU_BULK = 4, LB_TAU_SHEAR}; 
# 73
extern const double cs2; 
# 74
extern const double rcs2; 
# 79
typedef enum lb_dist_enum_type { LB_RHO, LB_PHI} lb_dist_enum_t; 
# 80
typedef enum lb_mode_enum_type { LB_GHOST_ON, LB_GHOST_OFF} lb_mode_enum_t; 
# 82
typedef struct lb_data_s lb_t; 
# 86
typedef 
# 83
enum lb_halo_enum_type { LB_HALO_FULL, 
# 84
LB_HALO_REDUCED, 
# 85
LB_HALO_HOST, 
# 86
LB_HALO_TARGET} lb_halo_enum_t; 
# 89
typedef 
# 88
enum { LB_RELAXATION_M10, LB_RELAXATION_BGK, LB_RELAXATION_TRT
# 89
} lb_relaxation_enum_t; 
# 91
int lb_create_ndist(pe_t * pe, cs_t * cs, int ndist, lb_t ** lb); 
# 92
int lb_create(pe_t * pe, cs_t * cs, lb_t ** lb); 
# 93
int lb_init(lb_t * lb); 
# 94
int lb_free(lb_t * lb); 
# 95
int lb_memcpy(lb_t * lb, tdpMemcpyKind flag); 
# 96
int lb_collide_param_commit(lb_t * lb); 
# 97
int lb_halo(lb_t * lb); 
# 98
int lb_halo_swap(lb_t * lb, lb_halo_enum_t flag); 
# 99
int lb_halo_via_copy(lb_t * lb); 
# 100
int lb_halo_via_struct(lb_t * lb); 
# 101
int lb_halo_set(lb_t * lb, lb_halo_enum_t halo); 
# 102
int lb_io_info(lb_t * lb, io_info_t ** io_info); 
# 103
int lb_io_info_set(lb_t * lb, io_info_t * io_info, int fin, int fout); 
# 104
int lb_io_rho_set(lb_t * lb, io_info_t * io_rho, int fin, int fout); 
# 106
int lb_io_info_commit(lb_t * lb, io_info_args_t args); 
# 108
int lb_nvel(lb_t * lb, int * nvel); 
# 109
int lb_ndim(lb_t * lb, int * ndim); 
# 110
int lb_ndist(lb_t * lb, int * ndist); 
# 111
int lb_f(lb_t * lb, int index, int p, int n, double * f); 
# 112
int lb_f_set(lb_t * lb, int index, int p, int n, double f); 
# 113
int lb_0th_moment(lb_t * lb, int index, lb_dist_enum_t nd, double * rho); 
# 115
int lb_f_index(lb_t * lb, int index, int n, double  f[NVEL]); 
# 116
int lb_f_index_set(lb_t * lb, int index, int n, double  f[NVEL]); 
# 118
int lb_f_multi_index_part(lb_t * lb, int index, int n, double  f[NVEL][1], int nv); 
# 120
int lb_f_multi_index_set_part(lb_t * lb, int index, int n, double  f[NVEL][1], int nv); 
# 123
int lb_f_multi_index(lb_t * lb, int index, int n, double  f[NVEL][1]); 
# 125
int lb_f_multi_index_set(lb_t * lb, int index, int n, double  f[NVEL][1]); 
# 131
int lb_nblock(lb_t * lb, int dim, int * nblock); 
# 132
int lb_init_rest_f(lb_t * lb, double rho0); 
# 133
int lb_order(lb_t * lb); 
# 134
int lb_ndist_set(lb_t * lb, int ndist); 
# 135
int lb_1st_moment(lb_t * lb, int index, lb_dist_enum_t nd, double  g[3]); 
# 136
int lb_2nd_moment(lb_t * lb, int index, lb_dist_enum_t nd, double  s[3][3]); 
# 137
int lb_0th_moment_equilib_set(lb_t * lb, int index, int n, double rho); 
# 138
int lb_1st_moment_equilib_set(lb_t * lb, int index, double rho, double  u[3]); 
# 21 "kernel.h"
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
# 23 "halo_swap.h"
typedef struct halo_swap_s halo_swap_t; 
# 27
typedef void (*f_pack_t)(halo_swap_t * halo, int id, double * data); 
# 28
typedef void (*f_unpack_t)(halo_swap_t * halo, int id, double * data); 
# 30
int halo_swap_create_r1(pe_t * pe, cs_t * cs, int nhcomm, int naddr, int na, halo_swap_t ** phalo); 
# 32
int halo_swap_create_r2(pe_t * pe, cs_t * cs, int nhcomm, int naddr, int na, int nb, halo_swap_t ** phalo); 
# 34
int halo_swap_free(halo_swap_t * halo); 
# 35
int halo_swap_commit(halo_swap_t * halo); 
# 36
int halo_swap_handlers_set(halo_swap_t * halo, f_pack_t pack, f_unpack_t unpack); 
# 37
int halo_swap_host_rank1(halo_swap_t * halo, void * mbuf, MPI_Datatype mpidata); 
# 39
int halo_swap_packed(halo_swap_t * halo, double * data); 
# 41
void halo_swap_pack_rank1(halo_swap_t * halo, int id, double * data); 
# 42
void halo_swap_unpack_rank1(halo_swap_t * halo, int id, double * data); 
# 25 "lb_model_s.h"
typedef struct lb_collide_param_s lb_collide_param_t; 
# 27
struct lb_collide_param_s { 
# 28
int8_t isghost; 
# 29
int8_t cv[NVEL][3]; 
# 30
int nsite; 
# 31
int ndist; 
# 32
double rho0; 
# 33
double eta_shear; 
# 34
double var_shear; 
# 35
double eta_bulk; 
# 36
double var_bulk; 
# 37
double var_noise[NVEL]; 
# 38
double rtau[NVEL]; 
# 39
double wv[NVEL]; 
# 40
double q[NVEL][3][3]; 
# 41
double ma[NVEL][NVEL]; 
# 42
double mi[NVEL][NVEL]; 
# 43
}; 
# 45
struct lb_data_s { 
# 47
int ndist; 
# 48
int nsite; 
# 49
int model; 
# 51
pe_t *pe; 
# 52
cs_t *cs; 
# 53
halo_swap_t *halo; 
# 54
io_info_t *io_info; 
# 55
io_info_t *io_rho; 
# 57
double *f; 
# 58
double *fprime; 
# 60
lb_collide_param_t *param; 
# 61
lb_relaxation_enum_t nrelax; 
# 66
MPI_Datatype plane_xy_full; 
# 67
MPI_Datatype plane_xz_full; 
# 68
MPI_Datatype plane_yz_full; 
# 69
MPI_Datatype plane_xy_reduced[2]; 
# 70
MPI_Datatype plane_xz_reduced[2]; 
# 71
MPI_Datatype plane_yz_reduced[2]; 
# 72
MPI_Datatype plane_xy[2]; 
# 73
MPI_Datatype plane_xz[2]; 
# 74
MPI_Datatype plane_yz[2]; 
# 75
MPI_Datatype site_x[2]; 
# 76
MPI_Datatype site_y[2]; 
# 77
MPI_Datatype site_z[2]; 
# 79
lb_t *target; 
# 80
}; 
# 24 "free_energy.h"
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
# 22 "leesedwards.h"
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
# 26 "hydro.h"
typedef struct hydro_s hydro_t; 
# 32
struct hydro_s { 
# 33
int nsite; 
# 34
int nhcomm; 
# 35
double *u; 
# 36
double *f; 
# 37
double *eta; 
# 39
pe_t *pe; 
# 40
cs_t *cs; 
# 41
lees_edw_t *le; 
# 42
io_info_t *info; 
# 43
halo_swap_t *halo; 
# 44
hydro_t *target; 
# 45
}; 
# 48
typedef enum { HYDRO_U_HALO_HOST, HYDRO_U_HALO_TARGET} hydro_halo_enum_t; 
# 50
int hydro_create(pe_t * pe, cs_t * cs, lees_edw_t * le, int nhalocomm, hydro_t ** pobj); 
# 52
int hydro_free(hydro_t * obj); 
# 53
int hydro_init_io_info(hydro_t * obj, int  grid[3], int form_in, int form_out); 
# 55
int hydro_memcpy(hydro_t * ibj, tdpMemcpyKind flag); 
# 56
int hydro_io_info(hydro_t * obj, io_info_t ** info); 
# 57
int hydro_u_halo(hydro_t * obj); 
# 58
int hydro_halo_swap(hydro_t * obj, hydro_halo_enum_t flag); 
# 59
int hydro_u_gradient_tensor(hydro_t * obj, int ic, int jc, int kc, double  w[3][3]); 
# 61
int hydro_lees_edwards(hydro_t * obj); 
# 62
int hydro_correct_momentum(hydro_t * obj); 
# 63
int hydro_f_zero(hydro_t * obj, const double  fzero[3]); 
# 64
int hydro_u_zero(hydro_t * obj, const double  uzero[3]); 
# 66
int hydro_f_local_set(hydro_t * obj, int index, const double  force[3]); 
# 68
int hydro_f_local(hydro_t * obj, int index, double  force[3]); 
# 69
int hydro_f_local_add(hydro_t * obj, int index, const double  force[3]); 
# 71
int hydro_u_set(hydro_t * obj, int index, const double  u[3]); 
# 72
int hydro_u(hydro_t * obj, int index, double  u[3]); 
# 22 "visc.h"
typedef enum { VISC_MODEL_ARRHENIUS} visc_model_enum_t; 
# 24
typedef struct visc_vt_s visc_vt_t; 
# 25
typedef struct visc_s visc_t; 
# 27
typedef int (*visc_free_ft)(visc_t * visc); 
# 28
typedef int (*visc_update_ft)(visc_t * visc, hydro_t * hydro); 
# 29
typedef int (*visc_stats_ft)(visc_t * visc, hydro_t * hydro); 
# 31
struct visc_vt_s { 
# 32
visc_free_ft free; 
# 33
visc_update_ft update; 
# 34
visc_stats_ft stats; 
# 35
}; 
# 37
struct visc_s { 
# 38
const visc_vt_t *func; 
# 39
int id; 
# 40
}; 
# 20 "control.h"
int init_control(pe_t * pe, rt_t * rt); 
# 21
int is_statistics_step(); 
# 22
int is_measurement_step(); 
# 23
int is_config_step(); 
# 24
int is_config_at_end(); 
# 25
int is_colloid_io_step(); 
# 27
int is_phi_output_step(); 
# 28
int is_vel_output_step(); 
# 29
int is_psi_output_step(); 
# 30
int is_rho_output_step(); 
# 31
int is_fed_output_step(); 
# 32
int is_shear_measurement_step(); 
# 33
int is_shear_output_step(); 
# 34
int control_freq_set(int freq); 
# 24 "map.h"
enum map_status { MAP_FLUID, MAP_BOUNDARY, MAP_COLLOID, MAP_STATUS_MAX}; 
# 26
typedef struct map_s map_t; 
# 28
int map_create(pe_t * pe, cs_t * cs, int ndata, map_t ** pobj); 
# 29
int map_free(map_t * obj); 
# 30
int map_memcpy(map_t * map, tdpMemcpyKind flag); 
# 32
int map_pm(map_t * map, int * porous_media_flag); 
# 33
int map_pm_set(map_t * map, int porous_media_flag); 
# 34
int map_volume_local(map_t * obj, int status, int * volume); 
# 35
int map_volume_allreduce(map_t * obj, int status, int * volume); 
# 36
int map_halo(map_t * obj); 
# 37
int map_init_io_info(map_t * obj, int  grid[3], int form_in, int form_out); 
# 38
int map_io_info(map_t * obj, io_info_t ** info); 
# 40
int map_status(map_t * obj, int index, int * status); 
# 41
int map_status_set(map_t * obj, int index, int status); 
# 42
int map_data(map_t * obj, int index, double * data); 
# 43
int map_data_set(map_t * obj, int index, double * data); 
# 44
int map_ndata(map_t * obj, int * ndata); 
# 29 "noise.h"
typedef 
# 25
enum { NOISE_RHO, 
# 26
NOISE_PHI, 
# 27
NOISE_QAB, 
# 28
NOISE_END
# 29
} noise_enum_t; 
# 31
typedef struct noise_s noise_t; 
# 38
struct noise_s { 
# 39
pe_t *pe; 
# 40
cs_t *cs; 
# 41
int master_seed; 
# 42
int nsites; 
# 43
int on[NOISE_END]; 
# 44
unsigned *state; 
# 45
double rtable[8]; 
# 46
io_info_t *info; 
# 47
noise_t *target; 
# 48
}; 
# 50
int noise_create(pe_t * pe, cs_t * cs, noise_t ** pobj); 
# 51
int noise_free(noise_t * obj); 
# 52
int noise_init(noise_t * obj, int master_seed); 
# 53
int noise_memcpy(noise_t * obj, tdpMemcpyKind flag); 
# 54
int noise_target(noise_t * nosie, noise_t ** target); 
# 55
int noise_present_set(noise_t * obj, noise_enum_t type, int present); 
# 56
int noise_init_io_info(noise_t * obj, int  grid[3], int form_in, int form_out); 
# 58
int noise_state_set(noise_t * obj, int index, unsigned  s[4]); 
# 59
int noise_state(noise_t * obj, int index, unsigned  s[4]); 
# 60
int noise_reap(noise_t * obj, int index, double * reap); 
# 61
int noise_reap_n(noise_t * obj, int index, int nmax, double * reap); 
# 62
int noise_uniform_double_reap(noise_t * obj, int index, double * reap); 
# 64
int noise_present(noise_t * obj, noise_enum_t type, int * present); 
# 65
unsigned noise_uniform(unsigned  state[4]); 
# 27 "collision.h"
int lb_collide(lb_t * lb, hydro_t * hydro, map_t * map, noise_t * noise, fe_t * fe, visc_t * visc); 
# 29
int lb_collision_stats_kt(lb_t * lb, noise_t * noise, map_t * map); 
# 30
int lb_collision_relaxation_set(lb_t * lb, lb_relaxation_enum_t nrelax); 
# 32
int lb_collision_ghost_modes_on(lb_t * lb); 
# 33
int lb_collision_ghost_modes_off(lb_t * lb); 
# 34
int lb_collision_relaxation_times(lb_t * lb, double * tau); 
# 35
int lb_collision_relaxation_times_set(lb_t * lb); 
# 28 "field.h"
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
# 21 "field_s.h"
struct field_s { 
# 22
int nf; 
# 23
int nhcomm; 
# 24
int nsites; 
# 25
double *data; 
# 26
char *name; 
# 28
pe_t *pe; 
# 29
cs_t *cs; 
# 30
lees_edw_t *le; 
# 31
io_info_t *info; 
# 32
halo_swap_t *halo; 
# 34
field_t *target; 
# 35
}; 
# 22 "map_s.h"
struct map_s { 
# 23
int nsite; 
# 24
int is_porous_media; 
# 25
int ndata; 
# 26
char *status; 
# 27
double *data; 
# 29
pe_t *pe; 
# 30
cs_t *cs; 
# 31
MPI_Datatype halostatus[3]; 
# 32
MPI_Datatype halodata[3]; 
# 33
io_info_t *info; 
# 35
map_t *target; 
# 36
}; 
# 25 "timer.h"
int TIMER_init(pe_t * pe); 
# 26
void TIMER_start(const int); 
# 27
void TIMER_stop(const int); 
# 28
void TIMER_statistics(); 
# 30
enum timer_id { TIMER_TOTAL, 
# 31
TIMER_STEPS, 
# 32
TIMER_PROPAGATE, 
# 33
TIMER_PROP_KERNEL, 
# 34
TIMER_COLLIDE, 
# 35
TIMER_COLLIDE_KERNEL, 
# 36
TIMER_HALO_LATTICE, 
# 37
TIMER_PHI_GRADIENTS, 
# 38
TIMER_PHI_GRAD_KERNEL, 
# 39
TIMER_PHI_HALO, 
# 40
TIMER_LE, 
# 41
TIMER_IO, 
# 42
TIMER_FORCES, 
# 43
TIMER_REBUILD, 
# 44
TIMER_BBL, 
# 45
TIMER_PARTICLE_UPDATE, 
# 46
TIMER_PARTICLE_HALO, 
# 47
TIMER_FLUCTUATIONS, 
# 48
TIMER_EWALD_TOTAL, 
# 49
TIMER_EWALD_REAL_SPACE, 
# 50
TIMER_EWALD_FOURIER_SPACE, 
# 51
TIMER_FORCE_CALCULATION, 
# 52
TIMER_CHEMICAL_STRESS_KERNEL, 
# 53
TIMER_PHI_FORCE_CALC, 
# 54
TIMER_ORDER_PARAMETER_UPDATE, 
# 55
TIMER_U_HALO, 
# 56
TIMER_BE_MOL_FIELD, 
# 57
BP_BE_UPDATE_KERNEL, 
# 58
ADVECTION_X_KERNEL, 
# 59
ADVECTION_BCS_KERNEL, 
# 60
ADVECTION_BCS_MEM, 
# 61
TIMER_ELECTRO_TOTAL, 
# 62
TIMER_ELECTRO_POISSON, 
# 63
TIMER_ELECTRO_NPEQ, 
# 64
TIMER_FREE1, 
# 65
TIMER_FREE2, 
# 66
TIMER_FREE3, 
# 67
TIMER_NTIMERS
# 68
}; 
# 21 "field_grad.h"
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
# 23 "symmetric.h"
typedef struct fe_symm_param_s fe_symm_param_t; 
# 24
typedef struct fe_symm_s fe_symm_t; 
# 28
struct fe_symm_s { 
# 29
fe_t super; 
# 30
pe_t *pe; 
# 31
cs_t *cs; 
# 32
fe_symm_param_t *param; 
# 33
field_t *phi; 
# 34
field_grad_t *dphi; 
# 35
fe_symm_t *target; 
# 36
}; 
# 40
struct fe_symm_param_s { 
# 41
double a; 
# 42
double b; 
# 43
double kappa; 
# 44
}; 
# 46
int fe_symm_create(pe_t * pe, cs_t * cs, field_t * f, field_grad_t * grd, fe_symm_t ** p); 
# 48
int fe_symm_free(fe_symm_t * fe); 
# 49
int fe_symm_param_set(fe_symm_t * fe, fe_symm_param_t values); 
# 50
int fe_symm_target(fe_symm_t * fe, fe_t ** target); 
# 52
int fe_symm_param(fe_symm_t * fe, fe_symm_param_t * values); 
# 53
int fe_symm_interfacial_tension(fe_symm_t * fe, double * s); 
# 54
int fe_symm_interfacial_width(fe_symm_t * fe, double * xi); 
# 55
int fe_symm_fed(fe_symm_t * fe, int index, double * fed); 
# 56
int fe_symm_mu(fe_symm_t * fe, int index, double * mu); 
# 58
int fe_symm_str(fe_symm_t * fe, int index, double  s[3][3]); 
# 59
void fe_symm_str_v(fe_symm_t * fe, int index, double  s[3][3][1]); 
# 47 "collision.c"
void lb_collision_mrt1(kernel_ctxt_t * ktx, lb_t * lb, hydro_t * hydro, map_t * map, noise_t * noise, fe_t * fe); 
# 50
void lb_collision_mrt2(kernel_ctxt_t * ktx, lb_t * lb, hydro_t * hydro, fe_symm_t * fe, noise_t * noise); 
# 53
int lb_collision_mrt(lb_t * lb, hydro_t * hydro, map_t * map, noise_t * noise, fe_t * fe, visc_t * visc); 
# 55
int lb_collision_binary(lb_t * lb, hydro_t * hydro, noise_t * noise, fe_symm_t * fe, visc_t * visc); 
# 59
static void lb_collision_fluctuations(lb_t * lb, noise_t * noise, int index, double  shat[3][3], double  ghat[NVEL]); 
# 61
int lb_collision_noise_var_set(lb_t * lb, noise_t * noise); 
# 62
static int lb_collision_parameters_commit(lb_t * lb, visc_t * visc); 
# 65
__attribute__((unused)) static void lb_collision_mrt1_site(lb_t * lb, hydro_t * hydro, map_t * map, noise_t * noise, fe_t * fe, const int index0); 
# 68
__attribute__((unused)) static void lb_collision_mrt2_site(lb_t * lb, hydro_t * hydro, fe_symm_t * fe, noise_t * noise, const int index0); 
# 71
__attribute__((unused)) void d3q19_f2mode_chunk(double * mode, const double *__restrict__ fchunk); 
# 72
__attribute__((unused)) void d3q19_mode2f_chunk(double * mode, double * fchunk); 
# 74
__attribute__((unused)) void d3q19_mode2f_phi(double  jdotc[1], double  sphidotq[1], double  sphi[3][3][1], double  phi[1], double  jphi[3][1], double * f, int baseIndex); 
# 83
typedef struct collide_param_s collide_param_t; 
# 85
struct collide_param_s { 
# 86
double force_global[3]; 
# 87
double kt; 
# 88
double mobility; 
# 89
double rtau2; 
# 90
double eta_shear; 
# 91
double eta_bulk; 
# 92
int have_visc_model; 
# 93
}; 
# 95
static lb_collide_param_t _lbp; 
# 96
static collide_param_t _cp; 
# 100
int lb_nrelax_valid(lb_relaxation_enum_t nrelax); 
# 101
int lb_relaxation_time_shear(lb_t * lb, double eta, double * rtau); 
# 104
int lb_relaxation_time_bulk(lb_t * lb, double eta, double eta_bulk, double * rtau_bulk); 
# 108
int lb_relaxation_time_ghosts(lb_t * lb, double eta, double * rtau); 
# 112
double lb_fluctuations_var_eta(double tau, double kt); 
# 113
double lb_fluctuations_var_bulk(double tau, double kt); 
# 114
int lb_fluctuations_var_ghost(double * rtau, double kt, double * var); 
# 117
int lb_fluctuations_stress(noise_t * noise, int index, double var_eta, double var_eta_bulk, double  shat[3][3]); 
# 121
int lb_fluctuations_ghosts(noise_t * noise, int index, double * var_ghost, double  ghat[NVEL]); 
# 136 "collision.c"
int lb_collide(lb_t *lb, hydro_t *hydro, map_t *map, noise_t *noise, fe_t *
# 137
fe, visc_t *visc) { 
# 139
int ndist; 
# 141
if (hydro == (__null)) { return 0; }  
# 143
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 143, __PRETTY_FUNCTION__); 
# 144
(map) ? static_cast< void>(0) : __assert_fail("map", "collision.c", 144, __PRETTY_FUNCTION__); 
# 146
lb_ndist(lb, &ndist); 
# 147
lb_collision_relaxation_times_set(lb); 
# 148
lb_collision_noise_var_set(lb, noise); 
# 149
lb_collide_param_commit(lb); 
# 151
if (ndist == 1) { lb_collision_mrt(lb, hydro, map, noise, fe, visc); }  
# 152
if (ndist == 2) { lb_collision_binary(lb, hydro, noise, (fe_symm_t *)fe, visc); }  
# 154
return 0; 
# 155
} 
# 165 "collision.c"
int lb_collision_mrt(lb_t *lb, hydro_t *hydro, map_t *map, noise_t *
# 166
noise, fe_t *fe, visc_t *visc) { 
# 167
int nlocal[3]; 
# 168
dim3 nblk, ntpb; 
# 169
fe_t *fetarget = (__null); 
# 170
kernel_info_t limits; 
# 171
kernel_ctxt_t *ctxt = (__null); 
# 173
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 173, __PRETTY_FUNCTION__); 
# 174
(hydro) ? static_cast< void>(0) : __assert_fail("hydro", "collision.c", 174, __PRETTY_FUNCTION__); 
# 175
(map) ? static_cast< void>(0) : __assert_fail("map", "collision.c", 175, __PRETTY_FUNCTION__); 
# 177
cs_nlocal(lb->cs, nlocal); 
# 180
(limits.imin) = 1; (limits.imax) = (nlocal[X]); 
# 181
(limits.jmin) = 1; (limits.jmax) = (nlocal[Y]); 
# 182
(limits.kmin) = 1; (limits.kmax) = (nlocal[Z]); 
# 184
kernel_ctxt_create(lb->cs, 1, limits, &ctxt); 
# 185
kernel_ctxt_launch_param(ctxt, &nblk, &ntpb); 
# 187
lb_collision_parameters_commit(lb, visc); 
# 188
if (fe) { ((fe->func)->target)(fe, &fetarget); }  
# 190
TIMER_start(TIMER_COLLIDE_KERNEL); 
# 192
(__cudaPushCallConfiguration(nblk, ntpb, 0, 0)) ? (void)0 : lb_collision_mrt1(ctxt->target, lb->target, hydro->target, map->target, noise->target, fetarget); 
# 194
; 
# 196
{ tdpErrorHandler(tdpPeekAtLastError(), "collision.c", 196, 1); } ; 
# 197
{ tdpErrorHandler(tdpDeviceSynchronize(), "collision.c", 197, 1); } ; 
# 199
TIMER_stop(TIMER_COLLIDE_KERNEL); 
# 201
kernel_ctxt_free(ctxt); 
# 203
return 0; 
# 204
} 
# 216 "collision.c"
void lb_collision_mrt1(kernel_ctxt_t *ktx, lb_t *lb, hydro_t *hydro, map_t *
# 217
map, noise_t *noise, fe_t *fe) ;
#if 0
# 217
{ 
# 218
int kindex; 
# 219
int kiter; 
# 221
kiter = kernel_vector_iterations(ktx); 
# 223
kindex = ((1) * (((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)) + (__device_builtin_variable_threadIdx.x))); if (kindex < kiter) { 
# 224
int index0; 
# 225
index0 = kernel_baseindex(ktx, kindex); 
# 226
lb_collision_mrt1_site(lb, hydro, map, noise, fe, index0); 
# 227
}  
# 230
} 
#endif
# 252 "collision.c"
__attribute__((unused)) static void lb_collision_mrt1_site(lb_t *lb, hydro_t *hydro, map_t *map, noise_t *
# 253
noise, fe_t *fe, const int index0) {int volatile ___ = 1;(void)lb;(void)hydro;(void)map;(void)noise;(void)fe;(void)index0;
# 589 "collision.c"
::exit(___);}
#if 0
# 253 "collision.c"
{ 
# 255
int p, m; 
# 256
int ia, ib; 
# 257
int iv = 0; 
# 258
double mode[19 * 1]; 
# 259
double rho[1], rrho[1]; 
# 260
double u[3][1]; 
# 261
double s[3][3][1]; 
# 262
double seq[3][3][1]; 
# 263
double shat[3][3][1]; 
# 264
double ghat[NVEL][1]; 
# 266
double eta[1]; 
# 267
double eta_bulk[1]; 
# 268
double rtau[1]; 
# 269
double rtau_bulk[1]; 
# 270
double rtau_ghost[NVEL]; 
# 272
double force[3][1]; 
# 273
double tr_s[1], tr_seq[1]; 
# 274
double fchunk[19 * 1]; 
# 276
char fullchunk = (1); 
# 277
char includeSite[1]; 
# 279
const double rdim = ((1.0) / (NDIM)); 
# 280
const int8_t d[3][3] = {{(1), (0), (0)}, {(0), (1), (0)}, {(0), (0), (1)}}; 
# 282
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 282, __PRETTY_FUNCTION__); 
# 283
(lb->param) ? static_cast< void>(0) : __assert_fail("lb->param", "collision.c", 283, __PRETTY_FUNCTION__); 
# 284
(hydro) ? static_cast< void>(0) : __assert_fail("hydro", "collision.c", 284, __PRETTY_FUNCTION__); 
# 289
for (iv = 0; iv < 1; iv++) { (includeSite[iv]) = (1); }  
# 291
for (iv = 0; iv < 1; iv++) { 
# 292
if (((map->status)[index0 + iv]) != (MAP_FLUID)) { 
# 293
(includeSite[iv]) = (0); 
# 294
fullchunk = (0); 
# 295
}  
# 296
}  
# 298
for (ia = 0; ia < 3; ia++) { 
# 299
for (iv = 0; iv < 1; iv++) { ((u[ia])[iv]) = (0.0); }  
# 300
}  
# 304
for (ia = 0; ia < 3; ia++) { 
# 305
for (ib = 0; ib < 3; ib++) { 
# 306
for (iv = 0; iv < 1; iv++) { (((shat[ia])[ib])[iv]) = (0.0); }  
# 307
}  
# 308
}  
# 310
for (ia = 0; ia < (NVEL); ia++) { 
# 311
for (iv = 0; iv < 1; iv++) { ((ghat[ia])[iv]) = (0.0); }  
# 312
}  
# 316
for (p = 0; p < (NVEL); p++) { 
# 317
for (iv = 0; iv < 1; iv++) { (fchunk[(p * 1) + iv]) = ((lb->f)[reverse_addr_rank2_assert(318, "collision.c", _lbp.nsite, 1, NVEL, index0 + iv, LB_RHO, p)]); }  
# 319
}  
# 321
for (ia = 0; ia < 3; ia++) { 
# 322
for (iv = 0; iv < 1; iv++) { 
# 323
((force[ia])[iv]) = (((_cp.force_global)[ia]) + ((hydro->f)[reverse_addr_rank1_assert(324, "collision.c", hydro->nsite, 3, index0 + iv, ia)])); 
# 325
}  
# 326
}  
# 331
d3q19_f2mode_chunk(mode, fchunk); 
# 347 "collision.c"
for (iv = 0; iv < 1; iv++) { (rho[iv]) = (mode[(0 * 1) + iv]); }  
# 348
for (ia = 0; ia < (NDIM); ia++) { 
# 349
for (iv = 0; iv < 1; iv++) { ((u[ia])[iv]) = (mode[((1 + ia) * 1) + iv]); }  
# 350
}  
# 352
m = 0; 
# 353
for (ia = 0; ia < (NDIM); ia++) { 
# 354
for (ib = ia; ib < (NDIM); ib++) { 
# 355
for (iv = 0; iv < 1; iv++) { (((s[ia])[ib])[iv]) = (mode[(((1 + (NDIM)) + m) * 1) + iv]); }  
# 356
m++; 
# 357
}  
# 358
}  
# 360
for (ia = 1; ia < (NDIM); ia++) { 
# 361
for (ib = 0; ib < ia; ib++) { 
# 362
for (iv = 0; iv < 1; iv++) { (((s[ia])[ib])[iv]) = (((s[ib])[ia])[iv]); }  
# 363
}  
# 364
}  
# 368
for (iv = 0; iv < 1; iv++) { (rrho[iv]) = ((1.0) / (rho[iv])); }  
# 370
for (ia = 0; ia < (NDIM); ia++) { 
# 371
for (iv = 0; iv < 1; iv++) { 
# 372
((u[ia])[iv]) = ((rrho[iv]) * (((u[ia])[iv]) + ((0.5) * ((force[ia])[iv])))); 
# 373
}  
# 374
}  
# 378
if ((_cp.have_visc_model) == 0) { 
# 380
for (iv = 0; iv < 1; iv++) { 
# 381
(eta[iv]) = (_cp.eta_shear); 
# 382
(eta_bulk[iv]) = (_cp.eta_bulk); 
# 383
lb_relaxation_time_shear(lb, eta[iv], rtau + iv); 
# 384
lb_relaxation_time_bulk(lb, eta[iv], eta_bulk[iv], rtau_bulk + iv); 
# 385
lb_relaxation_time_ghosts(lb, eta[iv], rtau_ghost); 
# 386
(1 == 1) ? static_cast< void>(0) : __assert_fail("1 == 1", "collision.c", 386, __PRETTY_FUNCTION__); 
# 387
}  
# 388
} else 
# 389
{ 
# 394
for (iv = 0; iv < 1; iv++) { 
# 395
(eta[iv]) = ((hydro->eta)[reverse_addr_rank0_assert(395, "collision.c", hydro->nsite, index0 + iv)]); 
# 396
(eta_bulk[iv]) = (((_cp.eta_bulk) / (_cp.eta_shear)) * (eta[iv])); 
# 397
lb_relaxation_time_shear(lb, eta[iv], rtau + iv); 
# 398
lb_relaxation_time_bulk(lb, eta[iv], eta_bulk[iv], rtau_bulk + iv); 
# 399
lb_relaxation_time_ghosts(lb, eta[iv], rtau_ghost); 
# 400
(1 == 1) ? static_cast< void>(0) : __assert_fail("1 == 1", "collision.c", 400, __PRETTY_FUNCTION__); 
# 401
}  
# 402
}  
# 406
for (iv = 0; iv < 1; iv++) { 
# 407
(tr_s[iv]) = (0.0); 
# 408
(tr_seq[iv]) = (0.0); 
# 409
}  
# 411
if (fe && (fe->use_stress_relaxation)) { 
# 412
double symm[3][3][1]; 
# 414
((fe->func)->str_symm_v)(fe, index0, symm); 
# 416
for (ia = 0; ia < (NDIM); ia++) { 
# 418
for (ib = 0; ib < (NDIM); ib++) { 
# 419
for (iv = 0; iv < 1; iv++) { 
# 420
(((seq[ia])[ib])[iv]) = ((((rho[iv]) * ((u[ia])[iv])) * ((u[ib])[iv])) + (((symm[ia])[ib])[iv])); 
# 421
}  
# 422
}  
# 424
for (iv = 0; iv < 1; iv++) { 
# 425
(tr_s[iv]) += (((s[ia])[ia])[iv]); 
# 426
(tr_seq[iv]) += (((seq[ia])[ia])[iv]); 
# 427
}  
# 428
}  
# 429
} else 
# 430
{ 
# 432
for (ia = 0; ia < (NDIM); ia++) { 
# 434
for (ib = 0; ib < (NDIM); ib++) { 
# 435
for (iv = 0; iv < 1; iv++) { 
# 436
(((seq[ia])[ib])[iv]) = (((rho[iv]) * ((u[ia])[iv])) * ((u[ib])[iv])); 
# 437
}  
# 438
}  
# 440
for (iv = 0; iv < 1; iv++) { 
# 441
(tr_s[iv]) += (((s[ia])[ia])[iv]); 
# 442
(tr_seq[iv]) += (((seq[ia])[ia])[iv]); 
# 443
}  
# 444
}  
# 445
}  
# 448
for (ia = 0; ia < (NDIM); ia++) { 
# 449
for (iv = 0; iv < 1; iv++) { 
# 450
(((s[ia])[ia])[iv]) -= (rdim * (tr_s[iv])); 
# 451
(((seq[ia])[ia])[iv]) -= (rdim * (tr_seq[iv])); 
# 452
}  
# 453
}  
# 456
for (iv = 0; iv < 1; iv++) { 
# 457
(tr_s[iv]) = ((tr_s[iv]) - ((rtau_bulk[iv]) * ((tr_s[iv]) - (tr_seq[iv])))); 
# 458
}  
# 460
for (ia = 0; ia < (NDIM); ia++) { 
# 461
for (ib = 0; ib < (NDIM); ib++) { 
# 462
for (iv = 0; iv < 1; iv++) { 
# 463
(((s[ia])[ib])[iv]) -= ((rtau[iv]) * ((((s[ia])[ib])[iv]) - (((seq[ia])[ib])[iv]))); 
# 464
(((s[ia])[ib])[iv]) += ((((d[ia])[ib]) * rdim) * (tr_s[iv])); 
# 468
(((s[ia])[ib])[iv]) += (((2.0) - (rtau[iv])) * ((((u[ia])[iv]) * ((force[ib])[iv])) + (((force[ia])[iv]) * ((u[ib])[iv])))); 
# 470
}  
# 471
}  
# 472
}  
# 474
if ((noise->on)[NOISE_RHO]) { 
# 476
double shat1[3][3]; 
# 477
double ghat1[NVEL]; 
# 478
double var, var_bulk; 
# 479
double var_ghost[NVEL]; 
# 486
for (iv = 0; iv < 1; iv++) { 
# 488
if (includeSite[iv]) { 
# 491
var = lb_fluctuations_var_eta((1.0) / (rtau[iv]), _cp.kt); 
# 492
var_bulk = lb_fluctuations_var_bulk((1.0) / (rtau_bulk[iv]), _cp.kt); 
# 493
lb_fluctuations_stress(noise, index0 + iv, var, var_bulk, shat1); 
# 495
for (ia = 0; ia < (NDIM); ia++) { 
# 496
for (ib = 0; ib < (NDIM); ib++) { 
# 497
(((shat[ia])[ib])[iv]) = ((shat1[ia])[ib]); 
# 498
}  
# 499
}  
# 501
if (((lb->param)->isghost) == (LB_GHOST_ON)) { 
# 503
lb_fluctuations_var_ghost(rtau_ghost, _cp.kt, var_ghost); 
# 504
lb_fluctuations_ghosts(noise, index0 + iv, var_ghost, ghat1); 
# 505
for (ia = 0; ia < (NVEL); ia++) { 
# 506
((ghat[ia])[iv]) = (ghat1[ia]); 
# 507
}  
# 508
}  
# 509
}  
# 510
}  
# 511
}  
# 517
for (ia = 0; ia < (NDIM); ia++) { 
# 518
for (iv = 0; iv < 1; iv++) { (mode[((1 + ia) * 1) + iv]) += ((force[ia])[iv]); }  
# 519
}  
# 521
m = 0; 
# 522
for (ia = 0; ia < (NDIM); ia++) { 
# 523
for (ib = ia; ib < (NDIM); ib++) { 
# 524
for (iv = 0; iv < 1; iv++) { 
# 525
(mode[(((1 + (NDIM)) + m) * 1) + iv]) = ((((s[ia])[ib])[iv]) + (((shat[ia])[ib])[iv])); 
# 526
}  
# 527
m++; 
# 528
}  
# 529
}  
# 533
for (m = (NHYDRO); m < (NVEL); m++) { 
# 534
for (iv = 0; iv < 1; iv++) { 
# 535
(mode[(m * 1) + iv]) = (((mode[(m * 1) + iv]) - ((rtau_ghost[m]) * ((mode[(m * 1) + iv]) - (0.0)))) + ((ghat[m])[iv])); 
# 537
}  
# 538
}  
# 543
d3q19_mode2f_chunk(mode, fchunk); 
# 557 "collision.c"
if (fullchunk) { 
# 559
for (p = 0; p < (NVEL); p++) { 
# 560
for (iv = 0; iv < 1; iv++) { 
# 561
((lb->f)[reverse_addr_rank2_assert(561, "collision.c", _lbp.nsite, _lbp.ndist, NVEL, index0 + iv, LB_RHO, p)]) = (fchunk[(p * 1) + iv]); 
# 562
}  
# 563
}  
# 565
for (ia = 0; ia < 3; ia++) { 
# 566
for (iv = 0; iv < 1; iv++) { 
# 567
((hydro->u)[reverse_addr_rank1_assert(567, "collision.c", hydro->nsite, 3, index0 + iv, ia)]) = ((u[ia])[iv]); 
# 568
}  
# 569
}  
# 570
} else 
# 571
{ 
# 572
for (iv = 0; iv < 1; iv++) { 
# 573
if (includeSite[iv]) { 
# 575
for (p = 0; p < (NVEL); p++) { 
# 576
((lb->f)[reverse_addr_rank2_assert(576, "collision.c", _lbp.nsite, _lbp.ndist, NVEL, index0 + iv, LB_RHO, p)]) = (fchunk[(p * 1) + iv]); 
# 578
}  
# 581
for (ia = 0; ia < 3; ia++) { 
# 582
((hydro->u)[reverse_addr_rank1_assert(582, "collision.c", hydro->nsite, 3, index0 + iv, ia)]) = ((u[ia])[iv]); 
# 583
}  
# 584
}  
# 585
}  
# 586
}  
# 589
} 
#endif
# 600 "collision.c"
int lb_collision_binary(lb_t *lb, hydro_t *hydro, noise_t *noise, fe_symm_t *
# 601
fe, visc_t *visc) { 
# 603
int nlocal[3]; 
# 604
dim3 nblk, ntpb; 
# 605
kernel_info_t limits; 
# 606
kernel_ctxt_t *ctxt = (__null); 
# 608
((NDIM) == 3) ? static_cast< void>(0) : __assert_fail("NDIM == 3", "collision.c", 608, __PRETTY_FUNCTION__); 
# 609
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 609, __PRETTY_FUNCTION__); 
# 610
(hydro) ? static_cast< void>(0) : __assert_fail("hydro", "collision.c", 610, __PRETTY_FUNCTION__); 
# 611
(noise) ? static_cast< void>(0) : __assert_fail("noise", "collision.c", 611, __PRETTY_FUNCTION__); 
# 612
(fe) ? static_cast< void>(0) : __assert_fail("fe", "collision.c", 612, __PRETTY_FUNCTION__); 
# 614
cs_nlocal(lb->cs, nlocal); 
# 617
(limits.imin) = 1; (limits.imax) = (nlocal[X]); 
# 618
(limits.jmin) = 1; (limits.jmax) = (nlocal[Y]); 
# 619
(limits.kmin) = 1; (limits.kmax) = (nlocal[Z]); 
# 621
kernel_ctxt_create(lb->cs, 1, limits, &ctxt); 
# 622
kernel_ctxt_launch_param(ctxt, &nblk, &ntpb); 
# 624
lb_collision_parameters_commit(lb, visc); 
# 626
TIMER_start(TIMER_COLLIDE_KERNEL); 
# 628
(__cudaPushCallConfiguration(nblk, ntpb, 0, 0)) ? (void)0 : lb_collision_mrt2(ctxt->target, lb->target, hydro->target, fe->target, noise->target); 
# 629
; 
# 631
{ tdpErrorHandler(tdpPeekAtLastError(), "collision.c", 631, 1); } ; 
# 632
{ tdpErrorHandler(tdpDeviceSynchronize(), "collision.c", 632, 1); } ; 
# 634
TIMER_stop(TIMER_COLLIDE_KERNEL); 
# 636
kernel_ctxt_free(ctxt); 
# 638
return 0; 
# 639
} 
# 650 "collision.c"
void lb_collision_mrt2(kernel_ctxt_t *ktx, lb_t *lb, hydro_t *
# 651
hydro, fe_symm_t *fe, noise_t *
# 652
noise) ;
#if 0
# 652
{ 
# 653
int kindex; 
# 654
int kiter; 
# 656
kiter = kernel_vector_iterations(ktx); 
# 658
kindex = ((1) * (((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)) + (__device_builtin_variable_threadIdx.x))); if (kindex < kiter) { 
# 659
int index0; 
# 660
index0 = kernel_baseindex(ktx, kindex); 
# 661
lb_collision_mrt2_site(lb, hydro, fe, noise, index0); 
# 662
}  
# 665
} 
#endif
# 710 "collision.c"
__attribute__((unused)) void lb_collision_mrt2_site(lb_t *lb, hydro_t *hydro, fe_symm_t *
# 711
fe, noise_t *noise, const int 
# 712
index0) {int volatile ___ = 1;(void)lb;(void)hydro;(void)fe;(void)noise;(void)index0;
# 1012 "collision.c"
::exit(___);}
#if 0
# 712 "collision.c"
{ 
# 713
int ia, ib, m, p; 
# 714
double f[19 * 1]; 
# 715
double mode[19 * 1]; 
# 716
double rho[1]; 
# 717
double rrho[1]; 
# 719
double u[3][1]; 
# 720
double s[3][3][1]; 
# 721
double seq[3][3][1]; 
# 722
double shat[3][3][1]; 
# 723
double ghat[NVEL][1]; 
# 725
double force[3][1]; 
# 727
double tr_s[1]; 
# 728
double tr_seq[1]; 
# 729
double phi[1]; 
# 730
double jphi[3][1]; 
# 731
double jdotc[1]; 
# 732
double sphidotq[1]; 
# 733
double sth[3][3][1]; 
# 734
double sphi[3][3][1]; 
# 735
double mu[1]; 
# 737
const double r3 = ((1.0) / (3.0)); 
# 738
const int8_t d[3][3] = {{(1), (0), (0)}, {(0), (1), (0)}, {(0), (0), (1)}}; 
# 741
int iv = 0; 
# 743
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 743, __PRETTY_FUNCTION__); 
# 744
(hydro) ? static_cast< void>(0) : __assert_fail("hydro", "collision.c", 744, __PRETTY_FUNCTION__); 
# 747
for (ia = 0; ia < 3; ia++) { 
# 748
for (ib = 0; ib < 3; ib++) { 
# 749
for (iv = 0; iv < 1; iv++) { (((shat[ia])[ib])[iv]) = (0.0); }  
# 750
}  
# 751
}  
# 753
for (m = (NHYDRO); m < (NVEL); m++) { 
# 754
for (iv = 0; iv < 1; iv++) { ((ghat[m])[iv]) = (0.0); }  
# 755
}  
# 759
for (p = 0; p < (NVEL); p++) { 
# 760
for (iv = 0; iv < 1; iv++) { 
# 761
(f[(p * 1) + iv]) = ((lb->f)[reverse_addr_rank2_assert(762, "collision.c", _lbp.nsite, _lbp.ndist, NVEL, index0 + iv, LB_RHO, p)]); 
# 763
}  
# 764
}  
# 765
d3q19_f2mode_chunk(mode, f); 
# 783 "collision.c"
for (iv = 0; iv < 1; iv++) { (rho[iv]) = (mode[(0 * 1) + iv]); }  
# 784
for (ia = 0; ia < 3; ia++) { 
# 785
for (iv = 0; iv < 1; iv++) { ((u[ia])[iv]) = (mode[((1 + ia) * 1) + iv]); }  
# 786
}  
# 788
m = 0; 
# 789
for (ia = 0; ia < (NDIM); ia++) { 
# 790
for (ib = ia; ib < (NDIM); ib++) { 
# 791
for (iv = 0; iv < 1; iv++) { (((s[ia])[ib])[iv]) = (mode[(((1 + (NDIM)) + m) * 1) + iv]); }  
# 792
m++; 
# 793
}  
# 794
}  
# 796
for (ia = 1; ia < (NDIM); ia++) { 
# 797
for (ib = 0; ib < ia; ib++) { 
# 798
for (iv = 0; iv < 1; iv++) { (((s[ia])[ib])[iv]) = (((s[ib])[ia])[iv]); }  
# 799
}  
# 800
}  
# 804
for (iv = 0; iv < 1; iv++) { (rrho[iv]) = ((1.0) / (rho[iv])); }  
# 806
for (ia = 0; ia < 3; ia++) { 
# 807
for (iv = 0; iv < 1; iv++) { 
# 808
((force[ia])[iv]) = (((_cp.force_global)[ia]) + ((hydro->f)[reverse_addr_rank1_assert(809, "collision.c", hydro->nsite, 3, index0 + iv, ia)])); 
# 810
((u[ia])[iv]) = ((rrho[iv]) * (((u[ia])[iv]) + ((0.5) * ((force[ia])[iv])))); 
# 811
}  
# 812
}  
# 814
for (ia = 0; ia < 3; ia++) { 
# 815
for (iv = 0; iv < 1; iv++) { 
# 816
((hydro->u)[reverse_addr_rank1_assert(816, "collision.c", hydro->nsite, 3, index0 + iv, ia)]) = ((u[ia])[iv]); 
# 817
}  
# 818
}  
# 822
fe_symm_str_v(fe, index0, sth); 
# 826
for (iv = 0; iv < 1; iv++) { 
# 827
(tr_s[iv]) = (0.0); 
# 828
(tr_seq[iv]) = (0.0); 
# 829
}  
# 831
for (ia = 0; ia < 3; ia++) { 
# 833
for (ib = 0; ib < 3; ib++) { 
# 834
for (iv = 0; iv < 1; iv++) { 
# 835
(((seq[ia])[ib])[iv]) = ((((rho[iv]) * ((u[ia])[iv])) * ((u[ib])[iv])) + (((sth[ia])[ib])[iv])); 
# 836
}  
# 837
}  
# 839
for (iv = 0; iv < 1; iv++) { 
# 840
(tr_s[iv]) += (((s[ia])[ia])[iv]); 
# 841
(tr_seq[iv]) += (((seq[ia])[ia])[iv]); 
# 842
}  
# 843
}  
# 846
for (ia = 0; ia < 3; ia++) { 
# 847
for (iv = 0; iv < 1; iv++) { 
# 848
(((s[ia])[ia])[iv]) -= (r3 * (tr_s[iv])); 
# 849
(((seq[ia])[ia])[iv]) -= (r3 * (tr_seq[iv])); 
# 850
}  
# 851
}  
# 855
for (iv = 0; iv < 1; iv++) { 
# 856
(tr_s[iv]) = ((tr_s[iv]) - (((_lbp.rtau)[LB_TAU_BULK]) * ((tr_s[iv]) - (tr_seq[iv])))); }  
# 858
for (ia = 0; ia < 3; ia++) { 
# 859
for (ib = 0; ib < 3; ib++) { 
# 861
for (iv = 0; iv < 1; iv++) { 
# 862
(((s[ia])[ib])[iv]) -= (((_lbp.rtau)[LB_TAU_SHEAR]) * ((((s[ia])[ib])[iv]) - (((seq[ia])[ib])[iv]))); 
# 863
(((s[ia])[ib])[iv]) += ((((d[ia])[ib]) * r3) * (tr_s[iv])); 
# 867
(((s[ia])[ib])[iv]) += (((2.0) - ((_lbp.rtau)[LB_TAU_SHEAR])) * ((((u[ia])[iv]) * ((force[ib])[iv])) + (((force[ia])[iv]) * ((u[ib])[iv])))); 
# 869
}  
# 870
}  
# 871
}  
# 873
if ((noise->on)[NOISE_RHO]) { 
# 877
for (iv = 0; iv < 1; iv++) { 
# 879
double shat1[3][3]; 
# 880
double ghat1[NVEL]; 
# 882
lb_collision_fluctuations(lb, noise, index0 + iv, shat1, ghat1); 
# 884
for (ia = 0; ia < 3; ia++) { 
# 885
for (ib = 0; ib < 3; ib++) { 
# 886
(((shat[ia])[ib])[iv]) = ((shat1[ia])[ib]); 
# 887
}  
# 888
}  
# 889
for (p = 0; p < (NVEL); p++) { 
# 890
((ghat[p])[iv]) = (ghat1[p]); 
# 891
}  
# 892
}  
# 893
}  
# 899
for (ia = 0; ia < (NDIM); ia++) { 
# 900
for (iv = 0; iv < 1; iv++) { (mode[((1 + ia) * 1) + iv]) += ((force[ia])[iv]); }  
# 901
}  
# 903
m = 0; 
# 904
for (ia = 0; ia < (NDIM); ia++) { 
# 905
for (ib = ia; ib < (NDIM); ib++) { 
# 906
for (iv = 0; iv < 1; iv++) { 
# 907
(mode[(((1 + (NDIM)) + m) * 1) + iv]) = ((((s[ia])[ib])[iv]) + (((shat[ia])[ib])[iv])); 
# 908
}  
# 909
m++; 
# 910
}  
# 911
}  
# 915
for (m = (NHYDRO); m < (NVEL); m++) { 
# 916
for (iv = 0; iv < 1; iv++) { 
# 917
(mode[(m * 1) + iv]) = (((mode[(m * 1) + iv]) - ((((lb->param)->rtau)[m]) * ((mode[(m * 1) + iv]) - (0.0)))) + ((ghat[m])[iv])); 
# 919
}  
# 920
}  
# 925
d3q19_mode2f_chunk(mode, f); 
# 926
for (p = 0; p < (NVEL); p++) { 
# 927
for (iv = 0; iv < 1; iv++) { 
# 928
((lb->f)[reverse_addr_rank2_assert(928, "collision.c", _lbp.nsite, _lbp.ndist, NVEL, index0 + iv, LB_RHO, p)]) = (f[(p * 1) + iv]); 
# 930
}  
# 931
}  
# 945 "collision.c"
for (iv = 0; iv < 1; iv++) { 
# 946
(phi[iv]) = (((fe->phi)->data)[reverse_addr_rank0_assert(946, "collision.c", (fe->phi)->nsites, index0 + iv)]); 
# 947
}  
# 949
for (iv = 0; iv < 1; iv++) { 
# 950
fe_symm_mu(fe, index0 + iv, mu + iv); 
# 951
((jphi[X])[iv]) = (0.0); 
# 952
((jphi[Y])[iv]) = (0.0); 
# 953
((jphi[Z])[iv]) = (0.0); 
# 954
}  
# 956
for (p = 1; p < (NVEL); p++) { 
# 957
for (ia = 0; ia < 3; ia++) { 
# 958
for (iv = 0; iv < 1; iv++) { 
# 959
((jphi[ia])[iv]) += ((((_lbp.cv)[p])[ia]) * ((lb->f)[reverse_addr_rank2_assert(960, "collision.c", _lbp.nsite, _lbp.ndist, NVEL, index0 + iv, LB_PHI, p)])); 
# 961
}  
# 962
}  
# 963
}  
# 967
for (ia = 0; ia < 3; ia++) { 
# 968
for (ib = 0; ib < 3; ib++) { 
# 969
for (iv = 0; iv < 1; iv++) { 
# 970
(((sphi[ia])[ib])[iv]) = ((((phi[iv]) * ((u[ia])[iv])) * ((u[ib])[iv])) + ((mu[iv]) * ((d[ia])[ib]))); 
# 972
}  
# 973
}  
# 974
for (iv = 0; iv < 1; iv++) { 
# 975
((jphi[ia])[iv]) = (((jphi[ia])[iv]) - ((_cp.rtau2) * (((jphi[ia])[iv]) - ((phi[iv]) * ((u[ia])[iv]))))); 
# 977
}  
# 978
}  
# 983
d3q19_mode2f_phi(jdotc, sphidotq, sphi, phi, jphi, lb->f, index0); 
# 1012 "collision.c"
} 
#endif
# 1023 "collision.c"
int lb_collision_stats_kt(lb_t *lb, noise_t *noise, map_t *map) { 
# 1025
int ic, jc, kc, index; 
# 1026
int nlocal[3]; 
# 1027
int n; 
# 1028
int status; 
# 1030
double glocal[4]; 
# 1031
double gtotal[4]; 
# 1032
double rrho; 
# 1033
double gsite[3]; 
# 1034
double kt; 
# 1035
physics_t *phys = (__null); 
# 1036
MPI_Comm comm; 
# 1038
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1038, __PRETTY_FUNCTION__); 
# 1039
(map) ? static_cast< void>(0) : __assert_fail("map", "collision.c", 1039, __PRETTY_FUNCTION__); 
# 1040
(noise) ? static_cast< void>(0) : __assert_fail("noise", "collision.c", 1040, __PRETTY_FUNCTION__); 
# 1042
noise_present(noise, NOISE_RHO, &status); 
# 1043
if (status == 0) { return 0; }  
# 1045
physics_ref(&phys); 
# 1046
physics_kt(phys, &kt); 
# 1048
cs_nlocal(lb->cs, nlocal); 
# 1050
(glocal[X]) = (0.0); 
# 1051
(glocal[Y]) = (0.0); 
# 1052
(glocal[Z]) = (0.0); 
# 1053
(glocal[3]) = (0.0); 
# 1055
for (ic = 1; ic <= (nlocal[X]); ic++) { 
# 1056
for (jc = 1; jc <= (nlocal[Y]); jc++) { 
# 1057
for (kc = 1; kc <= (nlocal[Z]); kc++) { 
# 1059
index = cs_index(lb->cs, ic, jc, kc); 
# 1060
map_status(map, index, &status); 
# 1061
if (status != (MAP_FLUID)) { continue; }  
# 1063
lb_0th_moment(lb, index, LB_RHO, &rrho); 
# 1064
rrho = ((1.0) / rrho); 
# 1065
lb_1st_moment(lb, index, LB_RHO, gsite); 
# 1067
for (n = 0; n < 3; n++) { 
# 1068
(glocal[n]) += (((gsite[n]) * (gsite[n])) * rrho); 
# 1069
}  
# 1071
(glocal[3]) += (1.0); 
# 1074
}  
# 1075
}  
# 1076
}  
# 1081
pe_mpi_comm(lb->pe, &comm); 
# 1082
MPI_Reduce(glocal, gtotal, 4, MPI_DOUBLE, MPI_SUM, 0, comm); 
# 1084
for (n = 0; n < 3; n++) { 
# 1085
(gtotal[n]) /= (gtotal[3]); 
# 1086
}  
# 1088
pe_info(lb->pe, "\n"); 
# 1089
pe_info(lb->pe, "Isothermal fluctuations\n"); 
# 1090
pe_info(lb->pe, "[eqipart.] %14.7e %14.7e %14.7e\n", gtotal[X], gtotal[Y], gtotal[Z]); 
# 1093
kt *= (NDIM); 
# 1094
pe_info(lb->pe, "[measd/kT] %14.7e %14.7e\n", ((gtotal[X]) + (gtotal[Y])) + (gtotal[Z]), kt); 
# 1097
return 0; 
# 1098
} 
# 1106
int lb_collision_ghost_modes_on(lb_t *lb) { 
# 1108
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1108, __PRETTY_FUNCTION__); 
# 1109
(lb->param) ? static_cast< void>(0) : __assert_fail("lb->param", "collision.c", 1109, __PRETTY_FUNCTION__); 
# 1111
((lb->param)->isghost) = (LB_GHOST_ON); 
# 1113
return 0; 
# 1114
} 
# 1122
int lb_collision_ghost_modes_off(lb_t *lb) { 
# 1124
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1124, __PRETTY_FUNCTION__); 
# 1125
(lb->param) ? static_cast< void>(0) : __assert_fail("lb->param", "collision.c", 1125, __PRETTY_FUNCTION__); 
# 1127
((lb->param)->isghost) = (LB_GHOST_OFF); 
# 1129
return 0; 
# 1130
} 
# 1138
int lb_collision_relaxation_set(lb_t *lb, lb_relaxation_enum_t nrelax) { 
# 1140
(((nrelax == (LB_RELAXATION_M10)) || (nrelax == (LB_RELAXATION_BGK))) || (nrelax == (LB_RELAXATION_TRT))) ? static_cast< void>(0) : __assert_fail("nrelax == LB_RELAXATION_M10 || nrelax == LB_RELAXATION_BGK || nrelax == LB_RELAXATION_TRT", "collision.c", 1142, __PRETTY_FUNCTION__); 
# 1144 "collision.c" 3
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1144, __PRETTY_FUNCTION__); 
# 1146
(lb->nrelax) = nrelax; 
# 1148
return 0; 
# 1149
} 
# 1166 "collision.c"
int lb_collision_relaxation_times_set(lb_t *lb) { 
# 1168
int p; 
# 1169
double rho0; 
# 1170
double eta_shear; 
# 1171
double eta_bulk; 
# 1172
double rtau_shear; 
# 1173
double rtau_bulk; 
# 1174
double tau, rtau; 
# 1175
physics_t *phys = (__null); 
# 1177
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1177, __PRETTY_FUNCTION__); 
# 1178
(lb->param) ? static_cast< void>(0) : __assert_fail("lb->param", "collision.c", 1178, __PRETTY_FUNCTION__); 
# 1180
physics_ref(&phys); 
# 1181
physics_rho0(phys, &rho0); 
# 1183
((lb->param)->rho0) = rho0; 
# 1187
physics_eta_shear(phys, &eta_shear); 
# 1188
physics_eta_bulk(phys, &eta_bulk); 
# 1190
rtau_shear = ((1.0) / ((0.5) + (eta_shear / (rho0 * cs2)))); 
# 1191
rtau_bulk = ((1.0) / ((0.5) + (eta_bulk / (rho0 * cs2)))); 
# 1193
if ((lb->nrelax) == (LB_RELAXATION_M10)) { 
# 1194
(((lb->param)->rtau)[LB_TAU_SHEAR]) = rtau_shear; 
# 1195
(((lb->param)->rtau)[LB_TAU_BULK]) = rtau_bulk; 
# 1196
for (p = (NHYDRO); p < (NVEL); p++) { 
# 1197
(((lb->param)->rtau)[p]) = (1.0); 
# 1198
}  
# 1199
}  
# 1201
if ((lb->nrelax) == (LB_RELAXATION_BGK)) { 
# 1202
(((lb->param)->rtau)[LB_TAU_SHEAR]) = rtau_shear; 
# 1203
(((lb->param)->rtau)[LB_TAU_BULK]) = rtau_shear; 
# 1204
for (p = 0; p < (NVEL); p++) { 
# 1205
(((lb->param)->rtau)[p]) = rtau_shear; 
# 1206
}  
# 1207
}  
# 1209
if ((lb->nrelax) == (LB_RELAXATION_TRT)) { 
# 1211
((NVEL) != 9) ? static_cast< void>(0) : __assert_fail("NVEL != 9", "collision.c", 1211, __PRETTY_FUNCTION__); 
# 1213
(((lb->param)->rtau)[LB_TAU_SHEAR]) = rtau_shear; 
# 1214
(((lb->param)->rtau)[LB_TAU_BULK]) = rtau_bulk; 
# 1216
tau = (eta_shear / (rho0 * cs2)); 
# 1217
rtau = ((0.5) + (((2.0) * tau) / (tau + ((3.0) / (8.0))))); 
# 1218
if (rtau > (2.0)) { rtau = (2.0); }  
# 1220
if ((NVEL) == 15) { 
# 1221
(((lb->param)->rtau)[10]) = rtau_shear; 
# 1222
(((lb->param)->rtau)[11]) = rtau; 
# 1223
(((lb->param)->rtau)[12]) = rtau; 
# 1224
(((lb->param)->rtau)[13]) = rtau; 
# 1225
(((lb->param)->rtau)[14]) = rtau_shear; 
# 1226
}  
# 1228
if ((NVEL) == 19) { 
# 1229
(((lb->param)->rtau)[10]) = rtau_shear; 
# 1230
(((lb->param)->rtau)[14]) = rtau_shear; 
# 1231
(((lb->param)->rtau)[18]) = rtau_shear; 
# 1233
(((lb->param)->rtau)[11]) = rtau; 
# 1234
(((lb->param)->rtau)[12]) = rtau; 
# 1235
(((lb->param)->rtau)[13]) = rtau; 
# 1236
(((lb->param)->rtau)[15]) = rtau; 
# 1237
(((lb->param)->rtau)[16]) = rtau; 
# 1238
(((lb->param)->rtau)[17]) = rtau; 
# 1239
}  
# 1240
}  
# 1242
return 0; 
# 1243
} 
# 1254 "collision.c"
int lb_relaxation_time_shear(lb_t *lb, double 
# 1255
eta, double *rtau) { 
# 1257
const double cs2 = ((1.0) / (3.0)); 
# 1259
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1259, __PRETTY_FUNCTION__); 
# 1261
(*rtau) = ((1.0) / ((0.5) + (eta / (((lb->param)->rho0) * cs2)))); 
# 1263
return 0; 
# 1264
} 
# 1275 "collision.c"
int lb_relaxation_time_bulk(lb_t *lb, double 
# 1276
eta, double eta_nu, double *
# 1277
rtau) { 
# 1278
const double cs2 = ((1.0) / (3.0)); 
# 1280
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1280, __PRETTY_FUNCTION__); 
# 1281
(rtau) ? static_cast< void>(0) : __assert_fail("rtau", "collision.c", 1281, __PRETTY_FUNCTION__); 
# 1283
(*rtau) = (0.0); 
# 1285
(lb_nrelax_valid(lb->nrelax)) ? static_cast< void>(0) : __assert_fail("lb_nrelax_valid(lb->nrelax)", "collision.c", 1285, __PRETTY_FUNCTION__); 
# 1287
if ((lb->nrelax) == (LB_RELAXATION_M10)) { 
# 1288
(*rtau) = ((1.0) / ((0.5) + (eta_nu / (((lb->param)->rho0) * cs2)))); 
# 1289
}  
# 1291
if ((lb->nrelax) == (LB_RELAXATION_BGK)) { 
# 1293
(*rtau) = ((1.0) / ((0.5) + (eta / (((lb->param)->rho0) * cs2)))); 
# 1294
}  
# 1296
if ((lb->nrelax) == (LB_RELAXATION_TRT)) { 
# 1297
(*rtau) = ((1.0) / ((0.5) + (eta_nu / (((lb->param)->rho0) * cs2)))); 
# 1298
}  
# 1300
return 0; 
# 1301
} 
# 1311 "collision.c"
int lb_relaxation_time_ghosts(lb_t *lb, double 
# 1312
eta, double *
# 1313
rtau) { 
# 1314
int p; 
# 1315
double rtau_ghost; 
# 1316
double rtau_shear; 
# 1317
const double cs2 = ((1.0) / (3.0)); 
# 1319
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1319, __PRETTY_FUNCTION__); 
# 1320
(rtau) ? static_cast< void>(0) : __assert_fail("rtau", "collision.c", 1320, __PRETTY_FUNCTION__); 
# 1322
if ((lb->nrelax) == (LB_RELAXATION_M10)) { 
# 1323
for (p = (NHYDRO); p < (NVEL); p++) { 
# 1324
(rtau[p]) = (1.0); 
# 1325
}  
# 1326
}  
# 1328
if ((lb->nrelax) == (LB_RELAXATION_BGK)) { 
# 1329
lb_relaxation_time_shear(lb, eta, &rtau_shear); 
# 1330
for (p = (NHYDRO); p < (NVEL); p++) { 
# 1331
(rtau[p]) = rtau_shear; 
# 1332
}  
# 1333
}  
# 1335
if ((lb->nrelax) == (LB_RELAXATION_TRT)) { 
# 1337
double tau; 
# 1339
((NVEL) != 9) ? static_cast< void>(0) : __assert_fail("NVEL != 9", "collision.c", 1339, __PRETTY_FUNCTION__); 
# 1340
lb_relaxation_time_shear(lb, eta, &rtau_shear); 
# 1342
tau = (eta / (((lb->param)->rho0) * cs2)); 
# 1343
rtau_ghost = ((0.5) + (((2.0) * tau) / (tau + ((3.0) / (8.0))))); 
# 1345
if (rtau_ghost > (2.0)) { rtau_ghost = (2.0); }  
# 1347
if ((NVEL) == 15) { 
# 1348
(rtau[10]) = rtau_shear; 
# 1349
(rtau[11]) = rtau_ghost; 
# 1350
(rtau[12]) = rtau_ghost; 
# 1351
(rtau[13]) = rtau_ghost; 
# 1352
(rtau[14]) = rtau_shear; 
# 1353
}  
# 1355
if ((NVEL) == 19) { 
# 1356
(rtau[10]) = rtau_shear; 
# 1357
(rtau[14]) = rtau_shear; 
# 1358
(rtau[18]) = rtau_shear; 
# 1360
(rtau[11]) = rtau_ghost; 
# 1361
(rtau[12]) = rtau_ghost; 
# 1362
(rtau[13]) = rtau_ghost; 
# 1363
(rtau[15]) = rtau_ghost; 
# 1364
(rtau[16]) = rtau_ghost; 
# 1365
(rtau[17]) = rtau_ghost; 
# 1366
}  
# 1367
}  
# 1369
return 0; 
# 1370
} 
# 1378
int lb_nrelax_valid(lb_relaxation_enum_t nrelax) { 
# 1380
int isvalid = 0; 
# 1382
switch (nrelax) { 
# 1383
case LB_RELAXATION_M10:  
# 1384
case LB_RELAXATION_BGK:  
# 1385
case LB_RELAXATION_TRT:  
# 1386
isvalid = 1; 
# 1387
break; 
# 1388
default:  
# 1389
isvalid = 0; 
# 1390
}  
# 1392
return isvalid; 
# 1393
} 
# 1404 "collision.c"
int lb_collision_noise_var_set(lb_t *lb, noise_t *noise) { 
# 1406
int p; 
# 1407
int noise_on = 0; 
# 1408
double kt; 
# 1409
double tau_s; 
# 1410
double tau_b; 
# 1411
double tau_g; 
# 1412
physics_t *phys = (__null); 
# 1414
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1414, __PRETTY_FUNCTION__); 
# 1415
(noise) ? static_cast< void>(0) : __assert_fail("noise", "collision.c", 1415, __PRETTY_FUNCTION__); 
# 1417
noise_present(noise, NOISE_RHO, &noise_on); 
# 1419
if (noise_on) { 
# 1421
physics_ref(&phys); 
# 1422
physics_kt(phys, &kt); 
# 1424
tau_s = ((1.0) / (((lb->param)->rtau)[LB_TAU_SHEAR])); 
# 1425
tau_b = ((1.0) / (((lb->param)->rtau)[LB_TAU_BULK])); 
# 1429
physics_kt(phys, &kt); 
# 1430
kt = (kt * rcs2); 
# 1432
((lb->param)->var_bulk) = ((sqrt(kt) * sqrt((2.0) / (9.0))) * sqrt(((tau_b + tau_b) - (1.0)) / (tau_b * tau_b))); 
# 1434
((lb->param)->var_shear) = ((sqrt(kt) * sqrt((1.0) / (9.0))) * sqrt(((tau_s + tau_s) - (1.0)) / (tau_s * tau_s))); 
# 1439
for (p = (NHYDRO); p < (NVEL); p++) { 
# 1440
tau_g = ((1.0) / (((lb->param)->rtau)[p])); 
# 1441
(((lb->param)->var_noise)[p]) = (sqrt(kt / (norm_[p])) * sqrt(((tau_g + tau_g) - (1.0)) / (tau_g * tau_g))); 
# 1443
}  
# 1444
}  
# 1446
if (((lb->param)->isghost) == (LB_GHOST_OFF)) { 
# 1450
for (p = (NHYDRO); p < (NVEL); p++) { 
# 1451
(((lb->param)->rtau)[p]) = (1.0); 
# 1452
(((lb->param)->var_noise)[p]) = (0.0); 
# 1453
}  
# 1454
}  
# 1456
return 0; 
# 1457
} 
# 1468 "collision.c"
int lb_collision_relaxation_times(lb_t *lb, double *tau) { 
# 1470
int ia; 
# 1472
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1472, __PRETTY_FUNCTION__); 
# 1473
(tau) ? static_cast< void>(0) : __assert_fail("tau", "collision.c", 1473, __PRETTY_FUNCTION__); 
# 1477
for (ia = 0; ia <= (NDIM); ia++) { 
# 1478
(tau[ia]) = (0.0); 
# 1479
}  
# 1481
lb_collision_relaxation_times_set(lb); 
# 1483
for (ia = ((NDIM) + 1); ia < (NVEL); ia++) { 
# 1484
(tau[ia]) = ((1.0) / (((lb->param)->rtau)[ia])); 
# 1485
}  
# 1487
return 0; 
# 1488
} 
# 1503 "collision.c"
static void lb_collision_fluctuations(lb_t *lb, noise_t *noise, int index, double 
# 1504
shat[3][3], double ghat[NVEL]) { 
# 1505
int ia; 
# 1506
double tr; 
# 1507
double random[10]; 
# 1509
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1509, __PRETTY_FUNCTION__); 
# 1510
(lb->param) ? static_cast< void>(0) : __assert_fail("lb->param", "collision.c", 1510, __PRETTY_FUNCTION__); 
# 1511
(noise) ? static_cast< void>(0) : __assert_fail("noise", "collision.c", 1511, __PRETTY_FUNCTION__); 
# 1512
(10 >= (((NDIM) * ((NDIM) + 1)) / 2)) ? static_cast< void>(0) : __assert_fail("10 >= NDIM*(NDIM+1)/2", "collision.c", 1512, __PRETTY_FUNCTION__); 
# 1513
(10 >= ((NVEL) - (NHYDRO))) ? static_cast< void>(0) : __assert_fail("10 >= (NVEL - NHYDRO)", "collision.c", 1513, __PRETTY_FUNCTION__); 
# 1514
(((NDIM) == 2) || ((NDIM) == 3)) ? static_cast< void>(0) : __assert_fail("NDIM == 2 || NDIM == 3", "collision.c", 1514, __PRETTY_FUNCTION__); 
# 1519
noise_reap_n(noise, index, 6, random); 
# 1521
((shat[X])[X]) = (random[0]); 
# 1522
((shat[X])[Y]) = (random[1]); 
# 1523
((shat[X])[Z]) = (random[2]); 
# 1525
((shat[Y])[X]) = ((shat[X])[Y]); 
# 1526
((shat[Y])[Y]) = (random[3]); 
# 1527
((shat[Y])[Z]) = (random[4]); 
# 1529
((shat[Z])[X]) = ((shat[X])[Z]); 
# 1530
((shat[Z])[Y]) = ((shat[Y])[Z]); 
# 1531
((shat[Z])[Z]) = (random[5]); 
# 1535
tr = (((1.0) / (NDIM)) * ((((shat[X])[X]) + ((shat[Y])[Y])) + (((NDIM) - (2.0)) * ((shat[Z])[Z])))); 
# 1536
((shat[X])[X]) -= tr; 
# 1537
((shat[Y])[Y]) -= tr; 
# 1538
((shat[Z])[Z]) -= tr; 
# 1542
((shat[X])[X]) *= (((lb->param)->var_shear) * sqrt((2.0))); 
# 1543
((shat[X])[Y]) *= ((lb->param)->var_shear); 
# 1544
((shat[X])[Z]) *= ((lb->param)->var_shear); 
# 1546
((shat[Y])[X]) *= ((lb->param)->var_shear); 
# 1547
((shat[Y])[Y]) *= (((lb->param)->var_shear) * sqrt((2.0))); 
# 1548
((shat[Y])[Z]) *= ((lb->param)->var_shear); 
# 1550
((shat[Z])[X]) *= ((lb->param)->var_shear); 
# 1551
((shat[Z])[Y]) *= ((lb->param)->var_shear); 
# 1552
((shat[Z])[Z]) *= (((lb->param)->var_shear) * sqrt((2.0))); 
# 1556
tr *= ((lb->param)->var_bulk); 
# 1558
((shat[X])[X]) += tr; 
# 1559
((shat[Y])[Y]) += tr; 
# 1560
((shat[Z])[Z]) += tr; 
# 1564
for (ia = 0; ia < (NVEL); ia++) { 
# 1565
(ghat[ia]) = (0.0); 
# 1566
}  
# 1568
if (((lb->param)->isghost) == (LB_GHOST_ON)) { 
# 1569
noise_reap_n(noise, index, (NVEL) - (NHYDRO), random); 
# 1571
for (ia = (NHYDRO); ia < (NVEL); ia++) { 
# 1572
(ghat[ia]) = ((((lb->param)->var_noise)[ia]) * (random[ia - (NHYDRO)])); 
# 1573
}  
# 1574
}  
# 1577
} 
# 1588 "collision.c"
double lb_fluctuations_var_eta(double tau, double kt) { 
# 1590
const double rcs2 = (3.0); ; 
# 1592
(kt >= (0)) ? static_cast< void>(0) : __assert_fail("kt >= 0", "collision.c", 1592, __PRETTY_FUNCTION__); 
# 1594
kt = (kt * rcs2); 
# 1596
return (sqrt(kt) * sqrt((1.0) / (9.0))) * sqrt(((tau + tau) - (1.0)) / (tau * tau)); 
# 1597
} 
# 1608 "collision.c"
double lb_fluctuations_var_bulk(double tau, double kt) { 
# 1610
const double rcs2 = (3.0); ; 
# 1612
(kt >= (0.0)) ? static_cast< void>(0) : __assert_fail("kt >= 0.0", "collision.c", 1612, __PRETTY_FUNCTION__); 
# 1614
kt = (kt * rcs2); 
# 1616
return (sqrt(kt) * sqrt((2.0) / (9.0))) * sqrt(((tau + tau) - (1.0)) / (tau * tau)); 
# 1617
} 
# 1628 "collision.c"
int lb_fluctuations_var_ghost(double *rtau, double kt, double *
# 1629
var) { 
# 1630
int p; 
# 1631
const double rcs2 = (3.0); ; 
# 1632
const double norm[NVEL19] = {(1.0), (3.0), (3.0), (3.0), ((9.0) / (2.0)), (9.0), (9.0), ((9.0) / (2.0)), (9.0), ((9.0) / (2.0)), ((3.0) / (4.0)), ((3.0) / (2.0)), ((3.0) / (2.0)), ((3.0) / (2.0)), ((9.0) / (4.0)), ((9.0) / (2.0)), ((9.0) / (2.0)), ((9.0) / (2.0)), ((1.0) / (2.0))}; ; 
# 1634
(rtau) ? static_cast< void>(0) : __assert_fail("rtau", "collision.c", 1634, __PRETTY_FUNCTION__); 
# 1635
(kt >= (0.0)) ? static_cast< void>(0) : __assert_fail("kt >= 0.0", "collision.c", 1635, __PRETTY_FUNCTION__); 
# 1636
(var) ? static_cast< void>(0) : __assert_fail("var", "collision.c", 1636, __PRETTY_FUNCTION__); 
# 1638
kt = (kt * rcs2); 
# 1640
for (p = (NHYDRO); p < (NVEL); p++) { 
# 1641
double tau_g = (1.0) / (rtau[p]); 
# 1642
(var[p]) = (sqrt(kt / (norm[p])) * sqrt(((tau_g + tau_g) - (1.0)) / (tau_g * tau_g))); 
# 1643
}  
# 1645
return 0; 
# 1646
} 
# 1657 "collision.c"
int lb_fluctuations_stress(noise_t *noise, int index, double 
# 1658
var_eta, double 
# 1659
var_eta_bulk, double 
# 1660
shat[3][3]) { 
# 1661
double tr; 
# 1662
double random[6]; 
# 1664
(noise) ? static_cast< void>(0) : __assert_fail("noise", "collision.c", 1664, __PRETTY_FUNCTION__); 
# 1665
(((NDIM) == 2) || ((NDIM) == 3)) ? static_cast< void>(0) : __assert_fail("NDIM == 2 || NDIM == 3", "collision.c", 1665, __PRETTY_FUNCTION__); 
# 1670
noise_reap_n(noise, index, 6, random); 
# 1672
((shat[X])[X]) = (random[0]); 
# 1673
((shat[X])[Y]) = (random[1]); 
# 1674
((shat[X])[Z]) = (random[2]); 
# 1676
((shat[Y])[X]) = ((shat[X])[Y]); 
# 1677
((shat[Y])[Y]) = (random[3]); 
# 1678
((shat[Y])[Z]) = (random[4]); 
# 1680
((shat[Z])[X]) = ((shat[X])[Z]); 
# 1681
((shat[Z])[Y]) = ((shat[Y])[Z]); 
# 1682
((shat[Z])[Z]) = (random[5]); 
# 1686
tr = (((1.0) / (NDIM)) * ((((shat[X])[X]) + ((shat[Y])[Y])) + (((NDIM) - (2.0)) * ((shat[Z])[Z])))); 
# 1687
((shat[X])[X]) -= tr; 
# 1688
((shat[Y])[Y]) -= tr; 
# 1689
((shat[Z])[Z]) -= tr; 
# 1693
((shat[X])[X]) *= (var_eta * sqrt((2.0))); 
# 1694
((shat[X])[Y]) *= var_eta; 
# 1695
((shat[X])[Z]) *= var_eta; 
# 1697
((shat[Y])[X]) *= var_eta; 
# 1698
((shat[Y])[Y]) *= (var_eta * sqrt((2.0))); 
# 1699
((shat[Y])[Z]) *= var_eta; 
# 1701
((shat[Z])[X]) *= var_eta; 
# 1702
((shat[Z])[Y]) *= var_eta; 
# 1703
((shat[Z])[Z]) *= (var_eta * sqrt((2.0))); 
# 1707
tr *= var_eta_bulk; 
# 1709
((shat[X])[X]) += tr; 
# 1710
((shat[Y])[Y]) += tr; 
# 1711
((shat[Z])[Z]) += tr; 
# 1713
return 0; 
# 1714
} 
# 1716
int lb_fluctuations_ghosts(noise_t *noise, int index, double *
# 1717
var_ghost, double 
# 1718
ghat[NVEL]) { 
# 1719
int ia; 
# 1720
double random[10]; 
# 1722
(noise) ? static_cast< void>(0) : __assert_fail("noise", "collision.c", 1722, __PRETTY_FUNCTION__); 
# 1723
(10 >= ((NVEL) - (NHYDRO))) ? static_cast< void>(0) : __assert_fail("10 >= (NVEL - NHYDRO)", "collision.c", 1723, __PRETTY_FUNCTION__); 
# 1727
noise_reap_n(noise, index, (NVEL) - (NHYDRO), random); 
# 1729
for (ia = (NHYDRO); ia < (NVEL); ia++) { 
# 1730
(ghat[ia]) = ((var_ghost[ia]) * (random[ia - (NHYDRO)])); 
# 1731
}  
# 1733
return 0; 
# 1734
} 
# 1744 "collision.c"
static int lb_collision_parameters_commit(lb_t *lb, visc_t *visc) { 
# 1746
collide_param_t p; 
# 1747
physics_t *phys = (__null); 
# 1749
int ia; 
# 1750
double t; 
# 1751
double force_constant[3]; 
# 1752
double fpulse_frequency; 
# 1753
double fpulse_frequency_rad; 
# 1754
double fpulse_amplitude[3] = {(0.0), (0.0), (0.0)}; 
# 1755
double force_pulsatile[3] = {(0.0), (0.0), (0.0)}; 
# 1757
const double pi = (3.141592653589793116); 
# 1759
(lb) ? static_cast< void>(0) : __assert_fail("lb", "collision.c", 1759, __PRETTY_FUNCTION__); 
# 1761
physics_ref(&phys); 
# 1762
physics_fbody(phys, force_constant); 
# 1766
physics_kt(phys, &(p.kt)); 
# 1767
physics_eta_shear(phys, &(p.eta_shear)); 
# 1768
physics_eta_bulk(phys, &(p.eta_bulk)); 
# 1770
(p.have_visc_model) = 0; 
# 1771
if (visc) { (p.have_visc_model) = 1; }  
# 1774
physics_fpulse(phys, fpulse_amplitude); 
# 1775
physics_fpulse_frequency(phys, &fpulse_frequency); 
# 1777
t = (physics_control_timestep(phys)); 
# 1778
fpulse_frequency_rad = (((2.0) * pi) * fpulse_frequency); 
# 1780
for (ia = 0; ia < 3; ia++) { 
# 1781
(force_pulsatile[ia]) = ((fpulse_amplitude[ia]) * sin(fpulse_frequency_rad * t)); 
# 1782
((p.force_global)[ia]) = ((force_constant[ia]) + (force_pulsatile[ia])); 
# 1783
}  
# 1788
physics_mobility(phys, &(p.mobility)); 
# 1789
(p.rtau2) = ((2.0) / ((1.0) + ((2.0) * (p.mobility)))); 
# 1791
{ tdpErrorHandler(cudaMemcpyToSymbol(_lbp, lb->param, sizeof(lb_collide_param_t), 0, cudaMemcpyHostToDevice), "collision.c", 1792, 1); 
# 1791 "collision.c"
} 
# 1792
; 
# 1793
{ tdpErrorHandler(cudaMemcpyToSymbol(_cp, &p, sizeof(collide_param_t), 0, cudaMemcpyHostToDevice), "collision.c", 1794, 1); 
# 1793 "collision.c"
} 
# 1794
; 
# 1795
return 0; 
# 1796
} 
# 1828 "collision.c"
__attribute__((unused)) void d3q19_f2mode_chunk(double *mode, const double *__restrict__ fchunk) 
# 1829
{int volatile ___ = 1;(void)mode;(void)fchunk;
# 2237
::exit(___);}
#if 0
# 1829
{ 
# 1831
int m, iv; 
# 1833
for (m = 0; m < (NVEL); m++) { 
# 1834
for (iv = 0; iv < 1; iv++) { (mode[(m * 1) + iv]) = (0.0); }  
# 1835
}  
# 1838
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (1.0)); }  
# 1839
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (1.0)); }  
# 1840
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 1841
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (1.0)); }  
# 1842
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (1.0)); }  
# 1843
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (1.0)); }  
# 1844
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 1845
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (1.0)); }  
# 1846
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (1.0)); }  
# 1847
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (1.0)); }  
# 1848
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (1.0)); }  
# 1849
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (1.0)); }  
# 1850
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (1.0)); }  
# 1851
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (1.0)); }  
# 1852
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (1.0)); }  
# 1853
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (1.0)); }  
# 1854
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (1.0)); }  
# 1855
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (1.0)); }  
# 1856
for (iv = 0; iv < 1; iv++) { (mode[(0 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (1.0)); }  
# 1859
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 1860
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (1.0)); }  
# 1861
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 1862
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (1.0)); }  
# 1863
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (1.0)); }  
# 1864
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (1.0)); }  
# 1865
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (0.0)); }  
# 1866
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 1867
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (0.0)); }  
# 1868
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 1869
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 1870
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (0.0)); }  
# 1871
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 1872
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (0.0)); }  
# 1873
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (-(1.0))); }  
# 1874
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (-(1.0))); }  
# 1875
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (-(1.0))); }  
# 1876
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (-(1.0))); }  
# 1877
for (iv = 0; iv < 1; iv++) { (mode[(1 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (-(1.0))); }  
# 1880
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) = (0.0); }  
# 1881
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 1882
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (1.0)); }  
# 1883
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (0.0)); }  
# 1884
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 1885
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (0.0)); }  
# 1886
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (-(1.0))); }  
# 1887
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 1888
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (1.0)); }  
# 1889
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (1.0)); }  
# 1890
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 1891
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 1892
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (-(1.0))); }  
# 1893
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (-(1.0))); }  
# 1894
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (-(1.0))); }  
# 1895
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (1.0)); }  
# 1896
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (0.0)); }  
# 1897
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 1898
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (0.0)); }  
# 1899
for (iv = 0; iv < 1; iv++) { (mode[(2 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (-(1.0))); }  
# 1902
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 1903
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 1904
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 1905
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 1906
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (-(1.0))); }  
# 1907
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 1908
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 1909
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 1910
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (-(1.0))); }  
# 1911
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (1.0)); }  
# 1912
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (-(1.0))); }  
# 1913
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (1.0)); }  
# 1914
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 1915
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (-(1.0))); }  
# 1916
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 1917
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (1.0)); }  
# 1918
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 1919
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (-(1.0))); }  
# 1920
for (iv = 0; iv < 1; iv++) { (mode[(3 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 1923
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1924
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1925
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1926
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1927
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1928
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1929
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1930
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1931
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1932
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1933
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1934
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1935
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1936
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1937
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1938
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1939
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1940
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1941
for (iv = 0; iv < 1; iv++) { (mode[(4 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1944
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 1945
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (1.0)); }  
# 1946
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (0.0)); }  
# 1947
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 1948
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (0.0)); }  
# 1949
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (-(1.0))); }  
# 1950
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (0.0)); }  
# 1951
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 1952
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (0.0)); }  
# 1953
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 1954
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 1955
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (0.0)); }  
# 1956
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 1957
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (0.0)); }  
# 1958
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (-(1.0))); }  
# 1959
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (0.0)); }  
# 1960
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 1961
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (0.0)); }  
# 1962
for (iv = 0; iv < 1; iv++) { (mode[(5 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (1.0)); }  
# 1965
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 1966
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 1967
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 1968
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 1969
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (-(1.0))); }  
# 1970
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 1971
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (0.0)); }  
# 1972
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 1973
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (0.0)); }  
# 1974
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 1975
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 1976
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (0.0)); }  
# 1977
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 1978
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (0.0)); }  
# 1979
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 1980
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (-(1.0))); }  
# 1981
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 1982
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (1.0)); }  
# 1983
for (iv = 0; iv < 1; iv++) { (mode[(6 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 1986
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1987
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1988
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1989
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1990
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1991
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1992
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1993
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1994
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1995
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1996
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 1997
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1998
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * ((2.0) / (3.0))); }  
# 1999
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2000
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2001
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2002
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2003
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2004
for (iv = 0; iv < 1; iv++) { (mode[(7 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2007
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2008
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 2009
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (0.0)); }  
# 2010
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 2011
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (0.0)); }  
# 2012
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 2013
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2014
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 2015
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (-(1.0))); }  
# 2016
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 2017
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 2018
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (-(1.0))); }  
# 2019
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 2020
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (1.0)); }  
# 2021
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 2022
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (0.0)); }  
# 2023
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 2024
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (0.0)); }  
# 2025
for (iv = 0; iv < 1; iv++) { (mode[(8 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 2028
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2029
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2030
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2031
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2032
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2033
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2034
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2035
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2036
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2037
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2038
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2039
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2040
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2041
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2042
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2043
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2044
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2045
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * ((2.0) / (3.0))); }  
# 2046
for (iv = 0; iv < 1; iv++) { (mode[(9 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (-((1.0) / (3.0)))); }  
# 2049
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2050
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (-(2.0))); }  
# 2051
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 2052
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (1.0)); }  
# 2053
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (1.0)); }  
# 2054
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (-(2.0))); }  
# 2055
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2056
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (1.0)); }  
# 2057
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (1.0)); }  
# 2058
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (-(2.0))); }  
# 2059
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (-(2.0))); }  
# 2060
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (1.0)); }  
# 2061
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (1.0)); }  
# 2062
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (1.0)); }  
# 2063
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (-(2.0))); }  
# 2064
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (1.0)); }  
# 2065
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (1.0)); }  
# 2066
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (1.0)); }  
# 2067
for (iv = 0; iv < 1; iv++) { (mode[(10 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (-(2.0))); }  
# 2070
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2071
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (-(2.0))); }  
# 2072
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 2073
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (1.0)); }  
# 2074
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (1.0)); }  
# 2075
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (-(2.0))); }  
# 2076
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (0.0)); }  
# 2077
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 2078
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (0.0)); }  
# 2079
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 2080
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 2081
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (0.0)); }  
# 2082
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 2083
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (0.0)); }  
# 2084
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (2.0)); }  
# 2085
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (-(1.0))); }  
# 2086
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (-(1.0))); }  
# 2087
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (-(1.0))); }  
# 2088
for (iv = 0; iv < 1; iv++) { (mode[(11 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (2.0)); }  
# 2091
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2092
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (-(2.0))); }  
# 2093
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (0.0)); }  
# 2094
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 2095
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (0.0)); }  
# 2096
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (2.0)); }  
# 2097
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2098
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (1.0)); }  
# 2099
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (1.0)); }  
# 2100
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 2101
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 2102
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (-(1.0))); }  
# 2103
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (-(1.0))); }  
# 2104
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (-(1.0))); }  
# 2105
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (-(2.0))); }  
# 2106
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (0.0)); }  
# 2107
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 2108
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (0.0)); }  
# 2109
for (iv = 0; iv < 1; iv++) { (mode[(12 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (2.0)); }  
# 2112
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2113
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 2114
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 2115
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 2116
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (0.0)); }  
# 2117
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 2118
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2119
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 2120
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (-(1.0))); }  
# 2121
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (-(2.0))); }  
# 2122
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (2.0)); }  
# 2123
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (1.0)); }  
# 2124
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 2125
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (-(1.0))); }  
# 2126
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 2127
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (1.0)); }  
# 2128
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 2129
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (-(1.0))); }  
# 2130
for (iv = 0; iv < 1; iv++) { (mode[(13 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 2133
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2134
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 2135
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (-(1.0))); }  
# 2136
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (1.0)); }  
# 2137
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (-(1.0))); }  
# 2138
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 2139
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2140
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (-(1.0))); }  
# 2141
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (1.0)); }  
# 2142
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 2143
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 2144
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (1.0)); }  
# 2145
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (-(1.0))); }  
# 2146
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (1.0)); }  
# 2147
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 2148
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (-(1.0))); }  
# 2149
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (1.0)); }  
# 2150
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (-(1.0))); }  
# 2151
for (iv = 0; iv < 1; iv++) { (mode[(14 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 2154
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2155
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 2156
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (-(1.0))); }  
# 2157
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (1.0)); }  
# 2158
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (-(1.0))); }  
# 2159
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 2160
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (0.0)); }  
# 2161
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 2162
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (0.0)); }  
# 2163
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 2164
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 2165
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (0.0)); }  
# 2166
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 2167
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (0.0)); }  
# 2168
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 2169
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (1.0)); }  
# 2170
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (-(1.0))); }  
# 2171
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (1.0)); }  
# 2172
for (iv = 0; iv < 1; iv++) { (mode[(15 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 2175
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2176
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 2177
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (0.0)); }  
# 2178
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 2179
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (0.0)); }  
# 2180
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 2181
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2182
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (-(1.0))); }  
# 2183
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (1.0)); }  
# 2184
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 2185
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 2186
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (-(1.0))); }  
# 2187
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (1.0)); }  
# 2188
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (-(1.0))); }  
# 2189
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 2190
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (0.0)); }  
# 2191
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 2192
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (0.0)); }  
# 2193
for (iv = 0; iv < 1; iv++) { (mode[(16 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 2196
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (0.0)); }  
# 2197
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (0.0)); }  
# 2198
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (-(1.0))); }  
# 2199
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (0.0)); }  
# 2200
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (1.0)); }  
# 2201
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (0.0)); }  
# 2202
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2203
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (0.0)); }  
# 2204
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (-(1.0))); }  
# 2205
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (0.0)); }  
# 2206
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (0.0)); }  
# 2207
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (1.0)); }  
# 2208
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (0.0)); }  
# 2209
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (-(1.0))); }  
# 2210
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (0.0)); }  
# 2211
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (-(1.0))); }  
# 2212
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (0.0)); }  
# 2213
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (1.0)); }  
# 2214
for (iv = 0; iv < 1; iv++) { (mode[(17 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (0.0)); }  
# 2217
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(0 * 1) + iv]) * (1.0)); }  
# 2218
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(1 * 1) + iv]) * (1.0)); }  
# 2219
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(2 * 1) + iv]) * (1.0)); }  
# 2220
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(3 * 1) + iv]) * (-(2.0))); }  
# 2221
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(4 * 1) + iv]) * (1.0)); }  
# 2222
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(5 * 1) + iv]) * (1.0)); }  
# 2223
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(6 * 1) + iv]) * (1.0)); }  
# 2224
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(7 * 1) + iv]) * (-(2.0))); }  
# 2225
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(8 * 1) + iv]) * (1.0)); }  
# 2226
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(9 * 1) + iv]) * (-(2.0))); }  
# 2227
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(10 * 1) + iv]) * (-(2.0))); }  
# 2228
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(11 * 1) + iv]) * (1.0)); }  
# 2229
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(12 * 1) + iv]) * (-(2.0))); }  
# 2230
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(13 * 1) + iv]) * (1.0)); }  
# 2231
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(14 * 1) + iv]) * (1.0)); }  
# 2232
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(15 * 1) + iv]) * (1.0)); }  
# 2233
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(16 * 1) + iv]) * (-(2.0))); }  
# 2234
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(17 * 1) + iv]) * (1.0)); }  
# 2235
for (iv = 0; iv < 1; iv++) { (mode[(18 * 1) + iv]) += ((fchunk[(18 * 1) + iv]) * (1.0)); }  
# 2237
} 
#endif
# 2239 "collision.c"
__attribute__((unused)) void d3q19_mode2f_chunk(double *mode, double *fchunk) {int volatile ___ = 1;(void)mode;(void)fchunk;
# 2683
::exit(___);}
#if 0
# 2239
{ 
# 2241
double ftmp[1]; 
# 2243
int iv; 
# 2246
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2247
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((12.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2248
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2249
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2250
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2251
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (2.0))) * (mode[(4 * 1) + iv])); }  
# 2252
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2253
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2254
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (2.0))) * (mode[(7 * 1) + iv])); }  
# 2255
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2256
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (2.0))) * (mode[(9 * 1) + iv])); }  
# 2257
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(10 * 1) + iv])); }  
# 2258
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2259
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2260
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2261
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(14 * 1) + iv])); }  
# 2262
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2263
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2264
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2265
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(18 * 1) + iv])); }  
# 2266
for (iv = 0; iv < 1; iv++) { (fchunk[(0 * 1) + iv]) = (ftmp[iv]); }  
# 2269
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2270
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2271
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(1 * 1) + iv])); }  
# 2272
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(2 * 1) + iv])); }  
# 2273
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2274
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2275
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(5 * 1) + iv])); }  
# 2276
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2277
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2278
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2279
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2280
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(10 * 1) + iv])); }  
# 2281
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(11 * 1) + iv])); }  
# 2282
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(12 * 1) + iv])); }  
# 2283
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2284
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(14 * 1) + iv])); }  
# 2285
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2286
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2287
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2288
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2289
for (iv = 0; iv < 1; iv++) { (fchunk[(1 * 1) + iv]) = (ftmp[iv]); }  
# 2292
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2293
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2294
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(1 * 1) + iv])); }  
# 2295
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2296
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(3 * 1) + iv])); }  
# 2297
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2298
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2299
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(6 * 1) + iv])); }  
# 2300
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2301
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2302
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2303
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2304
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(11 * 1) + iv])); }  
# 2305
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2306
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(13 * 1) + iv])); }  
# 2307
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (48.0))) * (mode[(14 * 1) + iv])); }  
# 2308
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(15 * 1) + iv])); }  
# 2309
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2310
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(17 * 1) + iv])); }  
# 2311
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2312
for (iv = 0; iv < 1; iv++) { (fchunk[(2 * 1) + iv]) = (ftmp[iv]); }  
# 2315
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2316
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((2.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2317
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(1 * 1) + iv])); }  
# 2318
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2319
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2320
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(4 * 1) + iv])); }  
# 2321
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2322
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2323
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2324
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2325
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2326
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(10 * 1) + iv])); }  
# 2327
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(11 * 1) + iv])); }  
# 2328
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2329
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2330
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(14 * 1) + iv])); }  
# 2331
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(15 * 1) + iv])); }  
# 2332
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2333
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2334
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((2.0) / (36.0))) * (mode[(18 * 1) + iv])); }  
# 2335
for (iv = 0; iv < 1; iv++) { (fchunk[(3 * 1) + iv]) = (ftmp[iv]); }  
# 2338
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2339
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2340
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(1 * 1) + iv])); }  
# 2341
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2342
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(3 * 1) + iv])); }  
# 2343
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2344
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2345
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(6 * 1) + iv])); }  
# 2346
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2347
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2348
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2349
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2350
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(11 * 1) + iv])); }  
# 2351
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2352
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(13 * 1) + iv])); }  
# 2353
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (48.0))) * (mode[(14 * 1) + iv])); }  
# 2354
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(15 * 1) + iv])); }  
# 2355
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2356
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(17 * 1) + iv])); }  
# 2357
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2358
for (iv = 0; iv < 1; iv++) { (fchunk[(4 * 1) + iv]) = (ftmp[iv]); }  
# 2361
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2362
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2363
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(1 * 1) + iv])); }  
# 2364
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(2 * 1) + iv])); }  
# 2365
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2366
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2367
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(5 * 1) + iv])); }  
# 2368
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2369
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2370
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2371
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2372
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(10 * 1) + iv])); }  
# 2373
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(11 * 1) + iv])); }  
# 2374
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(12 * 1) + iv])); }  
# 2375
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2376
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(14 * 1) + iv])); }  
# 2377
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2378
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2379
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2380
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2381
for (iv = 0; iv < 1; iv++) { (fchunk[(5 * 1) + iv]) = (ftmp[iv]); }  
# 2384
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2385
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2386
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2387
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(2 * 1) + iv])); }  
# 2388
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(3 * 1) + iv])); }  
# 2389
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2390
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2391
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2392
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2393
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(8 * 1) + iv])); }  
# 2394
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2395
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2396
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2397
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(12 * 1) + iv])); }  
# 2398
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(13 * 1) + iv])); }  
# 2399
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (48.0)) * (mode[(14 * 1) + iv])); }  
# 2400
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2401
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(16 * 1) + iv])); }  
# 2402
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(17 * 1) + iv])); }  
# 2403
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2404
for (iv = 0; iv < 1; iv++) { (fchunk[(6 * 1) + iv]) = (ftmp[iv]); }  
# 2407
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2408
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((2.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2409
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2410
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(2 * 1) + iv])); }  
# 2411
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2412
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2413
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2414
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2415
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(7 * 1) + iv])); }  
# 2416
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2417
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2418
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(10 * 1) + iv])); }  
# 2419
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2420
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(12 * 1) + iv])); }  
# 2421
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2422
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(14 * 1) + iv])); }  
# 2423
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2424
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(16 * 1) + iv])); }  
# 2425
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2426
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((2.0) / (36.0))) * (mode[(18 * 1) + iv])); }  
# 2427
for (iv = 0; iv < 1; iv++) { (fchunk[(7 * 1) + iv]) = (ftmp[iv]); }  
# 2430
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2431
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2432
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2433
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(2 * 1) + iv])); }  
# 2434
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(3 * 1) + iv])); }  
# 2435
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2436
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2437
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2438
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2439
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(8 * 1) + iv])); }  
# 2440
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2441
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2442
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2443
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(12 * 1) + iv])); }  
# 2444
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(13 * 1) + iv])); }  
# 2445
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (48.0)) * (mode[(14 * 1) + iv])); }  
# 2446
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2447
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(16 * 1) + iv])); }  
# 2448
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(17 * 1) + iv])); }  
# 2449
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2450
for (iv = 0; iv < 1; iv++) { (fchunk[(8 * 1) + iv]) = (ftmp[iv]); }  
# 2453
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2454
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((2.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2455
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2456
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2457
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(3 * 1) + iv])); }  
# 2458
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2459
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2460
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2461
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2462
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2463
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(9 * 1) + iv])); }  
# 2464
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(10 * 1) + iv])); }  
# 2465
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2466
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2467
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (6.0))) * (mode[(13 * 1) + iv])); }  
# 2468
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(14 * 1) + iv])); }  
# 2469
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2470
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2471
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2472
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((2.0) / (36.0))) * (mode[(18 * 1) + iv])); }  
# 2473
for (iv = 0; iv < 1; iv++) { (fchunk[(9 * 1) + iv]) = (ftmp[iv]); }  
# 2476
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2477
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((2.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2478
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2479
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2480
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (6.0))) * (mode[(3 * 1) + iv])); }  
# 2481
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2482
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2483
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2484
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2485
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2486
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(9 * 1) + iv])); }  
# 2487
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(10 * 1) + iv])); }  
# 2488
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2489
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2490
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(13 * 1) + iv])); }  
# 2491
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(14 * 1) + iv])); }  
# 2492
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2493
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2494
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2495
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((2.0) / (36.0))) * (mode[(18 * 1) + iv])); }  
# 2496
for (iv = 0; iv < 1; iv++) { (fchunk[(10 * 1) + iv]) = (ftmp[iv]); }  
# 2499
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2500
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2501
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2502
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(2 * 1) + iv])); }  
# 2503
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(3 * 1) + iv])); }  
# 2504
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2505
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2506
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2507
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2508
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(8 * 1) + iv])); }  
# 2509
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2510
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2511
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2512
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(12 * 1) + iv])); }  
# 2513
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(13 * 1) + iv])); }  
# 2514
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (48.0)) * (mode[(14 * 1) + iv])); }  
# 2515
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2516
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(16 * 1) + iv])); }  
# 2517
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(17 * 1) + iv])); }  
# 2518
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2519
for (iv = 0; iv < 1; iv++) { (fchunk[(11 * 1) + iv]) = (ftmp[iv]); }  
# 2522
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2523
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((2.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2524
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2525
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (6.0))) * (mode[(2 * 1) + iv])); }  
# 2526
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2527
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2528
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2529
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2530
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(7 * 1) + iv])); }  
# 2531
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2532
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2533
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(10 * 1) + iv])); }  
# 2534
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2535
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(12 * 1) + iv])); }  
# 2536
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2537
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(14 * 1) + iv])); }  
# 2538
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2539
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(16 * 1) + iv])); }  
# 2540
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2541
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((2.0) / (36.0))) * (mode[(18 * 1) + iv])); }  
# 2542
for (iv = 0; iv < 1; iv++) { (fchunk[(12 * 1) + iv]) = (ftmp[iv]); }  
# 2545
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2546
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2547
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(1 * 1) + iv])); }  
# 2548
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(2 * 1) + iv])); }  
# 2549
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(3 * 1) + iv])); }  
# 2550
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(4 * 1) + iv])); }  
# 2551
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2552
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2553
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2554
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(8 * 1) + iv])); }  
# 2555
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2556
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2557
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(11 * 1) + iv])); }  
# 2558
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(12 * 1) + iv])); }  
# 2559
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(13 * 1) + iv])); }  
# 2560
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (48.0)) * (mode[(14 * 1) + iv])); }  
# 2561
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2562
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(16 * 1) + iv])); }  
# 2563
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(17 * 1) + iv])); }  
# 2564
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2565
for (iv = 0; iv < 1; iv++) { (fchunk[(13 * 1) + iv]) = (ftmp[iv]); }  
# 2568
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2569
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2570
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(1 * 1) + iv])); }  
# 2571
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(2 * 1) + iv])); }  
# 2572
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2573
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2574
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(5 * 1) + iv])); }  
# 2575
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2576
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2577
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2578
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2579
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(10 * 1) + iv])); }  
# 2580
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(11 * 1) + iv])); }  
# 2581
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(12 * 1) + iv])); }  
# 2582
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2583
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(14 * 1) + iv])); }  
# 2584
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2585
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2586
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2587
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2588
for (iv = 0; iv < 1; iv++) { (fchunk[(14 * 1) + iv]) = (ftmp[iv]); }  
# 2591
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2592
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2593
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(1 * 1) + iv])); }  
# 2594
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2595
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(3 * 1) + iv])); }  
# 2596
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2597
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2598
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(6 * 1) + iv])); }  
# 2599
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2600
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2601
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2602
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2603
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(11 * 1) + iv])); }  
# 2604
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2605
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(13 * 1) + iv])); }  
# 2606
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (48.0))) * (mode[(14 * 1) + iv])); }  
# 2607
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(15 * 1) + iv])); }  
# 2608
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2609
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (8.0))) * (mode[(17 * 1) + iv])); }  
# 2610
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2611
for (iv = 0; iv < 1; iv++) { (fchunk[(15 * 1) + iv]) = (ftmp[iv]); }  
# 2614
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2615
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((2.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2616
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (6.0))) * (mode[(1 * 1) + iv])); }  
# 2617
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2618
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2619
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (6.0)) * (mode[(4 * 1) + iv])); }  
# 2620
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2621
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2622
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2623
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2624
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2625
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((3.0) / (72.0)) * (mode[(10 * 1) + iv])); }  
# 2626
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(11 * 1) + iv])); }  
# 2627
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2628
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2629
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(14 * 1) + iv])); }  
# 2630
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((1.0) / (4.0))) * (mode[(15 * 1) + iv])); }  
# 2631
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2632
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2633
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((2.0) / (36.0))) * (mode[(18 * 1) + iv])); }  
# 2634
for (iv = 0; iv < 1; iv++) { (fchunk[(16 * 1) + iv]) = (ftmp[iv]); }  
# 2637
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2638
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2639
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(1 * 1) + iv])); }  
# 2640
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(2 * 1) + iv])); }  
# 2641
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(3 * 1) + iv])); }  
# 2642
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2643
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(5 * 1) + iv])); }  
# 2644
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(6 * 1) + iv])); }  
# 2645
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(7 * 1) + iv])); }  
# 2646
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2647
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(9 * 1) + iv])); }  
# 2648
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (48.0)) * (mode[(10 * 1) + iv])); }  
# 2649
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(11 * 1) + iv])); }  
# 2650
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(12 * 1) + iv])); }  
# 2651
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(13 * 1) + iv])); }  
# 2652
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (48.0))) * (mode[(14 * 1) + iv])); }  
# 2653
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(15 * 1) + iv])); }  
# 2654
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2655
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (8.0)) * (mode[(17 * 1) + iv])); }  
# 2656
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2657
for (iv = 0; iv < 1; iv++) { (fchunk[(17 * 1) + iv]) = (ftmp[iv]); }  
# 2660
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) = (0.0); }  
# 2661
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (36.0)) * (mode[(0 * 1) + iv])); }  
# 2662
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(1 * 1) + iv])); }  
# 2663
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((6.0) / (72.0))) * (mode[(2 * 1) + iv])); }  
# 2664
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(3 * 1) + iv])); }  
# 2665
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(4 * 1) + iv])); }  
# 2666
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (4.0)) * (mode[(5 * 1) + iv])); }  
# 2667
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(6 * 1) + iv])); }  
# 2668
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(7 * 1) + iv])); }  
# 2669
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(8 * 1) + iv])); }  
# 2670
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(9 * 1) + iv])); }  
# 2671
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((-((3.0) / (72.0))) * (mode[(10 * 1) + iv])); }  
# 2672
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(11 * 1) + iv])); }  
# 2673
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((6.0) / (72.0)) * (mode[(12 * 1) + iv])); }  
# 2674
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(13 * 1) + iv])); }  
# 2675
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(14 * 1) + iv])); }  
# 2676
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(15 * 1) + iv])); }  
# 2677
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(16 * 1) + iv])); }  
# 2678
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += ((0.0) * (mode[(17 * 1) + iv])); }  
# 2679
for (iv = 0; iv < 1; iv++) { (ftmp[iv]) += (((1.0) / (72.0)) * (mode[(18 * 1) + iv])); }  
# 2680
for (iv = 0; iv < 1; iv++) { (fchunk[(18 * 1) + iv]) = (ftmp[iv]); }  
# 2683
} 
#endif
# 2686 "collision.c"
__attribute__((unused)) void d3q19_mode2f_phi(double jdotc[1], double 
# 2687
sphidotq[1], double 
# 2688
sphi[3][3][1], double 
# 2689
phi[1], double 
# 2690
jphi[3][1], double *
# 2691
f, int baseIndex) {int volatile ___ = 1;(void)jdotc;(void)sphidotq;(void)sphi;(void)phi;(void)jphi;(void)f;(void)baseIndex;
# 2960
::exit(___);}
#if 0
# 2691
{ 
# 2693
int iv = 0; 
# 2694
const double rcs2 = (3.0); 
# 2695
const double r2rcs4 = ((9.0) / (2.0)); 
# 2697
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2699
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2700
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2701
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2703
for (iv = 0; iv < 1; iv++) { 
# 2704
(f[reverse_addr_rank2_assert(2704, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 0)]) = ((((12.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))) + (phi[iv])); }  
# 2708
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2710
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[X])[iv]); }  
# 2711
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Y])[iv]); }  
# 2712
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2713
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[1])[iv]) * (1.0)); }  
# 2714
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[0])[iv]) * (1.0)); }  
# 2715
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2716
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2718
for (iv = 0; iv < 1; iv++) { 
# 2719
(f[reverse_addr_rank2_assert(2719, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 1)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2723
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2725
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[X])[iv]); }  
# 2726
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Z])[iv]); }  
# 2727
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2728
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[2])[iv]) * (1.0)); }  
# 2729
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2730
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[0])[iv]) * (1.0)); }  
# 2731
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2733
for (iv = 0; iv < 1; iv++) { 
# 2734
(f[reverse_addr_rank2_assert(2734, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 2)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2738
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2740
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[X])[iv]); }  
# 2741
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2742
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2743
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2745
for (iv = 0; iv < 1; iv++) { 
# 2746
(f[reverse_addr_rank2_assert(2746, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 3)]) = (((2.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2750
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2752
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[X])[iv]); }  
# 2753
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Z])[iv]); }  
# 2754
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2755
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[2])[iv]) * (-(1.0))); }  
# 2756
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2757
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[0])[iv]) * (-(1.0))); }  
# 2758
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2760
for (iv = 0; iv < 1; iv++) { 
# 2761
(f[reverse_addr_rank2_assert(2761, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 4)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2765
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2767
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[X])[iv]); }  
# 2768
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Y])[iv]); }  
# 2769
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2770
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[1])[iv]) * (-(1.0))); }  
# 2771
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[0])[iv]) * (-(1.0))); }  
# 2772
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2773
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2775
for (iv = 0; iv < 1; iv++) { 
# 2776
(f[reverse_addr_rank2_assert(2776, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 5)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2780
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2782
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Y])[iv]); }  
# 2783
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Z])[iv]); }  
# 2784
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2785
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2786
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[2])[iv]) * (1.0)); }  
# 2787
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[1])[iv]) * (1.0)); }  
# 2788
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2790
for (iv = 0; iv < 1; iv++) { 
# 2791
(f[reverse_addr_rank2_assert(2791, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 6)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2795
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2797
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Y])[iv]); }  
# 2798
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2799
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2800
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2802
for (iv = 0; iv < 1; iv++) { 
# 2803
(f[reverse_addr_rank2_assert(2803, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 7)]) = (((2.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2807
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2809
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Y])[iv]); }  
# 2810
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Z])[iv]); }  
# 2811
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2812
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2813
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[2])[iv]) * (-(1.0))); }  
# 2814
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[1])[iv]) * (-(1.0))); }  
# 2815
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2817
for (iv = 0; iv < 1; iv++) { 
# 2818
(f[reverse_addr_rank2_assert(2818, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 8)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2822
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2824
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Z])[iv]); }  
# 2825
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2826
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2827
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2829
for (iv = 0; iv < 1; iv++) { 
# 2830
(f[reverse_addr_rank2_assert(2830, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 9)]) = (((2.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2834
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2836
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Z])[iv]); }  
# 2837
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2838
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2839
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2841
for (iv = 0; iv < 1; iv++) { 
# 2842
(f[reverse_addr_rank2_assert(2842, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 10)]) = (((2.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2846
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2848
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Y])[iv]); }  
# 2849
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Z])[iv]); }  
# 2850
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2851
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2852
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[2])[iv]) * (-(1.0))); }  
# 2853
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[1])[iv]) * (-(1.0))); }  
# 2854
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2856
for (iv = 0; iv < 1; iv++) { 
# 2857
(f[reverse_addr_rank2_assert(2857, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 11)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2861
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2863
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Y])[iv]); }  
# 2864
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2865
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2866
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2868
for (iv = 0; iv < 1; iv++) { 
# 2869
(f[reverse_addr_rank2_assert(2869, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 12)]) = (((2.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2873
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2875
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Y])[iv]); }  
# 2876
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Z])[iv]); }  
# 2877
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (-(0.3333333333333333148))); }  
# 2878
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2879
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[2])[iv]) * (1.0)); }  
# 2880
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[1])[iv]) * (1.0)); }  
# 2881
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2883
for (iv = 0; iv < 1; iv++) { 
# 2884
(f[reverse_addr_rank2_assert(2884, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 13)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2888
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2890
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[X])[iv]); }  
# 2891
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Y])[iv]); }  
# 2892
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2893
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[1])[iv]) * (-(1.0))); }  
# 2894
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[0])[iv]) * (-(1.0))); }  
# 2895
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2896
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2898
for (iv = 0; iv < 1; iv++) { 
# 2899
(f[reverse_addr_rank2_assert(2899, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 14)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2903
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2905
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[X])[iv]); }  
# 2906
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) += ((jphi[Z])[iv]); }  
# 2907
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2908
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[2])[iv]) * (-(1.0))); }  
# 2909
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2910
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[0])[iv]) * (-(1.0))); }  
# 2911
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2913
for (iv = 0; iv < 1; iv++) { 
# 2914
(f[reverse_addr_rank2_assert(2914, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 15)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2918
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2920
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[X])[iv]); }  
# 2921
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2922
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2923
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2925
for (iv = 0; iv < 1; iv++) { 
# 2926
(f[reverse_addr_rank2_assert(2926, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 16)]) = (((2.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2930
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2932
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[X])[iv]); }  
# 2933
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Z])[iv]); }  
# 2934
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2935
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[2])[iv]) * (1.0)); }  
# 2936
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (-(0.3333333333333333148))); }  
# 2937
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[0])[iv]) * (1.0)); }  
# 2938
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (0.6666666666666666297)); }  
# 2940
for (iv = 0; iv < 1; iv++) { 
# 2941
(f[reverse_addr_rank2_assert(2941, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 17)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2945
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) = (0.0); (sphidotq[iv]) = (0.0); }  
# 2947
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[X])[iv]); }  
# 2948
for (iv = 0; iv < 1; iv++) { (jdotc[iv]) -= ((jphi[Y])[iv]); }  
# 2949
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[0])[iv]) * (0.6666666666666666297)); }  
# 2950
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[0])[1])[iv]) * (1.0)); }  
# 2951
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[0])[iv]) * (1.0)); }  
# 2952
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[1])[1])[iv]) * (0.6666666666666666297)); }  
# 2953
for (iv = 0; iv < 1; iv++) { (sphidotq[iv]) += ((((sphi[2])[2])[iv]) * (-(0.3333333333333333148))); }  
# 2955
for (iv = 0; iv < 1; iv++) { 
# 2956
(f[reverse_addr_rank2_assert(2956, "collision.c", _lbp.nsite, 2, NVEL, baseIndex + iv, LB_PHI, 18)]) = (((1.0) / (36.0)) * (((jdotc[iv]) * rcs2) + ((sphidotq[iv]) * r2rcs4))); }  
# 2960
} 
#endif

# 1 "collision.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__17_collision_cpp1_ii_1fcdf597
# 1 "collision.cudafe1.stub.c"
#include "collision.cudafe1.stub.c"
# 1 "collision.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
