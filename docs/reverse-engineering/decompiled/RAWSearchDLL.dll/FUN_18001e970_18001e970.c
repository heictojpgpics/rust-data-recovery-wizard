// Function: FUN_18001e970
// Address: 18001e970
// Size: 194 bytes


longlong FUN_18001e970(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res10 [24];
  
  lVar6 = param_2;
  FUN_180001780(param_1);
  puVar4 = (undefined8 *)FUN_1800016b0(param_2);
  puVar5 = (undefined8 *)FUN_1800016b0(param_1);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  local_res10[0] = 0;
  FUN_180001300((undefined1 *)puVar4,local_res10);
  FUN_180001780(param_1 + 0x20);
  puVar4 = (undefined8 *)FUN_1800016b0(lVar6 + 0x20);
  puVar5 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  local_res10[0] = 0;
  FUN_180001300((undefined1 *)puVar4,local_res10);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar6 + 0x40);
  return param_1;
}

