#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_MODULE_ID _13_hydro_cpp1_ii_34153041
#define __NV_CUBIN_HANDLE_STORAGE__ extern
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "hydro.fatbin.c"
static void __device_stub__Z15hydro_field_setP7hydro_sPdddd(hydro_t *, double *, double, double, double);
extern void __device_stub__Z23hydro_accumulate_kernelP13kernel_ctxt_sP7hydro_sPd(kernel_ctxt_t *, hydro_t *, double *);
extern void __device_stub__Z25hydro_accumulate_kernel_vP13kernel_ctxt_sP7hydro_sPd(kernel_ctxt_t *, hydro_t *, double *);
extern void __device_stub__Z20hydro_correct_kernelP13kernel_ctxt_sP7hydro_sPd(kernel_ctxt_t *, hydro_t *, double *);
extern void __device_stub__Z22hydro_correct_kernel_vP13kernel_ctxt_sP7hydro_sPd(kernel_ctxt_t *, hydro_t *, double *);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
static void __device_stub__Z15hydro_field_setP7hydro_sPdddd(hydro_t *__par0, double *__par1, double __par2, double __par3, double __par4){__cudaLaunchPrologue(5);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaSetupArgSimple(__par4, 32UL);__cudaLaunch(((char *)((void ( *)(hydro_t *, double *, double, double, double))hydro_field_set)));}
# 484 "hydro.c"
static void hydro_field_set( hydro_t *__cuda_0,double *__cuda_1,double __cuda_2,double __cuda_3,double __cuda_4)
# 485 "hydro.c"
{__device_stub__Z15hydro_field_setP7hydro_sPdddd( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 499 "hydro.c"
}
# 1 "/home/nikola/tmp/cuda/hydro.cudafe1.stub.c"
void __device_stub__Z23hydro_accumulate_kernelP13kernel_ctxt_sP7hydro_sPd( kernel_ctxt_t *__par0,  hydro_t *__par1,  double *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_accumulate_kernel))); }
# 993 "hydro.c"
void hydro_accumulate_kernel( kernel_ctxt_t *__cuda_0,hydro_t *__cuda_1,double __cuda_2[3])
# 994 "hydro.c"
{__device_stub__Z23hydro_accumulate_kernelP13kernel_ctxt_sP7hydro_sPd( __cuda_0,__cuda_1,__cuda_2);
# 1043 "hydro.c"
}
# 1 "/home/nikola/tmp/cuda/hydro.cudafe1.stub.c"
void __device_stub__Z25hydro_accumulate_kernel_vP13kernel_ctxt_sP7hydro_sPd( kernel_ctxt_t *__par0,  hydro_t *__par1,  double *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_accumulate_kernel_v))); }
# 1053 "hydro.c"
void hydro_accumulate_kernel_v( kernel_ctxt_t *__cuda_0,hydro_t *__cuda_1,double __cuda_2[3])
# 1054 "hydro.c"
{__device_stub__Z25hydro_accumulate_kernel_vP13kernel_ctxt_sP7hydro_sPd( __cuda_0,__cuda_1,__cuda_2);
# 1108 "hydro.c"
}
# 1 "/home/nikola/tmp/cuda/hydro.cudafe1.stub.c"
void __device_stub__Z20hydro_correct_kernelP13kernel_ctxt_sP7hydro_sPd( kernel_ctxt_t *__par0,  hydro_t *__par1,  double *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_correct_kernel))); }
# 1118 "hydro.c"
void hydro_correct_kernel( kernel_ctxt_t *__cuda_0,hydro_t *__cuda_1,double __cuda_2[3])
# 1119 "hydro.c"
{__device_stub__Z20hydro_correct_kernelP13kernel_ctxt_sP7hydro_sPd( __cuda_0,__cuda_1,__cuda_2);
# 1141 "hydro.c"
}
# 1 "/home/nikola/tmp/cuda/hydro.cudafe1.stub.c"
void __device_stub__Z22hydro_correct_kernel_vP13kernel_ctxt_sP7hydro_sPd( kernel_ctxt_t *__par0,  hydro_t *__par1,  double *__par2) {  __cudaLaunchPrologue(3); __cudaSetupArgSimple(__par0, 0UL); __cudaSetupArgSimple(__par1, 8UL); __cudaSetupArgSimple(__par2, 16UL); __cudaLaunch(((char *)((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_correct_kernel_v))); }
# 1151 "hydro.c"
void hydro_correct_kernel_v( kernel_ctxt_t *__cuda_0,hydro_t *__cuda_1,double __cuda_2[3])
# 1152 "hydro.c"
{__device_stub__Z22hydro_correct_kernel_vP13kernel_ctxt_sP7hydro_sPd( __cuda_0,__cuda_1,__cuda_2);
# 1177 "hydro.c"
}
# 1 "/home/nikola/tmp/cuda/hydro.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T27) {  __nv_dummy_param_ref(__T27); __nv_save_fatbinhandle_for_managed_rt(__T27); __cudaRegisterEntry(__T27, ((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_correct_kernel_v), _Z22hydro_correct_kernel_vP13kernel_ctxt_sP7hydro_sPd, (-1)); __cudaRegisterEntry(__T27, ((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_correct_kernel), _Z20hydro_correct_kernelP13kernel_ctxt_sP7hydro_sPd, (-1)); __cudaRegisterEntry(__T27, ((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_accumulate_kernel_v), _Z25hydro_accumulate_kernel_vP13kernel_ctxt_sP7hydro_sPd, (-1)); __cudaRegisterEntry(__T27, ((void ( *)(kernel_ctxt_t *, hydro_t *, double *))hydro_accumulate_kernel), _Z23hydro_accumulate_kernelP13kernel_ctxt_sP7hydro_sPd, (-1)); __cudaRegisterEntry(__T27, ((void ( *)(hydro_t *, double *, double, double, double))hydro_field_set), __nv_static_26__13_hydro_cpp1_ii_34153041__Z15hydro_field_setP7hydro_sPdddd, (-1)); __cudaRegisterVariable(__T27, __shadow_var(__nv_static_26__13_hydro_cpp1_ii_34153041_fs,::fs), 0, 24UL, 0, 0); }
static void __sti____cudaRegisterAll(void) {  ____cudaRegisterLinkedBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop
