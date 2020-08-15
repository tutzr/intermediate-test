#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _17_collision_cpp1_ii_1fcdf597
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "collision.fatbin.c"
extern void __device_stub__Z17lb_collision_mrt1P13kernel_ctxt_sP9lb_data_sP7hydro_sP5map_sP7noise_sP4fe_s(kernel_ctxt_t *, lb_t *, hydro_t *, map_t *, noise_t *, fe_t *);
extern void __device_stub__Z17lb_collision_mrt2P13kernel_ctxt_sP9lb_data_sP7hydro_sP9fe_symm_sP7noise_s(kernel_ctxt_t *, lb_t *, hydro_t *, fe_symm_t *, noise_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z17lb_collision_mrt1P13kernel_ctxt_sP9lb_data_sP7hydro_sP5map_sP7noise_sP4fe_s(kernel_ctxt_t *__par0, lb_t *__par1, hydro_t *__par2, map_t *__par3, noise_t *__par4, fe_t *__par5){__cudaLaunchPrologue(6);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaSetupArgSimple(__par5, 40UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lb_t *, hydro_t *, map_t *, noise_t *, fe_t *))lb_collision_mrt1)));}
# 216 "collision.c"
void lb_collision_mrt1( kernel_ctxt_t *__cuda_0,lb_t *__cuda_1,hydro_t *__cuda_2,map_t *__cuda_3,noise_t *__cuda_4,fe_t *__cuda_5)
# 217 "collision.c"
{__device_stub__Z17lb_collision_mrt1P13kernel_ctxt_sP9lb_data_sP7hydro_sP5map_sP7noise_sP4fe_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5);
# 230 "collision.c"
}
# 1 "/home/nikola/tmp/cuda/collision.cudafe1.stub.c"
void __device_stub__Z17lb_collision_mrt2P13kernel_ctxt_sP9lb_data_sP7hydro_sP9fe_symm_sP7noise_s( kernel_ctxt_t *__par0,  lb_t *__par1,  hydro_t *__par2,  fe_symm_t *__par3,  noise_t *__par4) {  __cudaLaunchPrologue(5); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lb_t *, hydro_t *, fe_symm_t *, noise_t *))lb_collision_mrt2))); }
# 650 "collision.c"
void lb_collision_mrt2( kernel_ctxt_t *__cuda_0,lb_t *__cuda_1,hydro_t *__cuda_2,fe_symm_t *__cuda_3,noise_t *__cuda_4)
# 652 "collision.c"
{__device_stub__Z17lb_collision_mrt2P13kernel_ctxt_sP9lb_data_sP7hydro_sP9fe_symm_sP7noise_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 665 "collision.c"
}
# 1 "/home/nikola/tmp/cuda/collision.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T23) {  __nv_dummy_param_ref(__T23); __nv_save_fatbinhandle_for_managed_rt(__T23); __cudaRegisterEntry(__T23, ((void ( *)(kernel_ctxt_t *, lb_t *, hydro_t *, fe_symm_t *, noise_t *))lb_collision_mrt2), _Z17lb_collision_mrt2P13kernel_ctxt_sP9lb_data_sP7hydro_sP9fe_symm_sP7noise_s, (-1)); __cudaRegisterEntry(__T23, ((void ( *)(kernel_ctxt_t *, lb_t *, hydro_t *, map_t *, noise_t *, fe_t *))lb_collision_mrt1), _Z17lb_collision_mrt1P13kernel_ctxt_sP9lb_data_sP7hydro_sP5map_sP7noise_sP4fe_s, (-1)); __cudaRegisterVariable(__T23, __shadow_var(__nv_static_30__17_collision_cpp1_ii_1fcdf597__lbp,::_lbp), 0, 7712UL, 1, 0); __cudaRegisterVariable(__T23, __shadow_var(__nv_static_30__17_collision_cpp1_ii_1fcdf597__cp,::_cp), 0, 72UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
