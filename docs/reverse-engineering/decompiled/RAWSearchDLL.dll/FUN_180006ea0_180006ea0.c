// Function: FUN_180006ea0
// Address: 180006ea0
// Size: 234 bytes


void FUN_180006ea0(byte *param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_138;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_2[lVar4] != 0);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(byte **)param_1;
  }
  if (lVar1 != 0) {
    memset(local_118,0,0x100);
    if (param_2 + lVar4 < param_2) {
      lVar4 = 0;
    }
    pbVar2 = param_2;
    if (lVar4 != 0) {
      do {
        pbVar3 = pbVar2 + 1;
        local_118[*pbVar2] = '\x01';
        pbVar2 = pbVar3;
      } while ((longlong)pbVar3 - (longlong)param_2 != lVar4);
    }
    pbVar2 = param_1 + lVar1;
    while ((param_1 < pbVar2 && (local_118[*param_1] != '\0'))) {
      param_1 = param_1 + 1;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_138);
  return;
}

