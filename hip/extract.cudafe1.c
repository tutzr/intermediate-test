# 1 "extract.c"
# 170 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stderr;
# 68 "extract.c"
int nlocal[3];
int rank = 0;
# 69 "extract.c"
int cx = 0;
# 69 "extract.c"
int cy = 0;
# 69 "extract.c"
int cz = 0;
# 69 "extract.c"
int nlx = 0;
# 69 "extract.c"
int nly = 0;
# 69 "extract.c"
int nlz = 0;
# 69 "extract.c"
int nox = 0;
# 69 "extract.c"
int noy = 0;
# 69 "extract.c"
int noz = 0;

int ntotal[3];
int ntargets[3];
int io_size[3];
int pe_[3];
extern int nplanes_;
int nio_ = 0;
extern int nrec_;
extern int input_isbigendian_;
extern int reverse_byte_order_;
extern int input_binary_;
extern int output_binary_;
extern int is_velocity_;
extern int output_index_;
extern int output_vtk_;

extern int output_lcs_;
extern int output_lcd_;
extern int output_lcx_;

extern int le_t0_;

extern int output_cmf_;
extern int output_q_raw_;

extern double le_speed_;
extern double le_displace_;
double *le_displacements_ = 0;
double *le_duy_ = 0;

char stub_[2048];
# 75 "extract.c"
int nplanes_ = 0;

int nrec_ = 1;
int input_isbigendian_ = (-1);
int reverse_byte_order_ = 0;
int input_binary_ = (-1);
int output_binary_ = 0;
int is_velocity_ = 0;
int output_index_ = 0;
int output_vtk_ = 0;

int output_lcs_ = 0;
int output_lcd_ = 0;
int output_lcx_ = 0;

int le_t0_ = 0;

int output_cmf_ = 0;
int output_q_raw_ = 0;

double le_speed_ = (0.0);
double le_displace_ = (0.0);
