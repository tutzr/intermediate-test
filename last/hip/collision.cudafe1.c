# 1 "collision.c"
# 32 "d3q19.h"
extern const double norm_[19];
# 73 "model.h"
extern const double cs2;
extern const double rcs2;
static const char __T0[77];
static const char __T1[83];
static const char __T3[82];
static const char __T5[59];
static const char __T6[45];
static const char __T7[46];
static const char __T8[67];
static const char __T9[51];
static const char __T13[55];
static const char __T14[57];
static const char __T21[58];
static const char __T0[77] = "int lb_collide(lb_data_s *, hydro_s *, map_s *, noise_s *, fe_s *, visc_s *)";
static const char __T1[83] = "int lb_collision_mrt(lb_data_s *, hydro_s *, map_s *, noise_s *, fe_s *, visc_s *)";
static const char __T3[82] = "int lb_collision_binary(lb_data_s *, hydro_s *, noise_s *, fe_symm_s *, visc_s *)";
static const char __T5[59] = "int lb_collision_stats_kt(lb_data_s *, noise_s *, map_s *)";
static const char __T6[45] = "int lb_collision_ghost_modes_on(lb_data_s *)";
static const char __T7[46] = "int lb_collision_ghost_modes_off(lb_data_s *)";
static const char __T8[67] = "int lb_collision_relaxation_set(lb_data_s *, lb_relaxation_enum_t)";
static const char __T9[51] = "int lb_collision_relaxation_times_set(lb_data_s *)";
static const char __T13[55] = "int lb_collision_noise_var_set(lb_data_s *, noise_s *)";
static const char __T14[57] = "int lb_collision_relaxation_times(lb_data_s *, double *)";
static const char __T21[58] = "int lb_collision_parameters_commit(lb_data_s *, visc_s *)";
