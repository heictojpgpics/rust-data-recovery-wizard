// Function: FUN_1800431d0
// Address: 1800431d0
// Size: 380 bytes


void FUN_1800431d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  undefined2 local_44;
  ulonglong local_40;
  
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_2 + 8);
  local_58 = 0xffffffffffffffff;
  local_68 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_50 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_50 = *(int *)((longlong)param_3 + 0xc);
    if (local_50 < 1) {
      local_50 = 0x200;
    }
  }
  else {
    local_50 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_50 = local_50 << 7;
  local_48 = 0x7b3dc4;
  local_44 = 0x740;
  puVar1 = FUN_180042930((longlong *)&local_68,0);
  if ((puVar1 == (undefined *)0x0) || (puVar1 == (undefined *)0xfffffffffffffff9))
  goto switchD_1800432b6_caseD_0;
  bVar2 = false;
  switch((byte)puVar1[9] - 0x72) {
  default:
    goto switchD_1800432b6_caseD_0;
  case 1:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
    goto switchD_1800432b6_caseD_1;
  case 2:
    if ((*(uint *)(puVar1 + 0xe) <= *(uint *)(puVar1 + 0x12)) || (*(uint *)(puVar1 + 0x12) == 0)) {
      bVar2 = (byte)puVar1[0x16] < 5;
    }
    break;
  case 5:
    bVar2 = puVar1[0x14] == '\0';
  }
  if (bVar2) {
switchD_1800432b6_caseD_1:
    if (6 < *(ushort *)(puVar1 + 0xc)) {
                    /* WARNING: Could not recover jumptable at 0x000180043305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_180043568 + (longlong)(int)((byte)puVar1[9] - 0x72) * 4)
                + 0x180000000))
                ((code *)((ulonglong)
                          *(uint *)(&DAT_180043568 + (longlong)(int)((byte)puVar1[9] - 0x72) * 4) +
                         0x180000000));
      return;
    }
  }
switchD_1800432b6_caseD_0:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_88);
  return;
}

