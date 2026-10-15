// Function: FUN_18001dad0
// Address: 18001dad0
// Size: 402 bytes


void FUN_18001dad0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int cchWideChar;
  undefined8 *puVar3;
  size_t sVar4;
  LPWSTR lpWideCharStr;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStackY_88 [32];
  undefined2 local_58 [2];
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_50 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_88;
  local_54 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_48 = param_1;
  local_40 = param_2;
  puVar3 = (undefined8 *)FUN_1800016b0(param_1);
  puVar3[2] = 0;
  puVar3[3] = 7;
  local_58[0] = 0;
  FUN_180001790((undefined2 *)puVar3,local_58);
  local_54 = 1;
  plVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar6 = (longlong *)*param_2;
  }
  cchWideChar = MultiByteToWideChar(0,0,(LPCSTR)plVar6,(int)param_2[2],(LPWSTR)0x0,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(cchWideChar + 1);
  sVar4 = SUB168(ZEXT816(2) * auVar2,0);
  uVar5 = 0xffffffffffffffff;
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    sVar4 = 0xffffffffffffffff;
  }
  lpWideCharStr = (LPWSTR)FUN_1800020c0(sVar4);
  plVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar6 = (longlong *)*param_2;
  }
  MultiByteToWideChar(0,0,(LPCSTR)plVar6,(int)param_2[2],lpWideCharStr,cchWideChar);
  lpWideCharStr[cchWideChar] = L'\0';
  do {
    uVar5 = uVar5 + 1;
  } while (lpWideCharStr[uVar5] != L'\0');
  lVar1 = puVar3[2];
  if ((ulonglong)(puVar3[3] - lVar1) < uVar5) {
    FUN_180021d80(param_1,uVar5,(char)plVar6,lpWideCharStr,uVar5);
  }
  else {
    puVar3[2] = lVar1 + uVar5;
    if (7 < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    memmove((void *)((longlong)puVar3 + lVar1 * 2),lpWideCharStr,uVar5 * 2);
    local_58[0] = 0;
    FUN_180001790((undefined2 *)((longlong)puVar3 + (lVar1 + uVar5) * 2),local_58);
  }
  free(lpWideCharStr);
  FUN_180001630(param_2);
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_88);
  return;
}

