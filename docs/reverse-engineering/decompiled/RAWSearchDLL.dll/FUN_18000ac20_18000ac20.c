// Function: FUN_18000ac20
// Address: 18000ac20
// Size: 69 bytes


longlong FUN_18000ac20(undefined8 *param_1,undefined2 *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  lVar1 = FUN_18000afb0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined2 *)FUN_1800012e0(param_1,lVar1 + 0x20);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 4);
  return lVar1;
}

