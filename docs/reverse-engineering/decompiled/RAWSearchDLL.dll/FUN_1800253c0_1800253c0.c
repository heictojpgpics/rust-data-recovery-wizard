// Function: FUN_1800253c0
// Address: 1800253c0
// Size: 502 bytes


void FUN_1800253c0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *pvVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  if (param_3 < param_2) {
    lVar12 = 0;
    do {
      lVar11 = param_2 + -1 >> 1;
      lVar1 = param_1 + lVar11 * 0x48;
      uVar3 = *(ulonglong *)(param_1 + 0x30 + lVar11 * 0x48);
      if (uVar3 == param_4[6]) {
        bVar13 = *(ulonglong *)(lVar1 + 0x40) < (ulonglong)param_4[8];
      }
      else {
        bVar13 = (ulonglong)param_4[6] < uVar3;
      }
      if (!bVar13) break;
      lVar2 = param_1 + param_2 * 0x48;
      if (lVar2 != lVar1) {
        plVar8 = (longlong *)FUN_1800016b0(lVar2);
        if (0xf < (ulonglong)plVar8[3]) {
          pvVar4 = (void *)*plVar8;
          pvVar10 = pvVar4;
          if ((0xfff < plVar8[3] + 1U) &&
             (pvVar10 = *(void **)((longlong)pvVar4 + -8),
             0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) goto LAB_1800255b0;
          free(pvVar10);
          lVar12 = 0;
        }
        plVar8[2] = lVar12;
        plVar8[3] = 0xf;
        param_5 = 0;
        FUN_180001300((undefined1 *)plVar8,&param_5);
        plVar9 = (longlong *)FUN_1800016b0(lVar1);
        param_5 = 0;
        lVar5 = plVar9[1];
        lVar6 = plVar9[2];
        lVar7 = plVar9[3];
        *plVar8 = *plVar9;
        plVar8[1] = lVar5;
        plVar8[2] = lVar6;
        plVar8[3] = lVar7;
        plVar9[2] = lVar12;
        plVar9[3] = 0xf;
        FUN_180001300((undefined1 *)plVar9,&param_5);
      }
      if (lVar2 + 0x20 != lVar1 + 0x20) {
        plVar8 = (longlong *)FUN_1800016b0(lVar2 + 0x20);
        if (0xf < (ulonglong)plVar8[3]) {
          pvVar4 = (void *)*plVar8;
          pvVar10 = pvVar4;
          if ((0xfff < plVar8[3] + 1U) &&
             (pvVar10 = *(void **)((longlong)pvVar4 + -8),
             0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
LAB_1800255b0:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar10);
          lVar12 = 0;
        }
        plVar8[2] = lVar12;
        plVar8[3] = 0xf;
        param_5 = 0;
        FUN_180001300((undefined1 *)plVar8,&param_5);
        plVar9 = (longlong *)FUN_1800016b0(lVar1 + 0x20);
        param_5 = 0;
        lVar5 = plVar9[1];
        lVar6 = plVar9[2];
        lVar7 = plVar9[3];
        *plVar8 = *plVar9;
        plVar8[1] = lVar5;
        plVar8[2] = lVar6;
        plVar8[3] = lVar7;
        plVar9[2] = lVar12;
        plVar9[3] = 0xf;
        FUN_180001300((undefined1 *)plVar9,&param_5);
      }
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
      param_2 = lVar11;
    } while (param_3 < lVar11);
  }
  FUN_180024ec0((longlong *)(param_1 + param_2 * 0x48),param_4);
  return;
}

