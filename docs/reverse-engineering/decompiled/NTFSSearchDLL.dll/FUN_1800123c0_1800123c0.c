// Function: FUN_1800123c0
// Address: 1800123c0
// Size: 18 bytes


void FUN_1800123c0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector<bool> too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

