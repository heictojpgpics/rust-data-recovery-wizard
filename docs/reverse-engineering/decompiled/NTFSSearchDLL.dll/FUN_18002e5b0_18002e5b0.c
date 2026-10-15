// Function: FUN_18002e5b0
// Address: 18002e5b0
// Size: 320 bytes


ulonglong FUN_18002e5b0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  uint7 uVar7;
  
  if ((param_1 == 0) || (in_RAX = FUN_1800311f0(param_1), in_RAX == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)FUN_1800311f0(param_1);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar3 + 0x38))(plVar3);
  if ((uVar1 & 0x10) != 0x10) {
    return 0;
  }
  plVar4 = (longlong *)FUN_1800312a0(param_1);
  if ((plVar4 != (longlong *)0x0) && (uVar5 = (**(code **)(*plVar4 + 8))(plVar4), (int)uVar5 == 0))
  {
    return uVar5 & 0xffffffffffffff00;
  }
  pcVar6 = (char *)(**(code **)(*plVar3 + 0x10))(plVar3);
  iVar2 = _stricmp(pcVar6,"Recycler");
  if (iVar2 == 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
  }
  pcVar6 = (char *)(**(code **)(*plVar3 + 0x10))(plVar3);
  iVar2 = _stricmp(pcVar6,"Recycled");
  if (iVar2 == 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var_00,iVar2) >> 8),1);
  }
  pcVar6 = (char *)(**(code **)(*plVar3 + 0x10))(plVar3);
  iVar2 = _stricmp(pcVar6,"$Recycle.Bin");
  if (iVar2 == 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var_01,iVar2) >> 8),1);
  }
  pcVar6 = (char *)(**(code **)(*plVar3 + 0x10))(plVar3);
  iVar2 = _stricmp(pcVar6,"$RECYCLE.BI0");
  uVar7 = (uint7)(CONCAT44(extraout_var_02,iVar2) >> 8);
  if (iVar2 == 0) {
    return CONCAT71(uVar7,1);
  }
  return (ulonglong)uVar7 << 8;
}

