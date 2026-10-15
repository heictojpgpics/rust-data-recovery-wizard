// Function: FUN_18004b170
// Address: 18004b170
// Size: 572 bytes


void FUN_18004b170(ulonglong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_98;
  puVar6 = (undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  puVar3 = (undefined8 *)FUN_1800016b0(puVar6);
  puVar5 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    puVar5 = (undefined8 *)*puVar3;
  }
  puVar3[2] = 0;
  local_78[0] = 0;
  FUN_180001300((undefined1 *)puVar5,local_78);
  puVar5 = (undefined8 *)(param_1 + 0x30);
  if (puVar5 != puVar6) {
    puVar1 = puVar6 + 2;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_1800071e0((longlong)puVar5,puVar6,*puVar1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x10);
  if (puVar6 != puVar5) {
    puVar3 = puVar5;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar3 = (undefined8 *)*puVar5;
    }
    FUN_1800071e0((longlong)puVar6,puVar3,*(ulonglong *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    iVar2 = *(int *)((longlong)param_3 + 0xc);
    if (iVar2 < 1) {
      iVar2 = 0x200;
    }
  }
  else {
    iVar2 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  *(longlong *)(param_1 + 0x50) = (longlong)iVar2;
  local_68 = *(undefined8 *)(param_2 + 8);
  local_60 = 0xffffffffffffffff;
  local_70 = param_3;
  if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_58 = *(int *)((longlong)param_3 + 0xc);
    if (local_58 < 1) {
      local_58 = 0x200;
    }
  }
  else {
    local_58 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_58 = local_58 << 7;
  puVar4 = FUN_180042930((longlong *)&local_70,0);
  if (puVar4 != (undefined *)0x0) {
    local_50 = DAT_18006c09c;
    local_4c = DAT_18006c0a0;
    local_48 = DAT_18006c094;
    local_44 = DAT_18006c098;
    puVar3 = (undefined8 *)FUN_1800016b0(puVar6);
    puVar6 = puVar3;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar6 = (undefined8 *)*puVar3;
    }
    puVar3[2] = 0;
    local_78[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_78);
    puVar5 = (undefined8 *)FUN_1800016b0(puVar5);
    puVar6 = puVar5;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar6 = (undefined8 *)*puVar5;
    }
    puVar5[2] = 0;
    local_78[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_78);
    iVar2 = _strnicmp((char *)&local_50,puVar4 + 6,4);
    if (iVar2 == 0) {
      FUN_18004bbd0(param_1,param_2,(longlong *)&local_70);
    }
    else {
      iVar2 = _strnicmp((char *)&local_48,puVar4 + 6,4);
      if (iVar2 == 0) {
        FUN_18004b3b0(param_1,param_2,(longlong *)&local_70);
      }
      else {
        FUN_18004c1e0(param_1,param_2,(longlong *)&local_70);
      }
    }
  }
  __security_check_cookie(local_40 ^ (ulonglong)auStack_98);
  return;
}

