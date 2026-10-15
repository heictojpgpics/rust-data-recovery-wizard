// Function: FUN_1800383c0
// Address: 1800383c0
// Size: 344 bytes


void FUN_1800383c0(int *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  byte local_68 [8];
  byte local_60;
  wchar_t local_5e [9];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180086010 ^ (ulonglong)auStack_88;
  if (DAT_180088174 == 0) {
    FUN_180038660(local_68,param_2,param_3);
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_68[0] = 0;
  if ((param_2 == 0) ||
     (uVar3 = FUN_180038dc0(param_2,(byte)param_3,&local_48,(char *)local_68), bVar1 = local_68[0],
     (int)uVar3 == 0)) goto LAB_180038500;
  uVar6 = (ulonglong)local_68[0];
  if (local_68[0] != 0) {
    memcpy(local_5e,&local_48,uVar6 * 2);
  }
  local_5e[uVar6] = L'\0';
  local_60 = bVar1;
  local_4c = 0;
  puVar4 = DAT_180088190;
  puVar7 = (undefined8 *)DAT_180088190[1];
  if (*(char *)((longlong)DAT_180088190[1] + 0x19) == '\0') {
    do {
      puVar5 = puVar7;
      iVar2 = _wcsicmp((wchar_t *)((longlong)puVar5 + 0x1e),local_5e);
      if (iVar2 < 0) {
        puVar7 = (undefined8 *)puVar5[2];
        puVar5 = puVar4;
      }
      else {
        puVar7 = (undefined8 *)*puVar5;
      }
      puVar4 = puVar5;
    } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
    if ((puVar5 == DAT_180088190) ||
       (iVar2 = _wcsicmp(local_5e,(wchar_t *)((longlong)puVar5 + 0x1e)), iVar2 < 0))
    goto LAB_1800384cb;
  }
  else {
LAB_1800384cb:
    puVar5 = DAT_180088190;
  }
  if ((((puVar5 != DAT_180088190) && (iVar2 = *(int *)(puVar5 + 6), iVar2 != 0)) && (-1 < param_4))
     && (-1 < param_5)) {
    *(longlong *)(param_1 + 4) = param_5;
    *param_1 = iVar2;
    *(longlong *)(param_1 + 2) = param_4;
  }
LAB_180038500:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_88);
  return;
}

