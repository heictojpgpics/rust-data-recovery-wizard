// Function: FUN_1800205b0
// Address: 1800205b0
// Size: 1563 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1800205b0(longlong param_1,undefined1 (*param_2) [32],int param_3,longlong param_4,
             longlong param_5)

{
  undefined1 (**ppauVar1) [32];
  undefined1 (**ppauVar2) [32];
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  char cVar9;
  uint uVar10;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  longlong *plVar15;
  char *pcVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [32];
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [32];
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auVar26 [32];
  undefined1 (*local_88) [32];
  undefined4 local_80;
  int local_7c;
  undefined1 (*local_78) [32];
  undefined1 (*pauStack_70) [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_48;
  int iVar11;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = 0;
  ppauVar1 = (undefined1 (**) [32])(param_1 + 0x110);
  local_7c = param_3;
  if (*ppauVar1 == (undefined1 (*) [32])0x0) {
    pauStack_70 = (undefined1 (*) [32])0x32;
    local_78 = param_2;
    puVar12 = (undefined8 *)FUN_18001fd30((longlong *)&local_78);
    pauVar13 = (undefined1 (*) [32])FUN_1800020c0(0x48);
    local_78 = pauVar13;
    if (pauVar13 == (undefined1 (*) [32])0x0) {
      pauVar13 = (undefined1 (*) [32])0x0;
    }
    else {
      FUN_180007060((longlong)pauVar13,puVar12);
      FUN_180007060((longlong)(pauVar13 + 1),puVar12 + 4);
      *(undefined8 *)pauVar13[2] = puVar12[8];
    }
    local_80 = 1;
    local_88 = pauVar13;
    if (ppauVar1 != &local_88) {
      local_88 = (undefined1 (*) [32])0x0;
      pauVar14 = *ppauVar1;
      *ppauVar1 = pauVar13;
      pauVar13 = (undefined1 (*) [32])0x0;
      if (pauVar14 != (undefined1 (*) [32])0x0) {
        local_78 = pauVar14;
        FUN_180001630((longlong *)(pauVar14 + 1));
        FUN_180001630((longlong *)pauVar14);
        free(pauVar14);
        pauVar13 = (undefined1 (*) [32])0x0;
      }
    }
    local_80 = 0;
    if (pauVar13 != (undefined1 (*) [32])0x0) {
      local_78 = pauVar13;
      FUN_180001630((longlong *)(pauVar13 + 1));
      FUN_180001630((longlong *)pauVar13);
      free(pauVar13);
    }
    puVar12 = FUN_180020090((undefined8 *)*ppauVar1);
    pauVar14 = (undefined1 (*) [32])FUN_1800020c0(0x10);
    pauVar22 = (undefined1 (*) [32])0x0;
    pauVar13 = pauVar22;
    if (pauVar14 != (undefined1 (*) [32])0x0) {
      uVar6 = puVar12[1];
      *(undefined8 *)*pauVar14 = *puVar12;
      *(undefined8 *)((longlong)*pauVar14 + 8) = uVar6;
      pauVar13 = pauVar14;
    }
    local_80 = 2;
    ppauVar2 = (undefined1 (**) [32])(param_1 + 0x118);
    local_88 = pauVar13;
    if (ppauVar2 != &local_88) {
      local_88 = (undefined1 (*) [32])0x0;
      pauVar14 = *ppauVar2;
      *ppauVar2 = pauVar13;
      pauVar13 = pauVar22;
      if (pauVar14 != (undefined1 (*) [32])0x0) {
        free(pauVar14);
        pauVar13 = (undefined1 (*) [32])0x0;
      }
    }
    local_80 = 0;
    if (pauVar13 != (undefined1 (*) [32])0x0) {
      free(pauVar13);
    }
    FUN_18001fae0(&local_68);
    FUN_180021ba0(local_60,(longlong *)&local_78,(undefined8 *)*ppauVar1);
    pauVar13 = local_78;
    if (local_78 != pauStack_70) {
      do {
        pauVar22 = (undefined1 (*) [32])((longlong)*pauVar22 + 1);
        pauVar14 = *(undefined1 (**) [32])((longlong)*pauVar13 + 0x10);
        if (*(char *)((longlong)*pauVar14 + 0x19) == '\0') {
          cVar9 = *(char *)((longlong)**(undefined1 (**) [32])*pauVar14 + 0x19);
          pauVar13 = pauVar14;
          pauVar14 = *(undefined1 (**) [32])*pauVar14;
          while (cVar9 == '\0') {
            cVar9 = *(char *)((longlong)**(undefined1 (**) [32])*pauVar14 + 0x19);
            pauVar13 = pauVar14;
            pauVar14 = *(undefined1 (**) [32])*pauVar14;
          }
        }
        else {
          cVar9 = *(char *)((longlong)**(undefined1 (**) [32])((longlong)*pauVar13 + 8) + 0x19);
          pauVar18 = *(undefined1 (**) [32])((longlong)*pauVar13 + 8);
          pauVar14 = pauVar13;
          while ((pauVar13 = pauVar18, cVar9 == '\0' &&
                 (pauVar14 == *(undefined1 (**) [32])((longlong)*pauVar13 + 0x10)))) {
            cVar9 = *(char *)((longlong)**(undefined1 (**) [32])((longlong)*pauVar13 + 8) + 0x19);
            pauVar18 = *(undefined1 (**) [32])((longlong)*pauVar13 + 8);
            pauVar14 = pauVar13;
          }
        }
      } while (pauVar13 != pauStack_70);
      if ((pauVar22 != (undefined1 (*) [32])0x0) &&
         (plVar15 = FUN_180020f00(local_60,*(undefined8 **)(param_1 + 0x110)),
         *plVar15 != plVar15[1])) {
        puVar12 = FUN_180020f00(local_60,(undefined8 *)*ppauVar1);
        *(undefined8 **)(param_1 + 0x120) = puVar12;
        goto LAB_180020846;
      }
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
LAB_180020846:
  iVar11 = local_7c;
  lVar19 = *(longlong *)(param_1 + 8);
  local_78 = (undefined1 (*) [32])&local_68;
  puVar12 = &local_68;
  plVar15 = (longlong *)FUN_180007060((longlong)puVar12,(undefined8 *)*ppauVar1);
  FUN_180020bd0(puVar12,plVar15,param_4 - lVar19);
  FUN_18001fae0(&local_68);
  plVar15 = *(longlong **)(param_1 + 0x120);
  if (plVar15 == (longlong *)0x0) {
    if (8 < *(int *)(param_5 + 0x14)) {
      uVar24 = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * (longlong)iVar11;
      *(ulonglong *)(param_1 + 0x10) = uVar24;
      if (uVar24 < (ulonglong)(**(longlong **)(param_1 + 0x118) << 10)) {
        uVar24 = 0;
      }
      *(ulonglong *)(param_1 + 0x10) = uVar24;
      return 1;
    }
  }
  else {
    if (*(longlong *)*param_2 == 0) {
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 8);
      lVar17 = lVar19;
      if (lVar19 == 0) {
        lVar17 = 0x7d000;
      }
      if ((ulonglong)(((param_4 - *(longlong *)(param_1 + 8)) + 1) * (longlong)iVar11) <
          (ulonglong)(lVar17 * 0x400)) {
        return 2;
      }
      lVar19 = lVar19 << 10;
      *(longlong *)(param_1 + 0x10) = lVar19;
      if (*(longlong *)(*(longlong *)(param_1 + 0x118) + 8) != 0) {
        lVar19 = 0;
      }
      *(longlong *)(param_1 + 0x10) = lVar19;
      return 1;
    }
    pauVar13 = (undefined1 (*) [32])plVar15[1];
    pauVar14 = (undefined1 (*) [32])*plVar15;
    if (pauVar14 != pauVar13) {
      pauVar22 = pauVar14;
      pauVar18 = pauVar14;
      pauVar7 = pauVar14;
      if (pauVar14 != pauVar13) {
        while (pauVar22 = pauVar18, pauVar18 = (undefined1 (*) [32])(pauVar7[2] + 8),
              pauVar18 != pauVar13) {
          pauVar8 = pauVar7 + 3;
          pauVar7 = pauVar18;
          if (*(ulonglong *)(*pauVar8 + 0x18) <= *(ulonglong *)(pauVar22[1] + 0x10)) {
            pauVar18 = pauVar22;
          }
        }
      }
      lVar19 = *(longlong *)(pauVar22[1] + 0x10);
    }
    else {
      lVar19 = 0;
    }
    uVar24 = 0;
    uVar23 = (ulonglong)iVar11;
    uVar20 = uVar23;
    if (param_4 + 1 < *(longlong *)(param_5 + 8)) {
      uVar20 = lVar19 + uVar23;
    }
    if (*(int *)(param_5 + 0x14) < 8) {
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 8);
      lVar17 = lVar19;
      if (lVar19 == 0) {
        lVar17 = 0x7d000;
      }
      if (((param_4 - *(longlong *)(param_1 + 8)) + 1) * uVar23 < (ulonglong)(lVar17 * 0x400)) {
        return 2;
      }
      *(longlong *)(param_1 + 0x10) = lVar19 << 10;
      uVar20 = lVar19 << 10;
      if (*(longlong *)(*(longlong *)(param_1 + 0x118) + 8) != 0) {
        uVar20 = uVar24;
      }
      *(ulonglong *)(param_1 + 0x10) = uVar20;
      return 1;
    }
    local_88 = (undefined1 (*) [32])((ulonglong)local_88 & 0xffffffff00000000);
    local_78 = pauVar14;
    if (uVar20 != 0) {
      do {
        iVar11 = (int)uVar24;
        if (pauVar14 != pauVar13) {
          do {
            uVar21 = 0;
            uVar23 = *(ulonglong *)(pauVar14[1] + 0x10);
            if ((longlong)(int)uVar24 + uVar23 < uVar20) {
              pauVar22 = pauVar14 + 1;
              if (0xf < *(ulonglong *)(pauVar14[1] + 0x18)) {
                pauVar22 = *(undefined1 (**) [32])*pauVar22;
              }
              if (uVar23 < 0x11) {
                cVar9 = FUN_18001dc70(param_2,pauVar22,uVar23);
                if (cVar9 != '\0') {
LAB_180020acb:
                  uVar24 = ((longlong)local_7c * (param_4 - *(longlong *)(param_1 + 8)) -
                           *(longlong *)pauVar14[2]) + (longlong)((int)local_88 + 0x32);
                  *(ulonglong *)(param_1 + 0x10) = uVar24;
                  if (uVar24 < (ulonglong)(**(longlong **)(param_1 + 0x118) << 10)) {
                    uVar24 = 0;
                  }
                  *(ulonglong *)(param_1 + 0x10) = uVar24;
                  return 1;
                }
              }
              else {
                if (0x1f < uVar23) {
                  bVar25 = (undefined1 (*) [32])0x20 < param_2;
                  pauVar18 = param_2;
                  do {
                    auVar26 = *(undefined1 (*) [32])
                               (((longlong)pauVar22 - (longlong)param_2) + (longlong)pauVar18);
                    auVar4 = vpcmpeqb_avx(SUB3216(*pauVar18,0x10),auVar26._16_16_);
                    auVar5 = vpcmpeqb_avx(SUB3216(*pauVar18,0),auVar26._0_16_);
                    auVar26._16_16_ = auVar4;
                    auVar26._0_16_ = auVar5;
                    vptest_avx(auVar26,_DAT_18006ef80);
                    if (!bVar25) goto LAB_180020a07;
                    uVar21 = uVar21 + 0x20;
                    pauVar18 = pauVar18 + 1;
                    uVar3 = (0x20 - (longlong)param_2) + (longlong)pauVar18;
                    bVar25 = uVar3 < uVar23;
                  } while (uVar3 <= uVar23);
                }
                if (uVar23 <= uVar21) goto LAB_180020acb;
                pcVar16 = *param_2 + uVar21;
                while (*pcVar16 == pcVar16[(longlong)pauVar22 - (longlong)param_2]) {
                  pcVar16 = pcVar16 + 1;
                  if (uVar23 <= (ulonglong)((longlong)pcVar16 - (longlong)param_2))
                  goto LAB_180020acb;
                }
              }
            }
LAB_180020a07:
            pauVar14 = (undefined1 (*) [32])(pauVar14[2] + 8);
          } while (pauVar14 != pauVar13);
          pauVar14 = local_78;
          iVar11 = (int)local_88;
        }
        uVar10 = iVar11 + 1;
        local_88 = (undefined1 (*) [32])CONCAT44(local_88._4_4_,uVar10);
        param_2 = (undefined1 (*) [32])(*param_2 + 1);
        if (uVar20 <= (ulonglong)(longlong)(int)uVar10) break;
        uVar24 = (ulonglong)uVar10;
      } while( true );
    }
  }
  lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 8);
  lVar17 = lVar19;
  if (lVar19 == 0) {
    lVar17 = 0x7d000;
  }
  if ((ulonglong)(((param_4 - *(longlong *)(param_1 + 8)) + 1) * (longlong)local_7c) <
      (ulonglong)(lVar17 * 0x400)) {
    return 2;
  }
  lVar19 = lVar19 << 10;
  *(longlong *)(param_1 + 0x10) = lVar19;
  if (*(longlong *)(*(longlong *)(param_1 + 0x118) + 8) != 0) {
    lVar19 = 0;
  }
  *(longlong *)(param_1 + 0x10) = lVar19;
  return 1;
}

