// Function: FUN_180049bb0
// Address: 180049bb0
// Size: 15 bytes


void FUN_180049bb0(void)

{
  code *pcVar1;
  
  FUN_180047ec0(0x8007000e);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

