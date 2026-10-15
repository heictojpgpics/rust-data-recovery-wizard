// Function: FUN_180025320
// Address: 180025320
// Size: 97 bytes


longlong FUN_180025320(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1800259f0(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x20);
  *puVar2 = *(undefined8 *)*param_3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return lVar1;
}

