#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _11_bbl_cpp1_ii_e251c242
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "bbl.fatbin.c"
extern void __device_stub__Z16bbl_pass0_kernelP13kernel_ctxt_sP8coords_sP9lb_data_sP15colloids_info_s(kernel_ctxt_t *, cs_t *, lb_t *, colloids_info_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z16bbl_pass0_kernelP13kernel_ctxt_sP8coords_sP9lb_data_sP15colloids_info_s(kernel_ctxt_t *__par0, cs_t *__par1, lb_t *__par2, colloids_info_t *__par3){__cudaLaunchPrologue(4);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, cs_t *, lb_t *, colloids_info_t *))bbl_pass0_kernel)));}
# 296 "bbl.c"
void bbl_pass0_kernel( kernel_ctxt_t *__cuda_0,cs_t *__cuda_1,lb_t *__cuda_2,colloids_info_t *__cuda_3)
# 297 "bbl.c"
{__device_stub__Z16bbl_pass0_kernelP13kernel_ctxt_sP8coords_sP9lb_data_sP15colloids_info_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 363 "bbl.c"
}
# 1 "/home/nikola/tmp/hip/bbl.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T13) {  __nv_dummy_param_ref(__T13); __nv_save_fatbinhandle_for_managed_rt(__T13); __cudaRegisterEntry(__T13, ((void ( *)(kernel_ctxt_t *, cs_t *, lb_t *, colloids_info_t *))bbl_pass0_kernel), _Z16bbl_pass0_kernelP13kernel_ctxt_sP8coords_sP9lb_data_sP15colloids_info_s, (-1)); __cudaRegisterVariable(__T13, __shadow_var(__nv_static_24__11_bbl_cpp1_ii_e251c242_lbp,::lbp), 0, 7712UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
