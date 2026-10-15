// Function: FUN_180011620
// Address: 180011620
// Size: 431 bytes


void FUN_180011620(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  ulonglong local_res10;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[1];
  uVar8 = (longlong)param_3 - (longlong)param_2 >> 5;
  uVar6 = (longlong)plVar4 - (longlong)plVar3 >> 5;
  uVar7 = (longlong)(param_1[2] - (longlong)plVar3) >> 5;
  if (uVar7 < uVar8) {
    uVar10 = 0x7ffffffffffffff;
    local_res8 = 0x7ffffffffffffff;
    uVar6 = FUN_1800012f0();
    local_res10 = uVar6;
    puVar2 = FUN_180001e40(&local_res10,&local_res8);
    if (*puVar2 < uVar8) {
      FUN_180002090();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar9 = uVar7 >> 1;
    local_res8 = uVar10;
    local_res10 = uVar6;
    puVar2 = FUN_180001e40(&local_res10,&local_res8);
    uVar6 = uVar8;
    if ((uVar7 <= *puVar2 - uVar9) && (uVar6 = uVar9 + uVar7, uVar9 + uVar7 < uVar8)) {
      uVar6 = uVar8;
    }
    if (plVar3 != (longlong *)0x0) {
      if (plVar3 != plVar4) {
        do {
          FUN_180001630(plVar3);
          plVar3 = plVar3 + 4;
        } while (plVar3 != plVar4);
        plVar3 = (longlong *)*param_1;
      }
      plVar4 = plVar3;
      if ((0xfff < uVar7 << 5) &&
         (plVar4 = (longlong *)plVar3[-1],
         0x1f < (ulonglong)((longlong)plVar3 + (-8 - (longlong)plVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(plVar4);
    }
    FUN_18000df80(param_1,uVar6);
    uVar6 = FUN_18000e3a0((longlong)param_1,param_2,param_3,*param_1);
    param_1[1] = uVar6;
  }
  else if (uVar6 < uVar8) {
    FUN_180011c80(param_2,param_2 + uVar6 * 4,plVar3);
    uVar6 = FUN_18000e3a0((longlong)param_1,param_2 + uVar6 * 4,param_3,param_1[1]);
    param_1[1] = uVar6;
  }
  else {
    FUN_180011c80(param_2,param_3,plVar3);
    plVar4 = (longlong *)param_1[1];
    for (plVar5 = plVar3 + uVar8 * 4; plVar5 != plVar4; plVar5 = plVar5 + 4) {
      FUN_180001630(plVar5);
    }
    param_1[1] = (ulonglong)(plVar3 + uVar8 * 4);
  }
  return;
}

