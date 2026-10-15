// Function: FUN_180009f00
// Address: 180009f00
// Size: 59 bytes


longlong FUN_180009f00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1800077d0(param_1,param_2,param_3);
  puVar2 = (undefined8 *)FUN_1800012e0(param_1,lVar1 + 0x10);
  *puVar2 = *param_4;
  return lVar1;
}

