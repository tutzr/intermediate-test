#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _29_gradient_3d_7pt_solid_cpp1_ii_1bb33dd7
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "gradient_3d_7pt_solid.fatbin.c"
extern void __device_stub__Z19gradient_6x6_kernelP13kernel_ctxt_sP8coords_sP14grad_lc_anch_sP7fe_lc_sP12field_grad_sP5map_sP15colloids_info_s(kernel_ctxt_t *, cs_t *, grad_lc_anch_t *, fe_lc_t *, field_grad_t *, map_t *, colloids_info_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z19gradient_6x6_kernelP13kernel_ctxt_sP8coords_sP14grad_lc_anch_sP7fe_lc_sP12field_grad_sP5map_sP15colloids_info_s(kernel_ctxt_t *__par0, cs_t *__par1, grad_lc_anch_t *__par2, fe_lc_t *__par3, field_grad_t *__par4, map_t *__par5, colloids_info_t *__par6){__cudaLaunchPrologue(7);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaSetupArgSimple(__par6, 48UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, cs_t *, grad_lc_anch_t *, fe_lc_t *, field_grad_t *, map_t *, colloids_info_t *))gradient_6x6_kernel)));}
# 305 "gradient_3d_7pt_solid.c"
void gradient_6x6_kernel( kernel_ctxt_t *__cuda_0,cs_t *__cuda_1,grad_lc_anch_t *__cuda_2,fe_lc_t *__cuda_3,field_grad_t *__cuda_4,map_t *__cuda_5,colloids_info_t *__cuda_6)
# 307 "gradient_3d_7pt_solid.c"
{__device_stub__Z19gradient_6x6_kernelP13kernel_ctxt_sP8coords_sP14grad_lc_anch_sP7fe_lc_sP12field_grad_sP5map_sP15colloids_info_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 655 "gradient_3d_7pt_solid.c"
}
# 1 "/home/nikola/tmp/cuda/gradient_3d_7pt_solid.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T11) {  __nv_dummy_param_ref(__T11); __nv_save_fatbinhandle_for_managed_rt(__T11); __cudaRegisterEntry(__T11, ((void ( *)(kernel_ctxt_t *, cs_t *, grad_lc_anch_t *, fe_lc_t *, field_grad_t *, map_t *, colloids_info_t *))gradient_6x6_kernel), _Z19gradient_6x6_kernelP13kernel_ctxt_sP8coords_sP14grad_lc_anch_sP7fe_lc_sP12field_grad_sP5map_sP15colloids_info_s, (-1)); __cudaRegisterVariable(__T11, __shadow_var(__nv_static_42__29_gradient_3d_7pt_solid_cpp1_ii_1bb33dd7_static_param,::static_param), 0, 6192UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
