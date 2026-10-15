// Function: FUN_180023b80
// Address: 180023b80
// Size: 453 bytes


longlong FUN_180023b80(longlong param_1,longlong param_2,longlong param_3)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  longlong lVar9;
  
  if (param_1 != param_2) {
    lVar11 = param_2 - param_3;
    lVar9 = param_3 + 0x20;
    do {
      lVar8 = lVar9 + -0x48;
      lVar10 = lVar11 + -0x20 + lVar8;
      param_3 = param_3 + -0x48;
      if (param_3 != lVar10) {
        plVar5 = (longlong *)FUN_1800016b0(param_3);
        if (0xf < (ulonglong)plVar5[3]) {
          pvVar1 = (void *)*plVar5;
          pvVar7 = pvVar1;
          if ((0xfff < plVar5[3] + 1U) &&
             (pvVar7 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) goto LAB_180023d3f;
          free(pvVar7);
        }
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        local_res8[0] = 0;
        FUN_180001300((undefined1 *)plVar5,local_res8);
        plVar6 = (longlong *)FUN_1800016b0(lVar10);
        local_res8[0] = 0;
        lVar2 = plVar6[1];
        lVar3 = plVar6[2];
        lVar4 = plVar6[3];
        *plVar5 = *plVar6;
        plVar5[1] = lVar2;
        plVar5[2] = lVar3;
        plVar5[3] = lVar4;
        plVar6[2] = 0;
        plVar6[3] = 0xf;
        FUN_180001300((undefined1 *)plVar6,local_res8);
      }
      if (lVar8 != lVar11 + lVar8) {
        plVar5 = (longlong *)FUN_1800016b0(lVar8);
        if (0xf < (ulonglong)plVar5[3]) {
          pvVar1 = (void *)*plVar5;
          pvVar7 = pvVar1;
          if ((0xfff < plVar5[3] + 1U) &&
             (pvVar7 = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) {
LAB_180023d3f:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar7);
        }
        plVar5[2] = 0;
        plVar5[3] = 0xf;
        local_res8[0] = 0;
        FUN_180001300((undefined1 *)plVar5,local_res8);
        plVar6 = (longlong *)FUN_1800016b0(lVar11 + lVar8);
        local_res8[0] = 0;
        lVar2 = plVar6[1];
        lVar3 = plVar6[2];
        lVar4 = plVar6[3];
        *plVar5 = *plVar6;
        plVar5[1] = lVar2;
        plVar5[2] = lVar3;
        plVar5[3] = lVar4;
        plVar6[2] = 0;
        plVar6[3] = 0xf;
        FUN_180001300((undefined1 *)plVar6,local_res8);
      }
      *(undefined8 *)(lVar9 + -0x28) = *(undefined8 *)(lVar11 + 0x20 + lVar8);
      lVar9 = lVar8;
    } while (param_1 != lVar10);
  }
  return param_3;
}

