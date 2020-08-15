# 1 "nernst_planck.c"
# 38 "psi_gradients.h"
extern const int psi_gr_cv[7][3];
extern const double psi_gr_wv[7];
extern const double psi_gr_rnorm[7];
extern const double psi_gr_rcs2;
# 94 "nernst_planck.c"
static double __nv_static_34__21_nernst_planck_cpp1_ii_08764160_max_acc;
static const char __T0[62];
static const char __T1[72];
static const char __T2[64];
static const char __T3[86];
static const char __T4[97];
static const char __T5[103];
static const char __T6[59];
static const char __T0[62] = "int nernst_planck_driver(psi_s *, fe_s *, hydro_s *, map_s *)";
static const char __T1[72] = "int nernst_planck_fluxes(psi_s *, fe_s *, double *, double *, double *)";
static const char __T2[64] = "int nernst_planck_update(psi_s *, double *, double *, double *)";
static const char __T3[86] = "int nernst_planck_driver_d3qx(psi_s *, fe_s *, hydro_s *, map_s *, colloids_info_s *)";
static const char __T4[97] = "int nernst_planck_fluxes_d3qx(psi_s *, fe_s *, hydro_s *, map_s *, colloids_info_s *, double **)";
static const char __T5[103] = "int nernst_planck_fluxes_force_d3qx(psi_s *, fe_s *, hydro_s *, map_s *, colloids_info_s *, double **)";
static const char __T6[59] = "int nernst_planck_update_d3qx(psi_s *, map_s *, double **)";
