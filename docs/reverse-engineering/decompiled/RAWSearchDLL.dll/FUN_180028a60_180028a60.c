// Function: FUN_180028a60
// Address: 180028a60
// Size: 409 bytes


void FUN_180028a60(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 < 0x200) {
    return;
  }
  *(ulonglong *)(param_1 + 0x238) = (ulonglong)(uint)((*(int *)(param_2 + 0x3c) + 1) * 0x200);
  if ((*(short *)(param_2 + 0x1a) == 4) && (*(short *)(param_2 + 0x1e) == 0xc)) {
    *(int *)(param_1 + 0x230) = (int)(0x1000 / (longlong)param_3);
    *(ulonglong *)(param_1 + 0x238) = (ulonglong)(uint)((*(int *)(param_2 + 0x3c) + 1) * 0x1000);
  }
  iVar4 = 0;
  lVar6 = 0;
  piVar5 = (int *)(param_2 + 0x4c);
  do {
    uVar3 = param_3 >> 0x1f;
    if (*piVar5 == -1) break;
    *(int *)(param_1 + 0x254) = *piVar5 + 1;
    if (param_3 == 0x200) {
      uVar1 = *piVar5 + 1;
LAB_180028b14:
      iVar2 = uVar1 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
    }
    else {
      uVar1 = (int)(param_3 + (uVar3 & 0x1ff)) >> 9;
      if (uVar1 != 0) {
        uVar1 = (*piVar5 + 1U) / uVar1;
        goto LAB_180028b14;
      }
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
    lVar6 = lVar6 + 1;
    piVar5 = piVar5 + 1;
    *(int *)(param_1 + 0x244) = iVar2;
  } while (lVar6 < 0x6d);
  if (*(int *)(param_2 + 0x44) == -2) {
    *(undefined4 *)(param_1 + 0x22c) = 1;
  }
  else {
    if (param_3 == 0x200) {
      uVar1 = *(int *)(param_2 + 0x30) + 1;
    }
    else {
      uVar1 = (int)(param_3 + (uVar3 & 0x1ff)) >> 9;
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x240) = 0;
        goto LAB_180028b9f;
      }
      uVar1 = (*(int *)(param_2 + 0x30) + 1U) / uVar1;
    }
    *(uint *)(param_1 + 0x240) = uVar1 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
  }
LAB_180028b9f:
  *(int *)(param_1 + 0x250) = *(int *)(param_2 + 0x30) + 1;
  if (param_3 == 0x200) {
    uVar3 = *(int *)(param_2 + 0x30) + 1;
  }
  else {
    uVar3 = (int)(param_3 + (uVar3 & 0x1ff)) >> 9;
    if (uVar3 == 0) goto LAB_180028be9;
    uVar3 = (*(int *)(param_2 + 0x30) + 1U) / uVar3;
  }
  iVar4 = uVar3 * *(int *)(param_1 + 0x230) + *(int *)(param_1 + 8);
LAB_180028be9:
  *(int *)(param_1 + 0x248) = iVar4;
  return;
}

