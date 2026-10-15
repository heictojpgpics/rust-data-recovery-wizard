// Function: FUN_180023d50
// Address: 180023d50
// Size: 454 bytes


longlong FUN_180023d50(longlong param_1,longlong param_2,longlong param_3)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  
  if (param_1 != param_2) {
    lVar9 = param_1 - param_3;
    lVar7 = param_3 + 0x20;
    do {
      lVar8 = lVar9 + -0x20 + lVar7;
      if (param_3 != lVar8) {
        plVar4 = (longlong *)FUN_1800016b0(param_3);
        if (0xf < (ulonglong)plVar4[3]) {
          pvVar1 = (void *)*plVar4;
          pvVar6 = pvVar1;
          if ((0xfff < plVar4[3] + 1U) &&
             (pvVar6 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) goto LAB_180023f10;
          free(pvVar6);
        }
        plVar4[2] = 0;
        plVar4[3] = 0xf;
        local_res8[0] = 0;
        FUN_180001300((undefined1 *)plVar4,local_res8);
        plVar5 = (longlong *)FUN_1800016b0(lVar8);
        local_res8[0] = 0;
        lVar8 = plVar5[1];
        lVar2 = plVar5[2];
        lVar3 = plVar5[3];
        *plVar4 = *plVar5;
        plVar4[1] = lVar8;
        plVar4[2] = lVar2;
        plVar4[3] = lVar3;
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        FUN_180001300((undefined1 *)plVar5,local_res8);
      }
      if (lVar7 != lVar9 + lVar7) {
        plVar4 = (longlong *)FUN_1800016b0(lVar7);
        if (0xf < (ulonglong)plVar4[3]) {
          pvVar1 = (void *)*plVar4;
          pvVar6 = pvVar1;
          if ((0xfff < plVar4[3] + 1U) &&
             (pvVar6 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
LAB_180023f10:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar6);
        }
        plVar4[2] = 0;
        plVar4[3] = 0xf;
        local_res8[0] = 0;
        FUN_180001300((undefined1 *)plVar4,local_res8);
        plVar5 = (longlong *)FUN_1800016b0(lVar9 + lVar7);
        local_res8[0] = 0;
        lVar8 = plVar5[1];
        lVar2 = plVar5[2];
        lVar3 = plVar5[3];
        *plVar4 = *plVar5;
        plVar4[1] = lVar8;
        plVar4[2] = lVar2;
        plVar4[3] = lVar3;
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        FUN_180001300((undefined1 *)plVar5,local_res8);
      }
      param_3 = param_3 + 0x48;
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar9 + 0x20 + lVar7);
      lVar7 = lVar7 + 0x48;
    } while (lVar9 + -0x20 + lVar7 != param_2);
  }
  return param_3;
}

