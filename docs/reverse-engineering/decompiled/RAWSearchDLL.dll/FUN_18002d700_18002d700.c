// Function: FUN_18002d700
// Address: 18002d700
// Size: 122 bytes


void FUN_18002d700(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) != FUN_180009790) {
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
    if ((FILE *)plVar1[0x10] != (FILE *)0x0) {
      _unlock_file((FILE *)plVar1[0x10]);
      return;
    }
  }
  return;
}

