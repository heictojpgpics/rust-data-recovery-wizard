// Function: FUN_18003dfc0
// Address: 18003dfc0
// Size: 142 bytes


undefined8 * FUN_18003dfc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x140);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::FLVAnalyser::FLVRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 1;
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x25) = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0xc800000;
    *(undefined4 *)(puVar1 + 3) = 0x5a;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

