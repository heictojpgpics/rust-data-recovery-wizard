// Function: FUN_180018530
// Address: 180018530
// Size: 61 bytes


longlong FUN_180018530(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_180014d70(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  puVar3 = (undefined8 *)FUN_180001100(lVar2,lVar2 + 0x20);
  uVar1 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar1;
  return lVar2;
}

