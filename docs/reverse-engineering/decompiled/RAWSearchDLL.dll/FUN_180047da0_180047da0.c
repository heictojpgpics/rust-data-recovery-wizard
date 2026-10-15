// Function: FUN_180047da0
// Address: 180047da0
// Size: 233 bytes


void FUN_180047da0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_30 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_58;
  uVar6 = 0;
  local_34 = 0;
  uVar7 = param_3[2];
  uVar8 = uVar6;
  local_28 = param_2;
  local_20 = param_3;
  if (uVar7 != 0) {
    puVar4 = (undefined8 *)FUN_1800016b0(param_3);
    do {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (undefined8 *)*puVar4;
      }
      if (*(char *)((longlong)puVar5 + uVar6) == ':') {
        puVar5 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar5 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)((longlong)puVar5 + uVar6) = 0x2d;
      }
    } while (uVar6 < uVar7);
  }
  FUN_180001780(param_2);
  puVar4 = (undefined8 *)FUN_1800016b0(param_3);
  puVar5 = (undefined8 *)FUN_1800016b0(param_2);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  puVar4[2] = uVar8;
  puVar4[3] = 0xf;
  local_38[0] = 0;
  FUN_180001300((undefined1 *)puVar4,local_38);
  local_34 = 1;
  FUN_180001630(param_3);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}

