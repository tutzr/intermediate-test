# 1 "ewald.c"
# 32 "ewald.c"
static int __nv_static_26__13_ewald_cpp1_ii_a48138ce_ewald_on_;
static int __nv_static_26__13_ewald_cpp1_ii_a48138ce_nk_[3];
static int __nv_static_26__13_ewald_cpp1_ii_a48138ce_nkmax_;
static int __nv_static_26__13_ewald_cpp1_ii_a48138ce_nktot_;
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_ewald_rc_;
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_kappa_;
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_kmax_;
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_rpi_;
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_mu_;

static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_ereal_;
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_efourier_;

static double *__nv_static_26__13_ewald_cpp1_ii_a48138ce_sinx_;
static double *__nv_static_26__13_ewald_cpp1_ii_a48138ce_cosx_;
static double *__nv_static_26__13_ewald_cpp1_ii_a48138ce_sinkr_;
static double *__nv_static_26__13_ewald_cpp1_ii_a48138ce_coskr_;
static const char __T0[84];
static const char __T1[26];
static const char __T2[26];
static const char __T3[37];
static const char __T4[20];
static const char __T5[97];
static const char __T6[52];
static const char __T7[39];
static const char __T8[43];
static const char __T9[36];
static const char __T10[39];
static const char __T11[46];
static const char __T12[44];
# 32 "ewald.c"
static int __nv_static_26__13_ewald_cpp1_ii_a48138ce_ewald_on_ = 0;



static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_ewald_rc_ = (0.0);
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_kappa_ = (0.0);




static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_ereal_ = (0.0);
static double __nv_static_26__13_ewald_cpp1_ii_a48138ce_efourier_ = (0.0);
static const char __T0[84] = "int ewald_create(pe_s *, coords_s *, double, double, colloids_info_s *, ewald_s **)";
static const char __T1[26] = "int ewald_free(ewald_s *)";
static const char __T2[26] = "int ewald_info(ewald_s *)";
static const char __T3[37] = "int ewald_kappa(ewald_s *, double *)";
static const char __T4[20] = "void ewald_finish()";
static const char __T5[97] = "int ewald_real_space_energy(ewald_s *, const double *, const double *, const double *, double *)";
static const char __T6[52] = "int ewald_fourier_space_energy(ewald_s *, double *)";
static const char __T7[39] = "int ewald_sum_sin_cos_terms(ewald_s *)";
static const char __T8[43] = "int ewald_self_energy(ewald_s *, double *)";
static const char __T9[36] = "int ewald_real_space_sum(ewald_s *)";
static const char __T10[39] = "int ewald_fourier_space_sum(ewald_s *)";
static const char __T11[46] = "int ewald_get_number_fourier_terms(ewald_s *)";
static const char __T12[44] = "int ewald_set_kr_table(ewald_s *, double *)";
