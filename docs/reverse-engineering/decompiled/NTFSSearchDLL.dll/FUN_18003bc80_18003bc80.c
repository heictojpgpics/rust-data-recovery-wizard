// Function: FUN_18003bc80
// Address: 18003bc80
// Size: 250 bytes


void FUN_18003bc80(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [6];
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_48[1] = 0xfffffffffffffffe;
    local_18 = DAT_180086010 ^ (ulonglong)auStack_68;
    local_48[0] = param_2;
    puVar1 = FUN_1800319c0(param_2);
    FUN_180003be0(local_48 + 2,puVar1);
    uVar2 = FUN_1800025d0((longlong)(local_48 + 2));
    if (2 < uVar2) {
      pcVar3 = (char *)FUN_180002680(local_48 + 2);
      pcVar4 = pcVar3;
      if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
        pcVar4 = *(char **)pcVar3;
      }
      if (*pcVar4 == '$') {
        if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
          pcVar3 = *(char **)pcVar3;
        }
        if (pcVar3[1] == 'R') {
          FUN_1800246b0((longlong *)(param_1 + 0x38),local_48);
        }
      }
    }
    uVar2 = FUN_1800025d0((longlong)(local_48 + 2));
    if (2 < uVar2) {
      pcVar3 = (char *)FUN_180002680(local_48 + 2);
      pcVar4 = pcVar3;
      if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
        pcVar4 = *(char **)pcVar3;
      }
      if (*pcVar4 == '$') {
        if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
          pcVar3 = *(char **)pcVar3;
        }
        if (pcVar3[1] == 'I') {
          FUN_1800246b0((longlong *)(param_1 + 0x38),local_48);
        }
      }
    }
    FUN_1800025f0(local_48 + 2);
    __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  }
  return;
}

