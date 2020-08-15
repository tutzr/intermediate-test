#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _17_halo_swap_cpp1_ii_0e562ad4
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "halo_swap.fatbin.c"
extern void __device_stub__Z20halo_swap_pack_rank1P11halo_swap_siPd(halo_swap_t *, int, double *);
extern void __device_stub__Z22halo_swap_unpack_rank1P11halo_swap_siPd(halo_swap_t *, int, double *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z20halo_swap_pack_rank1P11halo_swap_siPd(halo_swap_t *__par0, int __par1, double *__par2){__cudaLaunchPrologue(3);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaLaunch(((char *)((void ( *)(halo_swap_t *, int, double *))halo_swap_pack_rank1)));}
# 1067 "halo_swap.c"
void halo_swap_pack_rank1( halo_swap_t *__cuda_0,int __cuda_1,double *__cuda_2)
# 1067 "halo_swap.c"
{__device_stub__Z20halo_swap_pack_rank1P11halo_swap_siPd( __cuda_0,__cuda_1,__cuda_2);
# 1158 "halo_swap.c"
}
# 1 "/home/nikola/tmp/cuda/halo_swap.cudafe1.stub.c"
void __device_stub__Z22halo_swap_unpack_rank1P11halo_swap_siPd( halo_swap_t *__par0,  int __par1,  double *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(halo_swap_t *, int, double *))halo_swap_unpack_rank1))); }
# 1169 "halo_swap.c"
void halo_swap_unpack_rank1( halo_swap_t *__cuda_0,int __cuda_1,double *__cuda_2)
# 1169 "halo_swap.c"
{__device_stub__Z22halo_swap_unpack_rank1P11halo_swap_siPd( __cuda_0,__cuda_1,__cuda_2);
# 1266 "halo_swap.c"
}
# 1 "/home/nikola/tmp/cuda/halo_swap.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T11) {  __nv_dummy_param_ref(__T11); __nv_save_fatbinhandle_for_managed_rt(__T11); __cudaRegisterEntry(__T11, ((void ( *)(halo_swap_t *, int, double *))halo_swap_unpack_rank1), _Z22halo_swap_unpack_rank1P11halo_swap_siPd, (-1)); __cudaRegisterEntry(__T11, ((void ( *)(halo_swap_t *, int, double *))halo_swap_pack_rank1), _Z20halo_swap_pack_rank1P11halo_swap_siPd, (-1)); __cudaRegisterVariable(__T11, __shadow_var(__nv_static_30__17_halo_swap_cpp1_ii_0e562ad4_const_param,::const_param), 0, 100UL, 1, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
