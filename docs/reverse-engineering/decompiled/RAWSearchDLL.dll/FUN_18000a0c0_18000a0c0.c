// Function: FUN_18000a0c0
// Address: 18000a0c0
// Size: 232 bytes


ulonglong * FUN_18000a0c0(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar8 = param_3[1] + *param_3;
  uVar3 = **(ulonglong **)(param_1 + 0x40);
  lVar4 = **(longlong **)(param_1 + 0x38);
  if ((uVar3 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar3)) {
    *(ulonglong *)(param_1 + 0x68) = uVar3;
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  lVar6 = **(longlong **)(param_1 + 0x18);
  if (((ulonglong)(lVar5 - lVar6) < uVar8) ||
     ((uVar8 != 0 &&
      ((((param_4 & 1) != 0 && (lVar4 == 0)) || (((param_4 & 2) != 0 && (uVar3 == 0)))))))) {
    *param_2 = 0xffffffffffffffff;
  }
  else {
    lVar1 = lVar6 + uVar8;
    if (((param_4 & 1) != 0) && (lVar4 != 0)) {
      **(longlong **)(param_1 + 0x38) = lVar1;
      **(int **)(param_1 + 0x50) = (int)lVar5 - (int)lVar1;
    }
    if (((param_4 & 2) != 0) && (uVar3 != 0)) {
      iVar2 = **(int **)(param_1 + 0x58);
      uVar7 = **(undefined8 **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x20) = lVar6;
      **(longlong **)(param_1 + 0x40) = lVar1;
      **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar7) - (int)lVar1;
    }
    *param_2 = uVar8;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

