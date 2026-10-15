// Function: FUN_18002d780
// Address: 18002d780
// Size: 529 bytes


basic_ostream<char,struct_std::char_traits<char>_> *
FUN_18002d780(basic_ostream<char,struct_std::char_traits<char>_> *param_1,char *param_2)

{
  longlong *plVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  __int64 _Var5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (param_2[lVar8] != '\0');
  lVar7 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if ((lVar7 < 1) || (lVar7 <= lVar8)) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar7 - lVar8;
  }
  plVar1 = *(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_1800097b0) {
      if ((FILE *)plVar1[0x10] != (FILE *)0x0) {
        _lock_file((FILE *)plVar1[0x10]);
      }
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  lVar4 = *(longlong *)param_1;
  if (((*(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,struct_std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(lVar4 + 4) + 0x50),
      this != (basic_ostream<char,struct_std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::flush(this);
    lVar4 = *(longlong *)param_1;
  }
  if (*(int *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x10) == 0) {
    lVar4 = *(longlong *)param_1;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar4 + 4) + 0x18) & 0x1c0) != 0x40) {
      for (; 0 < lVar7; lVar7 = lVar7 + -1) {
        iVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_18002d8eb;
      }
      lVar4 = *(longlong *)param_1;
    }
    _Var5 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(lVar4 + 4) + 0x48),param_2,lVar8);
    if (_Var5 == lVar8) {
      for (; 0 < lVar7; lVar7 = lVar7 + -1) {
        iVar3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,struct_std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_18002d8eb;
      }
    }
    else {
LAB_18002d8eb:
      iVar6 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  else {
    iVar6 = 4;
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar6,false);
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx(param_1);
  }
  plVar1 = *(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x10) == FUN_180009790) {
      if ((FILE *)plVar1[0x10] != (FILE *)0x0) {
        _unlock_file((FILE *)plVar1[0x10]);
      }
    }
    else {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}

