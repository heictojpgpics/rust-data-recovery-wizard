// Function: FUN_18002bcd0
// Address: 18002bcd0
// Size: 514 bytes


void FUN_18002bcd0(longlong param_1,longlong *param_2,undefined *param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  ulonglong uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined2 local_88 [4];
  undefined8 local_80;
  ushort *local_78;
  ushort local_70 [28];
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  local_70[0] = 0x4944;
  local_70[1] = 0x6170;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[4] = 0x49ee;
  local_70[5] = 0x636e;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[8] = 0x4944;
  local_70[9] = 0x6174;
  local_70[10] = 0;
  local_70[0xb] = 0;
  local_70[0xc] = 0x4944;
  local_70[0xd] = 0x706c;
  local_70[0xe] = 0;
  local_70[0xf] = 0;
  local_70[0x10] = 0x4944;
  local_70[0x11] = 0x6765;
  local_70[0x12] = 0;
  local_70[0x13] = 0;
  local_70[0x14] = 0x4944;
  local_70[0x15] = 0x616b;
  local_70[0x16] = 0;
  local_70[0x17] = 0;
  local_70[0x18] = 0x6e66;
  local_70[0x19] = 0x7369;
  local_70[0x1a] = 0;
  local_70[0x1b] = 0;
  uVar6 = uVar9;
  uVar7 = uVar9;
  while( true ) {
    uVar4 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]);
    uVar7 = uVar7 + uVar4;
    if (param_4 < (longlong)uVar7) break;
    uVar1 = uVar9;
    do {
      if ((longlong)CONCAT31(CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]),param_3[7]) ==
          *(longlong *)(local_70 + uVar1 * 4)) {
        *(undefined4 *)(param_1 + 0x18) = 0x89;
        puVar2 = FUN_180001350();
        uVar8 = SUB81(param_3,0);
        local_78 = local_70;
        local_70[8] = 0;
        local_70[9] = 0;
        local_70[10] = 0;
        local_70[0xb] = 0;
        local_70[0xc] = 0;
        local_70[0xd] = 0;
        local_70[0xe] = 0;
        local_70[0xf] = 0;
        puVar3 = (undefined8 *)FUN_1800016b0(local_70);
        puVar3[2] = 0;
        puVar3[3] = 7;
        local_88[0] = 0;
        FUN_180001790((undefined2 *)puVar3,local_88);
        if ((ulonglong)puVar3[3] < 3) {
          FUN_18000f8f0((longlong)local_70,3,uVar8,&DAT_18006ba60);
        }
        else {
          _Dst = puVar3;
          if (7 < (ulonglong)puVar3[3]) {
            _Dst = (undefined8 *)*puVar3;
          }
          puVar3[2] = 3;
          memmove(_Dst,&DAT_18006ba60,6);
          local_88[0] = 0;
          FUN_180001790((undefined2 *)((longlong)_Dst + 6),local_88);
        }
        FUN_18000ed00((longlong)(puVar2 + 0x60),local_70);
        goto LAB_18002bded;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < 7);
    *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + uVar4;
    param_3 = FUN_180042930(param_2,*(ulonglong *)(param_1 + 0x118));
    if ((param_3 == (undefined *)0x0) ||
       (iVar5 = (int)uVar6, uVar6 = (ulonglong)(iVar5 + 1), 0x14 < iVar5)) break;
  }
LAB_18002bded:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_a8);
  return;
}

