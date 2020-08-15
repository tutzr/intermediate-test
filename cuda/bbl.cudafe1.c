# 1 "bbl.c"
# 29 "d3q19.h"
extern const int cv[19][3];
extern const double wv[19];
# 74 "model.h"
extern const double rcs2;
static const char __T0[58];
static const char __T1[22];
static const char __T2[47];
static const char __T3[76];
static const char __T4[56];
static const char __T5[55];
static const char __T7[55];
static const char __T8[55];
static const char __T9[62];
static const char __T10[71];
static const char __T11[51];
static const char __T12[47];
static const char __T0[58] = "int bbl_create(pe_s *, coords_s *, lb_data_s *, bbl_s **)";
static const char __T1[22] = "int bbl_free(bbl_s *)";
static const char __T2[47] = "int bbl_active_set(bbl_s *, colloids_info_s *)";
static const char __T3[76] = "int bounce_back_on_links(bbl_s *, lb_data_s *, wall_s *, colloids_info_s *)";
static const char __T4[56] = "int bbl_active_conservation(bbl_s *, colloids_info_s *)";
static const char __T5[55] = "int bbl_pass0(bbl_s *, lb_data_s *, colloids_info_s *)";
static const char __T7[55] = "int bbl_pass1(bbl_s *, lb_data_s *, colloids_info_s *)";
static const char __T8[55] = "int bbl_pass2(bbl_s *, lb_data_s *, colloids_info_s *)";
static const char __T9[62] = "int bbl_update_colloids(bbl_s *, wall_s *, colloids_info_s *)";
static const char __T10[71] = "int bbl_wall_lubrication_account(bbl_s *, wall_s *, colloids_info_s *)";
static const char __T11[51] = "int bbl_order_parameter_deficit(bbl_s *, double *)";
static const char __T12[47] = "int bbl_surface_stress(bbl_s *, double (*)[3])";
