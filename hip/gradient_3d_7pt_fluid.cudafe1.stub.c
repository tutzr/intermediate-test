#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _29_gradient_3d_7pt_fluid_cpp1_ii_cba08ddd
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "gradient_3d_7pt_fluid.fatbin.c"
extern void __device_stub__Z26grad_3d_7pt_fluid_kernel_vP13kernel_ctxt_siiP10lees_edw_sP7field_sP12field_grad_s(kernel_ctxt_t *, int, int, lees_edw_t *, field_t *, field_grad_t *);
extern void __device_stub__Z24grad_3d_7pt_dab_kernel_vP13kernel_ctxt_sP10lees_edw_sP12field_grad_sii(kernel_ctxt_t *, lees_edw_t *, field_grad_t *, int, int);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z26grad_3d_7pt_fluid_kernel_vP13kernel_ctxt_siiP10lees_edw_sP7field_sP12field_grad_s(kernel_ctxt_t *__par0, int __par1, int __par2, lees_edw_t *__par3, field_t *__par4, field_grad_t *__par5){__cudaLaunchPrologue(6);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 12UL);__cudaSetupArgSimple(__par3, 16UL);__cudaSetupArgSimple(__par4, 24UL);__cudaSetupArgSimple(__par5, 32UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, int, int, lees_edw_t *, field_t *, field_grad_t *))grad_3d_7pt_fluid_kernel_v)));}
# 235 "gradient_3d_7pt_fluid.c"
void grad_3d_7pt_fluid_kernel_v( kernel_ctxt_t *__cuda_0,int __cuda_1,int __cuda_2,lees_edw_t *__cuda_3,field_t *__cuda_4,field_grad_t *__cuda_5)
# 238 "gradient_3d_7pt_fluid.c"
{__device_stub__Z26grad_3d_7pt_fluid_kernel_vP13kernel_ctxt_siiP10lees_edw_sP7field_sP12field_grad_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 315 "gradient_3d_7pt_fluid.c"
}
# 1 "/home/nikola/tmp/hip/gradient_3d_7pt_fluid.cudafe1.stub.c"
void __device_stub__Z24grad_3d_7pt_dab_kernel_vP13kernel_ctxt_sP10lees_edw_sP12field_grad_sii( kernel_ctxt_t *__par0,  lees_edw_t *__par1,  field_grad_t *__par2,  int __par3,  int __par4) {  __cudaLaunchPrologue(5); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 28UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lees_edw_t *, field_grad_t *, int, int))grad_3d_7pt_dab_kernel_v))); }
# 495 "gradient_3d_7pt_fluid.c"
void grad_3d_7pt_dab_kernel_v( kernel_ctxt_t *__cuda_0,lees_edw_t *__cuda_1,field_grad_t *__cuda_2,int __cuda_3,int __cuda_4)
# 497 "gradient_3d_7pt_fluid.c"
{__device_stub__Z24grad_3d_7pt_dab_kernel_vP13kernel_ctxt_sP10lees_edw_sP12field_grad_sii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 577 "gradient_3d_7pt_fluid.c"
}
# 1 "/home/nikola/tmp/hip/gradient_3d_7pt_fluid.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T9) {  __nv_dummy_param_ref(__T9); __nv_save_fatbinhandle_for_managed_rt(__T9); __cudaRegisterEntry(__T9, ((void ( *)(kernel_ctxt_t *, lees_edw_t *, field_grad_t *, int, int))grad_3d_7pt_dab_kernel_v), _Z24grad_3d_7pt_dab_kernel_vP13kernel_ctxt_sP10lees_edw_sP12field_grad_sii, (-1)); __cudaRegisterEntry(__T9, ((void ( *)(kernel_ctxt_t *, int, int, lees_edw_t *, field_t *, field_grad_t *))grad_3d_7pt_fluid_kernel_v), _Z26grad_3d_7pt_fluid_kernel_vP13kernel_ctxt_siiP10lees_edw_sP7field_sP12field_grad_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
