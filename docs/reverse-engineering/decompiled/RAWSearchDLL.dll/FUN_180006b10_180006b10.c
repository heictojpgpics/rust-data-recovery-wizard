// Function: FUN_180006b10
// Address: 180006b10
// Size: 13 bytes


longlong FUN_180006b10(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x50;
  if (param_2 == 0) {
    lVar1 = param_1 + 0x20;
  }
  return lVar1;
}

