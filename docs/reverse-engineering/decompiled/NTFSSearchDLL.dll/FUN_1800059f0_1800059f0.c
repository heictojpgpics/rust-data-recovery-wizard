// Function: FUN_1800059f0
// Address: 1800059f0
// Size: 225 bytes


ulonglong FUN_1800059f0(undefined8 param_1,longlong *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *_Memory;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0xffffffff;
  uVar5 = 0;
  if (param_2[1] != *param_2) {
    do {
      uVar4 = uVar5;
      piVar3 = (int *)(*param_2 + uVar4);
      if (param_3 == 3) {
        iVar2 = FUN_1800411a0(piVar3);
LAB_180005a53:
        if (iVar2 != 0) break;
      }
      else {
        if (param_3 == 0) {
          iVar2 = FUN_180041170(piVar3);
          goto LAB_180005a53;
        }
        if (param_3 == 1) {
          uVar5 = FUN_1800410e0(piVar3);
          iVar2 = (int)uVar5;
          goto LAB_180005a53;
        }
        if (param_3 == 2) {
          iVar2 = FUN_180041140(piVar3);
          goto LAB_180005a53;
        }
      }
      uVar5 = uVar4 + 0x400;
      uVar4 = 0xffffffff;
    } while (uVar5 < (ulonglong)(param_2[1] - *param_2));
  }
  pvVar1 = (void *)*param_2;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(param_2[2] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return uVar4;
}

