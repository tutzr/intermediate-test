#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _24_phi_force_stress_cpp1_ii_fb922db6
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "phi_force_stress.fatbin.c"
extern void __device_stub__Z10pth_kernelP13kernel_ctxt_sP5pth_sP4fe_s(kernel_ctxt_t *, pth_t *, fe_t *);
extern void __device_stub__Z12pth_kernel_vP13kernel_ctxt_sP5pth_sP4fe_s(kernel_ctxt_t *, pth_t *, fe_t *);
extern void __device_stub__Z14pth_kernel_a_vP13kernel_ctxt_sP5pth_sP4fe_s(kernel_ctxt_t *, pth_t *, fe_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z10pth_kernelP13kernel_ctxt_sP5pth_sP4fe_s(kernel_ctxt_t *__par0, pth_t *__par1, fe_t *__par2){__cudaLaunchPrologue(3);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, pth_t *, fe_t *))pth_kernel)));}
# 225 "phi_force_stress.c"
void pth_kernel( kernel_ctxt_t *__cuda_0,pth_t *__cuda_1,fe_t *__cuda_2)
# 225 "phi_force_stress.c"
{__device_stub__Z10pth_kernelP13kernel_ctxt_sP5pth_sP4fe_s( __cuda_0,__cuda_1,__cuda_2);
# 251 "phi_force_stress.c"
}
# 1 "/home/nikola/tmp/cuda/phi_force_stress.cudafe1.stub.c"
void __device_stub__Z12pth_kernel_vP13kernel_ctxt_sP5pth_sP4fe_s( kernel_ctxt_t *__par0,  pth_t *__par1,  fe_t *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, pth_t *, fe_t *))pth_kernel_v))); }
# 259 "phi_force_stress.c"
void pth_kernel_v( kernel_ctxt_t *__cuda_0,pth_t *__cuda_1,fe_t *__cuda_2)
# 259 "phi_force_stress.c"
{__device_stub__Z12pth_kernel_vP13kernel_ctxt_sP5pth_sP4fe_s( __cuda_0,__cuda_1,__cuda_2);
# 293 "phi_force_stress.c"
}
# 1 "/home/nikola/tmp/cuda/phi_force_stress.cudafe1.stub.c"
void __device_stub__Z14pth_kernel_a_vP13kernel_ctxt_sP5pth_sP4fe_s( kernel_ctxt_t *__par0,  pth_t *__par1,  fe_t *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, pth_t *, fe_t *))pth_kernel_a_v))); }
# 301 "phi_force_stress.c"
void pth_kernel_a_v( kernel_ctxt_t *__cuda_0,pth_t *__cuda_1,fe_t *__cuda_2)
# 301 "phi_force_stress.c"
{__device_stub__Z14pth_kernel_a_vP13kernel_ctxt_sP5pth_sP4fe_s( __cuda_0,__cuda_1,__cuda_2);
# 335 "phi_force_stress.c"
}
# 1 "/home/nikola/tmp/cuda/phi_force_stress.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T9) {  __nv_dummy_param_ref(__T9); __nv_save_fatbinhandle_for_managed_rt(__T9); __cudaRegisterEntry(__T9, ((void ( *)(kernel_ctxt_t *, pth_t *, fe_t *))pth_kernel_a_v), _Z14pth_kernel_a_vP13kernel_ctxt_sP5pth_sP4fe_s, (-1)); __cudaRegisterEntry(__T9, ((void ( *)(kernel_ctxt_t *, pth_t *, fe_t *))pth_kernel_v), _Z12pth_kernel_vP13kernel_ctxt_sP5pth_sP4fe_s, (-1)); __cudaRegisterEntry(__T9, ((void ( *)(kernel_ctxt_t *, pth_t *, fe_t *))pth_kernel), _Z10pth_kernelP13kernel_ctxt_sP5pth_sP4fe_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
