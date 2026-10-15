// Function: FUN_18005e624
// Address: 18005e624
// Size: 216 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18005e624(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_1800963c9 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_18008f028 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_18008f028;
      _DAT_1800963d0 = in_RAX;
      uRam00000001800963d8 = in_RAX;
      _DAT_1800963e0 = in_RAX;
      _DAT_1800963e8 = in_RAX;
      uRam00000001800963f0 = in_RAX;
      _DAT_1800963f8 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1800963d0);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1800963e8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1800963c9 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

