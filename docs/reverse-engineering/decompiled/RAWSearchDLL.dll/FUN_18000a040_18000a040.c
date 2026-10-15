// Function: FUN_18000a040
// Address: 18000a040
// Size: 115 bytes


void FUN_18000a040(longlong *param_1)

{
  basic_ios<char,struct_std::char_traits<char>_> *this;
  
  this = (basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0x12);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x90) =
       std::basic_istringstream<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
       vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x94) = *(int *)(*param_1 + 4) + -0x90;
  FUN_18000a5d0((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 2));
  std::basic_istream<char,struct_std::char_traits<char>_>::
  ~basic_istream<char,struct_std::char_traits<char>_>
            ((basic_istream<char,struct_std::char_traits<char>_> *)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x00018000a0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>(this);
  return;
}

