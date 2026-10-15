// Function: FUN_180008bf0
// Address: 180008bf0
// Size: 80 bytes


void FUN_180008bf0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,locale *param_2)

{
  bool bVar1;
  _Facet_base *this;
  
  this = FUN_180009f40(param_2);
  bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(_Facet_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x000180008c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::_Init(param_1);
  return;
}

