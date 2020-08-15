# 1 "mpi_serial.c"
# 52 "mpi_serial.c"
static mpi_info_t *__nv_static_31__18_mpi_serial_cpp1_ii_82e72b30_mpi_info;
static const char __T0[21];
static const char __T1[42];
static const char __T2[30];
static const char __T3[27];
static const char __T4[19];
static const char __T5[31];
static const char __T6[30];
static const char __T7[30];
static const char __T8[46];
static const char __T9[60];
static const char __T10[54];
static const char __T11[47];
static const char __T12[54];
static const char __T13[55];
static const char __T14[42];
static const char __T15[49];
static const char __T16[43];
static const char __T17[92];
static const char __T18[56];
static const char __T19[59];
static const char __T20[61];
static const char __T21[89];
static const char __T22[54];
static const char __T23[41];
static const char __T24[29];
static const char __T25[52];
static const char __T26[41];
static const char __T27[27];
static const char __T28[25];
static const char __T29[47];
static const char __T30[53];
static const char __T31[31];
static const char __T32[33];
static const char __T33[56];
static const char __T34[48];
static const char __T35[42];
static const char __T36[37];
static const char __T37[48];
static const char __T38[36];
static const char __T39[37];
static const char __T40[40];
static const char __T41[38];
static const char __T42[41];
static const char __T43[65];
static const char __T44[50];
static const char __T45[72];
static const char __T46[43];
# 52 "mpi_serial.c"
static mpi_info_t *__nv_static_31__18_mpi_serial_cpp1_ii_82e72b30_mpi_info = ((mpi_info_t *)0LL);
static const char __T0[21] = "int MPI_Barrier(int)";
static const char __T1[42] = "int MPI_Bcast(void *, int, int, int, int)";
static const char __T2[30] = "int MPI_Init(int *, char ***)";
static const char __T3[27] = "int MPI_Initialized(int *)";
static const char __T4[19] = "int MPI_Finalize()";
static const char __T5[31] = "int MPI_Comm_group(int, int *)";
static const char __T6[30] = "int MPI_Comm_rank(int, int *)";
static const char __T7[30] = "int MPI_Comm_size(int, int *)";
static const char __T8[46] = "int MPI_Send(void *, int, int, int, int, int)";
static const char __T9[60] = "int MPI_Recv(void *, int, int, int, int, int, MPI_Status *)";
static const char __T10[54] = "int MPI_Irecv(void *, int, int, int, int, int, int *)";
static const char __T11[47] = "int MPI_Ssend(void *, int, int, int, int, int)";
static const char __T12[54] = "int MPI_Isend(void *, int, int, int, int, int, int *)";
static const char __T13[55] = "int MPI_Issend(void *, int, int, int, int, int, int *)";
static const char __T14[42] = "int MPI_Waitall(int, int *, MPI_Status *)";
static const char __T15[49] = "int MPI_Waitany(int, int *, int *, MPI_Status *)";
static const char __T16[43] = "int MPI_Probe(int, int, int, MPI_Status *)";
static const char __T17[92] = "int MPI_Sendrecv(void *, int, int, int, int, void *, int, int, int, int, int, MPI_Status *)";
static const char __T18[56] = "int MPI_Reduce(void *, void *, int, int, int, int, int)";
static const char __T19[59] = "int MPI_Allgather(void *, int, int, void *, int, int, int)";
static const char __T20[61] = "int MPI_Gather(void *, int, int, void *, int, int, int, int)";
static const char __T21[89] = "int MPI_Gatherv(const void *, int, int, void *, const int *, const int *, int, int, int)";
static const char __T22[54] = "int MPI_Allreduce(void *, void *, int, int, int, int)";
static const char __T23[41] = "int MPI_Comm_split(int, int, int, int *)";
static const char __T24[29] = "int MPI_Comm_dup(int, int *)";
static const char __T25[52] = "int MPI_Type_indexed(int, int *, int *, int, int *)";
static const char __T26[41] = "int MPI_Type_contiguous(int, int, int *)";
static const char __T27[27] = "int MPI_Type_commit(int *)";
static const char __T28[25] = "int MPI_Type_free(int *)";
static const char __T29[47] = "int MPI_Type_vector(int, int, int, int, int *)";
static const char __T30[53] = "int MPI_Type_struct(int, int *, int *, int *, int *)";
static const char __T31[31] = "int MPI_Address(void *, int *)";
static const char __T32[33] = "int MPI_Errhandler_set(int, int)";
static const char __T33[56] = "int MPI_Cart_create(int, int, int *, int *, int, int *)";
static const char __T34[48] = "int MPI_Cart_get(int, int, int *, int *, int *)";
static const char __T35[42] = "int MPI_Cart_coords(int, int, int, int *)";
static const char __T36[37] = "int MPI_Cart_rank(int, int *, int *)";
static const char __T37[48] = "int MPI_Cart_shift(int, int, int, int *, int *)";
static const char __T38[36] = "int MPI_Cart_sub(int, int *, int *)";
static const char __T39[37] = "int MPI_Dims_create(int, int, int *)";
static const char __T40[40] = "void mpi_copy(void *, void *, int, int)";
static const char __T41[38] = "int MPI_Comm_set_errhandler(int, int)";
static const char __T42[41] = "int MPI_Get_address(const void *, int *)";
static const char __T43[65] = "int MPI_Group_translate_ranks(int, int, const int *, int, int *)";
static const char __T44[50] = "int MPI_Type_create_resized(int, int, int, int *)";
static const char __T45[72] = "int MPI_Type_create_struct(int, int *, const int *, const int *, int *)";
static const char __T46[43] = "int MPI_Type_get_extent(int, int *, int *)";