// Function: FUN_180044890
// Address: 180044890
// Size: 95 bytes


short * FUN_180044890(short *param_1,int param_2,short *param_3)

{
  int iVar1;
  
  if ((((param_1 != (short *)0x0) && (0 < param_2)) && (param_3 != (short *)0x0)) && (2 < param_2))
  {
    for (iVar1 = 0; iVar1 < param_2 + -2; iVar1 = iVar1 + 1) {
      if ((((char)*param_1 == (char)*param_3) && (*param_1 == *param_3)) &&
         ((char)param_1[1] == (char)param_3[1])) {
        return param_1;
      }
      param_1 = (short *)((longlong)param_1 + 1);
    }
  }
  return (short *)0x0;
}

