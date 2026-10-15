// Function: FUN_180012800
// Address: 180012800
// Size: 135 bytes


undefined8 * FUN_180012800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x140);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = RawSpeed::New3DSAnalyser::New3DSRawFileInfo::vftable;
    puVar1[0x23] = 200000000;
    *(undefined2 *)(puVar1 + 0x27) = 0x101;
    puVar1[0x22] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x13a) = 1;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

