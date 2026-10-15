// Function: FUN_180031540
// Address: 180031540
// Size: 471 bytes


undefined8 FUN_180031540(longlong param_1,longlong *param_2)

{
  byte local_res8 [8];
  char local_res10 [8];
  byte local_res18 [8];
  char local_res20 [8];
  undefined1 local_28 [4];
  undefined4 local_24 [5];
  
  local_24[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x50,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x48,8);
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) & 0xfe;
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | local_res8[0] & 1;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0xfd;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) | -(local_res8[0] != 0) & 2U;
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = local_res8[0] != 0 | *(byte *)(param_1 + 0x72) & 0xfe;
  (**(code **)(*param_2 + 0x70))(param_2,local_24,4);
  (**(code **)(*param_2 + 0x70))(param_2,local_res8,1);
  *(byte *)(param_1 + 0x72) = (local_res8[0] != 0) << 7 | *(byte *)(param_1 + 0x72) & 0x7f;
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x6c,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x68,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x6e,2);
  (**(code **)(*param_2 + 0x70))(param_2,local_28,1);
  local_res10[0] = '\0';
  (**(code **)(*param_2 + 0x70))(param_2,local_res10,1);
  local_res18[0] = 0;
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & 0x7f | local_res10[0] << 7;
  *(undefined1 *)(param_1 + 0x71) = local_28[0];
  (**(code **)(*param_2 + 0x70))(param_2,local_res18,1);
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xfd;
  local_res20[0] = '\0';
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) | (local_res18[0] & 1) * '\x02';
  (**(code **)(*param_2 + 0x70))(param_2,local_res20,1);
  *(byte *)(param_1 + 0x73) =
       *(byte *)(param_1 + 0x73) ^ (local_res20[0] << 2 ^ *(byte *)(param_1 + 0x73)) & 4;
  return 1;
}

