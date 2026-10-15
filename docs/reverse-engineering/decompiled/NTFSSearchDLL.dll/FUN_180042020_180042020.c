// Function: FUN_180042020
// Address: 180042020
// Size: 159 bytes


longlong FUN_180042020(longlong *param_1,int *param_2,int param_3,int param_4,int *param_5,
                      longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_180041850(*param_1,param_3,param_4);
  if (lVar2 == 0) {
    iVar1 = FUN_1800414c0(*param_1,param_3);
    *param_2 = iVar1;
  }
  else {
    if (param_5 != (int *)0x0) {
      *param_5 = (int)lVar2 - (int)*param_1;
    }
    if (param_6 != (longlong *)0x0) {
      *param_6 = param_1[2];
    }
  }
  return lVar2;
}

