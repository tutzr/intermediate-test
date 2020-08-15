#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _19_test_kernel_cpp1_ii_bb3ec4e5
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "test_kernel.fatbin.c"
extern void __device_stub__Z17do_target_kernel1P13kernel_ctxt_sP6data_s(kernel_ctxt_t *, data_t *);
extern void __device_stub__Z18do_target_kernel1rP13kernel_ctxt_sP6data_s(kernel_ctxt_t *, data_t *);
extern void __device_stub__Z17do_target_kernel2P13kernel_ctxt_sP6data_s(kernel_ctxt_t *, data_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z17do_target_kernel1P13kernel_ctxt_sP6data_s(kernel_ctxt_t *__par0, data_t *__par1){__cudaLaunchPrologue(2);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, data_t *))do_target_kernel1)));}
# 250 "test_kernel.c"
void do_target_kernel1( kernel_ctxt_t *__cuda_0,data_t *__cuda_1)
# 250 "test_kernel.c"
{__device_stub__Z17do_target_kernel1P13kernel_ctxt_sP6data_s( __cuda_0,__cuda_1);
# 274 "test_kernel.c"
}
# 1 "/home/nikola/tmp/hip/test_kernel.cudafe1.stub.c"
void __device_stub__Z18do_target_kernel1rP13kernel_ctxt_sP6data_s( kernel_ctxt_t *__par0,  data_t *__par1) {  __cudaLaunchPrologue(2); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, data_t *))do_target_kernel1r))); }
# 284 "test_kernel.c"
void do_target_kernel1r( kernel_ctxt_t *__cuda_0,data_t *__cuda_1)
# 284 "test_kernel.c"
{__device_stub__Z18do_target_kernel1rP13kernel_ctxt_sP6data_s( __cuda_0,__cuda_1);
# 319 "test_kernel.c"
}
# 1 "/home/nikola/tmp/hip/test_kernel.cudafe1.stub.c"
void __device_stub__Z17do_target_kernel2P13kernel_ctxt_sP6data_s( kernel_ctxt_t *__par0,  data_t *__par1) {  __cudaLaunchPrologue(2); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, data_t *))do_target_kernel2))); }
# 329 "test_kernel.c"
void do_target_kernel2( kernel_ctxt_t *__cuda_0,data_t *__cuda_1)
# 329 "test_kernel.c"
{__device_stub__Z17do_target_kernel2P13kernel_ctxt_sP6data_s( __cuda_0,__cuda_1);
# 357 "test_kernel.c"
}
# 1 "/home/nikola/tmp/hip/test_kernel.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T7) {  __nv_dummy_param_ref(__T7); __nv_save_fatbinhandle_for_managed_rt(__T7); __cudaRegisterEntry(__T7, ((void ( *)(kernel_ctxt_t *, data_t *))do_target_kernel2), _Z17do_target_kernel2P13kernel_ctxt_sP6data_s, (-1)); __cudaRegisterEntry(__T7, ((void ( *)(kernel_ctxt_t *, data_t *))do_target_kernel1r), _Z18do_target_kernel1rP13kernel_ctxt_sP6data_s, (-1)); __cudaRegisterEntry(__T7, ((void ( *)(kernel_ctxt_t *, data_t *))do_target_kernel1), _Z17do_target_kernel1P13kernel_ctxt_sP6data_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
