// Function: FUN_180015df0
// Address: 180015df0
// Size: 89 bytes


longlong FUN_180015df0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x20;
  lVar1 = FUN_18002be40(0x20);
  puVar2 = (undefined8 *)FUN_180001100(uVar3,lVar1);
  *puVar2 = *param_1;
  puVar2 = (undefined8 *)FUN_180001100(uVar3,lVar1 + 8);
  uVar3 = *param_1;
  *puVar2 = uVar3;
  puVar2 = (undefined8 *)FUN_180001100(uVar3,lVar1 + 0x10);
  *puVar2 = *param_1;
  return lVar1;
}

