# 1 "colloids_rt.c"
static const char __T0[120];
static const char __T1[75];
static const char __T2[65];
static const char __T3[82];
static const char __T4[85];
static const char __T5[98];
static const char __T6[59];
static const char __T7[87];
static const char __T8[86];
static const char __T9[63];
static const char __T10[63];
static const char __T11[63];
static const char __T12[63];
static const char __T13[61];
static const char __T14[64];
static const char __T15[74];
static const char __T0[120] = "int colloids_init_rt(pe_s *, rt_s *, coords_s *, colloids_info_s **, colloid_io_s **, interact_s **, wall_s *, map_s *)";
static const char __T1[75] = "int colloids_rt_dynamics(coords_s *, colloids_info_s *, wall_s *, map_s *)";
static const char __T2[65] = "int colloids_rt_init_few(pe_s *, rt_s *, colloids_info_s *, int)";
static const char __T3[82] = "int colloids_rt_init_from_file(pe_s *, rt_s *, colloids_info_s *, colloid_io_s *)";
static const char __T4[85] = "int colloids_rt_init_random(pe_s *, coords_s *, rt_s *, wall_s *, colloids_info_s *)";
static const char __T5[98] = "int colloids_rt_state_stub(pe_s *, rt_s *, colloids_info_s *, const char *, colloid_state_type *)";
static const char __T6[59] = "int colloids_rt_gravity(pe_s *, rt_s *, colloids_info_s *)";
static const char __T7[87] = "int colloids_rt_cell_list_checks(pe_s *, coords_s *, colloids_info_s **, interact_s *)";
static const char __T8[86] = "int colloids_init_ewald_rt(pe_s *, rt_s *, coords_s *, colloids_info_s *, ewald_s **)";
static const char __T9[63] = "int lubrication_init(pe_s *, coords_s *, rt_s *, interact_s *)";
static const char __T10[63] = "int pair_ss_cut_init(pe_s *, coords_s *, rt_s *, interact_s *)";
static const char __T11[63] = "int pair_yukawa_init(pe_s *, coords_s *, rt_s *, interact_s *)";
static const char __T12[63] = "int pair_lj_cut_init(pe_s *, coords_s *, rt_s *, interact_s *)";
static const char __T13[61] = "int bond_fene_init(pe_s *, coords_s *, rt_s *, interact_s *)";
static const char __T14[64] = "int angle_cosine_init(pe_s *, coords_s *, rt_s *, interact_s *)";
static const char __T15[74] = "int colloids_init_halo_range_check(pe_s *, coords_s *, colloids_info_s *)";
