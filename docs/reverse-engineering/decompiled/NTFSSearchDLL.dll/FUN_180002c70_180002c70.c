// Function: FUN_180002c70
// Address: 180002c70
// Size: 33 bytes


longlong FUN_180002c70(ulonglong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 * 8;
  if (0x1fffffffffffffff < param_1) {
    lVar1 = -1;
  }
  return lVar1;
}

