#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _30_gradient_3d_27pt_fluid_cpp1_ii_47331d3b
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "gradient_3d_27pt_fluid.fatbin.c"
extern void __device_stub__Z19grad_3d_27pt_kernelP13kernel_ctxt_siiP10lees_edw_s14grad_enum_typeP7field_sP12field_grad_s(kernel_ctxt_t *, int, int, lees_edw_t *, grad_enum_t, field_t *, field_grad_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z19grad_3d_27pt_kernelP13kernel_ctxt_siiP10lees_edw_s14grad_enum_typeP7field_sP12field_grad_s(kernel_ctxt_t *__par0, int __par1, int __par2, lees_edw_t *__par3, grad_enum_t __par4, field_t *__par5, field_grad_t *__par6){__cudaLaunchPrologue(7);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 12UL);__cudaSetupArgSimple(__par3, 16UL);__cudaSetupArgSimple(__par4, 24UL);__cudaSetupArgSimple(__par5, 32UL);__cudaSetupArgSimple(__par6, 40UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, int, int, lees_edw_t *, grad_enum_t, field_t *, field_grad_t *))grad_3d_27pt_kernel)));}
# 218 "gradient_3d_27pt_fluid.c"
void grad_3d_27pt_kernel( kernel_ctxt_t *__cuda_0,int __cuda_1,int __cuda_2,lees_edw_t *__cuda_3,grad_enum_t __cuda_4,field_t *__cuda_5,field_grad_t *__cuda_6)
# 222 "gradient_3d_27pt_fluid.c"
{__device_stub__Z19grad_3d_27pt_kernelP13kernel_ctxt_siiP10lees_edw_s14grad_enum_typeP7field_sP12field_grad_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 362 "gradient_3d_27pt_fluid.c"
}
# 1 "/home/nikola/tmp/cuda/gradient_3d_27pt_fluid.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T7) {  __nv_dummy_param_ref(__T7); __nv_save_fatbinhandle_for_managed_rt(__T7); __cudaRegisterEntry(__T7, ((void ( *)(kernel_ctxt_t *, int, int, lees_edw_t *, grad_enum_t, field_t *, field_grad_t *))grad_3d_27pt_kernel), _Z19grad_3d_27pt_kernelP13kernel_ctxt_siiP10lees_edw_s14grad_enum_typeP7field_sP12field_grad_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
