// Function: FUN_180030ed0
// Address: 180030ed0
// Size: 168 bytes


undefined4 FUN_180030ed0(ushort *param_1,ushort *param_2,longlong param_3)

{
  undefined4 local_24;
  longlong local_20;
  ushort *local_18;
  ushort *local_10;
  
  local_24 = 0;
  local_20 = param_3;
  local_18 = param_1;
  local_10 = param_2;
  if (param_3 != 0) {
    while( true ) {
      if (*local_18 < *local_10) break;
      if (*local_10 < *local_18) {
        return 1;
      }
      if (local_20 == 1) {
        return 0;
      }
      local_20 = local_20 + -1;
      local_18 = local_18 + 1;
      local_10 = local_10 + 1;
    }
    local_24 = 0xffffffff;
  }
  return local_24;
}

