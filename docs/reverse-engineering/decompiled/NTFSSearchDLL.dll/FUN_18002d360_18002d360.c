// Function: FUN_18002d360
// Address: 18002d360
// Size: 189 bytes


void FUN_18002d360(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  plVar1 = FUN_180003b90(param_3,local_10);
  uVar2 = FUN_180003ae0(&local_res20,plVar1);
  if ((uVar2 & 0xff) == 0) {
    return;
  }
  local_18 = local_res20;
  FUN_180003af0(&local_18);
  lVar3 = FUN_18002d070(local_res18);
  if (param_1 == lVar3) {
    uVar2 = FUN_180003ae0(&local_res10,&local_res20);
    if ((uVar2 & 0xff) == 0) {
      return;
    }
    uVar2 = FUN_180003ae0(&local_res10,&local_18);
    if ((uVar2 & 0xff) == 0) {
      return;
    }
  }
  FUN_18002d420(param_1,local_res10,(longlong)local_res18,local_res20,local_18,1);
  return;
}

