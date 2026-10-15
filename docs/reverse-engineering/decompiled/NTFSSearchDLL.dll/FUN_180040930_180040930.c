// Function: FUN_180040930
// Address: 180040930
// Size: 342 bytes


longlong * FUN_180040930(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_20 = 0xfffffffffffffffe;
  FUN_180011820(param_1);
  bVar1 = FUN_180019dd0((longlong)param_2);
  if (!bVar1) {
    local_58 = param_2;
    FUN_180003ba0(param_2,&local_68);
    while( true ) {
      local_50 = param_2;
      plVar2 = FUN_180003b90(param_2,local_18);
      uVar3 = FUN_180003ae0(&local_68,plVar2);
      if ((uVar3 & 0xff) == 0) break;
      local_60 = (undefined8 *)thunk_FUN_18002be40(0x18);
      local_48 = local_60;
      puVar4 = (undefined8 *)FUN_180003b00(&local_68);
      local_40 = *(undefined8 *)*puVar4;
      *local_60 = local_40;
      plVar2 = (longlong *)FUN_180003b00(&local_68);
      local_38 = *(undefined8 *)(*plVar2 + 0x10);
      local_60[2] = local_38;
      plVar2 = (longlong *)FUN_180003b00(&local_68);
      local_30 = *(undefined8 *)(*plVar2 + 8);
      local_60[1] = local_30;
      local_28 = param_1;
      FUN_18002cd90((longlong)param_1,&local_60);
      FUN_180003af0(&local_68);
    }
  }
  return param_1;
}

