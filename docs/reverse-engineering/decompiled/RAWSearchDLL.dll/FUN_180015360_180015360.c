// Function: FUN_180015360
// Address: 180015360
// Size: 136 bytes


undefined8 * FUN_180015360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x128);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::CMDBAnalyser::CMDBRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0x1000;
    puVar1[0x22] = 200000000;
    puVar1[0x23] = 0x1000;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x124) = 1;
    *(undefined4 *)(puVar1 + 3) = 0x27;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

