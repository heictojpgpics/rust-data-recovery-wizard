// Function: FUN_180038800
// Address: 180038800
// Size: 87 bytes


longlong FUN_180038800(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18002be40(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined1 *)(lVar1 + 0x19) = 1;
  return lVar1;
}

