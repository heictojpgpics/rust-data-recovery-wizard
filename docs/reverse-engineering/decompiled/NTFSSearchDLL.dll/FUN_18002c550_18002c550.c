// Function: FUN_18002c550
// Address: 18002c550
// Size: 451 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_18002c550(void)

{
  uint uVar1;
  undefined *local_res8;
  undefined *local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180088254) {
    _Init_thread_header(&DAT_180088254);
    if (DAT_180088254 == -1) {
      _DAT_180088260 = _DAT_180073220;
      uRam0000000180088268 = _UNK_180073228;
      _DAT_180088270 = 0;
      _DAT_180088290 = 2;
      _DAT_180088298 = 0;
      _DAT_180088278 = 0;
      _DAT_180088288 = 0;
      _DAT_180088280 = 0;
      _DAT_1800882a0 = _DAT_180073230;
      uRam00000001800882a8 = _UNK_180073238;
      _DAT_1800882b0 = _DAT_1800731f0;
      uRam00000001800882b8 = _UNK_1800731f8;
      local_res10 = &DAT_1800882c0;
      _DAT_1800882c0 = _DAT_1800731c0;
      uRam00000001800882c8 = _UNK_1800731c8;
      _DAT_1800882d0 = _DAT_1800731d0;
      _DAT_1800882d8 = _UNK_1800731d8;
      DAT_1800882e0 = (uint *)0x0;
      DAT_1800882e8 = (uint *)0x0;
      local_res8 = &DAT_1800882f0;
      _DAT_1800882f0 = 0;
      _DAT_1800882f8 = 0;
      _DAT_1800882f0 = FUN_18002ca00();
      uVar1 = 1;
      do {
        local_res8 = (undefined *)CONCAT44(local_res8._4_4_,uVar1);
        if (DAT_1800882e8 == DAT_1800882e0) {
          FUN_18002ca60((longlong *)&DAT_1800882d8,DAT_1800882e0,(undefined4 *)&local_res8);
        }
        else {
          *DAT_1800882e0 = uVar1;
          DAT_1800882e0 = DAT_1800882e0 + 1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < 0xaa);
      _DAT_180088310 = _DAT_180073200;
      DAT_180088318 = _UNK_180073208;
      DAT_180088300._0_1_ = 0;
      DAT_180088320 = 0xff;
      atexit((_func_5014 *)&LAB_18004b140);
      _Init_thread_footer(&DAT_180088254);
      return &DAT_180088260;
    }
  }
  return &DAT_180088260;
}

