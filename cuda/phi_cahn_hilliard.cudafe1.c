# 1 "phi_cahn_hilliard.c"
static const char __T0[82];
static const char __T1[28];
static const char __T2[84];
static const char __T3[40];
static const char __T5[40];
static const char __T6[46];
static const char __T7[42];
static const char __T8[51];
static const char __T10[35];
static const char __T0[82] = "int phi_ch_create(pe_s *, coords_s *, lees_edw_s *, phi_ch_info_s *, phi_ch_s **)";
static const char __T1[28] = "int phi_ch_free(phi_ch_s *)";
static const char __T2[84] = "int phi_cahn_hilliard(phi_ch_s *, fe_s *, field_s *, hydro_s *, map_s *, noise_s *)";
static const char __T3[40] = "int phi_ch_flux_mu1(phi_ch_s *, fe_s *)";
static const char __T5[40] = "int phi_ch_flux_mu2(phi_ch_s *, fe_s *)";
static const char __T6[46] = "int phi_ch_random_flux(phi_ch_s *, noise_s *)";
static const char __T7[42] = "int phi_ch_le_fix_fluxes(phi_ch_s *, int)";
static const char __T8[51] = "int phi_ch_le_fix_fluxes_parallel(phi_ch_s *, int)";
static const char __T10[35] = "int phi_ch_flux_mu_ext(phi_ch_s *)";
