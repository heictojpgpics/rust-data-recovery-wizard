// Function: FUN_180041880
// Address: 180041880
// Size: 117 bytes


undefined8 * FUN_180041880(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::SVGAnalyser::SVGRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0x100000;
    *(undefined4 *)(puVar1 + 3) = 0x5b;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

