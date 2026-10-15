// Function: FUN_180015570
// Address: 180015570
// Size: 85 bytes


longlong FUN_180015570(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_180014d70(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x20);
  *puVar2 = *(undefined8 *)*param_3;
  *(undefined4 *)(puVar2 + 1) = 0;
  return lVar1;
}

