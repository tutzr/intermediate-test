#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _25_phi_force_colloid_cpp1_ii_ca3cfde1
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "phi_force_colloid.fatbin.c"
extern void __device_stub__Z24pth_force_fluid_kernel_vP13kernel_ctxt_sP5pth_sP7hydro_s(kernel_ctxt_t *, pth_t *, hydro_t *);
extern void __device_stub__Z20pth_force_map_kernelP13kernel_ctxt_sP5pth_sP7hydro_sP5map_s(kernel_ctxt_t *, pth_t *, hydro_t *, map_t *);
extern void __device_stub__Z21pth_force_wall_kernelP13kernel_ctxt_sP5pth_sP5map_sP6wall_sPd(kernel_ctxt_t *, pth_t *, map_t *, wall_t *, double *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z24pth_force_fluid_kernel_vP13kernel_ctxt_sP5pth_sP7hydro_s(kernel_ctxt_t *__par0, pth_t *__par1, hydro_t *__par2){__cudaLaunchPrologue(3);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, pth_t *, hydro_t *))pth_force_fluid_kernel_v)));}
# 320 "phi_force_colloid.c"
void pth_force_fluid_kernel_v( kernel_ctxt_t *__cuda_0,pth_t *__cuda_1,hydro_t *__cuda_2)
# 321 "phi_force_colloid.c"
{__device_stub__Z24pth_force_fluid_kernel_vP13kernel_ctxt_sP5pth_sP7hydro_s( __cuda_0,__cuda_1,__cuda_2);
# 478 "phi_force_colloid.c"
}
# 1 "/home/nikola/tmp/hip/phi_force_colloid.cudafe1.stub.c"
void __device_stub__Z20pth_force_map_kernelP13kernel_ctxt_sP5pth_sP7hydro_sP5map_s( kernel_ctxt_t *__par0,  pth_t *__par1,  hydro_t *__par2,  map_t *__par3) {  __cudaLaunchPrologue(4); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, pth_t *, hydro_t *, map_t *))pth_force_map_kernel))); }
# 488 "phi_force_colloid.c"
void pth_force_map_kernel( kernel_ctxt_t *__cuda_0,pth_t *__cuda_1,hydro_t *__cuda_2,map_t *__cuda_3)
# 489 "phi_force_colloid.c"
{__device_stub__Z20pth_force_map_kernelP13kernel_ctxt_sP5pth_sP7hydro_sP5map_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 658 "phi_force_colloid.c"
}
# 1 "/home/nikola/tmp/hip/phi_force_colloid.cudafe1.stub.c"
void __device_stub__Z21pth_force_wall_kernelP13kernel_ctxt_sP5pth_sP5map_sP6wall_sPd( kernel_ctxt_t *__par0,  pth_t *__par1,  map_t *__par2,  wall_t *__par3,  double *__par4) {  __cudaLaunchPrologue(5); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, pth_t *, map_t *, wall_t *, double *))pth_force_wall_kernel))); }
# 673 "phi_force_colloid.c"
void pth_force_wall_kernel( kernel_ctxt_t *__cuda_0,pth_t *__cuda_1,map_t *__cuda_2,wall_t *__cuda_3,double __cuda_4[3])
# 675 "phi_force_colloid.c"
{__device_stub__Z21pth_force_wall_kernelP13kernel_ctxt_sP5pth_sP5map_sP6wall_sPd( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 787 "phi_force_colloid.c"
}
# 1 "/home/nikola/tmp/hip/phi_force_colloid.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T7) {  __nv_dummy_param_ref(__T7); __nv_save_fatbinhandle_for_managed_rt(__T7); __cudaRegisterEntry(__T7, ((void ( *)(kernel_ctxt_t *, pth_t *, map_t *, wall_t *, double *))pth_force_wall_kernel), _Z21pth_force_wall_kernelP13kernel_ctxt_sP5pth_sP5map_sP6wall_sPd, (-1)); __cudaRegisterEntry(__T7, ((void ( *)(kernel_ctxt_t *, pth_t *, hydro_t *, map_t *))pth_force_map_kernel), _Z20pth_force_map_kernelP13kernel_ctxt_sP5pth_sP7hydro_sP5map_s, (-1)); __cudaRegisterEntry(__T7, ((void ( *)(kernel_ctxt_t *, pth_t *, hydro_t *))pth_force_fluid_kernel_v), _Z24pth_force_fluid_kernel_vP13kernel_ctxt_sP5pth_sP7hydro_s, (-1)); __cudaRegisterVariable(__T7, __shadow_var(__nv_static_38__25_phi_force_colloid_cpp1_ii_ca3cfde1_fs,::fs), 0, 24UL, 0, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
