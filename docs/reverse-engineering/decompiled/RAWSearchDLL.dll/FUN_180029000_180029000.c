// Function: FUN_180029000
// Address: 180029000
// Size: 2848 bytes


void FUN_180029000(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 ******ppppppuVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 ******ppppppuVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 uVar15;
  void *_Buf1;
  longlong lVar16;
  undefined1 auStack_1f8 [32];
  undefined8 *****local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0 [4];
  undefined8 local_180;
  undefined8 *****local_178 [2];
  ulonglong local_168;
  ulonglong local_160;
  char local_158 [272];
  ulonglong local_48;
  
  local_180 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_1f8;
  local_1b0 = param_1;
  local_1a8 = param_2;
  memset(local_158,0,0x104);
  FUN_180001780((longlong)local_178);
  puVar4 = (undefined8 *)FUN_1800016b0(local_178);
  puVar4[3] = 0xf;
  local_1c8[0] = 0;
  FUN_180001300((undefined1 *)puVar4,local_1c8);
  puVar6 = puVar4;
  if (0xf < (ulonglong)puVar4[3]) {
    puVar6 = (undefined8 *)*puVar4;
  }
  uVar13 = 0;
  puVar4[2] = 0;
  local_1c8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_1c8);
  ppppppuVar12 = (undefined8 ******)(param_2 + 0xc0);
  plVar7 = *(longlong **)(param_2 + 0xd0);
  uVar11 = *(ulonglong *)(param_2 + 0xd8);
  ppppppuVar8 = ppppppuVar12;
  if (0xf < uVar11) {
    ppppppuVar8 = (undefined8 ******)*ppppppuVar12;
  }
  local_1c0 = plVar7;
  local_1b8 = uVar13;
  puVar5 = FUN_180001e40((ulonglong *)&local_1c0,&local_1b8);
  iVar3 = memcmp(ppppppuVar8,&DAT_180066bb1,*puVar5);
  if ((iVar3 == 0) && (plVar7 == (longlong *)0x0)) {
    ppppppuVar8 = (undefined8 ******)(param_2 + 0xa0);
    if (local_178 != ppppppuVar8) {
      plVar7 = *(longlong **)(param_2 + 0xb0);
      if (0xf < *(ulonglong *)(param_2 + 0xb8)) {
        ppppppuVar8 = (undefined8 ******)*ppppppuVar8;
      }
LAB_180029138:
      FUN_1800071e0((longlong)local_178,ppppppuVar8,(ulonglong)plVar7);
    }
  }
  else if (local_178 != ppppppuVar12) {
    ppppppuVar8 = ppppppuVar12;
    if (0xf < uVar11) {
      ppppppuVar8 = (undefined8 ******)*ppppppuVar12;
    }
    goto LAB_180029138;
  }
  plVar7 = (longlong *)(param_2 + 0x80);
  uVar11 = *(ulonglong *)(param_2 + 0x90);
  uVar13 = *(ulonglong *)(param_2 + 0x98);
  plVar9 = plVar7;
  if (0xf < uVar13) {
    plVar9 = (longlong *)*plVar7;
  }
  local_1c0 = (longlong *)0x0;
  local_1b8 = uVar11;
  puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
  iVar3 = memcmp(plVar9,&DAT_180066bb1,*puVar5);
  uVar10 = 0xffffffffffffffff;
  if ((iVar3 == 0) && (uVar11 == 0)) {
    plVar9 = (longlong *)(param_2 + 0x60);
    uVar11 = *(ulonglong *)(param_2 + 0x70);
    uVar13 = *(ulonglong *)(param_2 + 0x78);
    plVar14 = plVar9;
    if (0xf < uVar13) {
      plVar14 = (longlong *)*plVar9;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar14,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (uVar11 != 0)) {
      if (0xf < uVar13) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar15 = 0x5c;
      snprintf(local_158,0x104,&DAT_180067c5c,plVar9);
      local_1c0 = local_1a0;
      FUN_180001780((longlong)local_1a0);
      puVar6 = (undefined8 *)FUN_1800016b0(local_1a0);
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      local_1c8[0] = 0;
      FUN_180001300((undefined1 *)puVar6,local_1c8);
      uVar11 = 0xffffffffffffffff;
      do {
        uVar13 = uVar11 + 1;
        lVar1 = uVar11 + 1;
        uVar11 = uVar13;
      } while (local_158[lVar1] != '\0');
      if ((ulonglong)puVar6[3] < uVar13) {
        FUN_1800086f0((longlong)local_1a0,uVar13,uVar15,local_158);
        param_1 = local_1b0;
      }
      else {
        puVar4 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar4 = (undefined8 *)*puVar6;
        }
        puVar6[2] = uVar13;
        memmove(puVar4,local_158,uVar13);
        local_1c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar4 + uVar13),local_1c8);
        param_1 = local_1b0;
      }
      goto LAB_18002953b;
    }
    plVar9 = (longlong *)(param_2 + 0xa0);
    uVar11 = *(ulonglong *)(param_2 + 0xb0);
    if (0xf < *(ulonglong *)(param_2 + 0xb8)) {
      plVar9 = (longlong *)*plVar9;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar9,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (uVar11 != 0)) {
LAB_1800292db:
      uVar15 = 0x5c;
      snprintf(local_158,0x104,&DAT_180067c5c,"unKnown");
      local_1c0 = local_1a0;
      FUN_180001780((longlong)local_1a0);
      puVar6 = (undefined8 *)FUN_1800016b0(local_1a0);
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      local_1c8[0] = 0;
      FUN_180001300((undefined1 *)puVar6,local_1c8);
      uVar11 = 0xffffffffffffffff;
      do {
        uVar13 = uVar11 + 1;
        lVar1 = uVar11 + 1;
        uVar11 = uVar13;
      } while (local_158[lVar1] != '\0');
      if ((ulonglong)puVar6[3] < uVar13) {
        FUN_1800086f0((longlong)local_1a0,uVar13,uVar15,local_158);
        param_1 = local_1b0;
      }
      else {
        puVar4 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar4 = (undefined8 *)*puVar6;
        }
        puVar6[2] = uVar13;
        memmove(puVar4,local_158,uVar13);
        local_1c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar4 + uVar13),local_1c8);
        param_1 = local_1b0;
      }
      goto LAB_18002953b;
    }
    plVar9 = (longlong *)(param_2 + 0x20);
    uVar11 = *(ulonglong *)(param_2 + 0x30);
    if (0xf < *(ulonglong *)(param_2 + 0x38)) {
      plVar9 = (longlong *)*plVar9;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar9,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (uVar11 != 0)) goto LAB_1800292db;
    uVar11 = *(ulonglong *)(param_2 + 0xd0);
    if (0xf < *(ulonglong *)(param_2 + 0xd8)) {
      ppppppuVar12 = (undefined8 ******)*ppppppuVar12;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(ppppppuVar12,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (uVar11 != 0)) goto LAB_1800292db;
  }
  else {
    plVar9 = plVar7;
    if (0xf < uVar13) {
      plVar9 = (longlong *)*plVar7;
    }
    uVar15 = 0x5c;
    snprintf(local_158,0x104,&DAT_180067c5c,plVar9);
    local_1c0 = local_1a0;
    FUN_180001780((longlong)local_1a0);
    puVar6 = (undefined8 *)FUN_1800016b0(local_1a0);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_1c8[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_1c8);
    uVar11 = 0xffffffffffffffff;
    do {
      uVar13 = uVar11 + 1;
      lVar1 = uVar11 + 1;
      uVar11 = uVar13;
    } while (local_158[lVar1] != '\0');
    if ((ulonglong)puVar6[3] < uVar13) {
      FUN_1800086f0((longlong)local_1a0,uVar13,uVar15,local_158);
    }
    else {
      puVar4 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar4 = (undefined8 *)*puVar6;
      }
      puVar6[2] = uVar13;
      memmove(puVar4,local_158,uVar13);
      local_1c8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar4 + uVar13),local_1c8);
    }
LAB_18002953b:
    FUN_180029b20(param_1,local_1a0);
  }
  ppppppuVar12 = local_178;
  if (0xf < local_160) {
    ppppppuVar12 = (undefined8 ******)local_178[0];
  }
  local_1c0 = (longlong *)0x0;
  local_1b8 = local_168;
  puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
  iVar3 = memcmp(ppppppuVar12,&DAT_180066bb1,*puVar5);
  lVar1 = local_1a8;
  if ((iVar3 == 0) && (local_168 == 0)) {
    plVar9 = (longlong *)(local_1a8 + 0x20);
    uVar11 = *(ulonglong *)(local_1a8 + 0x30);
    uVar13 = *(ulonglong *)(local_1a8 + 0x38);
    plVar14 = plVar9;
    if (0xf < uVar13) {
      plVar14 = (longlong *)*plVar9;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar14,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (lVar16 = local_1b0, uVar11 != 0)) {
      if (0xf < uVar13) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar15 = 0x90;
      snprintf(local_158,0x104,&DAT_18006b790,plVar9);
      lVar16 = local_1b0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar13 = uVar11 + 1;
        lVar2 = uVar11 + 1;
        uVar11 = uVar13;
      } while (local_158[lVar2] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(local_1b0 + 0x20);
      if ((ulonglong)puVar6[3] < uVar13) {
        FUN_1800086f0(lVar16 + 0x20,uVar13,uVar15,local_158);
      }
      else {
        puVar4 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar4 = (undefined8 *)*puVar6;
        }
        puVar6[2] = uVar13;
        memmove(puVar4,local_158,uVar13);
        local_1c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar4 + uVar13),local_1c8);
      }
    }
    uVar11 = *(ulonglong *)(param_2 + 0x90);
    uVar13 = *(ulonglong *)(param_2 + 0x98);
    plVar9 = plVar7;
    if (0xf < uVar13) {
      plVar9 = (longlong *)*plVar7;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar9,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (uVar11 != 0)) {
      if (0xf < uVar13) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar15 = 0x90;
      snprintf(local_158,0x104,&DAT_18006b790,plVar7);
      uVar11 = 0xffffffffffffffff;
      do {
        uVar13 = uVar11 + 1;
        lVar2 = uVar11 + 1;
        uVar11 = uVar13;
      } while (local_158[lVar2] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(lVar16 + 0x20);
      if ((ulonglong)puVar6[3] < uVar13) {
        FUN_1800086f0(lVar16 + 0x20,uVar13,uVar15,local_158);
      }
      else {
        puVar4 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar4 = (undefined8 *)*puVar6;
        }
        puVar6[2] = uVar13;
        memmove(puVar4,local_158,uVar13);
        local_1c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar4 + uVar13),local_1c8);
      }
    }
    plVar7 = (longlong *)(lVar1 + 0x60);
    uVar11 = *(ulonglong *)(lVar1 + 0x70);
    uVar13 = *(ulonglong *)(lVar1 + 0x78);
    plVar9 = plVar7;
    if (0xf < uVar13) {
      plVar9 = (longlong *)*plVar7;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar9,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (uVar11 != 0)) {
      if (0xf < uVar13) {
        plVar7 = (longlong *)*plVar7;
      }
      uVar15 = 0x90;
      snprintf(local_158,0x104,&DAT_18006b790,plVar7);
      do {
        uVar11 = uVar10 + 1;
        lVar1 = uVar10 + 1;
        uVar10 = uVar11;
      } while (local_158[lVar1] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(lVar16 + 0x20);
      if ((ulonglong)puVar6[3] < uVar11) {
        FUN_1800086f0(lVar16 + 0x20,uVar11,uVar15,local_158);
      }
      else {
        puVar4 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar4 = (undefined8 *)*puVar6;
        }
        puVar6[2] = uVar11;
        memmove(puVar4,local_158,uVar11);
        local_1c8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar4 + uVar11),local_1c8);
      }
    }
    goto LAB_180029a53;
  }
  plVar14 = (longlong *)(local_1a8 + 0x20);
  uVar11 = *(ulonglong *)(local_1a8 + 0x30);
  uVar13 = *(ulonglong *)(local_1a8 + 0x38);
  plVar9 = plVar14;
  if (0xf < uVar13) {
    plVar9 = (longlong *)*plVar14;
  }
  local_1c0 = (longlong *)0x0;
  local_1b8 = uVar11;
  puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
  iVar3 = memcmp(plVar9,&DAT_180066bb1,*puVar5);
  if ((iVar3 == 0) && (uVar11 == 0)) {
    uVar11 = *(ulonglong *)(param_2 + 0x90);
    uVar13 = *(ulonglong *)(param_2 + 0x98);
    plVar9 = plVar7;
    if (0xf < uVar13) {
      plVar9 = (longlong *)*plVar7;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar9,&DAT_180066bb1,*puVar5);
    if ((iVar3 != 0) || (uVar11 != 0)) {
      local_1d8 = local_178;
      if (0xf < local_160) {
        local_1d8 = local_178[0];
      }
      plVar14 = plVar7;
      if (0xf < uVar13) {
        plVar14 = (longlong *)*plVar7;
      }
      goto LAB_1800299ce;
    }
    if (0xf < uVar13) {
      plVar7 = (longlong *)*plVar7;
    }
    local_1c0 = (longlong *)0x0;
    local_1b8 = uVar11;
    puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
    iVar3 = memcmp(plVar7,&DAT_180066bb1,*puVar5);
    if (iVar3 == 0) {
      plVar14 = (longlong *)(local_1a8 + 0x60);
      uVar11 = *(ulonglong *)(local_1a8 + 0x70);
      uVar13 = *(ulonglong *)(local_1a8 + 0x78);
      plVar7 = plVar14;
      if (0xf < uVar13) {
        plVar7 = (longlong *)*plVar14;
      }
      local_1c0 = (longlong *)0x0;
      local_1b8 = uVar11;
      puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
      iVar3 = memcmp(plVar7,&DAT_180066bb1,*puVar5);
      if ((iVar3 != 0) || (uVar11 != 0)) goto LAB_1800299b6;
    }
    ppppppuVar12 = local_178;
    if (0xf < local_160) {
      ppppppuVar12 = (undefined8 ******)local_178[0];
    }
    uVar15 = 0x90;
    snprintf(local_158,0x104,&DAT_18006b790,ppppppuVar12);
  }
  else {
LAB_1800299b6:
    local_1d8 = local_178;
    if (0xf < local_160) {
      local_1d8 = local_178[0];
    }
    if (0xf < uVar13) {
      plVar14 = (longlong *)*plVar14;
    }
LAB_1800299ce:
    uVar15 = 0xa0;
    snprintf(local_158,0x104,"%s_%s ",plVar14);
  }
  do {
    lVar16 = local_1b0;
    uVar11 = uVar10 + 1;
    lVar1 = uVar10 + 1;
    uVar10 = uVar11;
  } while (local_158[lVar1] != '\0');
  puVar6 = (undefined8 *)FUN_1800016b0(local_1b0 + 0x20);
  if ((ulonglong)puVar6[3] < uVar11) {
    FUN_1800086f0(lVar16 + 0x20,uVar11,uVar15,local_158);
  }
  else {
    puVar4 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar4 = (undefined8 *)*puVar6;
    }
    puVar6[2] = uVar11;
    memmove(puVar4,local_158,uVar11);
    local_1c8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar4 + uVar11),local_1c8);
  }
LAB_180029a53:
  lVar1 = local_1a8;
  uVar11 = *(ulonglong *)(local_1a8 + 0xb0);
  _Buf1 = (void *)(local_1a8 + 0xa0);
  if (0xf < *(ulonglong *)(local_1a8 + 0xb8)) {
    _Buf1 = *(void **)(local_1a8 + 0xa0);
  }
  local_1c0 = (longlong *)0x0;
  local_1b8 = uVar11;
  puVar5 = FUN_180001e40(&local_1b8,(ulonglong *)&local_1c0);
  iVar3 = memcmp(_Buf1,&DAT_180066bb1,*puVar5);
  if ((iVar3 != 0) || (uVar11 != 0)) {
    plVar7 = (longlong *)FUN_180007060((longlong)local_1a0,(undefined8 *)(lVar1 + 0xa0));
    local_1c0 = plVar7;
    if ((longlong *)(lVar16 + 0x40) != plVar7) {
      plVar9 = plVar7;
      if (0xf < (ulonglong)plVar7[3]) {
        plVar9 = (longlong *)*plVar7;
      }
      FUN_1800071e0(lVar16 + 0x40,plVar9,plVar7[2]);
    }
    FUN_180001630(plVar7);
  }
  FUN_180001630((longlong *)local_178);
  __security_check_cookie(local_48 ^ (ulonglong)auStack_1f8);
  return;
}

