#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _30_gradient_3d_27pt_solid_cpp1_ii_e02ba749
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "gradient_3d_27pt_solid.fatbin.c"
extern void __device_stub__Z25grad_3d_27pt_solid_kernelP13kernel_ctxt_sP12field_grad_sP5map_sd(kernel_ctxt_t *, field_grad_t *, map_t *, double);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z25grad_3d_27pt_solid_kernelP13kernel_ctxt_sP12field_grad_sP5map_sd(kernel_ctxt_t *__par0, field_grad_t *__par1, map_t *__par2, double __par3){__cudaLaunchPrologue(4);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, field_grad_t *, map_t *, double))grad_3d_27pt_solid_kernel)));}
# 164 "gradient_3d_27pt_solid.c"
void grad_3d_27pt_solid_kernel( kernel_ctxt_t *__cuda_0,field_grad_t *__cuda_1,map_t *__cuda_2,double __cuda_3)
# 167 "gradient_3d_27pt_solid.c"
{__device_stub__Z25grad_3d_27pt_solid_kernelP13kernel_ctxt_sP12field_grad_sP5map_sd( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 297 "gradient_3d_27pt_solid.c"
}
# 1 "/home/nikola/tmp/hip/gradient_3d_27pt_solid.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T5) {  __nv_dummy_param_ref(__T5); __nv_save_fatbinhandle_for_managed_rt(__T5); __cudaRegisterEntry(__T5, ((void ( *)(kernel_ctxt_t *, field_grad_t *, map_t *, double))grad_3d_27pt_solid_kernel), _Z25grad_3d_27pt_solid_kernelP13kernel_ctxt_sP12field_grad_sP5map_sd, (-1)); __cudaRegisterVariable(__T5, __shadow_var(__nv_static_43__30_gradient_3d_27pt_solid_cpp1_ii_e02ba749_bs_cv,::bs_cv), 0, 324UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
