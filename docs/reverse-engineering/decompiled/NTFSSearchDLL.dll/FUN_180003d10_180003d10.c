// Function: FUN_180003d10
// Address: 180003d10
// Size: 33 bytes


longlong FUN_180003d10(ulonglong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 * 0x18;
  if (0xaaaaaaaaaaaaaaa < param_1) {
    lVar1 = -1;
  }
  return lVar1;
}

