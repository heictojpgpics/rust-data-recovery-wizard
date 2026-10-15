// Function: EUCreateNTFSSearcher
// Address: 180001090
// Size: 69 bytes


void EUCreateNTFSSearcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* 0x1090  2  EUCreateNTFSSearcher */
  puVar1 = (undefined8 *)FUN_18002be40(0x940);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = FUN_180007ba0(puVar1);
    *param_1 = puVar1;
    return;
  }
  *param_1 = 0;
  return;
}

