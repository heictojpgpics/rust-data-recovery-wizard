// Function: FUN_180041440
// Address: 180041440
// Size: 223 bytes


undefined8
FUN_180041440(longlong param_1,int *param_2,int param_3,longlong param_4,longlong *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if ((param_4 - *(longlong *)(param_1 + 8)) * lVar3 < *(longlong *)(param_1 + 0x118) * 10) {
    if ((*(int *)(lVar3 + -4 + (longlong)param_2) == 0) &&
       (*(int *)(lVar3 + -8 + (longlong)param_2) == 0)) {
      piVar1 = FUN_1800410e0(param_2,param_3 + -8);
      if (piVar1 != (int *)0x0) {
LAB_1800414a8:
        *(longlong *)(param_1 + 0x110) = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * lVar3;
        goto LAB_1800414ba;
      }
      if ((0x2800 < (ulonglong)((param_4 - *(longlong *)(param_1 + 8)) * lVar3)) &&
         (*param_5 + 1 < param_4)) {
        piVar1 = FUN_1800410e0((int *)((longlong)param_2 - (longlong)(param_3 / 2)),param_3);
        if (piVar1 != (int *)0x0) goto LAB_1800414a8;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_1800414ba:
    uVar2 = 0;
  }
  return uVar2;
}

