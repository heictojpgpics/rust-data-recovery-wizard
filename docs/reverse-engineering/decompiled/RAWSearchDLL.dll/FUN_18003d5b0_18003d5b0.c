// Function: FUN_18003d5b0
// Address: 18003d5b0
// Size: 157 bytes


undefined8 * FUN_18003d5b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::OGGAnalyser::OGGRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x23] = 100;
    *(undefined2 *)(puVar1 + 0x24) = 0;
    puVar1[0x25] = 0;
    puVar1[0x22] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0xc800000;
    *(undefined4 *)(puVar1 + 3) = 0x52;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

