// Function: FUN_1800534e0
// Address: 1800534e0
// Size: 83 bytes


int * FUN_1800534e0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (0 < param_2)) && (param_3 != (int *)0x0)) && (3 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -3; iVar1 = iVar1 + 1) {
      if (((char)*param_1 == (char)*param_3) && (*param_1 == *param_3)) {
        return param_1;
      }
      param_1 = (int *)((longlong)param_1 + 1);
    }
  }
  return (int *)0x0;
}

