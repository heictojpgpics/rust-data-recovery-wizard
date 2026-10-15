// Function: FUN_180042750
// Address: 180042750
// Size: 274 bytes


undefined8 FUN_180042750(longlong param_1,void *param_2,ulonglong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Src;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    return 0;
  }
  uVar5 = *(ulonglong *)(param_1 + 0x30);
  if (param_3 < uVar5) {
    return 0;
  }
  uVar4 = (uVar5 - 1) + *(longlong *)(param_1 + 0x38);
  if (uVar4 < param_3) {
    return 0;
  }
  if (uVar4 < param_4 + -1 + param_3) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = iVar3;
  if (iVar3 < 1) {
    iVar2 = 0x200;
  }
  uVar4 = (ulonglong)(uint)((int)param_4 * iVar2);
  iVar2 = iVar3;
  if (iVar3 < 1) {
    iVar2 = 0x200;
  }
  _Src = (void *)((ulonglong)(uint)(((int)param_3 - (int)uVar5) * iVar2) +
                 *(longlong *)(param_1 + 0x28));
  if (iVar3 < 1) {
    iVar3 = 0x200;
  }
  uVar5 = (ulonglong)(uint)((int)param_4 * iVar3);
  if (uVar4 == 0) {
    return 1;
  }
  if (param_2 != (void *)0x0) {
    if ((_Src != (void *)0x0) && (uVar4 <= uVar5)) {
      memcpy(param_2,_Src,uVar4);
      return 1;
    }
    memset(param_2,0,uVar5);
    if (_Src != (void *)0x0) {
      if (uVar4 <= uVar5) {
        return 1;
      }
      piVar1 = _errno();
      *piVar1 = 0x22;
      goto LAB_18004283f;
    }
  }
  piVar1 = _errno();
  *piVar1 = 0x16;
LAB_18004283f:
  _invalid_parameter_noinfo();
  return 1;
}

