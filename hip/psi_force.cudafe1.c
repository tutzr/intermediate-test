# 1 "psi_force.c"
# 38 "psi_gradients.h"
extern const int psi_gr_cv[7][3];
extern const double psi_gr_wv[7];
extern const double psi_gr_rnorm[7];
extern const double psi_gr_rcs2;
static const char __T0[88];
static const char __T1[70];
static const char __T2[82];
static const char __T3[71];
static const char __T4[85];
static const char __T5[87];
static const char __T0[88] = "int psi_force_gradmu(psi_s *, fe_s *, field_s *, hydro_s *, map_s *, colloids_info_s *)";
static const char __T1[70] = "int psi_force_gradmu_e(psi_s *, fe_s *, hydro_s *, colloids_info_s *)";
static const char __T2[82] = "int psi_force_gradmu_es(psi_s *, fe_s *, field_s *, hydro_s *, colloids_info_s *)";
static const char __T3[71] = "int psi_force_divstress(psi_s *, fe_s *, hydro_s *, colloids_info_s *)";
static const char __T4[85] = "int psi_force_divstress_d3qx(psi_s *, fe_s *, hydro_s *, map_s *, colloids_info_s *)";
static const char __T5[87] = "int psi_force_divstress_one_sided_d3qx(psi_s *, hydro_s *, map_s *, colloids_info_s *)";
