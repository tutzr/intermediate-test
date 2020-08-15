#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _25_phi_cahn_hilliard_cpp1_ii_4b04a589
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "phi_cahn_hilliard.fatbin.c"
extern void __device_stub__Z22phi_ch_flux_mu1_kernelP13kernel_ctxt_sP10lees_edw_sP4fe_sP9advflux_sd(kernel_ctxt_t *, lees_edw_t *, fe_t *, advflux_t *, double);
extern void __device_stub__Z17phi_ch_ufs_kernelP13kernel_ctxt_sP10lees_edw_sP7field_sP9advflux_sid(kernel_ctxt_t *, lees_edw_t *, field_t *, advflux_t *, int, double);
extern void __device_stub__Z25phi_ch_flux_mu_ext_kernelP13kernel_ctxt_sP10lees_edw_sP9advflux_s11ch_kernel_s(kernel_ctxt_t *, lees_edw_t *, advflux_t *, ch_kernel_t&);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z22phi_ch_flux_mu1_kernelP13kernel_ctxt_sP10lees_edw_sP4fe_sP9advflux_sd(kernel_ctxt_t *__par0, lees_edw_t *__par1, fe_t *__par2, advflux_t *__par3, double __par4){__cudaLaunchPrologue(5);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lees_edw_t *, fe_t *, advflux_t *, double))phi_ch_flux_mu1_kernel)));}
# 278 "phi_cahn_hilliard.c"
void phi_ch_flux_mu1_kernel( kernel_ctxt_t *__cuda_0,lees_edw_t *__cuda_1,fe_t *__cuda_2,advflux_t *__cuda_3,double __cuda_4)
# 280 "phi_cahn_hilliard.c"
{__device_stub__Z22phi_ch_flux_mu1_kernelP13kernel_ctxt_sP10lees_edw_sP4fe_sP9advflux_sd( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 338 "phi_cahn_hilliard.c"
}
# 1 "/home/nikola/tmp/hip/phi_cahn_hilliard.cudafe1.stub.c"
void __device_stub__Z17phi_ch_ufs_kernelP13kernel_ctxt_sP10lees_edw_sP7field_sP9advflux_sid( kernel_ctxt_t *__par0,  lees_edw_t *__par1,  field_t *__par2,  advflux_t *__par3,  int __par4,  double __par5) {  __cudaLaunchPrologue(6); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 40UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lees_edw_t *, field_t *, advflux_t *, int, double))phi_ch_ufs_kernel))); }
# 942 "phi_cahn_hilliard.c"
void phi_ch_ufs_kernel( kernel_ctxt_t *__cuda_0,lees_edw_t *__cuda_1,field_t *__cuda_2,advflux_t *__cuda_3,int __cuda_4,double __cuda_5)
# 944 "phi_cahn_hilliard.c"
{__device_stub__Z17phi_ch_ufs_kernelP13kernel_ctxt_sP10lees_edw_sP7field_sP9advflux_sid( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 977 "phi_cahn_hilliard.c"
}
# 1 "/home/nikola/tmp/hip/phi_cahn_hilliard.cudafe1.stub.c"
void __device_stub__Z25phi_ch_flux_mu_ext_kernelP13kernel_ctxt_sP10lees_edw_sP9advflux_s11ch_kernel_s( kernel_ctxt_t *__par0,  lees_edw_t *__par1,  advflux_t *__par2,  ch_kernel_t&__par3) {  __cudaLaunchPrologue(4); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArg(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lees_edw_t *, advflux_t *, ch_kernel_t))phi_ch_flux_mu_ext_kernel))); }
# 1033 "phi_cahn_hilliard.c"
void phi_ch_flux_mu_ext_kernel( kernel_ctxt_t *__cuda_0,lees_edw_t *__cuda_1,advflux_t *__cuda_2,ch_kernel_t __cuda_3)
# 1036 "phi_cahn_hilliard.c"
{__device_stub__Z25phi_ch_flux_mu_ext_kernelP13kernel_ctxt_sP10lees_edw_sP9advflux_s11ch_kernel_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 1064 "phi_cahn_hilliard.c"
}
# 1 "/home/nikola/tmp/hip/phi_cahn_hilliard.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T12) {  __nv_dummy_param_ref(__T12); __nv_save_fatbinhandle_for_managed_rt(__T12); __cudaRegisterEntry(__T12, ((void ( *)(kernel_ctxt_t *, lees_edw_t *, advflux_t *, ch_kernel_t))phi_ch_flux_mu_ext_kernel), _Z25phi_ch_flux_mu_ext_kernelP13kernel_ctxt_sP10lees_edw_sP9advflux_s11ch_kernel_s, (-1)); __cudaRegisterEntry(__T12, ((void ( *)(kernel_ctxt_t *, lees_edw_t *, field_t *, advflux_t *, int, double))phi_ch_ufs_kernel), _Z17phi_ch_ufs_kernelP13kernel_ctxt_sP10lees_edw_sP7field_sP9advflux_sid, (-1)); __cudaRegisterEntry(__T12, ((void ( *)(kernel_ctxt_t *, lees_edw_t *, fe_t *, advflux_t *, double))phi_ch_flux_mu1_kernel), _Z22phi_ch_flux_mu1_kernelP13kernel_ctxt_sP10lees_edw_sP4fe_sP9advflux_sd, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
