#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _22_phi_lb_coupler_cpp1_ii_7b27d0a0
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "phi_lb_coupler.fatbin.c"
extern void __device_stub__Z22phi_lb_to_field_kernelP13kernel_ctxt_sP7field_sP9lb_data_s(kernel_ctxt_t *, field_t *, lb_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z22phi_lb_to_field_kernelP13kernel_ctxt_sP7field_sP9lb_data_s(kernel_ctxt_t *__par0, field_t *__par1, lb_t *__par2){__cudaLaunchPrologue(3);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, field_t *, lb_t *))phi_lb_to_field_kernel)));}
# 74 "phi_lb_coupler.c"
void phi_lb_to_field_kernel( kernel_ctxt_t *__cuda_0,field_t *__cuda_1,lb_t *__cuda_2)
# 75 "phi_lb_coupler.c"
{__device_stub__Z22phi_lb_to_field_kernelP13kernel_ctxt_sP7field_sP9lb_data_s( __cuda_0,__cuda_1,__cuda_2);
# 104 "phi_lb_coupler.c"
}
# 1 "/home/nikola/tmp/hip/phi_lb_coupler.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T3) {  __nv_dummy_param_ref(__T3); __nv_save_fatbinhandle_for_managed_rt(__T3); __cudaRegisterEntry(__T3, ((void ( *)(kernel_ctxt_t *, field_t *, lb_t *))phi_lb_to_field_kernel), _Z22phi_lb_to_field_kernelP13kernel_ctxt_sP7field_sP9lb_data_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
