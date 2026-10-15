// Function: FUN_180031390
// Address: 180031390
// Size: 427 bytes


undefined8 FUN_180031390(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  byte local_res18 [8];
  char local_res20 [8];
  byte local_28;
  byte local_27;
  byte local_26 [2];
  undefined4 local_24 [5];
  
  local_24[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x50,8);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x48,8);
  local_res18[0] = *(byte *)(param_1 + 0x91) & 1;
  (**(code **)(*param_2 + 0x78))(param_2,local_res18,1);
  puVar1 = local_res8;
  if ((*(byte *)(param_1 + 0x72) & 2) == 0) {
    puVar1 = local_res10;
  }
  local_res8[0] = 1;
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  puVar1 = local_res8;
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    puVar1 = local_res10;
  }
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  (**(code **)(*param_2 + 0x78))(param_2,local_24,4);
  puVar1 = local_res8;
  if (-1 < *(char *)(param_1 + 0x72)) {
    puVar1 = local_res10;
  }
  (**(code **)(*param_2 + 0x78))(param_2,puVar1,1);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x6c,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x68,2);
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x6e,2);
  local_res20[0] = *(char *)(param_1 + 0x71);
  if (local_res20[0] == '\x02') {
    local_res20[0] = '\x05';
  }
  (**(code **)(*param_2 + 0x78))(param_2,local_res20,1);
  local_28 = *(byte *)(param_1 + 0x72) >> 7;
  (**(code **)(*param_2 + 0x78))(param_2,&local_28,1);
  local_27 = *(byte *)(param_1 + 0x73) >> 1 & 1;
  (**(code **)(*param_2 + 0x78))(param_2,&local_27,1);
  local_26[0] = *(byte *)(param_1 + 0x73) >> 2 & 1;
  (**(code **)(*param_2 + 0x78))(param_2,local_26,1);
  return 1;
}

