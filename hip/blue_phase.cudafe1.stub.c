#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _18_blue_phase_cpp1_ii_31162fe4
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "blue_phase.fatbin.c"
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __nv_cudaEntityRegisterCallback(void **__T27){__nv_dummy_param_ref(__T27);__nv_save_fatbinhandle_for_managed_rt(__T27);__cudaRegisterVariable(__T27, __shadow_var(__nv_static_31__18_blue_phase_cpp1_ii_31162fe4_const_param,::const_param), 0, 200UL, 1, 0);__cudaRegisterVariable(__T27, __shadow_var(__nv_static_31__18_blue_phase_cpp1_ii_31162fe4_fe_dvt,::fe_dvt), 0, 112UL, 1, 0);}
static void __sti____cudaRegisterAll(void){____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);}

#pragma GCC diagnostic pop
