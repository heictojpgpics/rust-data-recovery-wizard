// Function: FUN_180047bc0
// Address: 180047bc0
// Size: 478 bytes


void FUN_180047bc0(undefined8 param_1,byte *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  ulonglong local_60 [7];
  ulonglong local_28;
  
  local_60[2] = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_88;
  local_64 = 0;
  uVar8 = *(ulonglong *)(param_2 + 0x10);
  if (0x18 < uVar8) {
    FUN_180001780((longlong)(local_60 + 3));
    puVar2 = (undefined8 *)FUN_1800016b0(local_60 + 3);
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    local_68[0] = 0;
    FUN_180001300((undefined1 *)puVar2,local_68);
    local_60[1] = 0x18;
    local_60[0] = *(ulonglong *)(param_2 + 0x10);
    puVar3 = FUN_180001e40(local_60 + 1,local_60);
    uVar8 = *puVar3;
    pbVar9 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar9 = *(byte **)param_2;
    }
    if ((ulonglong)puVar2[3] < uVar8) {
      FUN_1800086f0((longlong)(local_60 + 3),uVar8,(char)puVar2,pbVar9);
    }
    else {
      puVar7 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar7 = (undefined8 *)*puVar2;
      }
      puVar2[2] = uVar8;
      memmove(puVar7,pbVar9,uVar8);
      local_68[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar7 + uVar8),local_68);
    }
    local_64 = 1;
    FUN_180019970((longlong *)param_2,(longlong *)(local_60 + 3));
    local_64 = 0;
    FUN_180001630((longlong *)(local_60 + 3));
    uVar8 = *(ulonglong *)(param_2 + 0x10);
  }
  pbVar9 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar9 = *(byte **)param_2;
  }
  local_60[1] = 0;
  local_60[0] = uVar8;
  puVar3 = FUN_180001e40(local_60,local_60 + 1);
  iVar1 = memcmp(pbVar9,&DAT_180066bb1,*puVar3);
  if ((iVar1 != 0) || (uVar8 != 0)) {
    lVar4 = FUN_180006ea0(param_2,&DAT_18006dbf0);
    if (lVar4 == -1) {
      puVar7 = (undefined8 *)FUN_1800016b0(param_2);
      puVar2 = puVar7;
      if (0xf < (ulonglong)puVar7[3]) {
        puVar2 = (undefined8 *)*puVar7;
      }
      puVar7[2] = 0;
      local_68[0] = 0;
      FUN_180001300((undefined1 *)puVar2,local_68);
    }
    else {
      uVar5 = FUN_180006ea0(param_2,&DAT_18006dbf0);
      plVar6 = (longlong *)FUN_180006e00((undefined8 *)param_2,(longlong)(local_60 + 3),uVar5,uVar8)
      ;
      FUN_180019970((longlong *)param_2,plVar6);
      FUN_180001630((longlong *)(local_60 + 3));
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_88);
  return;
}

