// Function: FUN_18004db90
// Address: 18004db90
// Size: 284 bytes


void FUN_18004db90(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  ulonglong uVar8;
  
  local_30 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_58;
  uVar9 = 0;
  local_34 = 0;
  plVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar4 = (longlong *)*param_3;
  }
  uVar8 = uVar9;
  local_28 = param_2;
  local_20 = param_3;
  if (0 < (int)param_3[2]) {
    do {
      if ((byte)((char)*plVar4 - 0x30U) < 10) {
        FUN_180001780(param_2);
        puVar6 = (undefined8 *)FUN_1800016b0(param_2);
        puVar6[3] = 0xf;
        local_38[0] = 0;
        FUN_180001300((undefined1 *)puVar6,local_38);
        puVar5 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar5 = (undefined8 *)*puVar6;
        }
        puVar6[2] = uVar9;
        local_38[0] = 0;
        FUN_180001300((undefined1 *)puVar5,local_38);
        goto LAB_18004dc3a;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      plVar4 = (longlong *)((longlong)plVar4 + 1);
    } while ((int)uVar7 < (int)param_3[2]);
  }
  FUN_180001780(param_2);
  puVar5 = (undefined8 *)FUN_1800016b0(param_3);
  puVar6 = (undefined8 *)FUN_1800016b0(param_2);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  puVar5[2] = uVar9;
  puVar5[3] = 0xf;
  local_38[0] = 0;
  FUN_180001300((undefined1 *)puVar5,local_38);
LAB_18004dc3a:
  local_34 = 1;
  FUN_180001630(param_3);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_58);
  return;
}

