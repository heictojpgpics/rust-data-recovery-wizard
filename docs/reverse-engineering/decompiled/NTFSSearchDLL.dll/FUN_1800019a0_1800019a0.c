// Function: FUN_1800019a0
// Address: 1800019a0
// Size: 60 bytes


void FUN_1800019a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_res8 [4];
  
  local_res8[0] = param_1 + 0xa8;
  plVar1 = (longlong *)param_2[1];
  if ((longlong *)param_2[2] != plVar1) {
    *plVar1 = local_res8[0];
    param_2[1] = param_2[1] + 8;
    return;
  }
  FUN_180002970(param_2,plVar1,local_res8);
  return;
}

