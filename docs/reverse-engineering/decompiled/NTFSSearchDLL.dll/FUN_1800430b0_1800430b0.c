// Function: FUN_1800430b0
// Address: 1800430b0
// Size: 173 bytes


longlong FUN_1800430b0(longlong *param_1,int param_2,uint param_3,int *param_4,longlong *param_5)

{
  bool bVar1;
  undefined7 extraout_var;
  int local_18 [2];
  longlong local_10;
  
  bVar1 = FUN_180043030(param_1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    local_10 = 0;
  }
  else {
    local_18[0] = 0;
    local_10 = FUN_180042020(param_1,local_18,param_2,param_3,param_4,param_5);
    if (local_10 == 0) {
      local_10 = FUN_180041df0((longlong)param_1,local_18[0],param_2,param_3,param_4,param_5);
    }
  }
  return local_10;
}

