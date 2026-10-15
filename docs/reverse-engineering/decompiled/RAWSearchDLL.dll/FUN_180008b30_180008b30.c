// Function: FUN_180008b30
// Address: 180008b30
// Size: 121 bytes


void FUN_180008b30(longlong *param_1)

{
  basic_ios<char,struct_std::char_traits<char>_> *this;
  
  this = (basic_ios<char,struct_std::char_traits<char>_> *)(param_1 + 0x16);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0xb0) =
       std::basic_ifstream<char,struct_std::char_traits<char>_>::vftable;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0xb4) = *(int *)(*param_1 + 4) + -0xb0;
  FUN_1800097d0((basic_streambuf<char,struct_std::char_traits<char>_> *)(param_1 + 2));
  std::basic_istream<char,struct_std::char_traits<char>_>::
  ~basic_istream<char,struct_std::char_traits<char>_>
            ((basic_istream<char,struct_std::char_traits<char>_> *)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x000180008ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,struct_std::char_traits<char>_>::
  ~basic_ios<char,struct_std::char_traits<char>_>(this);
  return;
}

