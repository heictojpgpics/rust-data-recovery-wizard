// Function: FUN_1800402a0
// Address: 1800402a0
// Size: 315 bytes


void FUN_1800402a0(longlong param_1,longlong *param_2)

{
  longlong local_58;
  longlong local_50;
  longlong local_48;
  code *local_40;
  longlong local_38;
  code *local_30;
  code *local_28;
  code *local_20;
  longlong local_18;
  
  local_48 = 0;
  local_40 = *(code **)(*param_2 + 0x70);
  (*local_40)(param_2,&local_48,8);
  for (local_50 = 0; local_50 < local_48; local_50 = local_50 + 1) {
    local_58 = thunk_FUN_18002be40(0x18);
    local_30 = *(code **)(*param_2 + 0x70);
    local_38 = local_58;
    (*local_30)(param_2,local_58,8);
    local_28 = *(code **)(*param_2 + 0x70);
    (*local_28)(param_2,local_58 + 0x10,8);
    local_20 = *(code **)(*param_2 + 0x70);
    (*local_20)(param_2,local_58 + 8,8);
    local_18 = param_1;
    FUN_18002cd90(param_1,&local_58);
  }
  return;
}

