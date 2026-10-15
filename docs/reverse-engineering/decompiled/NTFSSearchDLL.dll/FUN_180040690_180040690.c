// Function: FUN_180040690
// Address: 180040690
// Size: 301 bytes


void FUN_180040690(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  FUN_180003b10(&local_48);
  local_40 = param_1;
  plVar1 = FUN_180003ba0(param_1,&local_28);
  local_48 = *plVar1;
  while( true ) {
    local_38 = param_1;
    plVar1 = FUN_180003b90(param_1,local_18);
    uVar2 = FUN_180003ae0(&local_48,plVar1);
    if ((uVar2 & 0xff) == 0) break;
    plVar1 = (longlong *)FUN_180003b00(&local_48);
    local_50 = (undefined8 *)*plVar1;
    if (local_50 != (undefined8 *)0x0) {
      local_58 = (undefined8 *)thunk_FUN_18002be40(0x18);
      *local_58 = *local_50;
      local_58[1] = local_50[1];
      local_58[2] = local_50[2];
      local_30 = local_58;
      FUN_18002cd90(param_2,&local_58);
      local_58 = (undefined8 *)0x0;
    }
    local_50 = (undefined8 *)0x0;
    FUN_180003d40(&local_48,&local_20);
  }
  return;
}

