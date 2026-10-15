// Function: FUN_18005a790
// Address: 18005a790
// Size: 156 bytes


undefined8 FUN_18005a790(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *_Str2;
  longlong *plVar4;
  longlong *_Str1;
  undefined4 extraout_var;
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x40))(param_2);
  if (plVar2 == (longlong *)0x0) {
LAB_18005a81a:
    return (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  _Str1 = (longlong *)0x0;
  _Str2 = _Str1;
  if (lVar3 == 0) {
    _Str2 = (longlong *)FUN_1800591e0((uint *)(param_1 + 3));
  }
  plVar4 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2);
  if (plVar4 == (longlong *)0x0) {
    _Str1 = (longlong *)FUN_1800591e0((uint *)(plVar2 + 3));
    plVar4 = _Str1;
  }
  plVar2 = plVar4;
  if (_Str1 != _Str2) {
    iVar1 = strncmp((char *)_Str1,(char *)_Str2,0x7fffffff);
    plVar2 = (longlong *)CONCAT44(extraout_var,iVar1);
    if (iVar1 != 0) goto LAB_18005a81a;
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
}

