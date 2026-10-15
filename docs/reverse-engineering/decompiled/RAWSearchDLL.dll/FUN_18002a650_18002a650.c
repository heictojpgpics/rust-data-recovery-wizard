// Function: FUN_18002a650
// Address: 18002a650
// Size: 164 bytes


undefined8 * FUN_18002a650(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::MovAnalyzer::MovRawFileInfo::vftable;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x124) = 0;
    *(undefined4 *)(puVar1 + 0x25) = 0;
    *(undefined1 *)((longlong)puVar1 + 300) = 0;
    puVar1[0x26] = 0;
    FUN_180001690((undefined1 *)(puVar1 + 0x27));
    FUN_180001690((undefined1 *)(puVar1 + 0x2b));
    puVar1[0x2f] = 0x200;
    *(undefined4 *)(puVar1 + 3) = 0x2a;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

