// Function: FUN_1800097d0
// Address: 1800097d0
// Size: 117 bytes


void FUN_1800097d0(basic_streambuf<char,struct_std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_filebuf<char,struct_std::char_traits<char>_>::vftable;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
      param_1 + 0x70)) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
  }
  if (param_1[0x7c] != (basic_streambuf<char,struct_std::char_traits<char>_>)0x0) {
    FUN_180009bd0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018000983e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,struct_std::char_traits<char>_>::
  ~basic_streambuf<char,struct_std::char_traits<char>_>(param_1);
  return;
}

