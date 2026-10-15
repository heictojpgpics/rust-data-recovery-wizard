// Function: FUN_180002090
// Address: 180002090
// Size: 18 bytes


void FUN_180002090(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

