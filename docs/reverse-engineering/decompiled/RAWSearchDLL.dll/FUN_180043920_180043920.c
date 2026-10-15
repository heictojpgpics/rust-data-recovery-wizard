// Function: FUN_180043920
// Address: 180043920
// Size: 438 bytes


undefined8 FUN_180043920(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar14;
  uint uVar15;
  char local_res10 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  ulonglong uVar13;
  
  local_40 = *(undefined8 *)(param_2 + 8);
  local_38 = 0xffffffffffffffff;
  local_48 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_30 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_30 = *(int *)((longlong)param_3 + 0xc);
    if (local_30 < 1) {
      local_30 = 0x200;
    }
  }
  else {
    local_30 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_30 = local_30 << 7;
  uVar10 = 0;
  pcVar6 = FUN_180042930((longlong *)&local_48,0);
  if (pcVar6 == (char *)0x0) {
LAB_180043a97:
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar11 = 0;
      if ((' ' < *pcVar6) && (iVar2 = strncmp(pcVar6 + 0x101,"ustar",5), iVar2 != 0)) break;
      uVar15 = (int)uVar10 + 0x200;
      uVar10 = (ulonglong)uVar15;
      local_res10[0] = '\0';
      local_res10[1] = '\0';
      bVar14 = 0x1e;
      uVar13 = uVar11;
      do {
        local_res10[0] = pcVar6[uVar11 + 0x7c];
        lVar3 = atol(local_res10);
        uVar11 = uVar11 + 1;
        bVar1 = bVar14 & 0x1f;
        bVar14 = bVar14 - 3;
        uVar12 = (int)uVar13 + (lVar3 << bVar1);
        uVar13 = (ulonglong)uVar12;
      } while ((longlong)uVar11 < 0xc);
      if (uVar12 == 0) goto LAB_180043a89;
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        iVar2 = *(int *)((longlong)param_3 + 0xc);
        ppuVar7 = CRawFileCellTestStorageDevice::vftable;
        if (iVar2 < 1) {
          iVar2 = 0x200;
        }
      }
      else {
        iVar2 = (*(code *)((undefined **)*param_3)[5])(param_3);
        ppuVar7 = (undefined **)*param_3;
      }
      uVar4 = (*(code *)ppuVar7[5])(param_3);
      iVar5 = (**(code **)(*param_3 + 0x28))(param_3);
      uVar10 = (ulonglong)(uVar15 + iVar5 * ((iVar2 + -1 + uVar12) / uVar4));
      puVar8 = FUN_180001350();
      if ((*(ulonglong *)(puVar8 + 0x70) < uVar10) ||
         (pcVar6 = FUN_180042930((longlong *)&local_48,uVar10), pcVar6 == (char *)0x0))
      goto LAB_180043a89;
    }
    if ((int)uVar10 == 0) goto LAB_180043a97;
LAB_180043a89:
    *(ulonglong *)(param_2 + 0x10) = uVar10;
    uVar9 = 1;
  }
  return uVar9;
}

