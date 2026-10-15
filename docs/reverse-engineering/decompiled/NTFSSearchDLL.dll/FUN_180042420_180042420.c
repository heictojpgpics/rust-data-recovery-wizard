// Function: FUN_180042420
// Address: 180042420
// Size: 243 bytes


void FUN_180042420(undefined8 *param_1,undefined8 param_2,short param_3,longlong param_4,
                  undefined8 *param_5,byte param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_38 = 0;
  FUN_180003b10(&local_48);
  local_40 = (longlong *)0x0;
  plVar1 = FUN_180003ba0(param_1,&local_28);
  local_48 = *plVar1;
  while( true ) {
    plVar1 = FUN_180003b90(param_1,local_18);
    uVar2 = FUN_180003ae0(&local_48,plVar1);
    if ((uVar2 & 0xff) == 0) break;
    local_40 = (longlong *)FUN_180003b00(&local_48);
    local_40 = (longlong *)*local_40;
    local_38 = local_40[1];
    local_30 = FUN_180042980(local_38,param_3,param_4,param_5,param_6);
    *local_40 = local_30;
    FUN_180003d40(&local_48,&local_20);
  }
  return;
}

