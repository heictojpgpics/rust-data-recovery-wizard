// Function: FUN_18000e620
// Address: 18000e620
// Size: 159 bytes


longlong FUN_18000e620(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [32];
  
  if (param_1 != param_2) {
    local_res8[0] = 0;
    uVar6 = 0;
    puVar7 = param_1;
    do {
      lVar4 = FUN_1800012e0(param_1,param_3);
      FUN_180001780(lVar4);
      param_1 = (undefined8 *)FUN_1800016b0(puVar7);
      puVar5 = (undefined8 *)FUN_1800016b0(lVar4);
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *puVar5 = *param_1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      param_1[2] = uVar6;
      param_1[3] = 0xf;
      FUN_180001300((undefined1 *)param_1,local_res8);
      param_3 = param_3 + 0x20;
      puVar7 = puVar7 + 4;
    } while (puVar7 != param_2);
  }
  return param_3;
}

