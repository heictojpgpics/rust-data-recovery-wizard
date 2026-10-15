// Function: FUN_18004b070
// Address: 18004b070
// Size: 80 bytes


short * FUN_18004b070(short *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (short *)0x0) && (1 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -1; iVar1 = iVar1 + 1) {
      if (((char)*param_1 == (char)DAT_18008f04c) && (*param_1 == DAT_18008f04c)) {
        return param_1;
      }
      param_1 = (short *)((longlong)param_1 + 1);
    }
  }
  return (short *)0x0;
}

