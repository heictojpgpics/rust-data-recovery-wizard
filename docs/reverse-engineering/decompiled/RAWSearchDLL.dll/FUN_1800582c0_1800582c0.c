// Function: FUN_1800582c0
// Address: 1800582c0
// Size: 122 bytes


void FUN_1800582c0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_180008ad0();
  if (uVar1 < 0x1000) {
    if (uVar1 != 0) {
      uVar1 = FUN_1800020c0(uVar1);
    }
  }
  else {
    uVar3 = uVar1 + 0x27;
    if (uVar3 <= uVar1) {
      uVar3 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1800020c0(uVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar1 - 8) = lVar2;
  }
  *(ulonglong *)uVar1 = uVar1;
  *(ulonglong *)(uVar1 + 8) = uVar1;
  *(ulonglong *)(uVar1 + 0x10) = uVar1;
  *(undefined2 *)(uVar1 + 0x18) = 0x101;
  return;
}

