# 1 "interaction.c"
static const char __T0[55];
static const char __T1[33];
static const char __T2[57];
static const char __T3[57];
static const char __T4[100];
static const char __T5[91];
static const char __T6[83];
static const char __T7[51];
static const char __T8[64];
static const char __T9[69];
static const char __T10[68];
static const char __T11[55];
static const char __T12[51];
static const char __T13[52];
static const char __T14[53];
static const char __T15[57];
static const char __T16[66];
static const char __T17[43];
static const char __T18[43];
static const char __T19[58];
static const char __T20[50];
static const char __T0[55] = "int interact_create(pe_s *, coords_s *, interact_s **)";
static const char __T1[33] = "void interact_free(interact_s *)";
static const char __T2[57] = "int interact_rc_set(interact_s *, interact_enum, double)";
static const char __T3[57] = "int interact_hc_set(interact_s *, interact_enum, double)";
static const char __T4[100] = "int interact_potential_add(interact_s *, interact_enum, void *, int (*)(colloids_info_s *, void *))";
static const char __T5[91] = "int interact_statistic_add(interact_s *, interact_enum, void *, int (*)(void *, double *))";
static const char __T6[83] = "int interact_compute(interact_s *, colloids_info_s *, map_s *, psi_s *, ewald_s *)";
static const char __T7[51] = "int colloids_update_forces_zero(colloids_info_s *)";
static const char __T8[64] = "int colloids_update_forces_external(colloids_info_s *, psi_s *)";
static const char __T9[69] = "int colloids_update_forces_fluid_gravity(colloids_info_s *, map_s *)";
static const char __T10[68] = "int colloids_update_forces_fluid_driven(colloids_info_s *, map_s *)";
static const char __T11[55] = "int interact_pairwise(interact_s *, colloids_info_s *)";
static const char __T12[51] = "int interact_wall(interact_s *, colloids_info_s *)";
static const char __T13[52] = "int interact_bonds(interact_s *, colloids_info_s *)";
static const char __T14[53] = "int interact_angles(interact_s *, colloids_info_s *)";
static const char __T15[57] = "int interact_find_bonds(interact_s *, colloids_info_s *)";
static const char __T16[66] = "int interact_find_bonds_all(interact_s *, colloids_info_s *, int)";
static const char __T17[43] = "int interact_rcmax(interact_s *, double *)";
static const char __T18[43] = "int interact_hcmax(interact_s *, double *)";
static const char __T19[58] = "int interact_range_check(interact_s *, colloids_info_s *)";
static const char __T20[50] = "int colloids_update_forces_ext(colloids_info_s *)";
