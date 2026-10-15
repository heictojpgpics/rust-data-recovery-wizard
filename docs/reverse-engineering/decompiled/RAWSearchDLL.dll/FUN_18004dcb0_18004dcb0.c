// Function: FUN_18004dcb0
// Address: 18004dcb0
// Size: 155 bytes


longlong FUN_18004dcb0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  size_t *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res18 [16];
  
  psVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  lVar5 = FUN_180007260(param_2,param_3,*psVar1);
  FUN_180001780(param_1);
  puVar6 = (undefined8 *)FUN_1800016b0(lVar5);
  puVar7 = (undefined8 *)FUN_1800016b0(param_1);
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *puVar7 = *puVar6;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_res18[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_res18);
  return param_1;
}

