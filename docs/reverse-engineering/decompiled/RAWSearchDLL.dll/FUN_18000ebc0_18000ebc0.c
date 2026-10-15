// Function: FUN_18000ebc0
// Address: 18000ebc0
// Size: 120 bytes


longlong FUN_18000ebc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  
  uVar4 = 0;
  lVar3 = param_2;
  FUN_180001780(param_2);
  puVar1 = (undefined8 *)FUN_1800016b0(param_2);
  puVar1[3] = 0xf;
  local_res18[0] = (undefined1)uVar4;
  FUN_180001300((undefined1 *)puVar1,local_res18);
  puVar2 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[2] = uVar4;
  local_res18[0] = (undefined1)uVar4;
  FUN_180001300((undefined1 *)puVar2,local_res18);
  return lVar3;
}

