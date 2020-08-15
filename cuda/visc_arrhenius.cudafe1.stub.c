#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _22_visc_arrhenius_cpp1_ii_77229234
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "visc_arrhenius.fatbin.c"
static void __device_stub__Z18visc_update_kernelP13kernel_ctxt_s22visc_arrhenius_param_sP7field_sP7hydro_s(kernel_ctxt_t *, visc_arrhenius_param_t&, field_t *, hydro_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __device_stub__Z18visc_update_kernelP13kernel_ctxt_s22visc_arrhenius_param_sP7field_sP7hydro_s(kernel_ctxt_t *__par0, visc_arrhenius_param_t&__par1, field_t *__par2, hydro_t *__par3){__cudaLaunchPrologue(4);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArg(__par1, 8UL);__cudaSetupArgSimple(__par2, 32UL);__cudaSetupArgSimple(__par3, 40UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, visc_arrhenius_param_t, field_t *, hydro_t *))visc_update_kernel)));}
# 186 "visc_arrhenius.c"
static void visc_update_kernel( kernel_ctxt_t *__cuda_0,visc_arrhenius_param_t __cuda_1,field_t *__cuda_2,hydro_t *__cuda_3)
# 188 "visc_arrhenius.c"
{__device_stub__Z18visc_update_kernelP13kernel_ctxt_s22visc_arrhenius_param_sP7field_sP7hydro_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 221 "visc_arrhenius.c"
}
# 1 "/home/nikola/tmp/cuda/visc_arrhenius.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T6) {  __nv_dummy_param_ref(__T6); __nv_save_fatbinhandle_for_managed_rt(__T6); __cudaRegisterEntry(__T6, ((void ( *)(kernel_ctxt_t *, visc_arrhenius_param_t, field_t *, hydro_t *))visc_update_kernel), __nv_static_35__22_visc_arrhenius_cpp1_ii_77229234__Z18visc_update_kernelP13kernel_ctxt_s22visc_arrhenius_param_sP7field_sP7hydro_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
