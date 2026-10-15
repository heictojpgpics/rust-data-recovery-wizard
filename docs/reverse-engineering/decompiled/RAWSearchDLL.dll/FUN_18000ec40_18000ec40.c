// Function: FUN_18000ec40
// Address: 18000ec40
// Size: 59 bytes


void FUN_18000ec40(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  *param_2 = 0xffffffff;
  puVar1 = (undefined8 *)FUN_1800016b0(param_3);
  puVar2 = puVar1;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  puVar1[2] = 0;
  local_res10[0] = 0;
  FUN_180001300((undefined1 *)puVar2,local_res10);
  return;
}

