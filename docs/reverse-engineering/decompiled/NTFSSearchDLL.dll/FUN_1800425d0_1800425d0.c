// Function: FUN_1800425d0
// Address: 1800425d0
// Size: 337 bytes


void FUN_1800425d0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_30 = 0xfffffffffffffffe;
  if ((param_2 != (undefined8 *)0x0) && (param_4 != 0)) {
    local_60 = (undefined1 *)0x0;
    local_48 = (undefined8 *)0x0;
    FUN_180003b10(&local_68);
    plVar1 = FUN_180003ba0(param_2,&local_28);
    local_68 = *plVar1;
    while( true ) {
      plVar1 = FUN_180003b90(param_2,local_18);
      uVar2 = FUN_180003ae0(&local_68,plVar1);
      if ((uVar2 & 0xff) == 0) break;
      puVar3 = (undefined8 *)FUN_180003b00(&local_68);
      local_60 = (undefined1 *)*puVar3;
      local_58 = (undefined8 *)thunk_FUN_18002be40(0x20);
      if (local_58 == (undefined8 *)0x0) {
        local_50 = (undefined8 *)0x0;
      }
      else {
        local_50 = FUN_180042920(local_58,local_60,param_4);
      }
      local_40 = local_50;
      local_48 = local_50;
      local_38 = param_1 + 0x20;
      FUN_18002d7e0(local_38,&local_48);
      FUN_180003d40(&local_68,&local_20);
    }
  }
  return;
}

