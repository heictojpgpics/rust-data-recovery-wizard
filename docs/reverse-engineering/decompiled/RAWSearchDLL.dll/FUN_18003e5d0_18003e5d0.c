// Function: FUN_18003e5d0
// Address: 18003e5d0
// Size: 128 bytes


undefined8 * FUN_18003e5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::RM_RMVBAnalyser::RM_RMVBRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x23] = 1;
    puVar1[0x22] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0xc800000;
    *(undefined4 *)(puVar1 + 3) = 0x5e;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

