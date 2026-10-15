// Function: FUN_18000f4b0
// Address: 18000f4b0
// Size: 95 bytes


longlong FUN_18000f4b0(longlong param_1,void *param_2)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 local_res8 [16];
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined2 *)FUN_1800016b0(param_1);
  local_res8[0] = (undefined2)uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar2;
  *(undefined8 *)(puVar1 + 0xc) = 7;
  FUN_180001790(puVar1,local_res8);
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(short *)((longlong)param_2 + uVar3 * 2) != 0);
  FUN_18000f7a0(param_1,param_2,uVar3);
  return param_1;
}

