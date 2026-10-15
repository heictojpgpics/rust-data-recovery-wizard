// Function: FUN_18000e980
// Address: 18000e980
// Size: 67 bytes


longlong FUN_18000e980(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_18000afb0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_1800012e0(param_1,lVar1 + 0x20);
  *puVar2 = *param_2;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
  return lVar1;
}

