// Function: FUN_180002bd0
// Address: 180002bd0
// Size: 18 bytes


void FUN_180002bd0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<T> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

