// Function: FUN_1800143b0
// Address: 1800143b0
// Size: 59 bytes


longlong FUN_1800143b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_180012c00(param_1,param_2,param_3);
  puVar2 = (undefined8 *)FUN_180001100(param_1,lVar1 + 0x10);
  *puVar2 = *param_4;
  return lVar1;
}

