// Function: FUN_180041f50
// Address: 180041f50
// Size: 222 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180041f50(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)&local_38;
  bVar1 = false;
  local_18 = 0x3d;
  local_38 = _DAT_18006ef40;
  uStack_30 = _UNK_18006ef48;
  uStack_28 = _UNK_18006ef50;
  uStack_20 = _UNK_18006ef58;
  uVar4 = 0;
  piVar2 = (int *)((longlong)&local_38 + 4);
  do {
    iVar3 = *(int *)(param_2 + 8);
    if ((piVar2[-1] == iVar3) && (*piVar2 == *(int *)(param_2 + 0xe))) {
      bVar1 = true;
      *(int *)(param_3 + 0x18) = piVar2[1];
      iVar3 = *(int *)(param_2 + 8);
    }
    if ((piVar2[2] == iVar3) && (piVar2[3] == *(int *)(param_2 + 0xe))) {
      bVar1 = true;
      *(int *)(param_3 + 0x18) = piVar2[4];
      iVar3 = *(int *)(param_2 + 8);
    }
    if ((piVar2[5] == iVar3) && (piVar2[6] == *(int *)(param_2 + 0xe))) {
      bVar1 = true;
      *(int *)(param_3 + 0x18) = piVar2[7];
    }
    uVar4 = uVar4 + 3;
    piVar2 = piVar2 + 9;
  } while (uVar4 < 3);
  if (!bVar1) {
    __security_check_cookie(local_10 ^ (ulonglong)&local_38);
    return;
  }
  *(ulonglong *)(param_3 + 0x10) = (ulonglong)*(uint *)(param_2 + 0x14);
  __security_check_cookie(local_10 ^ (ulonglong)&local_38);
  return;
}

