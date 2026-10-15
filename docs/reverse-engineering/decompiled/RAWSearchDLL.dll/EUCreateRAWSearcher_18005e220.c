// Function: EUCreateRAWSearcher
// Address: 18005e220
// Size: 54 bytes


void EUCreateRAWSearcher(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* 0x5e220  1  EUCreateRAWSearcher */
  puVar1 = (undefined8 *)thunk_FUN_1800020c0(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = FUN_18000bba0(puVar1);
    *param_1 = puVar1;
    return;
  }
  *param_1 = 0;
  return;
}

