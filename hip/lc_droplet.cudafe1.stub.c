#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _18_lc_droplet_cpp1_ii_ba17fca6
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "lc_droplet.fatbin.c"
extern void __device_stub__Z23fe_lc_droplet_bf_kernelP13kernel_ctxt_sP15fe_lc_droplet_sP7hydro_s(kernel_ctxt_t *, fe_lc_droplet_t *, hydro_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z23fe_lc_droplet_bf_kernelP13kernel_ctxt_sP15fe_lc_droplet_sP7hydro_s(kernel_ctxt_t *__par0, fe_lc_droplet_t *__par1, hydro_t *__par2){__cudaLaunchPrologue(3);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, fe_lc_droplet_t *, hydro_t *))fe_lc_droplet_bf_kernel)));}
# 744 "lc_droplet.c"
void fe_lc_droplet_bf_kernel( kernel_ctxt_t *__cuda_0,fe_lc_droplet_t *__cuda_1,hydro_t *__cuda_2)
# 746 "lc_droplet.c"
{__device_stub__Z23fe_lc_droplet_bf_kernelP13kernel_ctxt_sP15fe_lc_droplet_sP7hydro_s( __cuda_0,__cuda_1,__cuda_2);
# 835 "lc_droplet.c"
}
# 1 "/home/nikola/tmp/hip/lc_droplet.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T16) {  __nv_dummy_param_ref(__T16); __nv_save_fatbinhandle_for_managed_rt(__T16); __cudaRegisterEntry(__T16, ((void ( *)(kernel_ctxt_t *, fe_lc_droplet_t *, hydro_t *))fe_lc_droplet_bf_kernel), _Z23fe_lc_droplet_bf_kernelP13kernel_ctxt_sP15fe_lc_droplet_sP7hydro_s, (-1)); __cudaRegisterVariable(__T16, __shadow_var(__nv_static_31__18_lc_droplet_cpp1_ii_ba17fca6_fe_drop_dvt,::fe_drop_dvt), 0, 112UL, 1, 0); __cudaRegisterVariable(__T16, __shadow_var(__nv_static_31__18_lc_droplet_cpp1_ii_ba17fca6_const_param,::const_param), 0, 24UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
