// Function: FUN_18002d420
// Address: 18002d420
// Size: 132 bytes


void FUN_18002d420(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  char cVar1;
  
  FUN_180002680(param_3);
  FUN_180002680(param_1);
  cVar1 = FUN_18002d620();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  FUN_18002d4b0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

