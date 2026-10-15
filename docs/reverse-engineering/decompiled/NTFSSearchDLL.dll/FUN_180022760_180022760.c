// Function: FUN_180022760
// Address: 180022760
// Size: 375 bytes


void FUN_180022760(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  size_t sVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined1 auStackY_118 [32];
  undefined8 local_e0;
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98 [4];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [5];
  ulonglong local_28;
  
  if (param_2 != (longlong *)0x0) {
    local_c8 = 0xfffffffffffffffe;
    local_28 = DAT_180086010 ^ (ulonglong)auStackY_118;
    plVar3 = param_2;
    FUN_180002650((undefined1 *)local_98);
    local_b8 = plVar3[0xb];
    local_b0 = param_3;
    if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
      local_a8 = *(undefined8 *)((longlong)param_2 + 0x1b);
      ppuVar1 = CNTFSFileProperties::vftable;
    }
    else {
      local_a8 = (*(code *)((undefined **)*plVar3)[3])(param_2);
      ppuVar1 = (undefined **)*param_2;
    }
    (*(code *)ppuVar1[10])(param_2,&local_e0);
    local_a0 = local_e0;
    if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
      pvVar4 = *(void **)((longlong)param_2 + 0x11);
    }
    else {
      pvVar4 = (void *)(*(code *)((undefined **)*param_2)[2])(param_2);
    }
    sVar2 = FUN_180002cc0((longlong)pvVar4);
    FUN_1800026c0(local_98,pvVar4,sVar2);
    local_78 = local_b8;
    local_d8[0] = &local_70;
    local_70 = local_b8;
    local_68 = local_b0;
    local_60 = local_a8;
    local_58 = local_a0;
    FUN_180011a30((longlong)local_50,local_98);
    plVar3 = (longlong *)FUN_180024ea0((undefined8 *)(param_1 + 0x28),&local_78);
    FUN_180024f60((longlong *)(param_1 + 0x28),local_d8,sVar2,plVar3 + 4,plVar3);
    local_d8[0] = &local_70;
    FUN_1800025f0(local_50);
    FUN_1800025f0(local_98);
    __security_check_cookie(local_28 ^ (ulonglong)auStackY_118);
  }
  return;
}

