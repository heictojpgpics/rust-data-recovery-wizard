// Function: FUN_180024770
// Address: 180024770
// Size: 1860 bytes


void FUN_180024770(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  void *pvVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6 [6];
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_88 [4];
  longlong local_68 [2];
  ulonglong local_58;
  ulonglong local_48;
  ulonglong local_38;
  
  local_98 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_d8;
  local_a0 = param_2;
  if ((param_1 != param_2) && (plVar14 = param_1 + 9, local_b0 = plVar14, plVar14 != param_2)) {
    local_b7 = 0;
    local_b6[0] = 0;
    plVar6 = (longlong *)FUN_1800016b0(local_88);
    plVar7 = (longlong *)FUN_1800016b0(local_68);
    plVar9 = param_1 + 0xd;
    do {
      lVar15 = 0;
      local_a8 = plVar9;
      FUN_180001780((longlong)local_88);
      plVar8 = (longlong *)FUN_1800016b0(plVar14);
      lVar3 = plVar8[1];
      lVar4 = plVar8[2];
      lVar5 = plVar8[3];
      *plVar6 = *plVar8;
      plVar6[1] = lVar3;
      plVar6[2] = lVar4;
      plVar6[3] = lVar5;
      plVar8[2] = lVar15;
      plVar8[3] = 0xf;
      FUN_180001300((undefined1 *)plVar8,&local_b7);
      FUN_180001780((longlong)local_68);
      plVar8 = (longlong *)FUN_1800016b0(plVar9);
      lVar3 = plVar8[1];
      lVar4 = plVar8[2];
      lVar5 = plVar8[3];
      *plVar7 = *plVar8;
      plVar7[1] = lVar3;
      plVar7[2] = lVar4;
      plVar7[3] = lVar5;
      plVar8[2] = lVar15;
      plVar8[3] = 0xf;
      FUN_180001300((undefined1 *)plVar8,local_b6);
      plVar8 = plVar9 + 9;
      local_48 = plVar9[4];
      if (local_58 == param_1[6]) {
        bVar16 = local_48 < (ulonglong)param_1[8];
      }
      else {
        bVar16 = (ulonglong)param_1[6] < local_58;
      }
      uVar12 = local_58;
      plVar1 = plVar14;
      if (bVar16) {
        while (param_1 != plVar1) {
          plVar14 = plVar8 + -9;
          plVar1 = plVar8 + -0x16;
          if (plVar8 + -0xd != plVar1) {
            plVar9 = (longlong *)FUN_1800016b0(plVar8 + -0xd);
            if (0xf < (ulonglong)plVar9[3]) {
              pvVar2 = (void *)*plVar9;
              pvVar13 = pvVar2;
              if ((0xfff < plVar9[3] + 1U) &&
                 (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
              lVar15 = 0;
            }
            plVar9[2] = lVar15;
            plVar9[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar9,&local_b8);
            plVar10 = (longlong *)FUN_1800016b0(plVar1);
            lVar3 = plVar10[1];
            lVar4 = plVar10[2];
            lVar5 = plVar10[3];
            *plVar9 = *plVar10;
            plVar9[1] = lVar3;
            plVar9[2] = lVar4;
            plVar9[3] = lVar5;
            plVar10[2] = lVar15;
            plVar10[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar10,&local_b8);
          }
          if (plVar14 != plVar8 + -0x12) {
            plVar9 = (longlong *)FUN_1800016b0(plVar14);
            if (0xf < (ulonglong)plVar9[3]) {
              pvVar2 = (void *)*plVar9;
              pvVar13 = pvVar2;
              if ((0xfff < plVar9[3] + 1U) &&
                 (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
              lVar15 = 0;
            }
            plVar9[2] = lVar15;
            plVar9[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar9,&local_b8);
            plVar10 = (longlong *)FUN_1800016b0(plVar8 + -0x12);
            lVar3 = plVar10[1];
            lVar4 = plVar10[2];
            lVar5 = plVar10[3];
            *plVar9 = *plVar10;
            plVar9[1] = lVar3;
            plVar9[2] = lVar4;
            plVar9[3] = lVar5;
            plVar10[2] = lVar15;
            plVar10[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar10,&local_b8);
          }
          plVar8[-5] = plVar8[-0xe];
          plVar8 = plVar14;
          plVar14 = local_b0;
          plVar9 = local_a8;
        }
        if (param_1 != local_88) {
          plVar8 = (longlong *)FUN_1800016b0(param_1);
          if (0xf < (ulonglong)plVar8[3]) {
            pvVar2 = (void *)*plVar8;
            pvVar13 = pvVar2;
            if ((0xfff < plVar8[3] + 1U) &&
               (pvVar13 = *(void **)((longlong)pvVar2 + -8),
               0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar13);
            lVar15 = 0;
          }
          plVar8[2] = lVar15;
          plVar8[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar8,&local_b8);
          lVar3 = plVar6[1];
          lVar4 = plVar6[2];
          lVar5 = plVar6[3];
          *plVar8 = *plVar6;
          plVar8[1] = lVar3;
          plVar8[2] = lVar4;
          plVar8[3] = lVar5;
          plVar6[2] = lVar15;
          plVar6[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar6,&local_b8);
        }
        if (param_1 + 4 != local_68) {
          plVar8 = (longlong *)FUN_1800016b0(param_1 + 4);
          if (0xf < (ulonglong)plVar8[3]) {
            pvVar2 = (void *)*plVar8;
            pvVar13 = pvVar2;
            if ((0xfff < plVar8[3] + 1U) &&
               (pvVar13 = *(void **)((longlong)pvVar2 + -8),
               0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar13);
            lVar15 = 0;
          }
          plVar8[2] = lVar15;
          plVar8[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar8,&local_b8);
          lVar3 = plVar7[1];
          lVar4 = plVar7[2];
          lVar5 = plVar7[3];
          *plVar8 = *plVar7;
          plVar8[1] = lVar3;
          plVar8[2] = lVar4;
          plVar8[3] = lVar5;
          plVar7[2] = lVar15;
          plVar7[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar7,&local_b8);
        }
        param_1[8] = local_48;
      }
      else {
        while( true ) {
          plVar8 = plVar9 + -9;
          if (uVar12 == plVar9[-7]) {
            bVar16 = local_48 < (ulonglong)plVar9[-5];
          }
          else {
            bVar16 = (ulonglong)plVar9[-7] < uVar12;
          }
          if (!bVar16) break;
          plVar1 = plVar9 + -0xd;
          if (plVar14 != plVar1) {
            plVar10 = (longlong *)FUN_1800016b0(plVar14);
            if (0xf < (ulonglong)plVar10[3]) {
              pvVar2 = (void *)*plVar10;
              pvVar13 = pvVar2;
              if ((0xfff < plVar10[3] + 1U) &&
                 (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
              lVar15 = 0;
            }
            plVar10[2] = lVar15;
            plVar10[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar10,&local_b8);
            plVar11 = (longlong *)FUN_1800016b0(plVar1);
            lVar3 = plVar11[1];
            lVar4 = plVar11[2];
            lVar5 = plVar11[3];
            *plVar10 = *plVar11;
            plVar10[1] = lVar3;
            plVar10[2] = lVar4;
            plVar10[3] = lVar5;
            plVar11[2] = lVar15;
            plVar11[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar11,&local_b8);
            uVar12 = local_58;
          }
          if (plVar14 + 4 != plVar8) {
            plVar10 = (longlong *)FUN_1800016b0(plVar14 + 4);
            if (0xf < (ulonglong)plVar10[3]) {
              pvVar2 = (void *)*plVar10;
              pvVar13 = pvVar2;
              if ((0xfff < plVar10[3] + 1U) &&
                 (pvVar13 = *(void **)((longlong)pvVar2 + -8),
                 0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              free(pvVar13);
              lVar15 = 0;
            }
            plVar10[2] = lVar15;
            plVar10[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar10,&local_b8);
            plVar11 = (longlong *)FUN_1800016b0(plVar8);
            lVar3 = plVar11[1];
            lVar4 = plVar11[2];
            lVar5 = plVar11[3];
            *plVar10 = *plVar11;
            plVar10[1] = lVar3;
            plVar10[2] = lVar4;
            plVar10[3] = lVar5;
            plVar11[2] = lVar15;
            plVar11[3] = 0xf;
            local_b8 = 0;
            FUN_180001300((undefined1 *)plVar11,&local_b8);
            uVar12 = local_58;
          }
          plVar14[8] = plVar9[-5];
          plVar9 = plVar8;
          plVar14 = plVar1;
        }
        if (plVar14 != local_88) {
          plVar9 = (longlong *)FUN_1800016b0(plVar14);
          if (0xf < (ulonglong)plVar9[3]) {
            pvVar2 = (void *)*plVar9;
            pvVar13 = pvVar2;
            if ((0xfff < plVar9[3] + 1U) &&
               (pvVar13 = *(void **)((longlong)pvVar2 + -8),
               0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar13);
            lVar15 = 0;
          }
          plVar9[2] = lVar15;
          plVar9[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar9,&local_b8);
          lVar3 = plVar6[1];
          lVar4 = plVar6[2];
          lVar5 = plVar6[3];
          *plVar9 = *plVar6;
          plVar9[1] = lVar3;
          plVar9[2] = lVar4;
          plVar9[3] = lVar5;
          plVar6[2] = lVar15;
          plVar6[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar6,&local_b8);
        }
        if (plVar14 + 4 != local_68) {
          plVar9 = (longlong *)FUN_1800016b0(plVar14 + 4);
          if (0xf < (ulonglong)plVar9[3]) {
            pvVar2 = (void *)*plVar9;
            pvVar13 = pvVar2;
            if ((0xfff < plVar9[3] + 1U) &&
               (pvVar13 = *(void **)((longlong)pvVar2 + -8),
               0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(pvVar13);
            lVar15 = 0;
          }
          plVar9[2] = lVar15;
          plVar9[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar9,&local_b8);
          lVar3 = plVar7[1];
          lVar4 = plVar7[2];
          lVar5 = plVar7[3];
          *plVar9 = *plVar7;
          plVar9[1] = lVar3;
          plVar9[2] = lVar4;
          plVar9[3] = lVar5;
          plVar7[2] = lVar15;
          plVar7[3] = 0xf;
          local_b8 = 0;
          FUN_180001300((undefined1 *)plVar7,&local_b8);
        }
        plVar14[8] = local_48;
        plVar14 = local_b0;
        plVar9 = local_a8;
      }
      FUN_180001630(local_68);
      FUN_180001630(local_88);
      plVar14 = plVar14 + 9;
      plVar9 = plVar9 + 9;
      local_b0 = plVar14;
      local_a8 = plVar9;
    } while (plVar14 != local_a0);
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_d8);
  return;
}

