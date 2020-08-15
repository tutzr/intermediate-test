#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _18_test_field_cpp1_ii_d9d3344c
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "test_field.fatbin.c"
extern void __device_stub__Z21do_test_field_kernel1P7field_s(field_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z21do_test_field_kernel1P7field_s(field_t *__par0){__cudaLaunchPrologue(1);__cudaSetupArgSimple(__par0, 0UL);__cudaLaunch(((char *)((void ( *)(field_t *))do_test_field_kernel1)));}
# 214 "test_field.c"
void do_test_field_kernel1( field_t *__cuda_0)
# 214 "test_field.c"
{__device_stub__Z21do_test_field_kernel1P7field_s( __cuda_0);
# 235 "test_field.c"
}
# 1 "/home/nikola/tmp/hip/test_field.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T8) {  __nv_dummy_param_ref(__T8); __nv_save_fatbinhandle_for_managed_rt(__T8); __cudaRegisterEntry(__T8, ((void ( *)(field_t *))do_test_field_kernel1), _Z21do_test_field_kernel1P7field_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
