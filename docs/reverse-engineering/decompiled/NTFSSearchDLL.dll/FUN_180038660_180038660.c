// Function: FUN_180038660
// Address: 180038660
// Size: 223 bytes


void FUN_180038660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auStack_78 [56];
  undefined8 local_40 [2];
  undefined1 local_30 [2];
  short local_2e [4];
  short local_26;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180086010 ^ (ulonglong)auStack_78;
  pcVar3 = "S";
  uVar2 = 1;
  do {
    local_2e[0] = (short)pcVar3[-2];
    local_2e[1] = (short)pcVar3[-1];
    local_2e[2] = (short)*pcVar3;
    local_2e[3] = (short)pcVar3[1];
    local_26 = (short)pcVar3[2];
    lVar1 = -1;
    local_1c = uVar2;
    do {
      lVar1 = lVar1 + 1;
    } while (local_2e[lVar1] != 0);
    local_30[0] = (undefined1)lVar1;
    FUN_1800388c0(local_2e,local_40,param_3,(undefined8 *)local_30);
    uVar2 = uVar2 + 1;
    pcVar3 = pcVar3 + 9;
  } while (uVar2 < 0xaa);
  DAT_180088174 = 1;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_78);
  return;
}

