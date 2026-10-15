// Function: FUN_180037680
// Address: 180037680
// Size: 111 bytes


undefined8 * FUN_180037680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CDXFRawFileInfo::vftable;
    *(undefined4 *)(puVar1 + 0x26) = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

