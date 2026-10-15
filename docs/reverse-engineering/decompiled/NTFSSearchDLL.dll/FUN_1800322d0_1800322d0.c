// Function: FUN_1800322d0
// Address: 1800322d0
// Size: 576 bytes


void FUN_1800322d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180086010 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uVar4 = 0;
    local_50 = *(ulonglong *)(param_1 + 0x98) & 0xffffffff;
    local_40 = 0;
    local_30 = *(ulonglong *)(param_1 + 0xb8) & 0xffffffff;
    uStack_38 = *(ulonglong *)(param_1 + 0xb0) & 0xffffffff;
    FUN_180031390(param_1,param_2);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x50,8);
    (**(code **)(*param_2 + 0x78))(param_2,&local_50,0x28);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1c8,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1d0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1d4,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e4,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1ec,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1e8,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x1f0,4);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x200,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x208,8);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x288,1);
    (**(code **)(*param_2 + 0x78))(param_2,param_1 + 0x289,1);
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      (**(code **)(*param_2 + 0x78))
                (param_2,*(longlong *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
    }
    local_58[0] = (undefined4)(*(longlong *)(param_1 + 0x218) - *(longlong *)(param_1 + 0x210) >> 3)
    ;
    (**(code **)(*param_2 + 0x78))(param_2,local_58,4);
    puVar1 = *(undefined8 **)(param_1 + 0x218);
    puVar2 = *(undefined8 **)(param_1 + 0x210);
    if (puVar2 != puVar1) {
      uVar3 = (ulonglong)((longlong)puVar1 + (7 - (longlong)puVar2)) >> 3;
      if (puVar1 < puVar2) {
        uVar3 = uVar4;
      }
      if (uVar3 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar2 + 0x20))((longlong *)*puVar2,param_2);
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar4 != uVar3);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_78);
  return;
}

