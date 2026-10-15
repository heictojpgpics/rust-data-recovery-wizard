// Function: FUN_18002e6f0
// Address: 18002e6f0
// Size: 322 bytes


void FUN_18002e6f0(longlong param_1)

{
  longlong lVar1;
  size_t sVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  char *local_50;
  longlong *local_48;
  ulonglong local_40;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_180086010 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (lVar1 = FUN_1800311f0(param_1), lVar1 != 0)) {
    local_48 = (longlong *)FUN_1800311f0(param_1);
    local_50 = (char *)(**(code **)(*local_48 + 0x10))(local_48);
    sVar2 = strlen(local_50);
    if (1 < sVar2) {
      FUN_180003be0(local_38,"$RmMetadata$Reparse$Repair");
      if (((*local_50 == '#') || (*local_50 == '$')) && (local_50[1] == 'R')) {
        local_40 = FUN_180020520(local_38,local_50,0);
        if (local_40 == 0xffffffffffffffff) {
          local_57 = 1;
          FUN_1800025f0(local_38);
        }
        else {
          local_58 = 0;
          FUN_1800025f0(local_38);
        }
      }
      else {
        local_56 = 0;
        FUN_1800025f0(local_38);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}

