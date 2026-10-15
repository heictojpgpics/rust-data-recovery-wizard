// Function: FUN_180051a70
// Address: 180051a70
// Size: 1113 bytes


void FUN_180051a70(longlong param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  short *psVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  short local_84;
  ulonglong local_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  undefined8 local_60;
  int local_58;
  int local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_a8;
  uVar8 = 0;
  if (DAT_180117f00 == 0) {
    uVar11 = *(ulonglong *)(param_1 + 0x10);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    DAT_180117f00 = 0;
    uVar11 = uVar8;
  }
  uVar10 = *(ulonglong *)(param_2 + 8);
  local_78 = param_1;
  if ((uVar11 < uVar10) && (uVar10 < uVar11 + *(longlong *)(param_1 + 0x18))) {
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    uVar11 = 0;
    local_50 = -0x4cff0000;
    local_48 = -0x45ff0000;
    local_84 = 0;
    local_60 = 0xffffffffffffffff;
    local_70 = param_3;
    local_68 = uVar10;
    if (param_3 == (longlong *)0x0) {
      local_58 = 0x200;
    }
    else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
      local_58 = *(int *)((longlong)param_3 + 0xc);
      if (local_58 < 1) {
        local_58 = 0x200;
      }
    }
    else {
      local_58 = (*(code *)((undefined **)*param_3)[5])(param_3);
    }
    local_58 = local_58 << 7;
    puVar5 = FUN_180001350();
    local_80 = *(longlong *)(puVar5 + 0x70) * 10;
    puVar5 = FUN_180042930((longlong *)&local_70,0);
    uVar13 = 0;
    uVar2 = *(undefined4 *)(puVar5 + 4);
    local_88._1_1_ = (undefined1)((uint)uVar2 >> 8);
    uVar9 = local_88._1_1_;
    local_88._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
    local_88._0_2_ = CONCAT11(local_88._2_1_,(char)((uint)uVar2 >> 0x18));
    local_88._0_3_ = CONCAT12(uVar9,(ushort)local_88);
    local_88 = CONCAT13((char)uVar2,(undefined3)local_88);
    uVar10 = uVar8;
    if (((local_88 == 0x21000100) || (local_88 == 0x2100716f)) ||
       ((local_88 != 0x44002c48 &&
        (((local_88 != 0x44001480 && (local_88 != 0x44000400)) && (local_88 != 0x44000404)))))) {
      lVar14 = 0xc;
    }
    else {
      lVar14 = 0xe;
      uVar11 = uVar8;
      uVar13 = uVar8;
    }
LAB_180051bd3:
    do {
      if ((local_80 < uVar10) ||
         (piVar6 = (int *)FUN_180042930((longlong *)&local_70,uVar10), piVar6 == (int *)0x0)) {
LAB_180051d90:
        lVar14 = *(longlong *)(param_2 + 8);
        if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
          iVar4 = *(int *)((longlong)param_3 + 0xc);
          ppuVar12 = CRawFileCellTestStorageDevice::vftable;
          if (iVar4 < 1) {
            iVar4 = 0x200;
          }
        }
        else {
          iVar4 = (*(code *)((undefined **)*param_3)[5])(param_3);
          ppuVar12 = (undefined **)*param_3;
        }
        if (uVar10 % (ulonglong)(longlong)iVar4 == 0) {
          if (ppuVar12 == CRawFileCellTestStorageDevice::vftable) {
            iVar4 = *(int *)((longlong)param_3 + 0xc);
            if (iVar4 < 1) {
              iVar4 = 0x200;
            }
          }
          else {
            iVar4 = (*(code *)ppuVar12[5])(param_3);
          }
          uVar8 = uVar10 / (ulonglong)(longlong)iVar4;
        }
        else if (ppuVar12 == CRawFileCellTestStorageDevice::vftable) {
          iVar4 = *(int *)((longlong)param_3 + 0xc);
          if (iVar4 < 1) {
            iVar4 = 0x200;
          }
          uVar8 = uVar10 / (ulonglong)(longlong)iVar4 + 1;
        }
        else {
          iVar4 = (*(code *)ppuVar12[5])(param_3);
          uVar8 = uVar10 / (ulonglong)(longlong)iVar4 + 1;
        }
        uVar11 = uVar8 + lVar14;
        if ((uVar11 < *(ulonglong *)(local_78 + 0x10)) ||
           (*(ulonglong *)(local_78 + 0x10) + *(longlong *)(local_78 + 0x18) < uVar11)) {
          *(longlong *)(local_78 + 0x10) = lVar14;
          lVar14 = uVar10 + 0x12;
          *(ulonglong *)(local_78 + 0x18) = uVar8;
          goto LAB_180051e40;
        }
        *(undefined8 *)(param_2 + 0x10) = 0;
        goto LAB_180051e6d;
      }
      iVar4 = *piVar6;
      local_88._2_1_ = (undefined1)((uint)iVar4 >> 0x10);
      local_88._1_1_ = (undefined1)((uint)iVar4 >> 8);
      uVar3 = CONCAT11((char)iVar4,local_88._1_1_);
      local_88._0_2_ = CONCAT11(local_88._2_1_,(char)((uint)iVar4 >> 0x18));
      local_88 = CONCAT22(uVar3,(ushort)local_88);
      if ((iVar4 == local_50) || (iVar4 == local_48)) {
        uVar2 = *(undefined4 *)(lVar14 + (longlong)piVar6);
        uVar11 = 0;
        local_88._1_1_ = (undefined1)((uint)uVar2 >> 8);
        uVar9 = local_88._1_1_;
        local_88._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
        local_88._0_2_ = CONCAT11(local_88._2_1_,(char)((uint)uVar2 >> 0x18));
        sVar1 = *(short *)(lVar14 + 4 + (longlong)piVar6);
        local_88._0_3_ = CONCAT12(uVar9,(ushort)local_88);
        local_88 = CONCAT13((char)uVar2,(undefined3)local_88);
        bVar15 = local_88 == 0x1bb;
        local_88 = CONCAT22(local_88._2_2_,sVar1);
        uVar9 = (undefined1)((ushort)sVar1 >> 8);
        if (bVar15) {
          local_88 = CONCAT31(CONCAT21(local_88._2_2_,(char)sVar1),uVar9);
          uVar10 = uVar10 + (ulonglong)(ushort)local_88 + 6 + lVar14;
          psVar7 = (short *)FUN_180042930((longlong *)&local_70,uVar10);
          if ((*psVar7 != local_84) || ((char)psVar7[1] != '\x01')) {
            if (0x18fff < uVar10) goto LAB_180051d90;
            goto LAB_180051e6d;
          }
          sVar1 = psVar7[2];
          local_88 = CONCAT22(local_88._2_2_,sVar1);
          if (sVar1 == 0) {
            uVar10 = uVar10 + 4;
          }
          else {
            local_88._0_1_ = (undefined1)sVar1;
            local_88 = CONCAT31(CONCAT21(local_88._2_2_,(undefined1)local_88),
                                (char)((ushort)sVar1 >> 8));
            uVar10 = uVar10 + (ulonglong)(ushort)local_88 + 6;
          }
        }
        else if (sVar1 == 0) {
          uVar10 = uVar10 + 4;
        }
        else {
          local_88 = CONCAT31(CONCAT21(local_88._2_2_,(char)sVar1),uVar9);
          uVar10 = uVar10 + 6 + (ulonglong)(ushort)local_88 + lVar14;
        }
        goto LAB_180051bd3;
      }
      if ((iVar4 != 0) && (local_88 != 1)) {
        uVar11 = 0;
        if (((short)iVar4 == local_84) && (*(char *)((longlong)piVar6 + 2) == '\x01')) {
          local_88 = CONCAT31(CONCAT21(uVar3,(char)(short)piVar6[1]),
                              (char)((ushort)(short)piVar6[1] >> 8));
          if ((ushort)local_88 == 0) {
            uVar10 = uVar10 + 4;
            uVar11 = uVar8;
          }
          else {
            uVar10 = uVar10 + (ulonglong)(ushort)local_88 + 6;
            uVar11 = uVar8;
          }
        }
        else {
          iVar4 = (int)uVar13;
          uVar13 = (ulonglong)(iVar4 + 1);
          if (iVar4 != 0) goto LAB_180051d90;
          uVar10 = uVar10 - 2;
        }
        goto LAB_180051bd3;
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 < 100);
    lVar14 = uVar10 - uVar11;
LAB_180051e40:
    *(longlong *)(param_2 + 0x10) = lVar14;
    *(undefined4 *)(param_2 + 0x18) = 0x6d;
  }
LAB_180051e6d:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_a8);
  return;
}

