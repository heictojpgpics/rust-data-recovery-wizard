// Function: FUN_180039f60
// Address: 180039f60
// Size: 290 bytes


void FUN_180039f60(longlong *param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  char local_1d [5];
  ulonglong local_18;
  char *pcVar6;
  
  local_40 = 0xfffffffffffffffe;
  local_18 = DAT_180086010 ^ (ulonglong)auStack_68;
  uVar7 = 0;
  local_44 = 0;
  pcVar5 = local_1d + 2;
  if ((longlong)param_2 < 0) {
    uVar4 = -param_2;
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + -1;
      uVar3 = uVar4 / 10;
      *pcVar5 = (char)uVar4 + (char)uVar3 * -10 + '0';
      uVar4 = uVar3;
    } while (uVar3 != 0);
    pcVar5 = pcVar6 + -2;
    *pcVar5 = '-';
  }
  else {
    do {
      pcVar5 = pcVar5 + -1;
      uVar4 = param_2 / 10;
      *pcVar5 = (char)param_2 + (char)uVar4 * -10 + '0';
      param_2 = uVar4;
    } while (uVar4 != 0);
  }
  plVar2 = param_1;
  local_38 = param_1;
  FUN_1800026a0((longlong)param_1);
  puVar1 = (undefined1 *)FUN_180002680(plVar2);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = 0xf;
  local_48[0] = 0;
  FUN_180001150(puVar1,local_48);
  if (pcVar5 != local_1d + 2) {
    FUN_1800026c0(param_1,pcVar5,(size_t)(local_1d + (2 - (longlong)pcVar5)));
  }
  local_44 = 1;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_68);
  return;
}

