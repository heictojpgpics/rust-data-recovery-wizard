// Function: FUN_180022320
// Address: 180022320
// Size: 18 bytes


void FUN_180022320(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string_view position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

