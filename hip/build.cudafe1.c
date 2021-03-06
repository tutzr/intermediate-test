# 1 "build.c"
# 29 "d3q19.h"
extern const int cv[19][3];
extern const double wv[19];
extern const double q_[19][3][3];
# 74 "model.h"
extern const double rcs2;
static const char __T0[61];
static const char __T1[73];
static const char __T2[79];
static const char __T3[54];
static const char __T4[116];
static const char __T5[58];
static const char __T6[82];
static const char __T7[52];
static const char __T8[73];
static const char __T9[81];
static const char __T10[78];
static const char __T11[110];
static const char __T12[80];
static const char __T13[80];
static const char __T14[46];
static const char __T15[59];
static const char __T16[62];
static const char __T17[55];
static const char __T18[57];
static const char __T0[61] = "int build_update_map(coords_s *, colloids_info_s *, map_s *)";
static const char __T1[73] = "int build_update_links(coords_s *, colloids_info_s *, wall_s *, map_s *)";
static const char __T2[79] = "int build_reconstruct_links(coords_s *, colloids_info_s *, colloid *, map_s *)";
static const char __T3[54] = "int build_reset_links(coords_s *, colloid *, map_s *)";
static const char __T4[116] = "int build_remove_replace(fe_s *, colloids_info_s *, lb_data_s *, field_s *, field_s *, field_s *, psi_s *, map_s *)";
static const char __T5[58] = "int build_bbl_rebuild_flag(coords_s *, colloids_info_s *)";
static const char __T6[82] = "int build_remove_replace_policy_local(coords_s *, colloids_info_s *, lb_data_s *)";
static const char __T7[52] = "int build_remove_fluid(lb_data_s *, int, colloid *)";
static const char __T8[73] = "int build_remove_order_parameter(lb_data_s *, field_s *, int, colloid *)";
static const char __T9[81] = "int build_replace_fluid(lb_data_s *, colloids_info_s *, int, colloid *, map_s *)";
static const char __T10[78] = "int build_replace_fluid_local(colloids_info_s *, colloid *, int, lb_data_s *)";
static const char __T11[110] = "int build_replace_order_parameter(fe_s *, lb_data_s *, colloids_info_s *, field_s *, int, colloid *, map_s *)";
static const char __T12[80] = "int build_replace_q_local(fe_s *, colloids_info_s *, colloid *, int, field_s *)";
static const char __T13[80] = "int build_colloid_wall_links(coords_s *, colloids_info_s *, colloid *, map_s *)";
static const char __T14[46] = "int build_count_links_local(colloid *, int *)";
static const char __T15[59] = "int build_count_faces_local(colloid *, double *, double *)";
static const char __T16[62] = "int build_conservation(colloids_info_s *, field_s *, psi_s *)";
static const char __T17[55] = "int build_conservation_psi(colloids_info_s *, psi_s *)";
static const char __T18[57] = "int build_conservation_phi(colloids_info_s *, field_s *)";
