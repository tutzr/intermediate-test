#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _21_advection_bcs_cpp1_ii_49fe87a6
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "advection_bcs.fatbin.c"
extern void __device_stub__Z30advection_bcs_no_flux_kernel_vP13kernel_ctxt_sP9advflux_sP5map_s(kernel_ctxt_t *, advflux_t *, map_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z30advection_bcs_no_flux_kernel_vP13kernel_ctxt_sP9advflux_sP5map_s(kernel_ctxt_t *__par0, advflux_t *__par1, map_t *__par2){__cudaLaunchPrologue(3);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, advflux_t *, map_t *))advection_bcs_no_flux_kernel_v)));}
# 86 "advection_bcs.c"
void advection_bcs_no_flux_kernel_v( kernel_ctxt_t *__cuda_0,advflux_t *__cuda_1,map_t *__cuda_2)
# 88 "advection_bcs.c"
{__device_stub__Z30advection_bcs_no_flux_kernel_vP13kernel_ctxt_sP9advflux_sP5map_s( __cuda_0,__cuda_1,__cuda_2);
# 147 "advection_bcs.c"
}
# 1 "/home/nikola/tmp/hip/advection_bcs.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T3) {  __nv_dummy_param_ref(__T3); __nv_save_fatbinhandle_for_managed_rt(__T3); __cudaRegisterEntry(__T3, ((void ( *)(kernel_ctxt_t *, advflux_t *, map_t *))advection_bcs_no_flux_kernel_v), _Z30advection_bcs_no_flux_kernel_vP13kernel_ctxt_sP9advflux_sP5map_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
