// Function: FUN_18000a6e0
// Address: 18000a6e0
// Size: 52 bytes


basic_streambuf<char,struct_std::char_traits<char>_> *
FUN_18000a6e0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,uint param_2)

{
  FUN_18000a5d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

