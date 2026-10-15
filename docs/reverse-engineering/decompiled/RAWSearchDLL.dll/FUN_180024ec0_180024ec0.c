// Function: FUN_180024ec0
// Address: 180024ec0
// Size: 219 bytes


longlong * FUN_180024ec0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  if (param_1 != param_2) {
    FUN_180001630(param_1);
    puVar5 = (undefined8 *)FUN_1800016b0(param_2);
    puVar6 = (undefined8 *)FUN_1800016b0(param_1);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    local_res8[0] = 0;
    *puVar6 = *puVar5;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    FUN_180001300((undefined1 *)puVar5,local_res8);
  }
  plVar1 = param_1 + 4;
  if (plVar1 != param_2 + 4) {
    FUN_180001630(plVar1);
    puVar5 = (undefined8 *)FUN_1800016b0(param_2 + 4);
    puVar6 = (undefined8 *)FUN_1800016b0(plVar1);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    local_res8[0] = 0;
    *puVar6 = *puVar5;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    FUN_180001300((undefined1 *)puVar5,local_res8);
  }
  param_1[8] = param_2[8];
  return param_1;
}

