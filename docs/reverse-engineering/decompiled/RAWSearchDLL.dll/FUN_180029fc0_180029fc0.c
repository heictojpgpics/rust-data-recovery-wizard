// Function: FUN_180029fc0
// Address: 180029fc0
// Size: 148 bytes


undefined8 * FUN_180029fc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FUN_180001350();
  uVar1 = *(undefined8 *)(puVar2 + 0x70);
  puVar3 = (undefined8 *)FUN_1800020c0(0x180);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18000b520(puVar3);
    *puVar3 = CZeroEndRawFileInfo::vftable;
    puVar3[0x22] = uVar1;
    *(undefined4 *)(puVar3 + 0x23) = 4;
    puVar3[0x24] = 0;
    *(undefined2 *)(puVar3 + 0x2f) = 0;
    memset(puVar3 + 0x25,0,0x50);
    return puVar3;
  }
  return (undefined8 *)0x0;
}

