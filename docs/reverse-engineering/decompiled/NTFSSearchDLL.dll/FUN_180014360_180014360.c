// Function: FUN_180014360
// Address: 180014360
// Size: 69 bytes


longlong FUN_180014360(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_1800131d0(param_1,param_2,param_3);
  puVar3 = (undefined8 *)FUN_180001100(lVar2,lVar2 + 0x10);
  uVar1 = param_4[1];
  *puVar3 = *param_4;
  puVar3[1] = uVar1;
  puVar3[2] = param_4[2];
  return lVar2;
}

