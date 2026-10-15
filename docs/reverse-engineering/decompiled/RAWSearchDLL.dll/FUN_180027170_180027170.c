// Function: FUN_180027170
// Address: 180027170
// Size: 195 bytes


void FUN_180027170(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  char *local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 4) == DAT_18006b390) {
    local_48[0] = "ftyp3g2a";
    local_48[1] = "ftyp3gp4";
    local_48[2] = "ftyp3gp5";
    lVar2 = 0;
    local_48[3] = "ftypmmp4";
    do {
      iVar1 = _memicmp((void *)(param_2 + 4),local_48[lVar2],8);
      if (iVar1 == 0) {
        *(undefined8 *)(param_3 + 0x10) = 0;
        *(undefined4 *)(param_3 + 0x18) = 2;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < 4);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_68);
  return;
}

