#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _18_brazovskii_cpp1_ii_48cd644b
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "brazovskii.fatbin.c"
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __nv_cudaEntityRegisterCallback(void **__T11){__nv_dummy_param_ref(__T11);__nv_save_fatbinhandle_for_managed_rt(__T11);__cudaRegisterVariable(__T11, __shadow_var(__nv_static_31__18_brazovskii_cpp1_ii_48cd644b_const_param,::const_param), 0, 32UL, 1, 0);__cudaRegisterVariable(__T11, __shadow_var(__nv_static_31__18_brazovskii_cpp1_ii_48cd644b_fe_braz_dvt,::fe_braz_dvt), 0, 112UL, 1, 0);}
static void __sti____cudaRegisterAll(void){____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);}

#pragma GCC diagnostic pop
