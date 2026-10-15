// Function: FUN_180024fe0
// Address: 180024fe0
// Size: 124 bytes


longlong FUN_180024fe0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = FUN_180015830(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  puVar3 = (undefined8 *)FUN_180001100(param_1,lVar2 + 0x20);
  puVar1 = (undefined8 *)*param_3;
  *puVar3 = *puVar1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  lVar4 = FUN_1800131d0(puVar1,0,0);
  puVar3[1] = lVar4;
  return lVar2;
}

