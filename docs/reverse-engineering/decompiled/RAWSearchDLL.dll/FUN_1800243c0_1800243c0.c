// Function: FUN_1800243c0
// Address: 1800243c0
// Size: 933 bytes


void FUN_1800243c0(longlong param_1,longlong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_f8 [32];
  undefined1 in_stack_ffffffffffffff28;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6 [6];
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98 [4];
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_a0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_f8;
  lVar13 = (param_2 - param_1) / 0x12 + (param_2 - param_1 >> 0x3f);
  uVar19 = (lVar13 >> 2) - (lVar13 >> 0x3f);
  lVar13 = (longlong)uVar19 >> 1;
  if (0 < lVar13) {
    puVar8 = (undefined8 *)FUN_1800016b0(local_98);
    local_c7 = 0;
    local_b0 = puVar8;
    local_a8 = (undefined8 *)FUN_1800016b0(local_78);
    local_c6[0] = 0;
    lVar18 = (longlong)(uVar19 - 1) >> 1;
    local_b8 = param_1 + (lVar13 * 9 + 4) * 8;
    do {
      lVar17 = 0;
      lVar15 = lVar13 + -1;
      lVar13 = local_b8 + -0x48;
      puVar16 = local_a8;
      local_c0 = lVar15;
      local_b8 = lVar13;
      FUN_180001780((longlong)local_98);
      puVar9 = (undefined8 *)FUN_1800016b0(lVar13 + -0x20);
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      puVar9[2] = lVar17;
      puVar9[3] = 0xf;
      FUN_180001300((undefined1 *)puVar9,&local_c7);
      FUN_180001780((longlong)local_78);
      puVar8 = (undefined8 *)FUN_1800016b0(lVar13);
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar16 = *puVar8;
      puVar16[1] = uVar2;
      puVar16[2] = uVar3;
      puVar16[3] = uVar4;
      puVar8[2] = lVar17;
      puVar8[3] = 0xf;
      FUN_180001300((undefined1 *)puVar8,local_c6);
      local_58 = *(undefined8 *)(lVar13 + 0x20);
      lVar13 = lVar15;
      while (lVar15 < lVar18) {
        lVar13 = param_1 + lVar15 * 0x90;
        if (*(ulonglong *)(lVar13 + 0xc0) == *(ulonglong *)(lVar13 + 0x78)) {
          bVar20 = *(ulonglong *)(lVar13 + 0xd0) < *(ulonglong *)(lVar13 + 0x88);
        }
        else {
          bVar20 = *(ulonglong *)(lVar13 + 0x78) < *(ulonglong *)(lVar13 + 0xc0);
        }
        lVar14 = lVar15 * 2 + ((ulonglong)bVar20 ^ 1) + 1;
        lVar13 = param_1 + lVar14 * 0x48;
        lVar15 = param_1 + lVar15 * 0x48;
        if (lVar15 != lVar13) {
          plVar10 = (longlong *)FUN_1800016b0(lVar15);
          if (0xf < (ulonglong)plVar10[3]) {
            pvVar1 = (void *)*plVar10;
            pvVar12 = pvVar1;
            if ((0xfff < plVar10[3] + 1U) &&
               (pvVar12 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar12);
            lVar17 = 0;
          }
          plVar10[2] = lVar17;
          plVar10[3] = 0xf;
          local_c8 = 0;
          FUN_180001300((undefined1 *)plVar10,&local_c8);
          plVar11 = (longlong *)FUN_1800016b0(lVar13);
          lVar5 = plVar11[1];
          lVar6 = plVar11[2];
          lVar7 = plVar11[3];
          *plVar10 = *plVar11;
          plVar10[1] = lVar5;
          plVar10[2] = lVar6;
          plVar10[3] = lVar7;
          plVar11[2] = lVar17;
          plVar11[3] = 0xf;
          local_c8 = 0;
          FUN_180001300((undefined1 *)plVar11,&local_c8);
        }
        if (lVar15 + 0x20 != lVar13 + 0x20) {
          plVar10 = (longlong *)FUN_1800016b0(lVar15 + 0x20);
          if (0xf < (ulonglong)plVar10[3]) {
            pvVar1 = (void *)*plVar10;
            pvVar12 = pvVar1;
            if ((0xfff < plVar10[3] + 1U) &&
               (pvVar12 = *(void **)((longlong)pvVar1 + -8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar12)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar12);
            lVar17 = 0;
          }
          plVar10[2] = lVar17;
          plVar10[3] = 0xf;
          local_c8 = 0;
          FUN_180001300((undefined1 *)plVar10,&local_c8);
          plVar11 = (longlong *)FUN_1800016b0(lVar13 + 0x20);
          lVar5 = plVar11[1];
          lVar6 = plVar11[2];
          lVar7 = plVar11[3];
          *plVar10 = *plVar11;
          plVar10[1] = lVar5;
          plVar10[2] = lVar6;
          plVar10[3] = lVar7;
          plVar11[2] = lVar17;
          plVar11[3] = 0xf;
          local_c8 = 0;
          FUN_180001300((undefined1 *)plVar11,&local_c8);
        }
        *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(lVar13 + 0x40);
        lVar15 = lVar14;
        lVar13 = local_c0;
      }
      if ((lVar15 == lVar18) && ((uVar19 & 1) == 0)) {
        FUN_180024ec0((longlong *)(param_1 + lVar15 * 0x48),
                      (longlong *)(param_1 + (uVar19 - 1) * 0x48));
        lVar15 = uVar19 - 1;
      }
      FUN_1800253c0(param_1,lVar15,lVar13,local_98,in_stack_ffffffffffffff28);
      FUN_180001630(local_78);
      FUN_180001630(local_98);
      puVar8 = local_b0;
    } while (0 < lVar13);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_f8);
  return;
}

