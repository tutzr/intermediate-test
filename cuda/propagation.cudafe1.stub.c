#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _19_propagation_cpp1_ii_0ab76e1d
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "propagation.fatbin.c"
extern void __device_stub__Z30lb_propagation_kernel_novectorP13kernel_ctxt_sP9lb_data_s(kernel_ctxt_t *, lb_t *);
extern void __device_stub__Z21lb_propagation_kernelP13kernel_ctxt_sP9lb_data_s(kernel_ctxt_t *, lb_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z30lb_propagation_kernel_novectorP13kernel_ctxt_sP9lb_data_s(kernel_ctxt_t *__par0, lb_t *__par1){__cudaLaunchPrologue(2);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lb_t *))lb_propagation_kernel_novector)));}
# 110 "propagation.c"
void lb_propagation_kernel_novector( kernel_ctxt_t *__cuda_0,lb_t *__cuda_1)
# 110 "propagation.c"
{__device_stub__Z30lb_propagation_kernel_novectorP13kernel_ctxt_sP9lb_data_s( __cuda_0,__cuda_1);
# 150 "propagation.c"
}
# 1 "/home/nikola/tmp/cuda/propagation.cudafe1.stub.c"
void __device_stub__Z21lb_propagation_kernelP13kernel_ctxt_sP9lb_data_s( kernel_ctxt_t *__par0,  lb_t *__par1) {  __cudaLaunchPrologue(2); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lb_t *))lb_propagation_kernel))); }
# 164 "propagation.c"
void lb_propagation_kernel( kernel_ctxt_t *__cuda_0,lb_t *__cuda_1)
# 164 "propagation.c"
{__device_stub__Z21lb_propagation_kernelP13kernel_ctxt_sP9lb_data_s( __cuda_0,__cuda_1);
# 214 "propagation.c"
}
# 1 "/home/nikola/tmp/cuda/propagation.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T5) {  __nv_dummy_param_ref(__T5); __nv_save_fatbinhandle_for_managed_rt(__T5); __cudaRegisterEntry(__T5, ((void ( *)(kernel_ctxt_t *, lb_t *))lb_propagation_kernel), _Z21lb_propagation_kernelP13kernel_ctxt_sP9lb_data_s, (-1)); __cudaRegisterEntry(__T5, ((void ( *)(kernel_ctxt_t *, lb_t *))lb_propagation_kernel_novector), _Z30lb_propagation_kernel_novectorP13kernel_ctxt_sP9lb_data_s, (-1)); __cudaRegisterVariable(__T5, __shadow_var(__nv_static_32__19_propagation_cpp1_ii_0ab76e1d_coords,::coords), 0, 120UL, 1, 0); __cudaRegisterVariable(__T5, __shadow_var(__nv_static_32__19_propagation_cpp1_ii_0ab76e1d_lbp,::lbp), 0, 7712UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
