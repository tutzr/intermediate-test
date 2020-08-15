#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _14_kernel_cpp1_ii_6c28956c
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "kernel.fatbin.c"
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __nv_cudaEntityRegisterCallback(void **__T16){__nv_dummy_param_ref(__T16);__nv_save_fatbinhandle_for_managed_rt(__T16);__cudaRegisterVariable(__T16, __shadow_var(__nv_static_27__14_kernel_cpp1_ii_6c28956c_static_ctxt,::static_ctxt), 0, 16UL, 0, 0);__cudaRegisterVariable(__T16, __shadow_var(__nv_static_27__14_kernel_cpp1_ii_6c28956c_static_param,::static_param), 0, 84UL, 1, 0);}
static void __sti____cudaRegisterAll(void){____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);}

#pragma GCC diagnostic pop
