// Function: FUN_180006b20
// Address: 180006b20
// Size: 12 bytes


longlong FUN_180006b20(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x30;
  if (param_2 == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}

