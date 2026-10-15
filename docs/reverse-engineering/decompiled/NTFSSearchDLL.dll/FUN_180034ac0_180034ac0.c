// Function: FUN_180034ac0
// Address: 180034ac0
// Size: 90 bytes


void FUN_180034ac0(longlong param_1,undefined8 *param_2)

{
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)FUN_18002be40(0x10);
  if (local_res8 != (undefined8 *)0x0) {
    *local_res8 = *param_2;
    local_res8[1] = param_2[1];
  }
  FUN_180034450(param_1 + 8,&local_res8);
  return;
}

