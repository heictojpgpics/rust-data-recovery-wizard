// Function: FUN_180030d20
// Address: 180030d20
// Size: 287 bytes


undefined8
FUN_180030d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_52 [2];
  void *local_50;
  void *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  void *local_28;
  longlong local_20;
  void *local_18;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_50 = (void *)FUN_18002d070(param_1);
  local_40 = FUN_18002d070(param_2);
  local_38 = FUN_180030e40((longlong *)&local_50,&local_40);
  local_30 = local_res18;
  local_48 = (void *)FUN_180030f80(local_res18);
  FUN_180030f90(local_52);
  local_28 = local_48;
  local_20 = local_40;
  local_18 = local_50;
  uVar1 = FUN_180030fc0(local_50,local_40,local_48);
  FUN_18002f7a0(&local_res18,uVar1);
  return local_res18;
}

