// Function: FUN_180024e20
// Address: 180024e20
// Size: 73 bytes


longlong FUN_180024e20(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = FUN_180006450(param_1,param_2,param_3);
  lVar4 = lVar1 + 0x10;
  uVar2 = FUN_180002680(lVar4);
  puVar3 = (undefined8 *)FUN_180001100(lVar4,uVar2);
  FUN_1800065b0(puVar3,param_4);
  return lVar1;
}

