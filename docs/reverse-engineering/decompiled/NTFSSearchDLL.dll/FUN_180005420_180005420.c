// Function: FUN_180005420
// Address: 180005420
// Size: 364 bytes


char FUN_180005420(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  void *local_20;
  undefined8 uStack_18;
  longlong local_10;
  
  cVar1 = '\0';
  if ((longlong *)*param_1 != (longlong *)0x0) {
    lVar6 = *(longlong *)(param_1[1] + 0x10);
    if (lVar6 != 0) {
      lVar6 = *(longlong *)(param_1[1] + 8) + lVar6;
      lVar4 = (**(code **)(*(longlong *)*param_1 + 0x18))();
      if ((lVar6 <= lVar4) && (iVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))(), 0 < iVar2)) {
        local_20 = (void *)0x0;
        uStack_18 = 0;
        local_10 = 0;
        FUN_1800061a0((longlong *)&local_20,(longlong)iVar2,param_3);
        pvVar5 = local_20;
        iVar3 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,local_20,lVar6,1,0);
        if (iVar3 == 0) {
          if (local_20 == (void *)0x0) {
            return '\0';
          }
          pvVar5 = local_20;
          if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
             (pvVar5 = *(void **)((longlong)local_20 + -8),
             0x1f < (ulonglong)
                    ((longlong)local_20 + (-8 - (longlong)*(void **)((longlong)local_20 + -8))))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        else {
          cVar1 = FUN_1800043e0(param_1,pvVar5,(longlong)iVar2);
          if (cVar1 != '\0') {
            *(undefined4 *)(param_1[1] + 0x5c) = 1;
          }
          if (local_20 == (void *)0x0) {
            return cVar1;
          }
          pvVar5 = local_20;
          if ((0xfff < (ulonglong)(local_10 - (longlong)local_20)) &&
             (pvVar5 = *(void **)((longlong)local_20 + -8),
             0x1f < (ulonglong)((longlong)local_20 + (-8 - (longlong)pvVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(pvVar5);
      }
    }
  }
  return cVar1;
}

