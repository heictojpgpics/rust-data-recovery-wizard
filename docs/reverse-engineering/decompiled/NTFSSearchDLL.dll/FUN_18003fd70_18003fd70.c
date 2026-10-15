// Function: FUN_18003fd70
// Address: 18003fd70
// Size: 200 bytes


longlong FUN_18003fd70(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_38 = 0;
  FUN_180003b10(&local_48);
  local_40 = 0;
  local_30 = param_1;
  plVar1 = FUN_180003ba0(param_1,&local_20);
  local_48 = *plVar1;
  while( true ) {
    local_28 = param_1;
    plVar1 = FUN_180003b90(param_1,local_10);
    uVar2 = FUN_180003ae0(&local_48,plVar1);
    if ((uVar2 & 0xff) == 0) break;
    plVar1 = (longlong *)FUN_180003b00(&local_48);
    local_40 = *plVar1;
    if (local_40 != 0) {
      local_38 = local_38 + *(longlong *)(local_40 + 0x10);
    }
    FUN_180003d40(&local_48,&local_18);
  }
  return local_38;
}

