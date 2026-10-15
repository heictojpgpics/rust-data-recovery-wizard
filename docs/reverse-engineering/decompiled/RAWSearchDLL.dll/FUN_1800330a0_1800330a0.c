// Function: FUN_1800330a0
// Address: 1800330a0
// Size: 133 bytes


undefined8 * FUN_1800330a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CAPERawFileInfo::vftable;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    *(undefined2 *)(puVar1 + 0x25) = 0;
    *(undefined8 *)((longlong)puVar1 + 300) = 4;
    *(undefined1 *)((longlong)puVar1 + 0x134) = 0;
    *(undefined4 *)(puVar1 + 3) = 0x51;
  }
  *(undefined4 *)(puVar1 + 3) = 0x51;
  return puVar1;
}

