// Function: FUN_18001b150
// Address: 18001b150
// Size: 59 bytes


longlong FUN_18001b150(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_180012e40(param_1,param_2,param_3);
  puVar3 = (undefined8 *)FUN_180001100(lVar2,lVar2 + 0x10);
  uVar1 = param_4[1];
  *puVar3 = *param_4;
  puVar3[1] = uVar1;
  return lVar2;
}

