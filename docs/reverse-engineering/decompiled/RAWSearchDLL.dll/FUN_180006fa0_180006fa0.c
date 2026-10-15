// Function: FUN_180006fa0
// Address: 180006fa0
// Size: 85 bytes


longlong FUN_180006fa0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [32];
  
  FUN_180001780(param_1);
  puVar4 = (undefined8 *)FUN_1800016b0(param_2);
  puVar5 = (undefined8 *)FUN_1800016b0(param_1);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  local_res8[0] = 0;
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  FUN_180001300((undefined1 *)puVar4,local_res8);
  return param_1;
}

