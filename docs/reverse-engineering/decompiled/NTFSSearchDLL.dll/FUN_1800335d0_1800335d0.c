// Function: FUN_1800335d0
// Address: 1800335d0
// Size: 280 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800335d0(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong local_58 [11];
  
  local_58[8] = DAT_180086010 ^ (ulonglong)local_58;
  if ((longlong)param_1 < 0) {
    uVar2 = 0;
    local_58[0] = _DAT_180073270;
    local_58[1] = _UNK_180073278;
    local_58[2] = _DAT_180073260;
    local_58[3] = _UNK_180073268;
    local_58[4] = _DAT_180073250;
    local_58[5] = _UNK_180073258;
    local_58[6] = _DAT_180073240;
    local_58[7] = _UNK_180073248;
    while( true ) {
      uVar3 = (int)uVar2 + 1;
      puVar1 = local_58 + uVar2;
      uVar2 = (ulonglong)(uVar3 & 0xff);
      if ((longlong)*puVar1 <= (longlong)param_1) break;
      if (7 < (byte)uVar3) {
        __security_check_cookie(local_58[8] ^ (ulonglong)local_58);
        return;
      }
    }
  }
  else {
    local_58[0] = 0x80;
    local_58[3] = 0x80000000;
    local_58[4] = 0x8000000000;
    local_58[5] = 0x800000000000;
    local_58[6] = 0x80000000000000;
    local_58[7] = 0x8000000000000000;
    uVar2 = 0;
    local_58[1] = 0x8000;
    local_58[2] = 0x800000;
    do {
      uVar3 = (int)uVar2 + 1;
      puVar1 = local_58 + uVar2;
      uVar2 = (ulonglong)(uVar3 & 0xff);
      if (param_1 < *puVar1) break;
    } while ((byte)uVar3 < 8);
  }
  __security_check_cookie(local_58[8] ^ (ulonglong)local_58);
  return;
}

