// Function: FUN_18003da90
// Address: 18003da90
// Size: 131 bytes


undefined8 * FUN_18003da90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::LZHAnalyser::LZHRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x22] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0xc800000;
    *(undefined4 *)(puVar1 + 3) = 0x24;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

