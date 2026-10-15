// Function: FUN_180012c20
// Address: 180012c20
// Size: 132 bytes


undefined8 * FUN_180012c20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::RARAnalyser::RARRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x22] = 7;
    puVar1[0x1b] = 7;
    puVar1[0x23] = 0x40000000;
    *(undefined2 *)(puVar1 + 0x24) = 0x101;
    *(undefined4 *)(puVar1 + 3) = 0x3a;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

