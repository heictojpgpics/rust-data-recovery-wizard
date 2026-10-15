// Function: FUN_180019890
// Address: 180019890
// Size: 221 bytes


void FUN_180019890(longlong param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  
  if (((param_2 != (int *)0x0) && (0x1ff < param_3)) && (*(int *)(param_1 + 0x262) != 0)) {
    uVar1 = *(ulonglong *)(param_1 + 0x10) >> 9;
    uVar4 = uVar1 - 1;
    if ((*(ulonglong *)(param_1 + 0x10) & 0x1ff) != 0) {
      uVar4 = uVar1;
    }
    iVar7 = 0;
    uVar6 = 0;
    iVar2 = 0;
    lVar3 = 0;
    piVar5 = param_2;
    do {
      if (*piVar5 == 0x6054b50) {
        uVar6 = *(ushort *)(lVar3 + 0x14 + (longlong)param_2);
        iVar7 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar5 = (int *)((longlong)piVar5 + 1);
      lVar3 = lVar3 + 1;
    } while (iVar2 < 0x1ee);
    if (iVar7 != 0) {
      *(ulonglong *)(param_1 + 0x10) = (longlong)iVar7 + uVar4 * 0x200 + 0x16 + (ulonglong)uVar6;
      return;
    }
    uVar4 = *(ulonglong *)(param_1 + 0x25a);
    if ((uVar4 < *(ulonglong *)(param_1 + 0x10)) && (uVar4 != 0)) {
      *(ulonglong *)(param_1 + 0x10) = uVar4;
    }
  }
  return;
}

