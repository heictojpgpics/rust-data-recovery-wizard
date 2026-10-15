// Function: FUN_180034660
// Address: 180034660
// Size: 117 bytes


void FUN_180034660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)FUN_18002be40(0x10);
  if (local_res8 != (undefined8 *)0x0) {
    *local_res8 = 0;
    local_res8[1] = 0;
  }
  *local_res8 = param_2;
  local_res8[1] = param_3;
  FUN_180034450(param_1 + 8,&local_res8);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return;
}

