#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _23_test_blue_phase_cpp1_ii_49120326
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "test_blue_phase.fatbin.c"
extern void __device_stub__Z21do_test_fe_lc_kernel1P7fe_lc_s13fe_lc_param_s(fe_lc_t *, fe_lc_param_t&);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z21do_test_fe_lc_kernel1P7fe_lc_s13fe_lc_param_s(fe_lc_t *__par0, fe_lc_param_t&__par1){__cudaLaunchPrologue(2);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArg(__par1, 8UL);__cudaLaunch(((char *)((void ( *)(fe_lc_t *, fe_lc_param_t))do_test_fe_lc_kernel1)));}
# 944 "test_blue_phase.c"
void do_test_fe_lc_kernel1( fe_lc_t *__cuda_0,fe_lc_param_t __cuda_1)
# 944 "test_blue_phase.c"
{__device_stub__Z21do_test_fe_lc_kernel1P7fe_lc_s13fe_lc_param_s( __cuda_0,__cuda_1);
# 962 "test_blue_phase.c"
}
# 1 "/home/nikola/tmp/hip/test_blue_phase.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T3) {  __nv_dummy_param_ref(__T3); __nv_save_fatbinhandle_for_managed_rt(__T3); __cudaRegisterEntry(__T3, ((void ( *)(fe_lc_t *, fe_lc_param_t))do_test_fe_lc_kernel1), _Z21do_test_fe_lc_kernel1P7fe_lc_s13fe_lc_param_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
