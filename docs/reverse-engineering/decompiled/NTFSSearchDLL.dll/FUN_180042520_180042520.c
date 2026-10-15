// Function: FUN_180042520
// Address: 180042520
// Size: 161 bytes


undefined8 FUN_180042520(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  FUN_180003b10(&local_38);
  local_30 = 0;
  plVar1 = FUN_180003ba0(param_1,&local_28);
  local_38 = *plVar1;
  while( true ) {
    plVar1 = FUN_180003b90(param_1,local_18);
    uVar2 = FUN_180003ae0(&local_38,plVar1);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    plVar1 = (longlong *)FUN_180003b00(&local_38);
    local_30 = *plVar1;
    if (param_2 == *(longlong *)(local_30 + 8)) break;
    FUN_180003d40(&local_38,&local_20);
  }
  return 1;
}

