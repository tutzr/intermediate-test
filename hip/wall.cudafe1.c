# 1 "wall.c"
# 29 "d3q19.h"
extern const int cv[19][3];
extern const double wv[19];
extern const double q_[19][3][3];
# 74 "model.h"
extern const double rcs2;
static const char __T0[69];
static const char __T1[24];
static const char __T2[42];
static const char __T3[24];
static const char __T4[37];
static const char __T5[45];
static const char __T6[41];
static const char __T7[51];
static const char __T8[41];
static const char __T9[27];
static const char __T10[42];
static const char __T12[23];
static const char __T14[28];
static const char __T15[48];
static const char __T16[38];
static const char __T20[30];
static const char __T0[69] = "int wall_create(pe_s *, coords_s *, map_s *, lb_data_s *, wall_s **)";
static const char __T1[24] = "int wall_free(wall_s *)";
static const char __T2[42] = "int wall_commit(wall_s *, wall_param_s *)";
static const char __T3[24] = "int wall_info(wall_s *)";
static const char __T4[37] = "int wall_target(wall_s *, wall_s **)";
static const char __T5[45] = "int wall_param_set(wall_s *, wall_param_s *)";
static const char __T6[41] = "int wall_param(wall_s *, wall_param_s *)";
static const char __T7[51] = "int wall_init_boundaries(wall_s *, wall_init_enum)";
static const char __T8[41] = "int wall_memcpy(wall_s *, hipMemcpyKind)";
static const char __T9[27] = "int wall_init_uw(wall_s *)";
static const char __T10[42] = "int wall_set_wall_distributions(wall_s *)";
static const char __T12[23] = "int wall_bbl(wall_s *)";
static const char __T14[28] = "int wall_init_map(wall_s *)";
static const char __T15[48] = "int wall_momentum_add(wall_s *, const double *)";
static const char __T16[38] = "int wall_momentum(wall_s *, double *)";
static const char __T20[30] = "int wall_shear_init(wall_s *)";
