// Function: FUN_180046a10
// Address: 180046a10
// Size: 121 bytes


undefined4 FUN_180046a10(longlong param_1)

{
  bool bVar1;
  ushort uVar2;
  undefined6 extraout_var_00;
  longlong lVar3;
  undefined7 extraout_var;
  undefined4 local_18;
  
  local_18 = 1;
  uVar2 = FUN_180041940(param_1);
  if ((int)CONCAT62(extraout_var_00,uVar2) == 0) {
    local_18 = 0;
  }
  else {
    FUN_1800416a0(param_1);
    lVar3 = FUN_180041850(param_1,0xa0,0);
    if (lVar3 == 0) {
      local_18 = 0;
    }
    else {
      bVar1 = FUN_180045400(lVar3);
      if ((int)CONCAT71(extraout_var,bVar1) != 0) {
        local_18 = 0;
      }
    }
  }
  return local_18;
}

