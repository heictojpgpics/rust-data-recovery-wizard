// Function: FUN_180005260
// Address: 180005260
// Size: 442 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_180005260(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  char extraout_AL;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int **ppiVar8;
  ulonglong uVar9;
  int *local_40;
  undefined8 uStack_38;
  int *local_30;
  undefined8 uStack_28;
  longlong local_20;
  
  cVar5 = '\0';
  lVar1 = *(longlong *)(param_1[1] + 8);
  if ((((lVar1 == 0) || (lVar1 == 0x3f)) || (lVar1 == 0x800)) || (lVar1 == 0x8000)) {
    local_40 = _DAT_180073210;
    uStack_38 = _UNK_180073218;
    ppiVar8 = &local_40;
    do {
      uVar7 = (longlong)*ppiVar8 + lVar1;
      cVar5 = '\0';
      uVar6 = param_3;
      if (((longlong *)*param_1 == (longlong *)0x0) ||
         (lVar3 = (**(code **)(*(longlong *)*param_1 + 0x18))(), uVar6 = param_3,
         lVar3 - uVar7 < 0x200)) {
LAB_1800053d6:
        if (cVar5 != '\0') {
          return cVar5;
        }
      }
      else {
        iVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        local_30 = (int *)0x0;
        uStack_28 = 0;
        local_20 = 0;
        uVar6 = (ulonglong)(iVar2 * 2);
        FUN_1800061a0((longlong *)&local_30,uVar6,param_3);
        piVar4 = local_30;
        uVar9 = uVar7;
        iVar2 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_30,uVar7,2,0);
        if (iVar2 != 0) {
          FUN_1800045a0(param_1,piVar4,uVar6,uVar7,'\x01');
          cVar5 = extraout_AL;
          if (local_30 != (int *)0x0) {
            piVar4 = local_30;
            if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
               (piVar4 = *(int **)(local_30 + -2),
               0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)piVar4)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            free(piVar4);
          }
          goto LAB_1800053d6;
        }
        if (local_30 != (int *)0x0) {
          piVar4 = local_30;
          if ((0xfff < (ulonglong)(local_20 - (longlong)local_30)) &&
             (piVar4 = *(int **)(local_30 + -2),
             0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)piVar4)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(piVar4);
        }
        cVar5 = '\0';
        uVar6 = uVar9;
      }
      ppiVar8 = ppiVar8 + 1;
      param_3 = uVar6;
    } while (ppiVar8 != &local_30);
  }
  return cVar5;
}

