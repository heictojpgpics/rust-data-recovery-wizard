// Function: FUN_18002f210
// Address: 18002f210
// Size: 213 bytes


undefined8 *
FUN_18002f210(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  char *local_28;
  undefined1 *local_20;
  char *local_18;
  undefined *local_10;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_18002e0e0();
  local_28 = (char *)FUN_18002f190(&local_res10);
  local_18 = (char *)FUN_18002f190(&local_res18);
  FUN_18002f1b0((longlong *)&local_28,(longlong *)&local_18);
  local_20 = (undefined1 *)FUN_18002f1d0(&local_res20);
  for (; local_28 != local_18; local_28 = local_28 + 1) {
    local_10 = param_5;
    uVar1 = (*(code *)param_5)((int)*local_28);
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  FUN_18002f6b0(&local_res20,&local_20);
  *param_1 = local_res20;
  return param_1;
}

