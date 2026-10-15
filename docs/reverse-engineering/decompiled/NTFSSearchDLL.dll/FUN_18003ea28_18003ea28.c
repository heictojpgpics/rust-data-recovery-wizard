// Function: FUN_18003ea28
// Address: 18003ea28
// Size: 216 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18003ea28(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar4;
  
  if (DAT_180086721 == '\0') {
    if (1 < param_1) {
      __scrt_fastfail(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)DAT_180086010 & 0x3f) & 0x3f;
      in_RAX = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_180086010;
      _DAT_180086728 = in_RAX;
      uRam0000000180086730 = in_RAX;
      _DAT_180086738 = in_RAX;
      _DAT_180086740 = in_RAX;
      uRam0000000180086748 = in_RAX;
      _DAT_180086750 = in_RAX;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180086728);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180086740), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180086721 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

