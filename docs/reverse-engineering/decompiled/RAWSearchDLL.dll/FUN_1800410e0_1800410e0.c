// Function: FUN_1800410e0
// Address: 1800410e0
// Size: 78 bytes


int * FUN_1800410e0(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (3 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -3; iVar1 = iVar1 + 1) {
      if (((char)*param_1 == (char)DAT_180093910) && (*param_1 == DAT_180093910)) {
        return param_1;
      }
      param_1 = (int *)((longlong)param_1 + 1);
    }
  }
  return (int *)0x0;
}

