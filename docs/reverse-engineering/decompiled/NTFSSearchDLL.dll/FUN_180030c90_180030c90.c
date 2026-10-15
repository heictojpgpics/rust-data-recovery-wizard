// Function: FUN_180030c90
// Address: 180030c90
// Size: 116 bytes


void FUN_180030c90(undefined8 param_1,ushort *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ushort *puVar4;
  
  puVar2 = (undefined8 *)FUN_180002680(param_1);
  lVar3 = FUN_18001a090((longlong)param_2);
  lVar1 = puVar2[2];
  puVar4 = (ushort *)FUN_180019e90(puVar2);
  FUN_180030e70(puVar4,lVar1,param_2,lVar3);
  return;
}

