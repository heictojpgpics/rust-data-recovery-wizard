// Function: FUN_1800255f0
// Address: 1800255f0
// Size: 84 bytes


longlong FUN_1800255f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = FUN_180014d70(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined4 *)FUN_180001100(param_1,lVar1 + 0x20);
  *puVar2 = *(undefined4 *)*param_3;
  *(undefined8 *)(puVar2 + 2) = 0;
  return lVar1;
}

