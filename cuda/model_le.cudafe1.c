# 1 "model_le.c"
# 29 "d3q19.h"
extern const int cv[19][3];
extern const double wv[19];
extern const double q_[19][3][3];

extern const double ma_[19][19];
extern const double mi_[19][19];

extern const int xblocklen_cv[1];
extern const int xdisp_fwd_cv[1];
extern const int xdisp_bwd_cv[1];
# 74 "model.h"
extern const double rcs2;
static const char __T0[63];
static const char __T1[44];
static const char __T2[48];
static const char __T3[59];
static const char __T4[68];
static const char __T5[56];
static const char __T0[63] = "int lb_le_apply_boundary_conditions(lb_data_s *, lees_edw_s *)";
static const char __T1[44] = "int le_reproject(lb_data_s *, lees_edw_s *)";
static const char __T2[48] = "int le_reproject_all(lb_data_s *, lees_edw_s *)";
static const char __T3[59] = "int le_displace_and_interpolate(lb_data_s *, lees_edw_s *)";
static const char __T4[68] = "int le_displace_and_interpolate_parallel(lb_data_s *, lees_edw_s *)";
static const char __T5[56] = "int lb_le_init_shear_profile(lb_data_s *, lees_edw_s *)";
