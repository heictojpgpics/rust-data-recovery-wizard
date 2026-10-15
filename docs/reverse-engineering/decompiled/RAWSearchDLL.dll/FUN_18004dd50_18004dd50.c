// Function: FUN_18004dd50
// Address: 18004dd50
// Size: 93 bytes


int * FUN_18004dd50(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (0 < param_2)) && (param_3 != (int *)0x0)) && (4 < param_2)) {
    for (iVar1 = 0; iVar1 < param_2 + -4; iVar1 = iVar1 + 1) {
      if ((((char)*param_1 == (char)*param_3) && (*param_1 == *param_3)) &&
         ((char)param_1[1] == (char)param_3[1])) {
        return param_1;
      }
      param_1 = (int *)((longlong)param_1 + 1);
    }
  }
  return (int *)0x0;
}

