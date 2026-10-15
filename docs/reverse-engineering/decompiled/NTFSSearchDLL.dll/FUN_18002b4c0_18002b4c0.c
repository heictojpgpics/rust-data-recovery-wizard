// Function: FUN_18002b4c0
// Address: 18002b4c0
// Size: 95 bytes


longlong FUN_18002b4c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_1800259f0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined4 *)FUN_180001100(param_1,lVar1 + 0x20);
  *puVar2 = *(undefined4 *)*param_3;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return lVar1;
}

