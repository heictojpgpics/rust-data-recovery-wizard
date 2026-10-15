// Function: FUN_180019d40
// Address: 180019d40
// Size: 132 bytes


ulonglong * FUN_180019d40(ulonglong *param_1,ulonglong param_2,byte *param_3)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_1800060c0(param_1,param_2);
  if ((char)uVar1 != '\0') {
    puVar2 = (undefined8 *)FUN_180002680(param_1);
    _Dst = (void *)*puVar2;
    memset(_Dst,(uint)*param_3,param_2);
    lVar4 = (longlong)_Dst + param_2;
    plVar3 = (longlong *)FUN_180002670((longlong)param_1);
    *plVar3 = lVar4;
  }
  return param_1;
}

