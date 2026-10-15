// Function: FUN_1800275e0
// Address: 1800275e0
// Size: 108 bytes


longlong * FUN_1800275e0(longlong *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (longlong *)0x0) && (0x11 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -0x11; iVar1 = iVar1 + 1) {
      if (((((char)*param_1 == (char)u_PowerPoin_1800936f8._0_8_) &&
           (*param_1 == u_PowerPoin_1800936f8._0_8_)) && (param_1[1] == u_PowerPoin_1800936f8._8_8_)
          ) && (*(wchar_t *)(param_1 + 2) == u_PowerPoin_1800936f8[8])) {
        return param_1;
      }
      param_1 = (longlong *)((longlong)param_1 + 1);
    }
  }
  return (longlong *)0x0;
}

