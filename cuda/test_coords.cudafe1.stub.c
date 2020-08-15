#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _19_test_coords_cpp1_ii_e11a2087
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "test_coords.fatbin.c"
extern void __device_stub__Z22do_test_coords_kernel1P8coords_s(cs_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z22do_test_coords_kernel1P8coords_s(cs_t *__par0){__cudaLaunchPrologue(1);__cudaSetupArgSimple(__par0, 0UL);__cudaLaunch(((char *)((void ( *)(cs_t *))do_test_coords_kernel1)));}
# 591 "test_coords.c"
void do_test_coords_kernel1( cs_t *__cuda_0)
# 591 "test_coords.c"
{__device_stub__Z22do_test_coords_kernel1P8coords_s( __cuda_0);
# 643 "test_coords.c"
}
# 1 "/home/nikola/tmp/cuda/test_coords.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T9) {  __nv_dummy_param_ref(__T9); __nv_save_fatbinhandle_for_managed_rt(__T9); __cudaRegisterEntry(__T9, ((void ( *)(cs_t *))do_test_coords_kernel1), _Z22do_test_coords_kernel1P8coords_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
