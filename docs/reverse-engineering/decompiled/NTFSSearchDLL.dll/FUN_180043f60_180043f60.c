// Function: FUN_180043f60
// Address: 180043f60
// Size: 863 bytes


bool FUN_180043f60(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool local_d7;
  undefined8 *local_d0;
  longlong local_c8;
  uint local_c0;
  uint local_bc;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_38 = 0xfffffffffffffffe;
  local_d7 = false;
  if ((param_2 != (longlong *)0x0) &&
     (local_d0 = (undefined8 *)*param_2, local_d0 != (undefined8 *)0x0)) {
    local_d7 = false;
    FUN_18002e8a0(param_3,&local_c8,local_d0 + 2);
    while( true ) {
      plVar1 = FUN_18002e840(param_3,&local_30,local_d0 + 2);
      uVar2 = FUN_180003ae0(&local_c8,plVar1);
      if ((uVar2 & 0xff) == 0) break;
      lVar3 = FUN_180011130(&local_c8);
      if (*(longlong *)(lVar3 + 8) != 0) {
        lVar3 = FUN_180011130(&local_c8);
        local_d7 = *(int *)(*(longlong *)(lVar3 + 8) + 0xc) == *(int *)((longlong)local_d0 + 0xc);
        local_c0 = (uint)local_d7;
        if (local_d7) {
          if (*(char *)((longlong)local_d0 + 0xf6) == '\0') {
            lVar3 = FUN_180011130(&local_c8);
            local_78 = *(longlong *)(lVar3 + 8);
            local_bc = FUN_1800398f0((longlong)local_d0);
            FUN_1800398e0(local_78,local_bc);
            local_a0 = local_d0 + 0x2b;
            FUN_18002e900(local_a0,&local_b0);
            FUN_180003b90(local_a0,&local_70);
            while (uVar2 = FUN_180003ae0(&local_b0,&local_70), (uVar2 & 0xff) != 0) {
              puVar4 = (undefined8 *)FUN_180003b00(&local_b0);
              FUN_1800065b0(local_48,puVar4);
              lVar3 = FUN_180011130(&local_c8);
              local_68 = (longlong *)(*(longlong *)(lVar3 + 8) + 0x158);
              FUN_180004360(local_68,local_48);
              FUN_180005f30((longlong)local_48);
              FUN_180003af0(&local_b0);
            }
            local_60 = local_d0;
            local_a8 = local_d0;
            if (local_d0 == (undefined8 *)0x0) {
              local_50 = 0;
            }
            else {
              local_58 = *(code **)*local_d0;
              local_50 = (*local_58)(local_d0,1);
            }
            local_d0 = (undefined8 *)0x0;
          }
          else {
            lVar3 = FUN_180011130(&local_c8);
            local_b8 = *(undefined8 **)(lVar3 + 8);
            local_98 = local_b8;
            if (local_b8 == (undefined8 *)0x0) {
              local_88 = 0;
            }
            else {
              local_90 = *(code **)*local_b8;
              local_88 = (*local_90)(local_b8,1);
            }
            local_80 = local_d0;
            lVar3 = FUN_180011130(&local_c8);
            *(undefined8 **)(lVar3 + 8) = local_80;
          }
          break;
        }
      }
      FUN_1800143f0(&local_c8);
    }
    local_d7 = !local_d7;
    if (local_d7) {
      FUN_1800136f0(param_1,&local_28,&local_d0);
      puVar4 = FUN_180013470(local_18,local_d0 + 2,&local_d0);
      FUN_18002f350(param_3,&local_20,puVar4);
    }
  }
  return local_d7;
}

