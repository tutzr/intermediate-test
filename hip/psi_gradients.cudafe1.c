# 1 "psi_gradients.c"
# 101 "psi_gradients.c"
extern const int psi_gr_cv[7][3];
# 108 "psi_gradients.c"
extern const double psi_gr_wv[7];



extern const double psi_gr_rnorm[7];



extern const double psi_gr_rcs2;
static const char __T0[47];
static const char __T1[52];
static const char __T2[55];
static const char __T3[60];
static const char __T4[86];
# 101 "psi_gradients.c"
const int psi_gr_cv[7][3] = {{0,0,0},{(-1),0,0},{0,(-1),0},{0,0,(-1)},{1,0,0},{0,1,0},{0,0,1}};
# 108 "psi_gradients.c"
const double psi_gr_wv[7] = {(0.0),(0.1666666666666666574),(0.1666666666666666574),(0.1666666666666666574),(0.1666666666666666574),(0.1666666666666666574),(0.1666666666666666574)};



const double psi_gr_rnorm[7] = {(0.0),(1.0),(1.0),(1.0),(1.0),(1.0),(1.0)};



const double psi_gr_rcs2 = (3.0);
static const char __T0[47] = "int psi_electric_field(psi_s *, int, double *)";
static const char __T1[52] = "int psi_electric_field_d3qx(psi_s *, int, double *)";
static const char __T2[55] = "int psi_grad_rho(psi_s *, map_s *, int, int, double *)";
static const char __T3[60] = "int psi_grad_rho_d3qx(psi_s *, map_s *, int, int, double *)";
static const char __T4[86] = "int psi_grad_eps_d3qx(psi_s *, fe_s *, int (*)(void *, int, double *), int, double *)";
