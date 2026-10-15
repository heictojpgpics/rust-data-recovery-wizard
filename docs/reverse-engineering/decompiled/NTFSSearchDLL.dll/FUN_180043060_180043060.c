// Function: FUN_180043060
// Address: 180043060
// Size: 59 bytes


undefined4 FUN_180043060(longlong *param_1)

{
  bool bVar1;
  ushort uVar2;
  undefined7 extraout_var;
  undefined6 extraout_var_00;
  undefined4 local_18;
  
  bVar1 = FUN_180043030(param_1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = FUN_1800415a0(*param_1);
    local_18 = (undefined4)CONCAT62(extraout_var_00,uVar2);
  }
  return local_18;
}

