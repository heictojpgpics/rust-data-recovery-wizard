// Function: FUN_18002f4e0
// Address: 18002f4e0
// Size: 165 bytes


longlong FUN_18002f4e0(short *param_1,longlong param_2,ulonglong param_3,short param_4)

{
  bool bVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong local_res18;
  short local_res20 [4];
  short *local_18;
  ulonglong local_10 [2];
  
  if (param_2 == 0) {
LAB_18002f579:
    lVar3 = -1;
  }
  else {
    local_10[0] = param_2 - 1;
    local_res18 = param_3;
    local_res20[0] = param_4;
    puVar2 = FUN_180002960(&local_res18,local_10);
    local_18 = param_1 + *puVar2;
    while (bVar1 = eq_int_type(local_18,local_res20), !bVar1) {
      if (local_18 == param_1) goto LAB_18002f579;
      local_18 = local_18 + -1;
    }
    lVar3 = (longlong)local_18 - (longlong)param_1 >> 1;
  }
  return lVar3;
}

