// Function: FUN_180037090
// Address: 180037090
// Size: 296 bytes


undefined8 * FUN_180037090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x188);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CAsfRawFileInfo::vftable;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x144) = 0x11cf5b4df8699e40;
    *(undefined8 *)((longlong)puVar1 + 0x14c) = 0x2b445c5f8000fda8;
    *(undefined8 *)((longlong)puVar1 + 0x154) = 0x11cf5b4dbc19efc0;
    *(undefined8 *)((longlong)puVar1 + 0x15c) = 0x2b445c5f8000fda8;
    *(undefined8 *)((longlong)puVar1 + 0x164) = 0x11cfa9b7b7dc0791;
    *(undefined8 *)((longlong)puVar1 + 0x16c) = 0x6553200cc000e68e;
    *(undefined8 *)((longlong)puVar1 + 0x174) = 0x11cfa9478cabdca1;
    *(undefined8 *)((longlong)puVar1 + 0x17c) = 0x6553200cc000e48e;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

