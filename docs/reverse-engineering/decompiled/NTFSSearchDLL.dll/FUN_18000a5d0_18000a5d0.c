// Function: FUN_18000a5d0
// Address: 18000a5d0
// Size: 445 bytes


void FUN_18000a5d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined8 *local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_20;
  longlong local_18;
  
  local_b8 = 0xfffffffffffffffe;
  if ((*(longlong **)(param_1 + 0x100) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x88))(), cVar1 != '\0')) {
    return;
  }
  lVar2 = FUN_180002bf0(param_2);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_180002680(param_2);
    local_50 = __RTDynamicCast(*(undefined8 *)*puVar3,0,
                               &CSearchedPartitionInfo::RTTI_Type_Descriptor,
                               &CSearchedNTFSPartitionInfo::RTTI_Type_Descriptor,0);
    if (local_50 != 0) {
      FUN_18000ffd0(param_1,local_50);
      FUN_180034b80(local_a8);
      local_c0 = *(undefined8 *)(param_1 + 0x100);
      local_e0 = *(undefined8 *)(param_1 + 0xd8);
      local_e8 = *(undefined8 *)(param_1 + 0xd0);
      local_d8 = param_1 + 0x760;
      local_d0 = (longlong *)(param_1 + 0x770);
      local_18 = *(longlong *)(param_1 + 0x840);
      if (local_18 == 0) {
        local_18 = *(longlong *)(param_1 + 0x778) - *local_d0 >> 3;
        *(longlong *)(param_1 + 0x840) = local_18;
      }
      local_c8 = param_1 + 0x8b0;
      local_20 = *(undefined8 *)(param_1 + 0x108);
      local_88 = *(undefined8 *)(param_1 + 0xb8);
      local_48 = *(undefined8 *)(param_1 + 200);
      local_58 = &local_e8;
      local_40 = DAT_1800881b0;
      local_38 = 0;
      DAT_1800881b0 = DAT_1800881b0 + 1;
      FUN_180035990(local_a8);
      if (local_30 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x108) + 0x10))
                  (*(longlong **)(param_1 + 0x108),local_30,*(undefined8 *)*puVar3);
      }
      FUN_180034c20(local_a8);
    }
  }
  return;
}

