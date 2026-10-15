// Function: FUN_180015290
// Address: 180015290
// Size: 119 bytes


longlong FUN_180015290(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = FUN_180015830(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x20);
  *puVar2 = *(undefined8 *)*param_3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  lVar3 = FUN_180012fd0();
  puVar2[1] = lVar3;
  return lVar1;
}

