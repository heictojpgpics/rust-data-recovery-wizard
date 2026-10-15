// Function: FUN_180025000
// Address: 180025000
// Size: 602 bytes


void FUN_180025000(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong *local_res20;
  
  lVar11 = (longlong)(param_3 - 1) >> 1;
  local_res18 = param_2;
  local_res20 = param_4;
  if (param_2 < lVar11) {
    lVar9 = 0;
    lVar10 = param_2;
    do {
      lVar1 = param_1 + lVar10 * 0x90;
      if (*(ulonglong *)(lVar1 + 0xc0) == *(ulonglong *)(lVar1 + 0x78)) {
        bVar12 = *(ulonglong *)(lVar1 + 0xd0) < *(ulonglong *)(lVar1 + 0x88);
      }
      else {
        bVar12 = *(ulonglong *)(lVar1 + 0x78) < *(ulonglong *)(lVar1 + 0xc0);
      }
      param_2 = lVar10 * 2 + ((ulonglong)bVar12 ^ 1) + 1;
      lVar1 = param_1 + param_2 * 0x48;
      lVar10 = param_1 + lVar10 * 0x48;
      if (lVar10 != lVar1) {
        plVar6 = (longlong *)FUN_1800016b0(lVar10);
        if (0xf < (ulonglong)plVar6[3]) {
          pvVar2 = (void *)*plVar6;
          pvVar8 = pvVar2;
          if ((0xfff < plVar6[3] + 1U) &&
             (pvVar8 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar8)))) goto LAB_180025254;
          free(pvVar8);
          lVar9 = 0;
        }
        plVar6[2] = lVar9;
        plVar6[3] = 0xf;
        local_res10[0] = 0;
        FUN_180001300((undefined1 *)plVar6,local_res10);
        plVar7 = (longlong *)FUN_1800016b0(lVar1);
        local_res10[0] = 0;
        lVar3 = plVar7[1];
        lVar4 = plVar7[2];
        lVar5 = plVar7[3];
        *plVar6 = *plVar7;
        plVar6[1] = lVar3;
        plVar6[2] = lVar4;
        plVar6[3] = lVar5;
        plVar7[2] = lVar9;
        plVar7[3] = 0xf;
        FUN_180001300((undefined1 *)plVar7,local_res10);
      }
      if (lVar10 + 0x20 != lVar1 + 0x20) {
        plVar6 = (longlong *)FUN_1800016b0(lVar10 + 0x20);
        if (0xf < (ulonglong)plVar6[3]) {
          pvVar2 = (void *)*plVar6;
          pvVar8 = pvVar2;
          if ((0xfff < plVar6[3] + 1U) &&
             (pvVar8 = *(void **)((longlong)pvVar2 + -8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar8)))) {
LAB_180025254:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar8);
          lVar9 = 0;
        }
        plVar6[2] = lVar9;
        plVar6[3] = 0xf;
        local_res10[0] = 0;
        FUN_180001300((undefined1 *)plVar6,local_res10);
        plVar7 = (longlong *)FUN_1800016b0(lVar1 + 0x20);
        local_res10[0] = 0;
        lVar3 = plVar7[1];
        lVar4 = plVar7[2];
        lVar5 = plVar7[3];
        *plVar6 = *plVar7;
        plVar6[1] = lVar3;
        plVar6[2] = lVar4;
        plVar6[3] = lVar5;
        plVar7[2] = lVar9;
        plVar7[3] = 0xf;
        FUN_180001300((undefined1 *)plVar7,local_res10);
      }
      *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
      lVar10 = param_2;
    } while (param_2 < lVar11);
  }
  plVar6 = local_res20;
  lVar10 = local_res18;
  if ((param_2 == lVar11) && ((param_3 & 1) == 0)) {
    FUN_180024ec0((longlong *)(param_1 + param_2 * 0x48),
                  (longlong *)(param_1 + (param_3 - 1) * 0x48));
    param_2 = param_3 - 1;
  }
  FUN_1800253c0(param_1,param_2,lVar10,plVar6,param_5);
  return;
}

