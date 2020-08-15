# 1 "io_harness.c"
static const char __T0[70];
static const char __T1[95];
static const char __T2[84];
static const char __T3[62];
static const char __T4[48];
static const char __T5[30];
static const char __T6[49];
static const char __T7[50];
static const char __T8[52];
static const char __T9[69];
static const char __T10[43];
static const char __T11[35];
static const char __T12[48];
static const char __T13[50];
static const char __T14[41];
static const char __T15[46];
static const char __T16[44];
static const char __T17[45];
static const char __T18[73];
static const char __T19[74];
static const char __T20[57];
static const char __T21[58];
static const char __T22[53];
static const char __T23[55];
static const char __T24[55];
static const char __T25[64];
static const char __T26[52];
static const char __T27[42];
static const char __T28[61];
static const char __T0[70] = "int io_info_create(pe_s *, coords_s *, io_info_arg_s *, io_info_s **)";
static const char __T1[95] = "int io_info_create_impl(pe_s *, coords_s *, io_info_args_s, io_implementation_s, io_info_s **)";
static const char __T2[84] = "int io_decomposition_create(pe_s *, coords_s *, const int *, io_decomposition_s **)";
static const char __T3[62] = "void io_set_group_filename(char *, const char *, io_info_s *)";
static const char __T4[48] = "int io_decomposition_free(io_decomposition_s *)";
static const char __T5[30] = "int io_info_free(io_info_s *)";
static const char __T6[49] = "void io_info_set_name(io_info_s *, const char *)";
static const char __T7[50] = "void io_info_set_processor_dependent(io_info_s *)";
static const char __T8[52] = "void io_info_set_processor_independent(io_info_s *)";
static const char __T9[69] = "int io_info_set_bytesize(io_info_s *, io_format_enum, unsigned long)";
static const char __T10[43] = "long io_file_offset(int, int, io_info_s *)";
static const char __T11[35] = "int io_write_metadata(io_info_s *)";
static const char __T12[48] = "int io_write_metadata_file(io_info_s *, char *)";
static const char __T13[50] = "int io_remove_metadata(io_info_s *, const char *)";
static const char __T14[41] = "int io_remove(const char *, io_info_s *)";
static const char __T15[46] = "int io_info_format_set(io_info_s *, int, int)";
static const char __T16[44] = "int io_info_format_in_set(io_info_s *, int)";
static const char __T17[45] = "int io_info_format_out_set(io_info_s *, int)";
static const char __T18[73] = "int io_info_read_set(io_info_s *, int, int (*)(_IO_FILE *, int, void *))";
static const char __T19[74] = "int io_info_write_set(io_info_s *, int, int (*)(_IO_FILE *, int, void *))";
static const char __T20[57] = "int io_info_input_bytesize(io_info_s *, unsigned long *)";
static const char __T21[58] = "int io_info_output_bytesize(io_info_s *, unsigned long *)";
static const char __T22[53] = "int io_write_data(io_info_s *, const char *, void *)";
static const char __T23[55] = "int io_write_data_p(io_info_s *, const char *, void *)";
static const char __T24[55] = "int io_write_data_s(io_info_s *, const char *, void *)";
static const char __T25[64] = "int io_unpack_local_buf(io_info_s *, int, const char *, char *)";
static const char __T26[52] = "int io_read_data(io_info_s *, const char *, void *)";
static const char __T27[42] = "void io_info_single_file_set(io_info_s *)";
static const char __T28[61] = "int io_info_metadata_filestub_set(io_info_s *, const char *)";