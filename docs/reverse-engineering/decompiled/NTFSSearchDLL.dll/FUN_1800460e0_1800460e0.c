// Function: FUN_1800460e0
// Address: 1800460e0
// Size: 113 bytes


longlong FUN_1800460e0(longlong param_1)

{
  bool bVar1;
  ushort uVar2;
  undefined7 extraout_var;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    bVar1 = FUN_180045400(param_1);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_180045480(param_1);
      FUN_180045320(param_1);
      uVar2 = FUN_180045350(param_1);
      lVar3 = param_1 + (ulonglong)uVar2;
    }
  }
  return lVar3;
}

