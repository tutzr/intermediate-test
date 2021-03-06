# 1 "hydro.c"
static const char __T0[68];
static const char __T1[26];
static const char __T2[43];
static const char __T3[28];
static const char __T4[50];
static const char __T5[51];
static const char __T6[43];
static const char __T12[44];
static const char __T13[44];
static const char __T15[34];
static const char __T16[43];
static const char __T17[43];
static const char __T18[49];
static const char __T19[42];
static const char __T20[48];
static const char __T21[69];
static const char __T22[38];
static const char __T0[68] = "int hydro_create(pe_s *, coords_s *, lees_edw_s *, int, hydro_s **)";
static const char __T1[26] = "int hydro_free(hydro_s *)";
static const char __T2[43] = "int hydro_memcpy(hydro_s *, hipMemcpyKind)";
static const char __T3[28] = "int hydro_u_halo(hydro_s *)";
static const char __T4[50] = "int hydro_halo_swap(hydro_s *, hydro_halo_enum_t)";
static const char __T5[51] = "int hydro_init_io_info(hydro_s *, int *, int, int)";
static const char __T6[43] = "int hydro_io_info(hydro_s *, io_info_s **)";
static const char __T12[44] = "int hydro_u_zero(hydro_s *, const double *)";
static const char __T13[44] = "int hydro_f_zero(hydro_s *, const double *)";
static const char __T15[34] = "int hydro_lees_edwards(hydro_s *)";
static const char __T16[43] = "int hydro_lees_edwards_parallel(hydro_s *)";
static const char __T17[43] = "int hydro_u_write(_IO_FILE *, int, void *)";
static const char __T18[49] = "int hydro_u_write_ascii(_IO_FILE *, int, void *)";
static const char __T19[42] = "int hydro_u_read(_IO_FILE *, int, void *)";
static const char __T20[48] = "int hydro_u_read_ascii(_IO_FILE *, int, void *)";
static const char __T21[69] = "int hydro_u_gradient_tensor(hydro_s *, int, int, int, double (*)[3])";
static const char __T22[38] = "int hydro_correct_momentum(hydro_s *)";
