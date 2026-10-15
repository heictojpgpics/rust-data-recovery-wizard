// Function: FUN_18002d080
// Address: 18002d080
// Size: 592 bytes


longlong *
FUN_18002d080(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6)

{
  bool bVar1;
  bool bVar2;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *plVar3;
  ulonglong uVar4;
  longlong local_res18;
  longlong local_res20;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  if (param_6 < 2) {
    *param_2 = param_3;
    return param_2;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_18002d590(&local_60,param_3,param_6 >> 1);
  FUN_18002d080(param_1,&local_20,local_res18,local_60,param_5,param_6 >> 1);
  local_res18 = *extraout_RAX;
  FUN_18002d080(param_1,&local_18,local_60,local_res20,param_5,param_6 - (param_6 >> 1));
  local_60 = *extraout_RAX_00;
  local_58 = local_res18;
  bVar1 = true;
  do {
    local_50 = (longlong *)FUN_180003b00(&local_res18);
    local_48 = (longlong *)FUN_180003b00(&local_60);
    bVar2 = FUN_18002cd40(param_5,local_48,local_50);
    if (bVar2) {
      if (bVar1) {
        local_58 = local_60;
      }
      plVar3 = FUN_180003d40(&local_60,local_10);
      local_40 = *plVar3;
      local_38 = local_res18;
      local_28 = local_res18;
      local_30 = local_40;
      FUN_18002d360(param_1,local_res18,(undefined8 *)param_1,local_40);
      plVar3 = &local_res20;
      uVar4 = FUN_180007360(&local_60,plVar3);
      if ((uVar4 & 0xff) != 0) {
        *param_2 = local_58;
        return plVar3;
      }
    }
    else {
      FUN_180003af0(&local_res18);
      plVar3 = &local_60;
      uVar4 = FUN_180007360(&local_res18,plVar3);
      if ((uVar4 & 0xff) != 0) {
        *param_2 = local_58;
        return plVar3;
      }
    }
    bVar1 = false;
  } while( true );
}

