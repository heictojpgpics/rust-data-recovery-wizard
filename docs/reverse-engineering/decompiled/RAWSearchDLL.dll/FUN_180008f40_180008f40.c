// Function: FUN_180008f40
// Address: 180008f40
// Size: 212 bytes


longlong FUN_180008f40(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  __int64 _Var1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180008f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Var1 = std::basic_streambuf<char,struct_std::char_traits<char>_>::xsputn
                      (param_1,param_2,param_3);
    return _Var1;
  }
  if ((void *)**(undefined8 **)(param_1 + 0x40) == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x58);
  }
  _Count = param_3;
  if (0 < (longlong)param_3) {
    if (0 < iVar3) {
      sVar2 = (longlong)iVar3;
      if ((longlong)param_3 < (longlong)iVar3) {
        sVar2 = param_3;
      }
      memcpy((void *)**(undefined8 **)(param_1 + 0x40),param_2,sVar2);
      param_2 = param_2 + sVar2;
      _Count = param_3 - sVar2;
      **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - (int)sVar2;
      **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + (longlong)(int)sVar2;
    }
    if ((0 < (longlong)_Count) && (*(FILE **)(param_1 + 0x80) != (FILE *)0x0)) {
      sVar2 = fwrite(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
      _Count = _Count - sVar2;
    }
  }
  return param_3 - _Count;
}

