// Function: FUN_18002e930
// Address: 18002e930
// Size: 110 bytes


undefined8 * FUN_18002e930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = BruteForce::CMTSAnalyser::CMTSFileInfo::vftable;
    *(undefined4 *)(puVar1 + 0x22) = 0xc0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 0x25) = 0;
    puVar1[0x24] = 0;
    *(undefined4 *)(puVar1 + 3) = 0x76;
  }
  return puVar1;
}

