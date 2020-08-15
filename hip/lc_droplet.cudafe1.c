# 1 "lc_droplet.c"
# 33 "lc_droplet.c"
static const int __nv_static_31__18_lc_droplet_cpp1_ii_ba17fca6_bs_cv[27][3];
# 44 "lc_droplet.c"
static fe_vt_t __nv_static_31__18_lc_droplet_cpp1_ii_ba17fca6_fe_drop_hvt;
static const char __T0[89];
static const char __T1[42];
static const char __T2[68];
static const char __T3[70];
static const char __T4[53];
static const char __T13[58];
static const char __T15[96];
# 33 "lc_droplet.c"
static const int __nv_static_31__18_lc_droplet_cpp1_ii_ba17fca6_bs_cv[27][3] = {{0,0,0},{(-1),(-1),(-1)},{(-1),(-1),0},{(-1),(-1),1},{(-1),0,(-1)},{(-1),0,0},{(-1),0,1},{(-1),1,(-1)},{(-1),1,0},{(-1),1,1},{0,(-1),(-1)},{0,(-1),0},{0,(-1),1},{0,0,(-1)},{0,0,1},{0,1,(-1)},{0,1,0},{0,1,1},{1,(-1),(-1)},{1,(-1),0},{1,(-1),1},{1,0,(-1)},{1,0,0},{1,0,1},{1,1,(-1)},{1,1,0},{1,1,1}};
# 44 "lc_droplet.c"
static fe_vt_t __nv_static_31__18_lc_droplet_cpp1_ii_ba17fca6_fe_drop_hvt = {((int (*)(fe_t *))_Z18fe_lc_droplet_freeP15fe_lc_droplet_s),((int (*)(fe_t *, fe_t **))_Z20fe_lc_droplet_targetP15fe_lc_droplet_sPP4fe_s),((int (*)(fe_t *, int, double *))_Z17fe_lc_droplet_fedP15fe_lc_droplet_siPd),((int (*)(fe_t *, int, double *))_Z16fe_lc_droplet_muP15fe_lc_droplet_siPd),((fe_mu_solv_ft)0LL),((int (*)(fe_t *, int, double (*)[3]))_Z20fe_lc_droplet_stressP15fe_lc_droplet_siPA3_d),((int (*)(fe_t *, int, double (*)[3]))_Z22fe_lc_droplet_str_symmP15fe_lc_droplet_siPA3_d),((int (*)(fe_t *, int, double (*)[3]))_Z22fe_lc_droplet_str_antiP15fe_lc_droplet_siPA3_d),((fe_hvector_ft)0LL),((int (*)(fe_t *, int, double (*)[3]))_Z23fe_lc_droplet_mol_fieldP15fe_lc_droplet_siPA3_d),((void (*)(fe_t *, int, double (*)[3][1]))_Z25fe_lc_droplet_mol_field_vP15fe_lc_droplet_siPA3_A1_d),((void (*)(fe_t *, int, double (*)[3][1]))_Z22fe_lc_droplet_stress_vP15fe_lc_droplet_siPA3_A1_d),((void (*)(fe_t *, int, double (*)[3][1]))_Z24fe_lc_droplet_str_symm_vP15fe_lc_droplet_siPA3_A1_d),((void (*)(fe_t *, int, double (*)[3][1]))_Z24fe_lc_droplet_str_anti_vP15fe_lc_droplet_siPA3_A1_d)};
static const char __T0[89] = "int fe_lc_droplet_create(pe_s *, coords_s *, fe_lc_s *, fe_symm_s *, fe_lc_droplet_s **)";
static const char __T1[42] = "int fe_lc_droplet_free(fe_lc_droplet_s *)";
static const char __T2[68] = "int fe_lc_droplet_param(fe_lc_droplet_s *, fe_lc_droplet_param_s *)";
static const char __T3[70] = "int fe_lc_droplet_param_set(fe_lc_droplet_s *, fe_lc_droplet_param_s)";
static const char __T4[53] = "int fe_lc_droplet_target(fe_lc_droplet_s *, fe_s **)";
static const char __T13[58] = "int fe_lc_droplet_bodyforce(fe_lc_droplet_s *, hydro_s *)";
static const char __T15[96] = "int fe_lc_droplet_bodyforce_wall(fe_lc_droplet_s *, lees_edw_s *, hydro_s *, map_s *, wall_s *)";
