// Function: FUN_1800233a0
// Address: 1800233a0
// Size: 115 bytes


longlong FUN_1800233a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      param_1 = FUN_1800012e0(param_1,param_3);
      FUN_18001e970(param_1,lVar1);
      param_3 = param_3 + 0x48;
      lVar1 = lVar1 + 0x48;
    } while (lVar1 != param_2);
  }
  return param_3;
}

