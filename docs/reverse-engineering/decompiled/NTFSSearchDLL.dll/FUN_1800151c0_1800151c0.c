// Function: FUN_1800151c0
// Address: 1800151c0
// Size: 80 bytes


longlong FUN_1800151c0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_180014d70(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x20);
  puVar3 = (undefined8 *)FUN_180002680(param_2);
  *puVar2 = *puVar3;
  puVar2[1] = *(undefined8 *)(param_2 + 8);
  return lVar1;
}

