// Function: FUN_180008bd0
// Address: 180008bd0
// Size: 18 bytes


void FUN_180008bd0(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

