// Function: FUN_18003d3e0
// Address: 18003d3e0
// Size: 18 bytes


void FUN_18003d3e0(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid vector<T> subscript");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

