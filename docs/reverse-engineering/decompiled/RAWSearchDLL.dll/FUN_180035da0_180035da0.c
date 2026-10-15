// Function: FUN_180035da0
// Address: 180035da0
// Size: 95 bytes


longlong * FUN_180035da0(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  
  if ((((param_1 != (longlong *)0x0) && (0 < param_2)) && (param_3 != (longlong *)0x0)) &&
     (9 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -9; iVar1 = iVar1 + 1) {
      if ((((char)*param_1 == (char)*param_3) && (*param_1 == *param_3)) &&
         ((short)param_1[1] == (short)param_3[1])) {
        return param_1;
      }
      param_1 = (longlong *)((longlong)param_1 + 1);
    }
  }
  return (longlong *)0x0;
}

