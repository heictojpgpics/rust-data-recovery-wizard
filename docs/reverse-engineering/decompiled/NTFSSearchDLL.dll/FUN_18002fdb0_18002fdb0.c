// Function: FUN_18002fdb0
// Address: 18002fdb0
// Size: 212 bytes


longlong FUN_18002fdb0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_180002680(param_1);
  lVar2 = FUN_1800132a0(uVar1,1);
  puVar3 = (undefined8 *)FUN_180002680(param_1);
  uVar4 = FUN_180002680(lVar2);
  FUN_180013c50(uVar1,uVar4,puVar3);
  uVar4 = FUN_180002680(lVar2 + 8);
  FUN_180013c50(uVar1,uVar4,puVar3);
  uVar4 = FUN_180002680(lVar2 + 0x10);
  FUN_180013c50(uVar1,uVar4,puVar3);
  return lVar2;
}

