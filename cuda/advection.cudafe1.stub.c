#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _17_advection_cpp1_ii_52780400
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "advection.fatbin.c"
extern void __device_stub__Z23advection_le_1st_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *);
extern void __device_stub__Z20advection_2nd_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *);
extern void __device_stub__Z22advection_2nd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *);
extern void __device_stub__Z25advection_le_3rd_kernel_vP13kernel_ctxt_sP10lees_edw_sP9advflux_sP7hydro_sP7field_s(kernel_ctxt_t *, lees_edw_t *, advflux_t *, hydro_t *, field_t *);
extern void __device_stub__Z22advection_3rd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z23advection_le_1st_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s(kernel_ctxt_t *__par0, advflux_t *__par1, hydro_t *__par2, field_t *__par3){__cudaLaunchPrologue(4);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_le_1st_kernel)));}
# 374 "advection.c"
void advection_le_1st_kernel( kernel_ctxt_t *__cuda_0,advflux_t *__cuda_1,hydro_t *__cuda_2,field_t *__cuda_3)
# 377 "advection.c"
{__device_stub__Z23advection_le_1st_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 475 "advection.c"
}
# 1 "/home/nikola/tmp/cuda/advection.cudafe1.stub.c"
void __device_stub__Z20advection_2nd_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s( kernel_ctxt_t *__par0,  advflux_t *__par1,  hydro_t *__par2,  field_t *__par3) {  __cudaLaunchPrologue(4); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_2nd_kernel))); }
# 529 "advection.c"
void advection_2nd_kernel( kernel_ctxt_t *__cuda_0,advflux_t *__cuda_1,hydro_t *__cuda_2,field_t *__cuda_3)
# 530 "advection.c"
{__device_stub__Z20advection_2nd_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 613 "advection.c"
}
# 1 "/home/nikola/tmp/cuda/advection.cudafe1.stub.c"
void __device_stub__Z22advection_2nd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s( kernel_ctxt_t *__par0,  advflux_t *__par1,  hydro_t *__par2,  field_t *__par3) {  __cudaLaunchPrologue(4); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_2nd_kernel_v))); }
# 623 "advection.c"
void advection_2nd_kernel_v( kernel_ctxt_t *__cuda_0,advflux_t *__cuda_1,hydro_t *__cuda_2,field_t *__cuda_3)
# 624 "advection.c"
{__device_stub__Z22advection_2nd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 743 "advection.c"
}
# 1 "/home/nikola/tmp/cuda/advection.cudafe1.stub.c"
void __device_stub__Z25advection_le_3rd_kernel_vP13kernel_ctxt_sP10lees_edw_sP9advflux_sP7hydro_sP7field_s( kernel_ctxt_t *__par0,  lees_edw_t *__par1,  advflux_t *__par2,  hydro_t *__par3,  field_t *__par4) {  __cudaLaunchPrologue(5); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaSetupArgSimple(__par4, 32UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, lees_edw_t *, advflux_t *, hydro_t *, field_t *))advection_le_3rd_kernel_v))); }
# 805 "advection.c"
void advection_le_3rd_kernel_v( kernel_ctxt_t *__cuda_0,lees_edw_t *__cuda_1,advflux_t *__cuda_2,hydro_t *__cuda_3,field_t *__cuda_4)
# 809 "advection.c"
{__device_stub__Z25advection_le_3rd_kernel_vP13kernel_ctxt_sP10lees_edw_sP9advflux_sP7hydro_sP7field_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 999 "advection.c"
}
# 1 "/home/nikola/tmp/cuda/advection.cudafe1.stub.c"
void __device_stub__Z22advection_3rd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s( kernel_ctxt_t *__par0,  advflux_t *__par1,  hydro_t *__par2,  field_t *__par3) {  __cudaLaunchPrologue(4); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaSetupArgSimple(__par3, 24UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_3rd_kernel_v))); }
# 1009 "advection.c"
void advection_3rd_kernel_v( kernel_ctxt_t *__cuda_0,advflux_t *__cuda_1,hydro_t *__cuda_2,field_t *__cuda_3)
# 1012 "advection.c"
{__device_stub__Z22advection_3rd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 1205 "advection.c"
}
# 1 "/home/nikola/tmp/cuda/advection.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T19) {  __nv_dummy_param_ref(__T19); __nv_save_fatbinhandle_for_managed_rt(__T19); __cudaRegisterEntry(__T19, ((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_3rd_kernel_v), _Z22advection_3rd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s, (-1)); __cudaRegisterEntry(__T19, ((void ( *)(kernel_ctxt_t *, lees_edw_t *, advflux_t *, hydro_t *, field_t *))advection_le_3rd_kernel_v), _Z25advection_le_3rd_kernel_vP13kernel_ctxt_sP10lees_edw_sP9advflux_sP7hydro_sP7field_s, (-1)); __cudaRegisterEntry(__T19, ((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_2nd_kernel_v), _Z22advection_2nd_kernel_vP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s, (-1)); __cudaRegisterEntry(__T19, ((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_2nd_kernel), _Z20advection_2nd_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s, (-1)); __cudaRegisterEntry(__T19, ((void ( *)(kernel_ctxt_t *, advflux_t *, hydro_t *, field_t *))advection_le_1st_kernel), _Z23advection_le_1st_kernelP13kernel_ctxt_sP9advflux_sP7hydro_sP7field_s, (-1)); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
