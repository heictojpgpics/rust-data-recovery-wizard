// Function: FUN_180052160
// Address: 180052160
// Size: 1493 bytes


void FUN_180052160(undefined8 param_1,longlong ****param_2,longlong *param_3)

{
  uint uVar1;
  longlong ****pppplVar2;
  longlong ****pppplVar3;
  longlong *plVar4;
  longlong *****ppppplVar5;
  longlong *****ppppplVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong ****pppplVar16;
  longlong *****ppppplVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong ****pppplVar21;
  longlong ***ppplVar22;
  bool bVar23;
  undefined1 auStackY_f8 [32];
  uint local_c8;
  undefined4 uStack_c4;
  longlong ****local_c0;
  longlong ****local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  longlong ****local_90;
  longlong *local_88;
  longlong ***local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_68 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_f8;
  local_60._0_2_ = 0x2807;
  local_60._2_1_ = -0x58;
  local_60._3_1_ = 0;
  local_60._4_1_ = 0;
  local_60._5_1_ = '\0';
  local_50._0_2_ = 0x2807;
  local_50._2_1_ = -0x4e;
  local_50._3_1_ = 0;
  local_50._4_1_ = 0;
  local_50._5_1_ = '\0';
  local_58._0_2_ = 0x2807;
  local_58._2_1_ = -0x1c;
  local_58._3_1_ = 0;
  local_58._4_1_ = 0;
  local_58._5_1_ = '\0';
  local_a0 = (undefined1  [16])0x0;
  local_90 = param_2;
  pppplVar2 = (longlong ****)FUN_18003ab90();
  local_a0._0_8_ = pppplVar2;
  local_c8 = 0xa8;
  pppplVar21 = (longlong ****)pppplVar2[1];
  pppplVar16 = pppplVar2;
  if (*(char *)((longlong)pppplVar2[1] + 0x19) == '\0') {
    do {
      if (*(uint *)((longlong)pppplVar21 + 0x1c) < 0xa8) {
        pppplVar3 = (longlong ****)pppplVar21[2];
      }
      else {
        pppplVar3 = (longlong ****)*pppplVar21;
        pppplVar16 = pppplVar21;
      }
      pppplVar21 = pppplVar3;
    } while (*(char *)((longlong)pppplVar3 + 0x19) == '\0');
    if ((pppplVar16 == pppplVar2) || (0xa8 < *(uint *)((longlong)pppplVar16 + 0x1c)))
    goto LAB_18005221d;
  }
  else {
LAB_18005221d:
    local_b8 = (longlong ****)&local_c8;
    plVar4 = (longlong *)FUN_18003ac60((undefined8 *)local_a0,param_2,&local_b8);
    param_2 = (longlong ****)&local_c0;
    FUN_18003acc0((longlong *)local_a0,param_2,(longlong *)pppplVar16,
                  (uint *)((longlong)plVar4 + 0x1c),plVar4);
    pppplVar16 = local_c0;
  }
  *(uint *)(pppplVar16 + 4) = 0x46;
  local_c8 = 0xb2;
  ppppplVar5 = *(longlong ******)(local_a0._0_8_ + 8);
  ppppplVar17 = (longlong *****)local_a0._0_8_;
  if (*(char *)((longlong)*(longlong ******)(local_a0._0_8_ + 8) + 0x19) == '\0') {
    do {
      if (*(uint *)((longlong)ppppplVar5 + 0x1c) < 0xb2) {
        ppppplVar6 = (longlong *****)ppppplVar5[2];
      }
      else {
        ppppplVar6 = (longlong *****)*ppppplVar5;
        ppppplVar17 = ppppplVar5;
      }
      ppppplVar5 = ppppplVar6;
    } while (*(char *)((longlong)ppppplVar6 + 0x19) == '\0');
    if ((ppppplVar17 == (longlong *****)local_a0._0_8_) ||
       (0xb2 < *(uint *)((longlong)ppppplVar17 + 0x1c))) goto LAB_180052299;
  }
  else {
LAB_180052299:
    local_c0 = (longlong ****)&local_c8;
    plVar4 = (longlong *)FUN_18003ac60((undefined8 *)local_a0,param_2,&local_c0);
    param_2 = (longlong ****)&local_b8;
    FUN_18003acc0((longlong *)local_a0,param_2,(longlong *)ppppplVar17,
                  (uint *)((longlong)plVar4 + 0x1c),plVar4);
    ppppplVar17 = (longlong *****)local_b8;
  }
  *(uint *)(ppppplVar17 + 4) = 0x3c;
  local_c8 = 0xe4;
  ppppplVar5 = *(longlong ******)(local_a0._0_8_ + 8);
  ppppplVar17 = (longlong *****)local_a0._0_8_;
  if (*(char *)((longlong)ppppplVar5 + 0x19) == '\0') {
    do {
      if (*(uint *)((longlong)ppppplVar5 + 0x1c) < 0xe4) {
        ppppplVar6 = (longlong *****)ppppplVar5[2];
      }
      else {
        ppppplVar6 = (longlong *****)*ppppplVar5;
        ppppplVar17 = ppppplVar5;
      }
      ppppplVar5 = ppppplVar6;
    } while (*(char *)((longlong)ppppplVar6 + 0x19) == '\0');
    if ((ppppplVar17 == (longlong *****)local_a0._0_8_) ||
       (0xe4 < *(uint *)((longlong)ppppplVar17 + 0x1c))) goto LAB_180052319;
  }
  else {
LAB_180052319:
    local_c0 = (longlong ****)&local_c8;
    plVar4 = (longlong *)FUN_18003ac60((undefined8 *)local_a0,param_2,&local_c0);
    param_2 = (longlong ****)&local_b8;
    FUN_18003acc0((longlong *)local_a0,param_2,(longlong *)ppppplVar17,
                  (uint *)((longlong)plVar4 + 0x1c),plVar4);
    ppppplVar17 = (longlong *****)local_b8;
  }
  *(uint *)(ppppplVar17 + 4) = 0x32;
  local_b0 = (undefined1  [16])0x0;
  plVar7 = (longlong *)FUN_180007710();
  local_b0._0_8_ = plVar7;
  local_c0 = (longlong ****)&local_60;
  plVar9 = (longlong *)plVar7[1];
  plVar4 = plVar7;
  if (*(char *)(plVar7[1] + 0x19) == '\0') {
    do {
      param_2 = (longlong ****)&local_60;
      if ((longlong *****)plVar9[4] < param_2) {
        plVar8 = (longlong *)plVar9[2];
      }
      else {
        plVar8 = (longlong *)*plVar9;
        plVar4 = plVar9;
      }
      plVar9 = plVar8;
    } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
    if ((plVar4 == plVar7) || (&local_60 < (undefined8 *)plVar4[4])) goto LAB_1800523ab;
  }
  else {
LAB_1800523ab:
    local_b8 = (longlong ****)&local_c0;
    plVar9 = (longlong *)FUN_18002d9a0((undefined8 *)local_b0,param_2,&local_b8);
    param_2 = (longlong ****)&local_c8;
    FUN_18002da00((longlong *)local_b0,param_2,plVar4,(ulonglong *)(plVar9 + 4),plVar9);
    plVar4 = (longlong *)CONCAT44(uStack_c4,local_c8);
  }
  *(undefined4 *)(plVar4 + 5) = 5;
  local_c0 = (longlong ****)&local_50;
  plVar9 = *(longlong **)(local_b0._0_8_ + 8);
  plVar4 = (longlong *)local_b0._0_8_;
  if (*(char *)((longlong)*(longlong **)(local_b0._0_8_ + 8) + 0x19) == '\0') {
    do {
      param_2 = (longlong ****)&local_50;
      if ((longlong *****)plVar9[4] < param_2) {
        plVar7 = (longlong *)plVar9[2];
      }
      else {
        plVar7 = (longlong *)*plVar9;
        plVar4 = plVar9;
      }
      plVar9 = plVar7;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
    if ((plVar4 == (longlong *)local_b0._0_8_) || (&local_50 < (undefined8 *)plVar4[4]))
    goto LAB_18005242b;
  }
  else {
LAB_18005242b:
    local_b8 = (longlong ****)&local_c0;
    plVar9 = (longlong *)FUN_18002d9a0((undefined8 *)local_b0,param_2,&local_b8);
    param_2 = (longlong ****)&local_c8;
    FUN_18002da00((longlong *)local_b0,param_2,plVar4,(ulonglong *)(plVar9 + 4),plVar9);
    plVar4 = (longlong *)CONCAT44(uStack_c4,local_c8);
  }
  *(undefined4 *)(plVar4 + 5) = 5;
  local_c0 = (longlong ****)&local_58;
  plVar9 = *(longlong **)(local_b0._0_8_ + 8);
  plVar4 = (longlong *)local_b0._0_8_;
  if (*(char *)((longlong)*(longlong **)(local_b0._0_8_ + 8) + 0x19) == '\0') {
    do {
      param_2 = (longlong ****)&local_58;
      if ((longlong *****)plVar9[4] < param_2) {
        plVar7 = (longlong *)plVar9[2];
      }
      else {
        plVar7 = (longlong *)*plVar9;
        plVar4 = plVar9;
      }
      plVar9 = plVar7;
    } while (*(char *)((longlong)plVar7 + 0x19) == '\0');
    if ((plVar4 != (longlong *)local_b0._0_8_) && ((undefined8 *)plVar4[4] <= &local_58))
    goto LAB_1800524dd;
  }
  local_b8 = (longlong ****)&local_c0;
  plVar9 = (longlong *)FUN_18002d9a0((undefined8 *)local_b0,param_2,&local_b8);
  FUN_18002da00((longlong *)local_b0,(undefined8 *)&local_c8,plVar4,(ulonglong *)(plVar9 + 4),plVar9
               );
  plVar4 = (longlong *)CONCAT44(uStack_c4,local_c8);
LAB_1800524dd:
  *(undefined4 *)(plVar4 + 5) = 5;
  uVar18 = 0;
  local_80 = local_90[1];
  local_78 = 0xffffffffffffffff;
  local_88 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_70 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_70 = *(int *)((longlong)param_3 + 0xc);
    if (local_70 < 1) {
      local_70 = 0x200;
    }
  }
  else {
    local_70 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_70 = local_70 << 7;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    uVar19 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
    if ((int)*(uint *)((longlong)param_3 + 0xc) < 1) {
      uVar19 = 0x200;
    }
  }
  else {
    uVar1 = (*(code *)((undefined **)*param_3)[5])(param_3);
    uVar19 = (ulonglong)uVar1;
  }
  local_c8 = (uint)uVar19;
  uVar20 = uVar19;
LAB_180052550:
  uVar1 = 0;
  ppplVar22 = (longlong ***)0x3200000;
  if ((0x3200000 < uVar18) ||
     (local_c0 = (longlong ****)FUN_180042930((longlong *)&local_88,uVar18),
     local_c0 == (longlong ****)0x0)) goto LAB_1800526d7;
  if (*(int *)((uVar19 - uVar18 % uVar19) + -4 + (longlong)local_c0) != 0) goto LAB_180052676;
  if ((int)uVar20 == 6) goto LAB_18005264d;
  pppplVar21 = local_c0;
LAB_1800525c8:
  if ((*(short *)pppplVar21 == (short)local_60) &&
     (*(char *)((longlong)pppplVar21 + 2) == local_60._2_1_)) {
    if (*(short *)((longlong)pppplVar21 + 3) == CONCAT11(local_60._4_1_,local_60._3_1_)) {
      bVar23 = *(char *)((longlong)pppplVar21 + 5) == local_60._5_1_;
      goto LAB_18005262f;
    }
  }
  else if ((*(short *)pppplVar21 == (short)local_50) &&
          (*(char *)((longlong)pppplVar21 + 2) == local_50._2_1_)) {
    if (*(short *)((longlong)pppplVar21 + 3) == CONCAT11(local_50._4_1_,local_50._3_1_)) {
      bVar23 = *(char *)((longlong)pppplVar21 + 5) == local_50._5_1_;
LAB_18005262f:
      if (bVar23) {
        if (pppplVar21 == (longlong ****)0x0) goto LAB_180052641;
        puVar12 = *(undefined8 **)(local_a0._0_8_ + 8);
        puVar14 = (undefined8 *)local_a0._0_8_;
        if (*(char *)((longlong)*(undefined8 **)(local_a0._0_8_ + 8) + 0x19) != '\0')
        goto LAB_1800526c6;
        do {
          if (*(uint *)((longlong)puVar12 + 0x1c) < *(uint *)((longlong)pppplVar21 + 2)) {
            puVar13 = (undefined8 *)puVar12[2];
          }
          else {
            puVar13 = (undefined8 *)*puVar12;
            puVar14 = puVar12;
          }
          puVar12 = puVar13;
        } while (*(char *)((longlong)puVar13 + 0x19) == '\0');
        if ((puVar14 == (undefined8 *)local_a0._0_8_) ||
           (*(uint *)((longlong)pppplVar21 + 2) < *(uint *)((longlong)puVar14 + 0x1c))) {
LAB_1800526c6:
          ppplVar22 = (longlong ***)((longlong)pppplVar21 + (uVar18 - (longlong)local_c0));
        }
        else {
          ppplVar22 = (longlong ***)
                      ((longlong)pppplVar21 +
                      uVar18 + ((ulonglong)*(uint *)(puVar14 + 4) - (longlong)local_c0));
        }
LAB_1800526d7:
        local_90[2] = ppplVar22;
        FUN_18000d9d0((longlong *)local_b0);
        FUN_18003aa30((longlong *)local_a0);
        __security_check_cookie(local_48 ^ (ulonglong)auStackY_f8);
        return;
      }
    }
  }
  else if (((*(short *)pppplVar21 == (short)local_58) &&
           (*(char *)((longlong)pppplVar21 + 2) == local_58._2_1_)) &&
          (*(short *)((longlong)pppplVar21 + 3) == CONCAT11(local_58._4_1_,local_58._3_1_))) {
    bVar23 = *(char *)((longlong)pppplVar21 + 5) == local_58._5_1_;
    goto LAB_18005262f;
  }
  pppplVar21 = (longlong ****)((longlong)pppplVar21 + 1);
  uVar1 = uVar1 + 1;
  if ((int)uVar20 - 6U <= uVar1) goto LAB_180052641;
  goto LAB_1800525c8;
LAB_180052641:
  uVar20 = (ulonglong)local_c8;
LAB_18005264d:
  uVar15 = uVar18 - 0x50;
  if (uVar18 == 0) {
    uVar15 = 0;
  }
  puVar10 = FUN_180042930((longlong *)&local_88,uVar15);
  pvVar11 = FUN_180051ed0(puVar10,uVar15,(longlong *)local_b0,(int *)&local_b8);
  if (pvVar11 != (void *)0x0) {
    ppplVar22 = (longlong ***)(uVar19 + uVar18);
    goto LAB_1800526d7;
  }
LAB_180052676:
  uVar18 = uVar18 + uVar19;
  goto LAB_180052550;
}

