// Function: FUN_180015960
// Address: 180015960
// Size: 61 bytes


longlong FUN_180015960(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_180015e50(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x20);
  *puVar2 = *param_2;
  return lVar1;
}

