// Function: FUN_18002a060
// Address: 18002a060
// Size: 153 bytes


char * FUN_18002a060(char *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != (char *)0x0) && (param_3 != (char *)0x0)) && (param_4 <= param_2)) &&
     (param_4 != 0)) {
    for (iVar2 = 0; iVar2 < (param_2 - param_4) + 1; iVar2 = iVar2 + 1) {
      if ((*param_1 == *param_3) && (iVar1 = memcmp(param_1,param_3,(longlong)param_4), iVar1 == 0))
      {
        return param_1;
      }
      param_1 = param_1 + 1;
    }
  }
  return (char *)0x0;
}

