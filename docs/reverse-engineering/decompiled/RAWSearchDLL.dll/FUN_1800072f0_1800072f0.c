// Function: FUN_1800072f0
// Address: 1800072f0
// Size: 18 bytes


void FUN_1800072f0(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

