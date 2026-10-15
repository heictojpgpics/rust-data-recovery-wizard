// Function: FUN_180054000
// Address: 180054000
// Size: 113 bytes


int * FUN_180054000(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (0 < param_2)) && (param_3 != (int *)0x0)) && (6 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -6; iVar1 = iVar1 + 1) {
      if ((((char)*param_1 == (char)*param_3) && (*param_1 == *param_3)) &&
         (((short)param_1[1] == (short)param_3[1] &&
          (*(char *)((longlong)param_1 + 6) == *(char *)((longlong)param_3 + 6))))) {
        return param_1;
      }
      param_1 = (int *)((longlong)param_1 + 1);
    }
  }
  return (int *)0x0;
}

