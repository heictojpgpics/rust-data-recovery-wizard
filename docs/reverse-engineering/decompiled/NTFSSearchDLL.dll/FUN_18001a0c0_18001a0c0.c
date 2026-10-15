// Function: FUN_18001a0c0
// Address: 18001a0c0
// Size: 163 bytes


ulonglong FUN_18001a0c0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  
  local_res8 = 8;
  local_res10 = 0x7fffffffffffffff;
  puVar2 = FUN_1800026b0(&local_res10,&local_res8);
  local_res8 = *puVar2 - 1;
  local_res18[0] = FUN_180001110();
  puVar2 = FUN_180002960(local_res18,&local_res8);
  local_res10 = param_2 | 7;
  uVar1 = *puVar2;
  if (local_res10 <= uVar1) {
    local_res8 = *(ulonglong *)(param_1 + 0x18);
    if (local_res8 <= uVar1 - (local_res8 >> 1)) {
      local_res8 = (local_res8 >> 1) + local_res8;
      puVar2 = FUN_1800026b0(&local_res10,&local_res8);
      return *puVar2;
    }
  }
  return uVar1;
}

