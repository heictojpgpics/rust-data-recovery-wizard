// Function: FUN_1800407d0
// Address: 1800407d0
// Size: 341 bytes


undefined8 * FUN_1800407d0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10 [2];
  
  plVar5 = param_1;
  if ((param_1 != param_2) && (plVar5 = param_2, bVar1 = FUN_180019dd0((longlong)param_2), !bVar1))
  {
    local_48 = param_2;
    FUN_180003ba0(param_2,&local_58);
    while( true ) {
      local_40 = param_2;
      plVar2 = FUN_180003b90(param_2,local_10);
      plVar5 = &local_58;
      uVar3 = FUN_180003ae0(plVar5,plVar2);
      if ((uVar3 & 0xff) == 0) break;
      local_50 = (undefined8 *)thunk_FUN_18002be40(0x18);
      local_38 = local_50;
      puVar4 = (undefined8 *)FUN_180003b00(&local_58);
      local_30 = *(undefined8 *)*puVar4;
      *local_50 = local_30;
      plVar5 = (longlong *)FUN_180003b00(&local_58);
      local_28 = *(undefined8 *)(*plVar5 + 0x10);
      local_50[2] = local_28;
      plVar5 = (longlong *)FUN_180003b00(&local_58);
      local_20 = *(undefined8 *)(*plVar5 + 8);
      local_50[1] = local_20;
      local_18 = param_1;
      FUN_18002cd90((longlong)param_1,&local_50);
      FUN_180003af0(&local_58);
    }
  }
  return plVar5;
}

