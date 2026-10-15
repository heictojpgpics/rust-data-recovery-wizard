// Function: FUN_18000b520
// Address: 18000b520
// Size: 398 bytes


undefined8 * FUN_18000b520(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [24];
  
  *param_1 = CRawFileInfo::vftable;
  uVar3 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffff;
  puVar2 = param_1 + 4;
  FUN_180001780((longlong)puVar2);
  puVar1 = (undefined8 *)FUN_1800016b0(puVar2);
  puVar1[3] = 0xf;
  local_res10[0] = (undefined1)uVar3;
  FUN_180001300((undefined1 *)puVar1,local_res10);
  puVar2 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[2] = uVar3;
  local_res10[0] = (undefined1)uVar3;
  FUN_180001300((undefined1 *)puVar2,local_res10);
  puVar2 = param_1 + 8;
  FUN_180001780((longlong)puVar2);
  puVar1 = (undefined8 *)FUN_1800016b0(puVar2);
  puVar1[3] = 0xf;
  local_res10[0] = 0;
  FUN_180001300((undefined1 *)puVar1,local_res10);
  puVar2 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[2] = uVar3;
  local_res10[0] = 0;
  FUN_180001300((undefined1 *)puVar2,local_res10);
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_180001690((undefined1 *)(param_1 + 0xd));
  FUN_180001690((undefined1 *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  puVar2 = param_1 + 0x16;
  FUN_180001780((longlong)puVar2);
  puVar1 = (undefined8 *)FUN_1800016b0(puVar2);
  puVar1[3] = 0xf;
  local_res10[0] = 0;
  FUN_180001300((undefined1 *)puVar1,local_res10);
  puVar2 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[2] = uVar3;
  local_res10[0] = 0;
  FUN_180001300((undefined1 *)puVar2,local_res10);
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar3;
  param_1[0x1c] = uVar3;
  param_1[0x1d] = uVar3;
  param_1[0x1e] = uVar3;
  param_1[0x1f] = uVar3;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  *(int *)(param_1 + 0x21) = (int)uVar3;
  return param_1;
}

