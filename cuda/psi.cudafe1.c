# 1 "psi.c"
static const char __T0[50];
static const char __T1[39];
static const char __T2[26];
static const char __T3[26];
static const char __T4[27];
static const char __T5[39];
static const char __T6[37];
static const char __T7[46];
static const char __T8[44];
static const char __T9[47];
static const char __T10[23];
static const char __T11[45];
static const char __T12[44];
static const char __T13[39];
static const char __T14[38];
static const char __T15[41];
static const char __T16[41];
static const char __T17[43];
static const char __T18[36];
static const char __T19[38];
static const char __T20[39];
static const char __T21[41];
static const char __T22[32];
static const char __T23[34];
static const char __T24[35];
static const char __T25[37];
static const char __T26[36];
static const char __T27[38];
static const char __T28[47];
static const char __T29[42];
static const char __T30[43];
static const char __T31[48];
static const char __T32[49];
static const char __T33[61];
static const char __T34[34];
static const char __T35[34];
static const char __T36[36];
static const char __T37[36];
static const char __T38[37];
static const char __T39[35];
static const char __T40[46];
static const char __T41[33];
static const char __T42[31];
static const char __T43[37];
static const char __T44[35];
static const char __T45[39];
static const char __T46[27];
static const char __T47[27];
static const char __T48[30];
static const char __T49[37];
static const char __T50[39];
static const char __T51[32];
static const char __T52[29];
static const char __T53[41];
static const char __T0[50] = "int psi_create(pe_s *, coords_s *, int, psi_s **)";
static const char __T1[39] = "int psi_io_info(psi_s *, io_info_s **)";
static const char __T2[26] = "int psi_halo_psi(psi_s *)";
static const char __T3[26] = "int psi_halo_rho(psi_s *)";
static const char __T4[27] = "int psi_nk(psi_s *, int *)";
static const char __T5[39] = "int psi_valency_set(psi_s *, int, int)";
static const char __T6[37] = "int psi_valency(psi_s *, int, int *)";
static const char __T7[46] = "int psi_diffusivity_set(psi_s *, int, double)";
static const char __T8[44] = "int psi_diffusivity(psi_s *, int, double *)";
static const char __T9[47] = "int psi_init_io_info(psi_s *, int *, int, int)";
static const char __T10[23] = "void psi_free(psi_s *)";
static const char __T11[45] = "int psi_write_ascii(_IO_FILE *, int, void *)";
static const char __T12[44] = "int psi_read_ascii(_IO_FILE *, int, void *)";
static const char __T13[39] = "int psi_write(_IO_FILE *, int, void *)";
static const char __T14[38] = "int psi_read(_IO_FILE *, int, void *)";
static const char __T15[41] = "int psi_rho_elec(psi_s *, int, double *)";
static const char __T16[41] = "int psi_rho(psi_s *, int, int, double *)";
static const char __T17[43] = "int psi_rho_set(psi_s *, int, int, double)";
static const char __T18[36] = "int psi_psi(psi_s *, int, double *)";
static const char __T19[38] = "int psi_psi_set(psi_s *, int, double)";
static const char __T20[39] = "int psi_unit_charge(psi_s *, double *)";
static const char __T21[41] = "int psi_unit_charge_set(psi_s *, double)";
static const char __T22[32] = "int psi_beta(psi_s *, double *)";
static const char __T23[34] = "int psi_beta_set(psi_s *, double)";
static const char __T24[35] = "int psi_epsilon(psi_s *, double *)";
static const char __T25[37] = "int psi_epsilon_set(psi_s *, double)";
static const char __T26[36] = "int psi_epsilon2(psi_s *, double *)";
static const char __T27[38] = "int psi_epsilon2_set(psi_s *, double)";
static const char __T28[47] = "int psi_ionic_strength(psi_s *, int, double *)";
static const char __T29[42] = "int psi_bjerrum_length(psi_s *, double *)";
static const char __T30[43] = "int psi_bjerrum_length2(psi_s *, double *)";
static const char __T31[48] = "int psi_debye_length(psi_s *, double, double *)";
static const char __T32[49] = "int psi_debye_length2(psi_s *, double, double *)";
static const char __T33[61] = "int psi_surface_potential(psi_s *, double, double, double *)";
static const char __T34[34] = "int psi_reltol(psi_s *, double *)";
static const char __T35[34] = "int psi_abstol(psi_s *, double *)";
static const char __T36[36] = "int psi_reltol_set(psi_s *, double)";
static const char __T37[36] = "int psi_abstol_set(psi_s *, double)";
static const char __T38[37] = "int psi_multisteps_set(psi_s *, int)";
static const char __T39[35] = "int psi_multisteps(psi_s *, int *)";
static const char __T40[46] = "int psi_multistep_timestep(psi_s *, double *)";
static const char __T41[33] = "int psi_maxits_set(psi_s *, int)";
static const char __T42[31] = "int psi_maxits(psi_s *, int *)";
static const char __T43[37] = "int psi_diffacc_set(psi_s *, double)";
static const char __T44[35] = "int psi_diffacc(psi_s *, double *)";
static const char __T45[39] = "int psi_skipsteps_set(psi_s *, double)";
static const char __T46[27] = "int psi_skipsteps(psi_s *)";
static const char __T47[27] = "int psi_zero_mean(psi_s *)";
static const char __T48[30] = "int psi_halo_psijump(psi_s *)";
static const char __T49[37] = "int psi_force_method(psi_s *, int *)";
static const char __T50[39] = "int psi_force_method_set(psi_s *, int)";
static const char __T51[32] = "int psi_nfreq_set(psi_s *, int)";
static const char __T52[29] = "int psi_output_step(psi_s *)";
static const char __T53[41] = "int psi_electroneutral(psi_s *, map_s *)";
