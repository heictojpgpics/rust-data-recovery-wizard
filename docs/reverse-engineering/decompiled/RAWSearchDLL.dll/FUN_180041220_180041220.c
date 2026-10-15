// Function: FUN_180041220
// Address: 180041220
// Size: 110 bytes


undefined8 * FUN_180041220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::DMGAnalyser::DMGRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0xc800000;
    *(undefined4 *)(puVar1 + 3) = 0x71;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

