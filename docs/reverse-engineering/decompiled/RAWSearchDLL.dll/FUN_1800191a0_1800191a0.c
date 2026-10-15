// Function: FUN_1800191a0
// Address: 1800191a0
// Size: 1354 bytes


void FUN_1800191a0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  char *pcVar10;
  int iVar11;
  undefined1 auStack_4f8 [32];
  longlong *local_4d8;
  undefined1 local_4c8 [4];
  int local_4c4;
  undefined1 *local_4c0;
  longlong *local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [32];
  longlong local_488 [4];
  char local_468 [272];
  char local_358 [528];
  char local_148 [272];
  ulonglong local_38;
  
  local_4b0 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_4f8;
  local_4c0 = (undefined1 *)CONCAT44(local_4c0._4_4_,param_3);
  local_4c4 = param_4;
  memset(local_468,0,0x104);
  iVar11 = *(int *)(param_1 + 0x18);
  if ((2 < iVar11 - 0x93U) && (*(char *)(param_1 + 0x251) != '\0')) {
    iVar11 = 0x94;
    *(undefined1 *)(param_1 + 0x110) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x94;
  }
  if ((*(int *)(param_1 + 0x252) == 0) || (*(char *)(param_1 + 0x110) == '\0')) goto LAB_18001969b;
  if (*(longlong *)(param_1 + 0x1e1) == 0) {
    if (*(longlong *)(param_1 + 0x1c1) == 0) {
      pcVar10 = "unKnown";
    }
    else {
      pcVar10 = (char *)(param_1 + 0x1b1);
      if (0xf < *(ulonglong *)(param_1 + 0x1c9)) {
        pcVar10 = *(char **)pcVar10;
      }
    }
  }
  else {
    pcVar10 = (char *)(param_1 + 0x1d1);
    if (0xf < *(ulonglong *)(param_1 + 0x1e9)) {
      pcVar10 = *(char **)pcVar10;
    }
  }
  snprintf(local_468,0x104,&DAT_180067c5c,pcVar10);
  memset(local_148,0,0x104);
  plVar4 = (longlong *)(param_1 + 0x211);
  plVar3 = plVar4;
  if (0xf < *(ulonglong *)(param_1 + 0x229)) {
    plVar3 = (longlong *)*plVar4;
  }
  uVar9 = 0x5c;
  snprintf(local_148,0x104,&DAT_180067c5c,plVar3);
  if (*(longlong *)(param_1 + 0x221) != 0) {
    local_4b8 = local_488;
    FUN_180001780((longlong)local_488);
    puVar2 = (undefined8 *)FUN_1800016b0(local_488);
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    local_4c8[0] = 0;
    FUN_180001300((undefined1 *)puVar2,local_4c8);
    uVar7 = 0xffffffffffffffff;
    do {
      uVar6 = uVar7 + 1;
      lVar1 = uVar7 + 1;
      uVar7 = uVar6;
    } while (local_148[lVar1] != '\0');
    if ((ulonglong)puVar2[3] < uVar6) {
      FUN_1800086f0((longlong)local_488,uVar6,uVar9,local_148);
    }
    else {
      puVar8 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar8 = (undefined8 *)*puVar2;
      }
      puVar2[2] = uVar6;
      memmove(puVar8,local_148,uVar6);
      local_4c8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar8 + uVar6),local_4c8);
      param_3 = (int)local_4c0;
    }
    FUN_1800174f0(param_1,local_488);
    param_4 = local_4c4;
  }
  memset(local_358,0,0x208);
  if (*(ulonglong *)(param_1 + 0x181) == 0) {
    if (*(longlong *)(param_1 + 0x1e1) == 0) {
      if (*(longlong *)(param_1 + 0x1c1) != 0) {
        if (*(longlong *)(param_1 + 0x221) != 0) {
          if (0xf < *(ulonglong *)(param_1 + 0x229)) {
            plVar4 = (longlong *)*plVar4;
          }
          puVar2 = (undefined8 *)(param_1 + 0x1b1);
          goto LAB_180019430;
        }
        plVar4 = (longlong *)(param_1 + 0x1b1);
        goto LAB_1800194f9;
      }
      if (*(longlong *)(param_1 + 0x221) == 0) {
        if (*(longlong *)(param_1 + 0x201) == 0) goto LAB_18001969b;
        plVar4 = (longlong *)(param_1 + 0x1f1);
        goto LAB_1800194f9;
      }
      if (0xf < *(ulonglong *)(param_1 + 0x229)) {
        plVar4 = (longlong *)*plVar4;
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x221) != 0) {
        if (0xf < *(ulonglong *)(param_1 + 0x229)) {
          plVar4 = (longlong *)*plVar4;
        }
        puVar2 = (undefined8 *)(param_1 + 0x1d1);
        goto LAB_180019430;
      }
      plVar4 = (longlong *)(param_1 + 0x1d1);
LAB_1800194f9:
      if (0xf < (ulonglong)plVar4[3]) {
        plVar4 = (longlong *)*plVar4;
      }
    }
    uVar9 = 0x5c;
    snprintf(local_358,0x208,&DAT_180067c5c,plVar4);
  }
  else {
    if (0x104 < *(ulonglong *)(param_1 + 0x181)) {
      plVar3 = (longlong *)
               FUN_180006e00((undefined8 *)(param_1 + 0x171),(longlong)local_488,0,0x104);
      FUN_180019970((longlong *)(param_1 + 0x171),plVar3);
      FUN_180001630(local_488);
    }
    if (*(longlong *)(param_1 + 0x221) == 0) {
      plVar4 = (longlong *)(param_1 + 0x171);
      goto LAB_1800194f9;
    }
    if (0xf < *(ulonglong *)(param_1 + 0x229)) {
      plVar4 = (longlong *)*plVar4;
    }
    puVar2 = (undefined8 *)(param_1 + 0x171);
LAB_180019430:
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    uVar9 = 0x74;
    local_4d8 = plVar4;
    snprintf(local_358,0x208,"%s_%s",puVar2);
  }
  FUN_180001780((longlong)local_488);
  puVar2 = (undefined8 *)FUN_1800016b0(local_488);
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  local_4c8[0] = 0;
  FUN_180001300((undefined1 *)puVar2,local_4c8);
  uVar7 = 0xffffffffffffffff;
  do {
    uVar6 = uVar7 + 1;
    lVar1 = uVar7 + 1;
    uVar7 = uVar6;
  } while (local_468[lVar1] != '\0');
  if ((ulonglong)puVar2[3] < uVar6) {
    FUN_1800086f0((longlong)local_488,uVar6,uVar9,local_468);
  }
  else {
    puVar8 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar8 = (undefined8 *)*puVar2;
    }
    puVar2[2] = uVar6;
    memmove(puVar8,local_468,uVar6);
    uVar9 = (undefined1)uVar7;
    local_4c8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar8 + uVar6),local_4c8);
  }
  local_4b8 = local_488;
  if (iVar11 == 0x49) {
    uVar5 = 3;
LAB_1800195f8:
    local_4c0 = local_4a8;
    plVar4 = (longlong *)FUN_180007060((longlong)local_4a8,local_488);
    FUN_180017550(param_1,uVar5,plVar4);
    uVar9 = SUB81(plVar4,0);
  }
  else {
    if (iVar11 == 0x4b) {
LAB_1800195df:
      if (iVar11 == 0x4a) {
LAB_1800195e5:
        uVar5 = 4;
      }
      else {
        uVar5 = 5;
      }
      goto LAB_1800195f8;
    }
    if (iVar11 == 0x4a) goto LAB_1800195e5;
    if (iVar11 - 0x93U < 3) goto LAB_1800195df;
  }
  FUN_180001630(local_488);
  uVar7 = 0xffffffffffffffff;
  do {
    uVar6 = uVar7 + 1;
    lVar1 = uVar7 + 1;
    uVar7 = uVar6;
  } while (local_358[lVar1] != '\0');
  puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
  if ((ulonglong)puVar2[3] < uVar6) {
    FUN_1800086f0(param_1 + 0x20,uVar6,uVar9,local_358);
    param_4 = local_4c4;
  }
  else {
    puVar8 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar8 = (undefined8 *)*puVar2;
    }
    puVar2[2] = uVar6;
    memmove(puVar8,local_358,uVar6);
    local_4c8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar8 + uVar6),local_4c8);
    param_4 = local_4c4;
  }
LAB_18001969b:
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(longlong *)(param_1 + 0x10) =
         ((param_2 - *(longlong *)(param_1 + 8)) + 1) * (longlong)param_3 - (longlong)param_4;
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_4f8);
  return;
}

