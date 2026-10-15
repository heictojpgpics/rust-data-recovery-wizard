// Function: FUN_1800302e0
// Address: 1800302e0
// Size: 82 bytes


short * FUN_1800302e0(short *param_1)

{
  int iVar1;
  
  if (param_1 != (short *)0x0) {
    for (iVar1 = 0; iVar1 < 0x7e; iVar1 = iVar1 + 1) {
      if ((((char)*param_1 == (char)DAT_180093754) && (*param_1 == (short)DAT_180093754)) &&
         ((char)param_1[1] == (char)((uint)DAT_180093754 >> 0x10))) {
        return param_1;
      }
      param_1 = (short *)((longlong)param_1 + 1);
    }
  }
  return (short *)0x0;
}

