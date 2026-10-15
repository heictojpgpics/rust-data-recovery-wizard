// Function: FUN_180009c50
// Address: 180009c50
// Size: 163 bytes


longlong FUN_180009c50(longlong param_1,longlong param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined1 local_res20 [8];
  
  sVar7 = 0xffffffffffffffff;
  do {
    sVar7 = sVar7 + 1;
  } while (*(char *)((longlong)param_3 + sVar7) != '\0');
  lVar4 = FUN_180007260(param_2,param_3,sVar7);
  FUN_180001780(param_1);
  puVar5 = (undefined8 *)FUN_1800016b0(lVar4);
  puVar6 = (undefined8 *)FUN_1800016b0(param_1);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  local_res20[0] = 0;
  FUN_180001300((undefined1 *)puVar5,local_res20);
  return param_1;
}

