// Function: FUN_180057610
// Address: 180057610
// Size: 254 bytes


void FUN_180057610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 local_res8;
  
  *param_1 = neb::CJsonObject::vftable;
  FUN_180057cd0((longlong)param_1,param_2,param_3,param_4);
  FUN_180058110(param_1 + 0x11,&local_res8,*(longlong **)param_1[0x11],(longlong *)param_1[0x11]);
  free((void *)param_1[0x11]);
  FUN_180057fc0(param_1 + 0xe);
  free((void *)param_1[0xe]);
  if (0xf < (ulonglong)param_1[0xd]) {
    pvVar1 = (void *)param_1[10];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xd] + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180057708;
    free(pvVar2);
  }
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (0xf < (ulonglong)param_1[8]) {
    pvVar1 = (void *)param_1[5];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[8] + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_180057708:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

