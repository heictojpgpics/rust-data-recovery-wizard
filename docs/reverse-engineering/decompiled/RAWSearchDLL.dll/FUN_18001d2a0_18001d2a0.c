// Function: FUN_18001d2a0
// Address: 18001d2a0
// Size: 100 bytes


longlong FUN_18001d2a0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0x30;
  lVar1 = FUN_1800020c0(0x30);
  lVar4 = lVar1;
  puVar2 = (undefined8 *)FUN_1800012e0(uVar3,lVar1);
  uVar3 = DAT_180118260;
  *puVar2 = DAT_180118260;
  puVar2 = (undefined8 *)FUN_1800012e0(uVar3,lVar1 + 8);
  uVar3 = DAT_180118260;
  *puVar2 = DAT_180118260;
  puVar2 = (undefined8 *)FUN_1800012e0(uVar3,lVar4 + 0x10);
  *puVar2 = DAT_180118260;
  return lVar4;
}

