// Function: FUN_180002c50
// Address: 180002c50
// Size: 18 bytes


void FUN_180002c50(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

