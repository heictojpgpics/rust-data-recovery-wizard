// Function: FUN_180036700
// Address: 180036700
// Size: 2260 bytes


void FUN_180036700(longlong param_1,longlong *param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [4];
  undefined4 local_b4;
  undefined8 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80 [4];
  longlong local_60 [4];
  ulonglong local_40;
  
  local_90 = 0xfffffffffffffffe;
  local_40 = DAT_18008f028 ^ (ulonglong)auStackY_e8;
  local_b4 = 0;
  local_98 = (char *)(param_1 + 0x120);
  local_88 = param_2;
  if ((param_2[0x12] == 0) || (*local_98 != '\0')) {
    if ((param_2[0xe] == 0) || (*local_98 != '\0')) {
      if ((param_2[10] == 0) || (local_98 = (char *)(param_1 + 0x120), *local_98 != '\0')) {
        local_98 = (char *)(param_1 + 0x120);
        if (*local_98 == '\0') {
          puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
          if ((ulonglong)puVar3[3] < 7) {
            FUN_1800086f0(param_1 + 0x20,7,param_3,"unknown");
          }
          else {
            puVar4 = puVar3;
            if (0xf < (ulonglong)puVar3[3]) {
              puVar4 = (undefined8 *)*puVar3;
            }
            puVar3[2] = 7;
            memmove(puVar4,"unknown",7);
            local_b8[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar4 + 7),local_b8);
          }
        }
      }
      else {
        plVar5 = param_2 + 8;
        if ((longlong *)(param_1 + 0x20) != plVar5) {
          if (0xf < (ulonglong)param_2[0xb]) {
            plVar5 = (longlong *)*plVar5;
          }
          FUN_1800071e0(param_1 + 0x20,plVar5,param_2[10]);
        }
      }
    }
    else {
      plVar5 = param_2 + 0xc;
      if ((longlong *)(param_1 + 0x20) != plVar5) {
        if (0xf < (ulonglong)param_2[0xf]) {
          plVar5 = (longlong *)*plVar5;
        }
        FUN_1800071e0(param_1 + 0x20,plVar5,param_2[0xe]);
      }
    }
  }
  else {
    plVar5 = param_2 + 0x10;
    if ((longlong *)(param_1 + 0x20) != plVar5) {
      if (0xf < (ulonglong)param_2[0x13]) {
        plVar5 = (longlong *)*plVar5;
      }
      FUN_1800071e0(param_1 + 0x20,plVar5,param_2[0x12]);
    }
  }
  plVar5 = (longlong *)(param_1 + 0x20);
  FUN_180007060((longlong)local_60,plVar5);
  if (param_2[6] == 0) {
    if (param_2[0x12] == 0) {
      if (param_2[0xe] == 0) {
        if (param_2[10] == 0) {
          if (param_2[0x16] == 0) {
            puVar4 = (undefined8 *)FUN_1800016b0(plVar5);
            puVar3 = puVar4;
            if (0xf < (ulonglong)puVar4[3]) {
              puVar3 = (undefined8 *)*puVar4;
            }
            puVar4[2] = 0;
            local_b8[0] = 0;
            FUN_180001300((undefined1 *)puVar3,local_b8);
          }
          else {
            plVar6 = param_2 + 0x14;
            if (plVar5 != plVar6) {
              if (0xf < (ulonglong)param_2[0x17]) {
                plVar6 = (longlong *)*plVar6;
              }
              FUN_1800071e0((longlong)plVar5,plVar6,param_2[0x16]);
            }
          }
        }
        else if (param_2[0x1a] == 0) {
          plVar6 = param_2 + 8;
          if (plVar5 != plVar6) {
            if (0xf < (ulonglong)param_2[0xb]) {
              plVar6 = (longlong *)*plVar6;
            }
            FUN_1800071e0((longlong)plVar5,plVar6,param_2[10]);
          }
        }
        else {
          plVar9 = param_2 + 0x18;
          plVar6 = param_2 + 8;
          local_a0 = (longlong *)FUN_180001690((undefined1 *)local_80);
          local_b4 = 8;
          FUN_180011560((longlong)local_80,param_2[10] + param_2[0x1a]);
          uVar1 = param_2[10];
          if (0xf < (ulonglong)param_2[0xb]) {
            plVar6 = (longlong *)*plVar6;
          }
          puVar3 = (undefined8 *)FUN_1800016b0(local_80);
          local_a8 = (longlong *)puVar3[2];
          uVar8 = puVar3[3];
          if (uVar8 - (longlong)local_a8 < uVar1) {
            FUN_1800088a0((longlong)local_80,uVar1,(char)uVar8,plVar6,uVar1);
            uVar7 = (undefined1)uVar8;
          }
          else {
            puVar3[2] = (longlong)local_a8 + uVar1;
            local_b0 = puVar3;
            if (0xf < uVar8) {
              local_b0 = (undefined8 *)*puVar3;
            }
            uVar8 = uVar1;
            memmove((void *)((longlong)local_b0 + (longlong)local_a8),plVar6,uVar1);
            uVar7 = (undefined1)uVar8;
            local_b8[0] = 0;
            FUN_180001300((undefined1 *)((longlong)local_b0 + uVar1 + (longlong)local_a8),local_b8);
          }
          uVar1 = param_2[0x1a];
          if (0xf < (ulonglong)param_2[0x1b]) {
            plVar9 = (longlong *)*plVar9;
          }
          lVar2 = puVar3[2];
          if ((ulonglong)(puVar3[3] - lVar2) < uVar1) {
            FUN_1800088a0((longlong)local_80,uVar1,uVar7,plVar9,uVar1);
          }
          else {
            puVar3[2] = uVar1 + lVar2;
            if (0xf < (ulonglong)puVar3[3]) {
              puVar3 = (undefined8 *)*puVar3;
            }
            memmove((void *)((longlong)puVar3 + lVar2),plVar9,uVar1);
            local_b8[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar3 + lVar2 + uVar1),local_b8);
          }
          FUN_180019970(plVar5,local_a0);
          local_b4 = 0;
          FUN_180001630(local_80);
        }
      }
      else if (param_2[0x1a] == 0) {
        plVar6 = param_2 + 0xc;
        if (plVar5 != plVar6) {
          if (0xf < (ulonglong)param_2[0xf]) {
            plVar6 = (longlong *)*plVar6;
          }
          FUN_1800071e0((longlong)plVar5,plVar6,param_2[0xe]);
        }
      }
      else {
        plVar9 = param_2 + 0x18;
        plVar6 = param_2 + 0xc;
        local_a0 = (longlong *)FUN_180001690((undefined1 *)local_80);
        local_b4 = 4;
        FUN_180011560((longlong)local_80,param_2[0xe] + param_2[0x1a]);
        uVar1 = param_2[0xe];
        if (0xf < (ulonglong)param_2[0xf]) {
          plVar6 = (longlong *)*plVar6;
        }
        puVar3 = (undefined8 *)FUN_1800016b0(local_80);
        local_a8 = (longlong *)puVar3[2];
        uVar8 = puVar3[3];
        if (uVar8 - (longlong)local_a8 < uVar1) {
          FUN_1800088a0((longlong)local_80,uVar1,(char)uVar8,plVar6,uVar1);
          uVar7 = (undefined1)uVar8;
        }
        else {
          puVar3[2] = (longlong)local_a8 + uVar1;
          local_b0 = puVar3;
          if (0xf < uVar8) {
            local_b0 = (undefined8 *)*puVar3;
          }
          uVar8 = uVar1;
          memmove((void *)((longlong)local_b0 + (longlong)local_a8),plVar6,uVar1);
          uVar7 = (undefined1)uVar8;
          local_b8[0] = 0;
          FUN_180001300((undefined1 *)((longlong)local_b0 + uVar1 + (longlong)local_a8),local_b8);
        }
        uVar1 = param_2[0x1a];
        if (0xf < (ulonglong)param_2[0x1b]) {
          plVar9 = (longlong *)*plVar9;
        }
        lVar2 = puVar3[2];
        if ((ulonglong)(puVar3[3] - lVar2) < uVar1) {
          FUN_1800088a0((longlong)local_80,uVar1,uVar7,plVar9,uVar1);
        }
        else {
          puVar3[2] = uVar1 + lVar2;
          if (0xf < (ulonglong)puVar3[3]) {
            puVar3 = (undefined8 *)*puVar3;
          }
          memmove((void *)((longlong)puVar3 + lVar2),plVar9,uVar1);
          local_b8[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar3 + lVar2 + uVar1),local_b8);
        }
        FUN_180019970(plVar5,local_a0);
        local_b4 = 0;
        FUN_180001630(local_80);
      }
    }
    else if (param_2[0x1a] == 0) {
      plVar6 = param_2 + 0x10;
      if (plVar5 != plVar6) {
        if (0xf < (ulonglong)param_2[0x13]) {
          plVar6 = (longlong *)*plVar6;
        }
        FUN_1800071e0((longlong)plVar5,plVar6,param_2[0x12]);
      }
    }
    else {
      plVar6 = param_2 + 0x18;
      plVar9 = param_2 + 0x10;
      local_a0 = (longlong *)FUN_180001690((undefined1 *)local_80);
      local_b4 = 2;
      FUN_180011560((longlong)local_80,param_2[0x12] + param_2[0x1a]);
      uVar1 = param_2[0x12];
      if (0xf < (ulonglong)param_2[0x13]) {
        plVar9 = (longlong *)*plVar9;
      }
      puVar3 = (undefined8 *)FUN_1800016b0(local_80);
      local_a8 = (longlong *)puVar3[2];
      uVar8 = puVar3[3];
      if (uVar8 - (longlong)local_a8 < uVar1) {
        FUN_1800088a0((longlong)local_80,uVar1,(char)uVar8,plVar9,uVar1);
        uVar7 = (undefined1)uVar8;
      }
      else {
        puVar3[2] = (longlong)local_a8 + uVar1;
        local_b0 = puVar3;
        if (0xf < uVar8) {
          local_b0 = (undefined8 *)*puVar3;
        }
        uVar8 = uVar1;
        memmove((void *)((longlong)local_b0 + (longlong)local_a8),plVar9,uVar1);
        uVar7 = (undefined1)uVar8;
        local_b8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)local_b0 + uVar1 + (longlong)local_a8),local_b8);
      }
      uVar1 = param_2[0x1a];
      if (0xf < (ulonglong)param_2[0x1b]) {
        plVar6 = (longlong *)*plVar6;
      }
      lVar2 = puVar3[2];
      if ((ulonglong)(puVar3[3] - lVar2) < uVar1) {
        FUN_1800088a0((longlong)local_80,uVar1,uVar7,plVar6,uVar1);
      }
      else {
        puVar3[2] = uVar1 + lVar2;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar3 = (undefined8 *)*puVar3;
        }
        memmove((void *)((longlong)puVar3 + lVar2),plVar6,uVar1);
        local_b8[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar3 + lVar2 + uVar1),local_b8);
      }
      FUN_180019970(plVar5,local_a0);
      local_b4 = 0;
      FUN_180001630(local_80);
    }
  }
  else if (param_2[0x1a] == 0) {
    plVar6 = param_2 + 4;
    if (plVar5 != plVar6) {
      if (0xf < (ulonglong)param_2[7]) {
        plVar6 = (longlong *)*plVar6;
      }
      FUN_1800071e0((longlong)plVar5,plVar6,param_2[6]);
    }
  }
  else {
    plVar9 = param_2 + 0x18;
    plVar6 = param_2 + 4;
    local_a8 = (longlong *)FUN_180001690((undefined1 *)local_80);
    local_b4 = 1;
    FUN_180011560((longlong)local_80,param_2[6] + param_2[0x1a]);
    uVar1 = param_2[6];
    if (0xf < (ulonglong)param_2[7]) {
      plVar6 = (longlong *)*plVar6;
    }
    puVar3 = (undefined8 *)FUN_1800016b0(local_80);
    local_a0 = (longlong *)puVar3[2];
    uVar8 = puVar3[3];
    if (uVar8 - (longlong)local_a0 < uVar1) {
      FUN_1800088a0((longlong)local_80,uVar1,(char)uVar8,plVar6,uVar1);
      uVar7 = (undefined1)uVar8;
    }
    else {
      puVar3[2] = (longlong)local_a0 + uVar1;
      local_b0 = puVar3;
      if (0xf < uVar8) {
        local_b0 = (undefined8 *)*puVar3;
      }
      uVar8 = uVar1;
      memmove((void *)((longlong)local_b0 + (longlong)local_a0),plVar6,uVar1);
      uVar7 = (undefined1)uVar8;
      local_b8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)local_b0 + uVar1 + (longlong)local_a0),local_b8);
    }
    uVar1 = param_2[0x1a];
    if (0xf < (ulonglong)param_2[0x1b]) {
      plVar9 = (longlong *)*plVar9;
    }
    lVar2 = puVar3[2];
    if ((ulonglong)(puVar3[3] - lVar2) < uVar1) {
      FUN_1800088a0((longlong)local_80,uVar1,uVar7,plVar9,uVar1);
    }
    else {
      puVar3[2] = uVar1 + lVar2;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      memmove((void *)((longlong)puVar3 + lVar2),plVar9,uVar1);
      local_b8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar3 + lVar2 + uVar1),local_b8);
    }
    FUN_180019970(plVar5,local_a8);
    local_b4 = 0;
    FUN_180001630(local_80);
  }
  if ((*(char *)(param_1 + 0x111) == '\0') && (*local_98 == '\0')) {
    if ((*(longlong *)(param_1 + 0x30) == 0) && (param_2[0x16] == 0)) goto LAB_180036f9b;
    local_a8 = local_80;
    plVar5 = (longlong *)FUN_180007060((longlong)local_80,local_60);
    FUN_180017550(param_1,7,plVar5);
  }
  if (param_2[0x16] != 0) {
    plVar5 = (longlong *)FUN_180007060((longlong)local_80,param_2 + 0x14);
    local_a8 = plVar5;
    if ((longlong *)(param_1 + 0x40) != plVar5) {
      plVar6 = plVar5;
      if (0xf < (ulonglong)plVar5[3]) {
        plVar6 = (longlong *)*plVar5;
      }
      FUN_1800071e0(param_1 + 0x40,plVar6,plVar5[2]);
    }
    FUN_180001630(plVar5);
  }
LAB_180036f9b:
  FUN_180001630(local_60);
  FUN_180018020(param_2);
  __security_check_cookie(local_40 ^ (ulonglong)auStackY_e8);
  return;
}

