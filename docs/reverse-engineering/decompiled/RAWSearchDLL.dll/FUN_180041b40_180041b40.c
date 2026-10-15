// Function: FUN_180041b40
// Address: 180041b40
// Size: 187 bytes


undefined8
FUN_180041b40(longlong param_1,short *param_2,int param_3,longlong param_4,longlong *param_5)

{
  short *psVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if ((ulonglong)((param_4 - *(longlong *)(param_1 + 8)) * lVar3) < *(ulonglong *)(param_1 + 0x118))
  {
    if (*(short *)(lVar3 + -2 + (longlong)param_2) == 0) {
      psVar1 = FUN_180041520(param_2,param_3);
      if (psVar1 != (short *)0x0) {
LAB_180041b96:
        *(longlong *)(param_1 + 0x110) = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * lVar3;
        goto LAB_180041ba8;
      }
      if (*param_5 + 1 < param_4) {
        psVar1 = FUN_180041520((short *)((longlong)param_2 - (longlong)(param_3 / 2)),
                               param_3 / 2 + param_3);
        if (psVar1 != (short *)0x0) goto LAB_180041b96;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_180041ba8:
    uVar2 = 0;
  }
  return uVar2;
}

