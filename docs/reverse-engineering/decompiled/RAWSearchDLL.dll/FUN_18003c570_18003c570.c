// Function: FUN_18003c570
// Address: 18003c570
// Size: 904 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18003c570(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 local_res18;
  
  lVar9 = param_4 - *(longlong *)(param_1 + 8);
  uVar8 = (ulonglong)param_3;
  if ((ulonglong)(*(longlong *)(param_1 + 0x148) * 10) <= uVar8 * lVar9) {
    return 0;
  }
  if (lVar9 == 0) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    local_res18._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
    local_res18._1_1_ = (undefined1)((uint)uVar2 >> 8);
    uVar4 = CONCAT11((char)uVar2,local_res18._1_1_);
    local_res18._0_2_ = CONCAT11(local_res18._2_1_,(char)((uint)uVar2 >> 0x18));
    local_res18 = CONCAT22(uVar4,(undefined2)local_res18);
    if ((((local_res18 == 0x44002c48) || (local_res18 == 0x44001480)) || (local_res18 == 0x44000400)
        ) || (local_res18 == 0x44000404)) {
      *(undefined8 *)(param_1 + 0x128) = 0xe;
    }
    else {
      *(undefined8 *)(param_1 + 0x128) = 0xc;
    }
  }
  uVar10 = *(ulonglong *)(param_1 + 0x110);
  iVar11 = 0;
  *(ulonglong *)(param_1 + 0x140) = (lVar9 + 1) * uVar8;
LAB_18003c620:
  iVar11 = iVar11 + 1;
  if (*(ulonglong *)(param_1 + 0x140) <= uVar10) {
    return 1;
  }
  piVar6 = (int *)(uVar10 % uVar8 + param_2);
  iVar3 = *piVar6;
  local_res18._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
  local_res18._1_1_ = (undefined1)((uint)iVar3 >> 8);
  uVar4 = CONCAT11((char)iVar3,local_res18._1_1_);
  local_res18._0_2_ = CONCAT11(local_res18._2_1_,(char)((uint)iVar3 >> 0x18));
  local_res18 = CONCAT22(uVar4,(undefined2)local_res18);
  if ((iVar3 == DAT_1800937f4) || (iVar3 == ram0x0001800937e8)) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x128) + (longlong)piVar6);
    local_res18._1_1_ = (undefined1)((uint)uVar2 >> 8);
    local_res18._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
    uVar4 = CONCAT11((char)uVar2,local_res18._1_1_);
    sVar1 = *(short *)((longlong)piVar6 + *(longlong *)(param_1 + 0x128) + 4);
    local_res18._0_2_ = CONCAT11(local_res18._2_1_,(char)((uint)uVar2 >> 0x18));
    local_res18 = CONCAT22(uVar4,(undefined2)local_res18);
    *(short *)(param_1 + 0x120) = sVar1;
    uVar5 = (undefined1)((ushort)sVar1 >> 8);
    if (local_res18 == 0x1bb) {
      *(char *)(param_1 + 0x121) = (char)sVar1;
      *(undefined1 *)(param_1 + 0x120) = uVar5;
      uVar10 = *(longlong *)(param_1 + 0x110) + 6 +
               (ulonglong)*(ushort *)(param_1 + 0x120) + *(longlong *)(param_1 + 0x128);
      *(ulonglong *)(param_1 + 0x110) = uVar10;
      if (*(ulonglong *)(param_1 + 0x140) <= uVar10) {
        return 1;
      }
      uVar7 = uVar10 % uVar8;
      if ((*(short *)(uVar7 + param_2) != DAT_1800937f0) ||
         (*(char *)(uVar7 + 2 + param_2) != DAT_1800937f2)) {
        if (0x18fff < uVar10) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0x110) = 0;
        return 0;
      }
      sVar1 = *(short *)(uVar7 + 4 + param_2);
      *(short *)(param_1 + 0x120) = sVar1;
      if (sVar1 == 0) {
        uVar10 = uVar10 + 4;
      }
      else {
        *(char *)(param_1 + 0x121) = (char)sVar1;
        *(char *)(param_1 + 0x120) = (char)((ushort)sVar1 >> 8);
        uVar10 = (ulonglong)*(ushort *)(param_1 + 0x120) + 6 + uVar10;
      }
    }
    else if (sVar1 == 0) {
      uVar10 = uVar10 + 4;
    }
    else {
      *(char *)(param_1 + 0x121) = (char)sVar1;
      *(undefined1 *)(param_1 + 0x120) = uVar5;
      uVar10 = *(longlong *)(param_1 + 0x110) + 6 +
               (ulonglong)*(ushort *)(param_1 + 0x120) + *(longlong *)(param_1 + 0x128);
    }
  }
  else {
    if ((iVar3 == 0) || (local_res18 == 1)) {
      *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x130) + 1;
      uVar10 = uVar10 + 1;
      *(ulonglong *)(param_1 + 0x110) = uVar10;
      if (*(ulonglong *)(param_1 + 0x118) <= *(ulonglong *)(param_1 + 0x130)) {
        uVar10 = (uVar10 - *(ulonglong *)(param_1 + 0x130)) + 2;
        goto LAB_18003c889;
      }
      goto LAB_18003c879;
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (((short)*piVar6 == DAT_1800937f0) && (*(char *)((longlong)piVar6 + 2) == DAT_1800937f2)) {
      sVar1 = (short)piVar6[1];
      *(short *)(param_1 + 0x120) = sVar1;
      *(char *)(param_1 + 0x121) = (char)sVar1;
      *(char *)(param_1 + 0x120) = (char)((ushort)sVar1 >> 8);
      if (*(ushort *)(param_1 + 0x120) == 0) {
        uVar10 = *(longlong *)(param_1 + 0x110) + 4;
      }
      else {
        uVar10 = *(longlong *)(param_1 + 0x110) + 6 + (ulonglong)*(ushort *)(param_1 + 0x120);
      }
      goto LAB_18003c86f;
    }
    iVar3 = *(int *)(param_1 + 0x138);
    *(int *)(param_1 + 0x138) = iVar3 + 1;
    if (iVar3 != 0) {
      if (*(ushort *)(param_1 + 0x120) < uVar10) {
        uVar10 = uVar10 - *(ushort *)(param_1 + 0x120);
      }
      goto LAB_18003c889;
    }
    uVar10 = uVar10 - 2;
  }
LAB_18003c86f:
  *(ulonglong *)(param_1 + 0x110) = uVar10;
LAB_18003c879:
  if (0x400 < iVar11) {
LAB_18003c889:
    *(undefined4 *)(param_1 + 0x18) = 0x6d;
    *(ulonglong *)(param_1 + 0x110) = uVar10 + 0x12;
    return 0;
  }
  goto LAB_18003c620;
}

