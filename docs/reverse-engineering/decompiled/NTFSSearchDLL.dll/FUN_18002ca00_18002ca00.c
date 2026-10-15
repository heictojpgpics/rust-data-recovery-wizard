// Function: FUN_18002ca00
// Address: 18002ca00
// Size: 87 bytes


longlong FUN_18002ca00(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18002be40(0x48);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined1 *)(lVar1 + 0x19) = 1;
  return lVar1;
}

