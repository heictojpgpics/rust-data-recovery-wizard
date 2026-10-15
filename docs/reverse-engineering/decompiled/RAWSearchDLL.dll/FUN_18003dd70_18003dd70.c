// Function: FUN_18003dd70
// Address: 18003dd70
// Size: 477 bytes


undefined8 FUN_18003dd70(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = param_4 - *(longlong *)(param_1 + 8);
  uVar7 = (ulonglong)param_3;
  if ((ulonglong)(*(longlong *)(param_1 + 0x130) * 10) <= uVar7 * lVar9) {
    return 0;
  }
  uVar10 = (lVar9 + 1) * uVar7;
  *(ulonglong *)(param_1 + 0x128) = uVar10;
  uVar4 = *(ulonglong *)(param_1 + 0x110);
  if (uVar4 <= uVar10 && uVar10 - uVar4 != 0) {
    bVar3 = false;
    iVar8 = 0;
    do {
      pbVar5 = (byte *)(uVar4 % uVar7 + param_2);
      iVar8 = iVar8 + 1;
      if (((DAT_18009389c == *(int *)(pbVar5 + 2)) && (DAT_1800938a0 == pbVar5[6])) ||
         ((DAT_18009388c == *(int *)(pbVar5 + 2) && (DAT_180093890 == pbVar5[6])))) {
        bVar1 = *pbVar5;
        iVar2 = *(int *)(pbVar5 + 7);
        if (*(int *)(param_1 + 0x120) == 0) {
          *(undefined4 *)(param_1 + 0x124) = 1;
          uVar4 = ((uint)bVar1 + iVar2 + 2) + uVar4;
          *(ulonglong *)(param_1 + 0x110) = uVar4;
        }
        else {
          uVar4 = uVar4 + ((uint)bVar1 + iVar2);
          *(ulonglong *)(param_1 + 0x110) = uVar4;
        }
joined_r0x00018003de2f:
        bVar3 = false;
        if (uVar10 < uVar4) {
          return 1;
        }
      }
      else {
        if ((DAT_180093894 == *(int *)(pbVar5 + 2)) && (DAT_180093898 == pbVar5[6])) {
          *(ulonglong *)(param_1 + 0x118) = (ulonglong)*pbVar5;
          uVar6 = (ulonglong)*pbVar5;
LAB_18003de94:
          uVar4 = uVar6 + uVar4;
          *(undefined4 *)(param_1 + 0x120) = 1;
          *(ulonglong *)(param_1 + 0x110) = uVar4;
          goto joined_r0x00018003de2f;
        }
        if ((DAT_1800938a4 == *(int *)(pbVar5 + 2)) && (DAT_1800938a8 == pbVar5[6])) {
          *(ulonglong *)(param_1 + 0x118) = (ulonglong)*pbVar5;
          uVar6 = (ulonglong)(*(int *)(pbVar5 + 7) + (uint)*pbVar5);
          goto LAB_18003de94;
        }
        if (*(int *)(param_1 + 0x124) == 0) {
          if (bVar3) {
            uVar4 = uVar4 + 2;
          }
          *(ulonglong *)(param_1 + 0x110) = uVar4 + 1;
          return 0;
        }
        uVar4 = uVar4 - 2;
        *(undefined4 *)(param_1 + 0x124) = 0;
        *(ulonglong *)(param_1 + 0x110) = uVar4;
        if (uVar10 < uVar4) {
          return 1;
        }
        bVar3 = true;
      }
    } while (iVar8 < 0x401);
  }
  return 1;
}

