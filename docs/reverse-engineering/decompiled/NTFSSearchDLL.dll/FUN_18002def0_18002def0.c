// Function: FUN_18002def0
// Address: 18002def0
// Size: 193 bytes


void FUN_18002def0(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong local_48;
  void *local_40;
  void *local_38;
  void *local_30;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  FUN_18002d890(param_1,&local_48);
  while( true ) {
    plVar2 = FUN_18002d820(param_1,local_18);
    bVar1 = FUN_18002d710(&local_48,plVar2);
    if (!bVar1) break;
    puVar3 = (undefined8 *)FUN_18002d7a0(&local_48);
    local_40 = (void *)*puVar3;
    if (local_40 != (void *)0x0) {
      local_38 = local_40;
      local_30 = local_40;
      if (local_40 == (void *)0x0) {
        local_28 = (void *)0x0;
      }
      else {
        local_28 = FUN_18002e0f0(local_40,1);
      }
      local_40 = (void *)0x0;
    }
    FUN_18002d750(&local_48,&local_20);
  }
  FUN_18002dc20(param_1);
  return;
}

