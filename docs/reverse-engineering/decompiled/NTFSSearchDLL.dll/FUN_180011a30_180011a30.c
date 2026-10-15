// Function: FUN_180011a30
// Address: 180011a30
// Size: 295 bytes


longlong FUN_180011a30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulonglong uVar11;
  void *local_res8;
  ulonglong local_res18;
  
  lVar5 = param_1;
  FUN_1800026a0(param_1);
  pvVar2 = (void *)FUN_180002680(lVar5);
  puVar3 = (undefined8 *)FUN_180002680(param_2);
  uVar1 = puVar3[2];
  if (0xf < (ulonglong)puVar3[3]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  if (uVar1 < 0x10) {
    FUN_180001120(pvVar2,puVar3,0x10);
    uVar11 = 0xf;
  }
  else {
    local_res8 = (void *)FUN_180001110();
    local_res18 = uVar1 | 0xf;
    puVar4 = FUN_180002960(&local_res18,(ulonglong *)&local_res8);
    uVar11 = *puVar4;
    pvVar6 = (void *)(uVar11 + 1);
    if (pvVar6 < (void *)0x1000) {
      if (pvVar6 != (void *)0x0) {
        pvVar6 = (void *)FUN_18002be40((size_t)pvVar6);
      }
    }
    else {
      pvVar10 = (void *)(uVar11 + 0x28);
      if (pvVar10 <= pvVar6) {
        pvVar10 = (void *)0xffffffffffffffff;
      }
      lVar5 = FUN_18002be40((size_t)pvVar10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar6 = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar6 - 8) = lVar5;
    }
    local_res8 = pvVar6;
    puVar7 = (undefined8 *)FUN_180002680(&local_res8);
    pvVar6 = pvVar2;
    uVar8 = FUN_180002680(pvVar2);
    puVar9 = (undefined8 *)FUN_180001100(pvVar6,uVar8);
    *puVar9 = *puVar7;
    FUN_180001120(local_res8,puVar3,uVar1 + 1);
  }
  *(ulonglong *)((longlong)pvVar2 + 0x10) = uVar1;
  *(ulonglong *)((longlong)pvVar2 + 0x18) = uVar11;
  return param_1;
}

