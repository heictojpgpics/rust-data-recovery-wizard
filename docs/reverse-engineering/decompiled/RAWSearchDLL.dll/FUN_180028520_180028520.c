// Function: FUN_180028520
// Address: 180028520
// Size: 173 bytes


undefined8 * FUN_180028520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x260);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = FileOLEAnalyser::OleRawFileInfo::vftable;
    FUN_180017fa0((undefined1 *)(puVar1 + 0x22));
    puVar1[0x43] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x214) = 0;
    *(undefined4 *)(puVar1 + 0x46) = 1;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    *(undefined4 *)(puVar1 + 0x4b) = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x25c) = 0x1f400000;
    *(undefined4 *)(puVar1 + 3) = 0x29;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

