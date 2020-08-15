# 1 "test_model.c"
# 29 "../.././src/d3q19.h"
extern const int cv[19][3];
extern const double wv[19];
extern const double q_[19][3][3];
extern const double norm_[19];
extern const double ma_[19][19];
extern const double mi_[19][19];

extern const int xblocklen_cv[1];
extern const int xdisp_fwd_cv[1];
extern const int xdisp_bwd_cv[1];

extern const int yblocklen_cv[3];
extern const int ydisp_fwd_cv[3];
extern const int ydisp_bwd_cv[3];

extern const int zblocklen_cv[5];
extern const int zdisp_fwd_cv[5];
extern const int zdisp_bwd_cv[5];
# 74 "../.././src/model.h"
extern const double rcs2;
static const char __T0[52];
static const char __T1[48];
static const char __T2[56];
static const char __T3[52];
static const char __T4[44];
static const char __T0[52] = "int do_test_model_distributions(pe_s *, coords_s *)";
static const char __T1[48] = "int do_test_model_halo_swap(pe_s *, coords_s *)";
static const char __T2[56] = "int do_test_model_reduced_halo_swap(pe_s *, coords_s *)";
static const char __T3[52] = "int test_model_is_domain(coords_s *, int, int, int)";
static const char __T4[44] = "int do_test_lb_model_io(pe_s *, coords_s *)";
