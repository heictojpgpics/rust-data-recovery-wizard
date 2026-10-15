// Function: FUN_1800133e0
// Address: 1800133e0
// Size: 109 bytes


undefined8 * FUN_1800133e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::CPTAnalyser::CPTFileInfo::vftable;
    *(undefined2 *)(puVar1 + 0x22) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x114) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x11c) = 0;
    puVar1[0x24] = 0;
    *(undefined1 *)(puVar1 + 0x25) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

