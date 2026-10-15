// Function: FUN_1800403f0
// Address: 1800403f0
// Size: 368 bytes


void FUN_1800403f0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_58 = FUN_18002cdd0((longlong)param_1);
  local_50 = *(code **)(*param_2 + 0x78);
  (*local_50)(param_2,&local_58,8);
  FUN_180003b10(&local_68);
  local_48 = param_1;
  plVar1 = FUN_180003ba0(param_1,&local_20);
  local_68 = *plVar1;
  while( true ) {
    local_40 = param_1;
    plVar1 = FUN_180003b90(param_1,local_18);
    uVar2 = FUN_180003ae0(&local_68,plVar1);
    if ((uVar2 & 0xff) == 0) break;
    plVar1 = (longlong *)FUN_180003b00(&local_68);
    local_60 = *plVar1;
    local_38 = *(code **)(*param_2 + 0x78);
    (*local_38)(param_2,local_60,8);
    local_30 = *(code **)(*param_2 + 0x78);
    (*local_30)(param_2,local_60 + 0x10,8);
    local_28 = *(code **)(*param_2 + 0x78);
    (*local_28)(param_2,local_60 + 8,8);
    FUN_180003af0(&local_68);
  }
  return;
}

