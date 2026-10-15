// Function: FUN_180006b00
// Address: 180006b00
// Size: 13 bytes


longlong FUN_180006b00(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x40;
  if (param_2 == 0) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}

