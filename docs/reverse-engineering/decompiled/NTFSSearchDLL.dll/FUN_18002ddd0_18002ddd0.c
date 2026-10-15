// Function: FUN_18002ddd0
// Address: 18002ddd0
// Size: 185 bytes


longlong FUN_18002ddd0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res10;
  longlong local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  uVar1 = FUN_18002d050(param_1);
  lVar2 = FUN_18002de90(uVar1,1);
  if (local_res10 == 0) {
    local_res10 = lVar2;
    local_res18[0] = lVar2;
  }
  uVar1 = FUN_18002d050(param_1);
  uVar3 = FUN_18002d070(lVar2);
  construct<>(uVar1,uVar3,&local_res10);
  uVar3 = FUN_18002d070(lVar2 + 8);
  construct<>(uVar1,uVar3,local_res18);
  return lVar2;
}

