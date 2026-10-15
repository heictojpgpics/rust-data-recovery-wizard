// Function: FUN_1800173f0
// Address: 1800173f0
// Size: 255 bytes


void FUN_1800173f0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 local_60 [32];
  longlong *local_40;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_98;
  local_68 = local_60;
  local_40 = param_2;
  plVar4 = (longlong *)FUN_180007060((longlong)local_60,param_2);
  plVar4 = (longlong *)FUN_180017060((longlong)local_38,plVar4);
  if (param_2 != plVar4) {
    FUN_180001630(param_2);
    puVar5 = (undefined8 *)FUN_1800016b0(plVar4);
    puVar6 = (undefined8 *)FUN_1800016b0(param_2);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar6 = *puVar5;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    local_78[0] = 0;
    FUN_180001300((undefined1 *)puVar5,local_78);
  }
  FUN_180001630(local_38);
  if ((longlong *)(param_1 + 0x20) != param_2) {
    plVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar4 = (longlong *)*param_2;
    }
    FUN_1800071e0(param_1 + 0x20,plVar4,param_2[2]);
  }
  FUN_180001630(param_2);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_98);
  return;
}

