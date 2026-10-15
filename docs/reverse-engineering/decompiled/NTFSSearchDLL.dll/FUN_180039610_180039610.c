// Function: FUN_180039610
// Address: 180039610
// Size: 716 bytes


void FUN_180039610(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong *plVar8;
  
  *param_1 = CSearchedNTFSPartitionInfo::vftable;
  puVar5 = param_1 + 0x2b;
  FUN_180039d00((longlong)puVar5);
  pvVar1 = (void *)param_1[0x31];
  if (pvVar1 != (void *)0x0) {
    pvVar7 = pvVar1;
    if ((0xfff < (ulonglong)((param_1[0x33] - (longlong)pvVar1 >> 3) * 8)) &&
       (pvVar7 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  puVar4 = param_1 + 0x2d;
  plVar3 = (longlong *)FUN_180002680(puVar4);
  puVar2 = (undefined8 *)*plVar3;
  plVar8 = (longlong *)*puVar2;
  *puVar2 = puVar2;
  *(longlong *)(*plVar3 + 8) = *plVar3;
  puVar4 = (undefined8 *)FUN_180002670((longlong)puVar4);
  *puVar4 = 0;
  if (plVar8 != (longlong *)*plVar3) {
    do {
      plVar6 = (longlong *)*plVar8;
      free(plVar8);
      plVar8 = plVar6;
    } while (plVar6 != (longlong *)*plVar3);
  }
  free((void *)*plVar3);
  FUN_180039d00((longlong)puVar5);
  puVar5 = (undefined8 *)FUN_180002680(puVar5);
  free((void *)*puVar5);
  plVar8 = param_1 + 0x29;
  plVar3 = (longlong *)*plVar8;
  plVar6 = (longlong *)*plVar3;
  *plVar3 = (longlong)plVar3;
  *(longlong *)(*plVar8 + 8) = *plVar8;
  param_1[0x2a] = 0;
  if (plVar6 != (longlong *)*plVar8) {
    do {
      plVar3 = (longlong *)*plVar6;
      free(plVar6);
      plVar6 = plVar3;
    } while (plVar3 != (longlong *)*plVar8);
  }
  free((void *)*plVar8);
  pvVar1 = (void *)param_1[0x26];
  if (pvVar1 != (void *)0x0) {
    pvVar7 = pvVar1;
    if ((0xfff < (ulonglong)((param_1[0x28] - (longlong)pvVar1 >> 3) * 8)) &&
       (pvVar7 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
  }
  pvVar1 = (void *)param_1[0x23];
  if (pvVar1 != (void *)0x0) {
    pvVar7 = pvVar1;
    if ((0xfff < (ulonglong)((param_1[0x25] - (longlong)pvVar1 >> 3) * 8)) &&
       (pvVar7 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
  }
  pvVar1 = (void *)param_1[0x20];
  if (pvVar1 != (void *)0x0) {
    pvVar7 = pvVar1;
    if ((0xfff < (ulonglong)((param_1[0x22] - (longlong)pvVar1 >> 3) * 8)) &&
       (pvVar7 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar7);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  *param_1 = CSearchedPartitionInfo::vftable;
  return;
}

