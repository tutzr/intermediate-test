#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _20_polar_active_cpp1_ii_adcab0a1
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "polar_active.fatbin.c"
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __nv_cudaEntityRegisterCallback(void **__T10){__nv_dummy_param_ref(__T10);__nv_save_fatbinhandle_for_managed_rt(__T10);__cudaRegisterVariable(__T10, __shadow_var(__nv_static_33__20_polar_active_cpp1_ii_adcab0a1_const_param,::const_param), 0, 64UL, 1, 0);__cudaRegisterVariable(__T10, __shadow_var(__nv_static_33__20_polar_active_cpp1_ii_adcab0a1_fe_polar_dvt,::fe_polar_dvt), 0, 112UL, 1, 0);}
static void __sti____cudaRegisterAll(void){____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);}

#pragma GCC diagnostic pop
