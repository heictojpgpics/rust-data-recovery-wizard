// Function: FUN_180009020
// Address: 180009020
// Size: 268 bytes


longlong FUN_180009020(basic_streambuf<char,struct_std::char_traits<char>_> *param_1,char *param_2,
                      size_t param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  __int64 _Var3;
  size_t sVar4;
  int iVar5;
  size_t _Count;
  FILE *_File;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180009050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Var3 = std::basic_streambuf<char,struct_std::char_traits<char>_>::xsgetn
                      (param_1,param_2,param_3);
    return _Var3;
  }
  if ((void *)**(undefined8 **)(param_1 + 0x38) == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(param_1 + 0x50);
  }
  _Count = param_3;
  if (0 < (longlong)param_3) {
    if (0 < iVar5) {
      sVar4 = (longlong)iVar5;
      if ((longlong)param_3 < (longlong)iVar5) {
        sVar4 = param_3;
      }
      memcpy(param_2,(void *)**(undefined8 **)(param_1 + 0x38),sVar4);
      param_2 = param_2 + sVar4;
      _Count = param_3 - sVar4;
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - (int)sVar4;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)(int)sVar4;
    }
    if ((0 < (longlong)_Count) && (_File = *(FILE **)(param_1 + 0x80), _File != (FILE *)0x0)) {
      if ((basic_streambuf<char,struct_std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
          param_1 + 0x70) {
        lVar1 = *(longlong *)(param_1 + 0x88);
        uVar2 = *(undefined8 *)(param_1 + 0x90);
        **(longlong **)(param_1 + 0x18) = lVar1;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar1;
        _File = *(FILE **)(param_1 + 0x80);
      }
      sVar4 = fread(param_2,1,_Count,_File);
      _Count = _Count - sVar4;
    }
  }
  return param_3 - _Count;
}

