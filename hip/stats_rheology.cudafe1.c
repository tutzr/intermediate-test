# 1 "stats_rheology.c"
# 74 "model.h"
extern const double rcs2;
static const char __T0[63];
static const char __T1[85];
static const char __T2[55];
static const char __T3[93];
static const char __T4[64];
static const char __T5[64];
static const char __T6[66];
static const char __T7[60];
static const char __T0[63] = "int stats_rheology_create(pe_s *, coords_s *, stats_rheo_s **)";
static const char __T1[85] = "int stats_rheology_free_energy_density_profile(stats_rheo_s *, fe_s *, const char *)";
static const char __T2[55] = "int stats_rheology_stress_profile_zero(stats_rheo_s *)";
static const char __T3[93] = "int stats_rheology_stress_profile_accumulate(stats_rheo_s *, lb_data_s *, fe_s *, hydro_s *)";
static const char __T4[64] = "int stats_rheology_stress_profile(stats_rheo_s *, const char *)";
static const char __T5[64] = "int stats_rheology_stress_section(stats_rheo_s *, const char *)";
static const char __T6[66] = "int stats_rheology_mean_stress(lb_data_s *, fe_s *, const char *)";
static const char __T7[60] = "void stats_rheology_print_matrix(_IO_FILE *, double (*)[3])";
