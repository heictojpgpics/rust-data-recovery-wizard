// Function: FUN_18002e6b0
// Address: 18002e6b0
// Size: 383 bytes


undefined4
FUN_18002e6b0(longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar4 = (ulonglong)(int)param_3;
  if (((param_2 == 0) || ((int)param_3 < 0x200)) || (param_4 < 0)) {
    return 0;
  }
  lVar9 = param_4 - *(longlong *)(param_1 + 8);
  uVar6 = *(ulonglong *)(param_1 + 0x120);
  uVar10 = (lVar9 + 1) * uVar4;
  *(ulonglong *)(param_1 + 0x118) = uVar10;
  uVar8 = 0;
  iVar7 = 0;
  while( true ) {
    if (uVar10 <= uVar6) {
      return 1;
    }
    if (*(int *)(param_1 + 0x128) == 0) {
      uVar3 = uVar6 % uVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0x128) = 0;
      uVar3 = uVar6 - lVar9 * uVar4;
    }
    if ((*(longlong *)(param_5 + 8) - *(longlong *)(param_1 + 8)) * uVar4 < uVar6 + 0x14) break;
    if ((undefined8 *)(param_2 + uVar3) == (undefined8 *)0x0) {
      return 0;
    }
    if ((char)((ulonglong)*(undefined8 *)(param_2 + uVar3) >> 0x20) != 'G') {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x110);
    uVar6 = uVar6 + (longlong)iVar1;
    uVar8 = uVar8 + iVar1;
    *(ulonglong *)(param_1 + 0x120) = uVar6;
    lVar5 = *(longlong *)(param_5 + 8) + -1;
    if ((lVar5 < (longlong)((ulonglong)(uint)(iVar1 / (int)param_3) + param_4)) ||
       (lVar5 < (longlong)((ulonglong)uVar8 / (ulonglong)param_3 + param_4))) break;
    bVar2 = 99 < iVar7;
    iVar7 = iVar7 + 1;
    if (bVar2) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x128) = 1;
  return 1;
}

