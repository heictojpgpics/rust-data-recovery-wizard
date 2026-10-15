// Function: FUN_1800400a0
// Address: 1800400a0
// Size: 110 bytes


undefined8 * FUN_1800400a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x120);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::X3FAnalyser::X3FRawFileInfo::vftable;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0x6400000;
    *(undefined4 *)(puVar1 + 3) = 0x6c;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

