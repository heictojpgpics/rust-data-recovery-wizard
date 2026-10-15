// Function: FUN_18001d900
// Address: 18001d900
// Size: 11 bytes


void FUN_18001d900(void *param_1)

{
  code *pcVar1;
  
  __ExceptionPtrRethrow(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

