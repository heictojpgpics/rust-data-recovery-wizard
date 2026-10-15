// Function: FUN_18001a170
// Address: 18001a170
// Size: 69 bytes


longlong FUN_18001a170(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_180014d70(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x20);
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  return lVar1;
}

