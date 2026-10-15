// Function: FUN_180009890
// Address: 180009890
// Size: 52 bytes


basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_180009890(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_1800097d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

