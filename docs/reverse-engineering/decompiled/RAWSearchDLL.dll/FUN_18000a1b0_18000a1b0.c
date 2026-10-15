// Function: FUN_18000a1b0
// Address: 18000a1b0
// Size: 326 bytes


ulonglong *
FUN_18000a1b0(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar3 = **(longlong **)(param_1 + 0x38);
  uVar4 = **(ulonglong **)(param_1 + 0x40);
  if ((uVar4 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar4)) {
    *(ulonglong *)(param_1 + 0x68) = uVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar6 = **(longlong **)(param_1 + 0x18);
  uVar9 = lVar5 - lVar6;
  uVar8 = 0;
  if (param_4 == 0) {
LAB_18000a260:
    uVar8 = uVar8 + param_3;
    if ((uVar8 <= uVar9) &&
       ((uVar8 == 0 ||
        ((((param_5 & 1) == 0 || (lVar3 != 0)) && (((param_5 & 2) == 0 || (uVar4 != 0)))))))) {
      lVar1 = lVar6 + uVar8;
      if (((param_5 & 1) != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar5 - (int)lVar1;
      }
      if (((param_5 & 2) != 0) && (uVar4 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar7 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar6;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar7) - (int)lVar1;
      }
      *param_2 = uVar8;
      goto LAB_18000a2d0;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if ((param_5 & 1) == 0) {
        if (((param_5 & 2) != 0) && ((uVar4 != 0 || (lVar6 == 0)))) {
          uVar8 = uVar4 - lVar6;
          goto LAB_18000a260;
        }
      }
      else if ((lVar3 != 0) || (lVar6 == 0)) {
        uVar8 = lVar3 - lVar6;
        goto LAB_18000a260;
      }
    }
  }
  else {
    uVar8 = uVar9;
    if (param_4 == 2) goto LAB_18000a260;
  }
  *param_2 = 0xffffffffffffffff;
LAB_18000a2d0:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

