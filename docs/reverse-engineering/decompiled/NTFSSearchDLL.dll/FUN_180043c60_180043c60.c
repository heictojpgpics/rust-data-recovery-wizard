// Function: FUN_180043c60
// Address: 180043c60
// Size: 144 bytes


undefined1 FUN_180043c60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_28;
  longlong local_20 [4];
  
  local_28 = 0;
  if ((((param_1 != 0) && (param_2 != (longlong *)0x0)) &&
      (lVar1 = FUN_180031720(param_1), lVar1 == *param_2)) &&
     ((lVar1 = FUN_180031730(param_1), lVar1 == param_2[1] &&
      (FUN_180031a80(param_1,local_20), local_20[0] == param_2[3])))) {
    local_28 = 1;
  }
  return local_28;
}

