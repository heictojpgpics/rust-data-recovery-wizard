// Function: FUN_18001a090
// Address: 18001a090
// Size: 27 bytes


void FUN_18001a090(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_1 + lVar1 * 2) != 0);
  return;
}

