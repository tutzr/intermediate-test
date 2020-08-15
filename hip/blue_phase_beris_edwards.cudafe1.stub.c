#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _32_blue_phase_beris_edwards_cpp1_ii_b4a6d5f7
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "blue_phase_beris_edwards.fatbin.c"
extern void __device_stub__Z18beris_edw_kernel_vP13kernel_ctxt_sP11beris_edw_sP7field_sP12field_grad_sP7hydro_sP9advflux_sP5map_sP7noise_s(kernel_ctxt_t *, beris_edw_t *, field_t *, field_grad_t *, hydro_t *, advflux_t *, map_t *, noise_t *);
extern void __device_stub__Z20beris_edw_h_kernel_vP13kernel_ctxt_sP11beris_edw_sP4fe_s(kernel_ctxt_t *, beris_edw_t *, fe_t *);
extern void __device_stub__Z24beris_edw_fix_swd_kernelP13kernel_ctxt_sP15colloids_info_sP7hydro_sP5map_siii(kernel_ctxt_t *, colloids_info_t *, hydro_t *, map_t *, int, int, int);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z18beris_edw_kernel_vP13kernel_ctxt_sP11beris_edw_sP7field_sP12field_grad_sP7hydro_sP9advflux_sP5map_sP7noise_s(kernel_ctxt_t *__par0, beris_edw_t *__par1, field_t *__par2, field_grad_t *__par3, hydro_t *__par4, advflux_t *__par5, map_t *__par6, noise_t *__par7){__cudaLaunchPrologue(8);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaSetupArgSimple(__par6, 48UL);__cudaSetupArgSimple(__par7, 56UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, beris_edw_t *, field_t *, field_grad_t *, hydro_t *, advflux_t *, map_t *, noise_t *))beris_edw_kernel_v)));}
# 547 "blue_phase_beris_edwards.c"
void beris_edw_kernel_v( kernel_ctxt_t *__cuda_0,beris_edw_t *__cuda_1,field_t *__cuda_2,field_grad_t *__cuda_3,hydro_t *__cuda_4,advflux_t *__cuda_5,map_t *__cuda_6,noise_t *__cuda_7)
# 550 "blue_phase_beris_edwards.c"
{__device_stub__Z18beris_edw_kernel_vP13kernel_ctxt_sP11beris_edw_sP7field_sP12field_grad_sP7hydro_sP9advflux_sP5map_sP7noise_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7);
# 856 "blue_phase_beris_edwards.c"
}
# 1 "/home/nikola/tmp/hip/blue_phase_beris_edwards.cudafe1.stub.c"
void __device_stub__Z20beris_edw_h_kernel_vP13kernel_ctxt_sP11beris_edw_sP4fe_s( kernel_ctxt_t *__par0,  beris_edw_t *__par1,  fe_t *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, beris_edw_t *, fe_t *))beris_edw_h_kernel_v))); }
# 961 "blue_phase_beris_edwards.c"
void beris_edw_h_kernel_v( kernel_ctxt_t *__cuda_0,beris_edw_t *__cuda_1,fe_t *__cuda_2)
# 962 "blue_phase_beris_edwards.c"
{__device_stub__Z20beris_edw_h_kernel_vP13kernel_ctxt_sP11beris_edw_sP4fe_s( __cuda_0,__cuda_1,__cuda_2);
# 1003 "blue_phase_beris_edwards.c"
}
# 1 "/home/nikola/tmp/hip/blue_phase_beris_edwards.cudafe1.stub.c"
void __device_stub__Z24beris_edw_fix_swd_kernelP13kernel_ctxt_sP15colloids_info_sP7hydro_sP5map_siii( kernel_ctxt_t *__par0,  colloids_info_t *__par1,  hydro_t *__par2,  map_t *__par3,  int __par4,  int __par5,  int __par6) {  __cudaLaunchPrologue(7); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaSetupArgSimple(__par5, 36UL); __cudaSetupArgSimple(__par6, 40UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, colloids_info_t *, hydro_t *, map_t *, int, int, int))beris_edw_fix_swd_kernel))); }
# 1071 "blue_phase_beris_edwards.c"
void beris_edw_fix_swd_kernel( kernel_ctxt_t *__cuda_0,colloids_info_t *__cuda_1,hydro_t *__cuda_2,map_t *__cuda_3,int __cuda_4,int __cuda_5,int __cuda_6)
# 1073 "blue_phase_beris_edwards.c"
{__device_stub__Z24beris_edw_fix_swd_kernelP13kernel_ctxt_sP15colloids_info_sP7hydro_sP5map_siii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6);
# 1138 "blue_phase_beris_edwards.c"
}
# 1 "/home/nikola/tmp/hip/blue_phase_beris_edwards.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T12) {  __nv_dummy_param_ref(__T12); __nv_save_fatbinhandle_for_managed_rt(__T12); __cudaRegisterEntry(__T12, ((void ( *)(kernel_ctxt_t *, colloids_info_t *, hydro_t *, map_t *, int, int, int))beris_edw_fix_swd_kernel), _Z24beris_edw_fix_swd_kernelP13kernel_ctxt_sP15colloids_info_sP7hydro_sP5map_siii, (-1)); __cudaRegisterEntry(__T12, ((void ( *)(kernel_ctxt_t *, beris_edw_t *, fe_t *))beris_edw_h_kernel_v), _Z20beris_edw_h_kernel_vP13kernel_ctxt_sP11beris_edw_sP4fe_s, (-1)); __cudaRegisterEntry(__T12, ((void ( *)(kernel_ctxt_t *, beris_edw_t *, field_t *, field_grad_t *, hydro_t *, advflux_t *, map_t *, noise_t *))beris_edw_kernel_v), _Z18beris_edw_kernel_vP13kernel_ctxt_sP11beris_edw_sP7field_sP12field_grad_sP7hydro_sP9advflux_sP5map_sP7noise_s, (-1)); __cudaRegisterVariable(__T12, __shadow_var(__nv_static_45__32_blue_phase_beris_edwards_cpp1_ii_b4a6d5f7_static_param,::static_param), 0, 384UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
