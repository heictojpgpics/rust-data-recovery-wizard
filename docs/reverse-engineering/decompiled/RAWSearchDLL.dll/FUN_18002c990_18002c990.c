// Function: FUN_18002c990
// Address: 18002c990
// Size: 547 bytes


void FUN_18002c990(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,short *param_6)

{
  short sVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong _Size;
  undefined1 uVar7;
  longlong lVar8;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 *local_98;
  longlong local_90 [2];
  longlong local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  ulonglong uVar6;
  
  local_a0 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStackY_d8;
  uVar2 = *(uint *)(param_6 + 4);
  lVar8 = (longlong)(int)param_3;
  if ((longlong)((ulonglong)uVar2 + 0x3f + lVar8 * param_2) <= lVar8 * param_5) {
    sVar1 = *param_6;
    if (sVar1 == 0x10f) {
      FUN_18002cbc0(param_1,param_5,param_3,param_4,param_5,(longlong)param_6);
    }
    else if (sVar1 == 0x110) {
      FUN_18002d300(param_1,param_5,param_3,param_4,param_5,(longlong)param_6);
    }
    else if (sVar1 == 0x132) {
      local_29 = 0;
      if ((param_4 <= *(longlong *)(param_1 + 8)) &&
         ((ulonglong)(uVar2 + 0x3f) < (ulonglong)((param_5 - *(longlong *)(param_1 + 8)) * lVar8)))
      {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar2);
        local_68 = *puVar4;
        uStack_60 = puVar4[1];
        uStack_58 = puVar4[2];
        uStack_50 = puVar4[3];
        local_48 = puVar4[4];
        uStack_40 = puVar4[5];
        local_38 = puVar4[6];
        local_30 = *(undefined4 *)(puVar4 + 7);
        local_2c = *(undefined2 *)((longlong)puVar4 + 0x3c);
        local_2a = *(undefined1 *)((longlong)puVar4 + 0x3e);
        FUN_180001780((longlong)local_90);
        uVar7 = (undefined1)param_3;
        puVar4 = (undefined8 *)FUN_1800016b0(local_90);
        puVar4[2] = 0;
        puVar4[3] = 0xf;
        local_a8[0] = 0;
        FUN_180001300((undefined1 *)puVar4,local_a8);
        uVar6 = 0xffffffffffffffff;
        do {
          _Size = uVar6 + 1;
          lVar8 = uVar6 + 1;
          uVar6 = _Size;
        } while (*(char *)((longlong)&local_68 + lVar8) != '\0');
        if ((ulonglong)puVar4[3] < _Size) {
          FUN_1800086f0((longlong)local_90,_Size,uVar7,&local_68);
        }
        else {
          puVar5 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar5 = (undefined8 *)*puVar4;
          }
          puVar4[2] = _Size;
          memmove(puVar5,&local_68,_Size);
          local_a8[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar5 + _Size),local_a8);
        }
        if (local_80 - 10U < 0x1f) {
          local_98 = &local_68;
          plVar3 = (longlong *)FUN_180007060((longlong)&local_68,local_90);
          FUN_1800174f0(param_1,plVar3);
        }
        else {
          puVar5 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar5 = (undefined8 *)*puVar4;
          }
          puVar4[2] = 0;
          local_a8[0] = 0;
          FUN_180001300((undefined1 *)puVar5,local_a8);
        }
        FUN_180001630(local_90);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStackY_d8);
  return;
}

