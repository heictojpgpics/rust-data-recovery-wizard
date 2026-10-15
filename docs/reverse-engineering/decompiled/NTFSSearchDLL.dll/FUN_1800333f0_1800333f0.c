// Function: FUN_1800333f0
// Address: 1800333f0
// Size: 456 bytes


void FUN_1800333f0(ulonglong *param_1,void *param_2,longlong param_3,undefined1 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  size_t sVar8;
  undefined1 local_res20 [8];
  
  pvVar4 = (void *)*param_1;
  sVar8 = param_3 - (longlong)param_2;
  uVar2 = (longlong)(param_1[1] - (longlong)pvVar4) >> 3;
  uVar7 = (longlong)sVar8 >> 3;
  uVar5 = (longlong)(param_1[2] - (longlong)pvVar4) >> 3;
  local_res20[0] = param_4;
  if (uVar5 < uVar7) {
    if (0x1fffffffffffffff < uVar7) {
LAB_1800335b3:
      FUN_180002bd0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = uVar7;
    if ((uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) &&
       (uVar2 = (uVar5 >> 1) + uVar5, uVar2 < uVar7)) {
      uVar2 = uVar7;
    }
    if (pvVar4 != (void *)0x0) {
      pvVar6 = pvVar4;
      if ((0xfff < uVar5 * 8) &&
         (pvVar6 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar6)))) goto LAB_180033506;
      free(pvVar6);
    }
    uVar5 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar2 != 0) {
      if (0x1fffffffffffffff < uVar2) goto LAB_1800335b3;
      uVar2 = uVar2 * 8;
      if (uVar2 < 0x1000) {
        if (uVar2 != 0) {
          uVar5 = FUN_18002be40(uVar2);
        }
      }
      else {
        uVar5 = uVar2 + 0x27;
        if (uVar5 <= uVar2) {
          uVar5 = 0xffffffffffffffff;
        }
        lVar3 = FUN_18002be40(uVar5);
        if (lVar3 == 0) {
LAB_180033506:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar5 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar3;
      }
      *param_1 = uVar5;
      param_1[1] = uVar5;
      param_1[2] = *param_1 + uVar2;
    }
    pvVar4 = (void *)*param_1;
    FUN_180002ca0(local_res20);
    memmove(pvVar4,param_2,sVar8);
    pvVar4 = (void *)(sVar8 + (longlong)pvVar4);
  }
  else if (uVar2 < uVar7) {
    sVar8 = uVar2 * 8;
    memmove(pvVar4,param_2,sVar8);
    pvVar6 = (void *)(sVar8 + (longlong)param_2);
    pvVar4 = (void *)param_1[1];
    FUN_180002ca0(local_res20);
    memmove(pvVar4,pvVar6,param_3 - (longlong)pvVar6);
    pvVar4 = (void *)((param_3 - (longlong)pvVar6) + (longlong)pvVar4);
  }
  else {
    memmove(pvVar4,param_2,sVar8);
    pvVar4 = (void *)((longlong)pvVar4 + uVar7 * 8);
  }
  param_1[1] = (ulonglong)pvVar4;
  return;
}

