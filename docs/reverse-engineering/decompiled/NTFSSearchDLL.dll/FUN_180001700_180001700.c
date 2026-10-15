// Function: FUN_180001700
// Address: 180001700
// Size: 177 bytes


void FUN_180001700(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)(param_1 + 0x80)) {
    pvVar1 = *(void **)(param_1 + 0x68);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x80) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_1800017ab;
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xf;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(param_1 + 0x18);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_1800017ab:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

