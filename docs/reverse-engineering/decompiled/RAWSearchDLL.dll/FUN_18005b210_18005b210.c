// Function: FUN_18005b210
// Address: 18005b210
// Size: 247 bytes


ulonglong FUN_18005b210(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *_Str2;
  longlong *_Str1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong *_Str1_00;
  
  plVar4 = (longlong *)(**(code **)*param_2)(param_2);
  _Str1 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    _Str2 = (longlong *)0x0;
    if (lVar5 == 0) {
      _Str2 = (longlong *)FUN_1800591e0((uint *)(param_1 + 3));
    }
    _Str1 = (longlong *)(**(code **)(*plVar4 + 0x30))(plVar4);
    _Str1_00 = (longlong *)0x0;
    if (_Str1 == (longlong *)0x0) {
      _Str1 = (longlong *)FUN_1800591e0((uint *)(plVar4 + 3));
      _Str1_00 = _Str1;
    }
    if (_Str1_00 != _Str2) {
      iVar3 = strncmp((char *)_Str1_00,(char *)_Str2,0x7fffffff);
      _Str1 = (longlong *)CONCAT44(extraout_var,iVar3);
      if (iVar3 != 0) goto LAB_18005b2f0;
    }
    lVar5 = param_1[0xe];
    for (lVar1 = plVar4[0xe]; (lVar2 = lVar1, lVar5 != 0 && (lVar2 = lVar5, lVar1 != 0));
        lVar1 = *(longlong *)(lVar1 + 0x40)) {
      plVar4 = (longlong *)FUN_1800591e0((uint *)(lVar1 + 0x20));
      _Str1 = (longlong *)FUN_1800591e0((uint *)(lVar5 + 0x20));
      if (_Str1 != plVar4) {
        iVar3 = strncmp((char *)_Str1,(char *)plVar4,0x7fffffff);
        _Str1 = (longlong *)CONCAT44(extraout_var_00,iVar3);
        if (iVar3 != 0) goto LAB_18005b2f0;
      }
      lVar5 = *(longlong *)(lVar5 + 0x40);
    }
    if (lVar2 == 0) {
      return CONCAT71((int7)((ulonglong)_Str1 >> 8),1);
    }
  }
LAB_18005b2f0:
  return (ulonglong)_Str1 & 0xffffffffffffff00;
}

