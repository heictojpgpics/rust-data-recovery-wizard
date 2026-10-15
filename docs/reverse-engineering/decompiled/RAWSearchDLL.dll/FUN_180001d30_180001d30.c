// Function: FUN_180001d30
// Address: 180001d30
// Size: 55 bytes


void FUN_180001d30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1800020c0(0x48);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}

