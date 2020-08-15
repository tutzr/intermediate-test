#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _12_wall_cpp1_ii_6b8ce1bf
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "wall.fatbin.c"
extern void __device_stub__Z16wall_setu_kernelP6wall_sP9lb_data_s(wall_t *, lb_t *);
extern void __device_stub__Z15wall_bbl_kernelP6wall_sP9lb_data_sP5map_s(wall_t *, lb_t *, map_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z16wall_setu_kernelP6wall_sP9lb_data_s(wall_t *__par0, lb_t *__par1){__cudaLaunchPrologue(2);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaLaunch(((char *)((void ( *)(wall_t *, lb_t *))wall_setu_kernel)));}
# 512 "wall.c"
void wall_setu_kernel( wall_t *__cuda_0,lb_t *__cuda_1)
# 512 "wall.c"
{__device_stub__Z16wall_setu_kernelP6wall_sP9lb_data_s( __cuda_0,__cuda_1);
# 532 "wall.c"
}
# 1 "/home/nikola/tmp/hip/wall.cudafe1.stub.c"
void __device_stub__Z15wall_bbl_kernelP6wall_sP9lb_data_sP5map_s( wall_t *__par0,  lb_t *__par1,  map_t *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(wall_t *, lb_t *, map_t *))wall_bbl_kernel))); }
# 575 "wall.c"
void wall_bbl_kernel( wall_t *__cuda_0,lb_t *__cuda_1,map_t *__cuda_2)
# 575 "wall.c"
{__device_stub__Z15wall_bbl_kernelP6wall_sP9lb_data_sP5map_s( __cuda_0,__cuda_1,__cuda_2);
# 684 "wall.c"
}
# 1 "/home/nikola/tmp/hip/wall.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T21) {  __nv_dummy_param_ref(__T21); __nv_save_fatbinhandle_for_managed_rt(__T21); __cudaRegisterEntry(__T21, ((void ( *)(wall_t *, lb_t *, map_t *))wall_bbl_kernel), _Z15wall_bbl_kernelP6wall_sP9lb_data_sP5map_s, (-1)); __cudaRegisterEntry(__T21, ((void ( *)(wall_t *, lb_t *))wall_setu_kernel), _Z16wall_setu_kernelP6wall_sP9lb_data_s, (-1)); __cudaRegisterVariable(__T21, __shadow_var(__nv_static_25__12_wall_cpp1_ii_6b8ce1bf_static_param,::static_param), 0, 96UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
