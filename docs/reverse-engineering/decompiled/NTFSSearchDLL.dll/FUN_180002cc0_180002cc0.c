// Function: FUN_180002cc0
// Address: 180002cc0
// Size: 17 bytes


void FUN_180002cc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_1 + lVar1) != '\0');
  return;
}

