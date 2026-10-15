// Function: FUN_18001d910
// Address: 18001d910
// Size: 24 bytes


void FUN_18001d910(void *param_1)

{
  code *pcVar1;
  
  FUN_18001d900(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

