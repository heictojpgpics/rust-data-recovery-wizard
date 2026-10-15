// Function: FUN_180004850
// Address: 180004850
// Size: 927 bytes


void FUN_180004850(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  void *pvVar7;
  void *_Memory;
  int *piVar8;
  ulonglong uVar9;
  size_t sVar10;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStackY_2d8 [32];
  int *local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  ulonglong *local_290;
  undefined8 local_288;
  ulonglong local_278 [4];
  CHAR local_258;
  char acStack_257 [511];
  ulonglong local_58;
  size_t sVar11;
  
  local_288 = 0xfffffffffffffffe;
  local_58 = DAT_180086010 ^ (ulonglong)auStackY_2d8;
  if ((((longlong *)*param_1 == (longlong *)0x0) || (param_3 < 1)) || (param_4 == 0))
  goto LAB_180004bcd;
  lVar14 = (ulonglong)param_4 * param_3 + param_2;
  local_2a8 = (int *)0x0;
  lStack_2a0 = 0;
  local_298 = 0;
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  lVar12 = 0x14;
  if (0x3ff < uVar3) {
    lVar12 = 10;
  }
  lVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))();
  if (lVar14 + lVar12 < lVar5) {
    iVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))();
    uVar3 = iVar4 * (int)lVar12;
    if (uVar3 < 0x200) goto LAB_180004b8e;
    FUN_1800061a0((longlong *)&local_2a8,(ulonglong)uVar3,param_3);
    iVar4 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_2a8,lVar14,lVar12);
    if (iVar4 == 0) goto LAB_180004b8e;
    if ((((ulonglong)(lStack_2a0 - (longlong)local_2a8) < 0x800) ||
        (iVar4 = FUN_1800411d0(local_2a8), iVar4 == 0)) ||
       (iVar4 = FUN_1800411a0(local_2a8 + 0x100), iVar4 == 0)) {
      if (local_2a8 == (int *)0x0) goto LAB_180004bcd;
      piVar8 = local_2a8;
      if ((0xfff < (ulonglong)(local_298 - (longlong)local_2a8)) &&
         (piVar8 = *(int **)(local_2a8 + -2),
         0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)*(int **)(local_2a8 + -2))))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      uVar9 = 0;
      bVar2 = FUN_180004c00(param_1,(longlong *)&local_2a8,param_4,param_2,3,(int **)0x0);
      if ((bVar2) ||
         (bVar2 = FUN_180004c00(param_1,(longlong *)&local_2a8,param_4,param_2,0,(int **)0x0), bVar2
         )) {
        puVar6 = FUN_180006010(local_278,(longlong *)&local_2a8);
        pvVar7 = (void *)*puVar6;
        uVar13 = 0xffffffff;
        local_290 = puVar6;
        if ((void *)puVar6[1] != pvVar7) {
          do {
            iVar4 = FUN_180041140((int *)((longlong)pvVar7 + uVar9));
            pvVar7 = (void *)*puVar6;
            uVar13 = uVar9;
            if (iVar4 != 0) break;
            uVar9 = uVar9 + 0x400;
            uVar13 = 0xffffffff;
          } while (uVar9 < puVar6[1] - (longlong)pvVar7);
        }
        if (pvVar7 != (void *)0x0) {
          _Memory = pvVar7;
          if ((0xfff < puVar6[2] - (longlong)pvVar7) &&
             (_Memory = *(void **)((longlong)pvVar7 - 8),
             0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        if ((uVar13 != 0xffffffff) &&
           (piVar8 = (int *)((longlong)local_2a8 + uVar13), piVar8 != (int *)0x0)) {
          memset(&local_258,0,0x200);
          FUN_18003f3a0(piVar8,&local_258,0x400);
          sVar11 = 0xffffffffffffffff;
          do {
            sVar10 = sVar11 + 1;
            pcVar1 = acStack_257 + sVar11;
            sVar11 = sVar10;
          } while (*pcVar1 != '\0');
          FUN_1800026c0((longlong *)(param_1[1] + 0x18),&local_258,sVar10);
        }
        if (local_2a8 == (int *)0x0) goto LAB_180004bcd;
        piVar8 = local_2a8;
        if ((0xfff < (ulonglong)(local_298 - (longlong)local_2a8)) &&
           (piVar8 = *(int **)(local_2a8 + -2),
           0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)*(int **)(local_2a8 + -2))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      else {
        if (local_2a8 == (int *)0x0) goto LAB_180004bcd;
        piVar8 = local_2a8;
        if ((0xfff < (ulonglong)(local_298 - (longlong)local_2a8)) &&
           (piVar8 = *(int **)(local_2a8 + -2),
           0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)*(int **)(local_2a8 + -2))))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
  }
  else {
LAB_180004b8e:
    if (local_2a8 == (int *)0x0) goto LAB_180004bcd;
    piVar8 = local_2a8;
    if ((0xfff < (ulonglong)(local_298 - (longlong)local_2a8)) &&
       (piVar8 = *(int **)(local_2a8 + -2),
       0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)piVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  free(piVar8);
LAB_180004bcd:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_2d8);
  return;
}

