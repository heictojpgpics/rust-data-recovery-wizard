// Function: FUN_1800101b0
// Address: 1800101b0
// Size: 138 bytes


longlong FUN_1800101b0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar1 = FUN_1800020c0(0x48);
  uVar2 = FUN_1800016b0(param_1);
  lVar6 = lVar1;
  uVar3 = FUN_1800016b0(lVar1);
  puVar4 = (undefined8 *)FUN_1800012e0(lVar1,uVar3);
  puVar5 = (undefined8 *)FUN_1800016b0(uVar2);
  *puVar4 = *puVar5;
  lVar1 = lVar6 + 8;
  uVar2 = FUN_1800016b0(lVar1);
  puVar4 = (undefined8 *)FUN_1800012e0(lVar1,uVar2);
  *puVar4 = *puVar5;
  lVar1 = lVar6 + 0x10;
  uVar2 = FUN_1800016b0(lVar1);
  puVar4 = (undefined8 *)FUN_1800012e0(lVar1,uVar2);
  *puVar4 = *puVar5;
  return lVar6;
}

