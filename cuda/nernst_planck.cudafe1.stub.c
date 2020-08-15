#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _21_nernst_planck_cpp1_ii_08764160
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "nernst_planck.fatbin.c"
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __nv_cudaEntityRegisterCallback(void **__T7){__nv_dummy_param_ref(__T7);__nv_save_fatbinhandle_for_managed_rt(__T7);}
static void __sti____cudaRegisterAll(void){____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);}

#pragma GCC diagnostic pop
