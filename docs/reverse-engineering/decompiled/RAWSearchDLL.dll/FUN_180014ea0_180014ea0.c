// Function: FUN_180014ea0
// Address: 180014ea0
// Size: 122 bytes


undefined8 * FUN_180014ea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::MIDAnalyser::MIDRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0xe;
    puVar1[0x22] = 0xe;
    puVar1[0x23] = 10000000;
    *(undefined4 *)(puVar1 + 3) = 0x26;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

