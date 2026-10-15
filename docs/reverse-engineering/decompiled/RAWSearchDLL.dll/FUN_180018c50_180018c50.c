// Function: FUN_180018c50
// Address: 180018c50
// Size: 420 bytes


void FUN_180018c50(longlong param_1,int param_2,char param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  char local_58 [16];
  char local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_18008f028 ^ (ulonglong)auStack_98;
  builtin_strncpy(local_58,"meta",4);
  local_78 = *(longlong **)(param_1 + 0xe8);
  builtin_strncpy(local_58 + 4,".xmlPK",6);
  local_70 = *(undefined8 *)(param_1 + 8);
  builtin_strncpy(local_48,"docProps/core.xml",0x11);
  local_68 = 0xffffffffffffffff;
  if (local_78 == (longlong *)0x0) {
    local_60 = 0x200;
  }
  else if ((undefined **)*local_78 == CRawFileCellTestStorageDevice::vftable) {
    local_60 = *(int *)((longlong)local_78 + 0xc);
    if (local_60 < 1) {
      local_60 = 0x200;
    }
  }
  else {
    local_60 = (*(code *)((undefined **)*local_78)[5])();
  }
  local_60 = local_60 << 7;
  iVar5 = 0;
  iVar6 = 0;
  while (pcVar2 = FUN_180042930((longlong *)&local_78,(longlong)iVar6), pcVar2 != (char *)0x0) {
    if (param_3 == '\0') {
      iVar8 = 0x11;
      pcVar7 = local_48;
    }
    else {
      iVar8 = 10;
      pcVar7 = local_58;
    }
    pcVar2 = FUN_180016fc0(pcVar2,param_2,pcVar7,iVar8);
    if (pcVar2 != (char *)0x0) {
      piVar1 = (int *)(pcVar2 + -0x1e);
      if (piVar1 == (int *)0x0) break;
      iVar5 = *piVar1;
      if (iVar5 != 0x2014b50) {
        if (iVar5 == 0x4034b50) {
          if ((10 < *(ushort *)(pcVar2 + -0x16)) || (0x102 < (ushort)(*(short *)(pcVar2 + -4) - 1U))
             ) break;
        }
        else if (iVar5 != 0x6054b50) break;
      }
      if ((*(int *)(pcVar2 + -0xc) == 0) || (*(int *)(pcVar2 + -8) == 0)) {
        pcVar2[-0xc] = -1;
        pcVar2[-0xb] = '\a';
        pcVar2[-10] = '\0';
        pcVar2[-9] = '\0';
        pcVar2[-8] = '\0';
        pcVar2[-7] = '\b';
        pcVar2[-6] = '\0';
        pcVar2[-5] = '\0';
      }
      puVar3 = FUN_180046260();
      uVar4 = FUN_180046550((longlong)puVar3,(longlong)piVar1,(ulonglong)piVar1,param_1 + 0x151);
      if ((int)uVar4 != 0) {
        *(undefined4 *)(param_1 + 0x252) = 1;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + param_2;
    if (0x513 < iVar5) break;
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_98);
  return;
}

