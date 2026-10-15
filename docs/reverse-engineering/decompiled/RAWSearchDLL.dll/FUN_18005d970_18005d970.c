// Function: FUN_18005d970
// Address: 18005d970
// Size: 448 bytes


undefined1 * FUN_18005d970(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  
  puVar14 = (undefined1 *)0x0;
  iVar13 = 0;
  uVar11 = 0;
  iVar16 = 5;
  puVar12 = puVar14;
  for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    uVar11 = (int)puVar12 + 1;
    puVar12 = (undefined1 *)(ulonglong)uVar11;
  }
  lVar15 = (longlong)(int)uVar11;
  puVar2 = (undefined8 *)(*DAT_180117f28)(lVar15 * 8);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined1 *)0x0;
  }
  memset(puVar2,0,lVar15 * 8);
  plVar8 = *(longlong **)(param_1 + 0x10);
  puVar12 = puVar14;
  puVar17 = puVar2;
  if (plVar8 == (longlong *)0x0) {
LAB_18005da3e:
    puVar4 = (undefined1 *)(*DAT_180117f28)((longlong)iVar16);
    if (puVar4 != (undefined1 *)0x0) goto LAB_18005da59;
  }
  else {
    do {
      puVar4 = puVar14;
      if ((int)puVar12 != 0) goto LAB_18005da54;
      puVar3 = FUN_18005d530((longlong)plVar8,(ulonglong)(param_2 + 1),(ulonglong)(uint)param_3);
      *puVar17 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar12 = (undefined1 *)0x1;
      }
      else {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)((longlong)puVar3 + lVar7) != '\0');
        iVar16 = iVar16 + (param_3 != 0) + 2 + (int)lVar7;
      }
      iVar13 = (int)puVar12;
      plVar8 = (longlong *)*plVar8;
      puVar17 = puVar17 + 1;
    } while (plVar8 != (longlong *)0x0);
    if (iVar13 == 0) goto LAB_18005da3e;
  }
LAB_18005da54:
  iVar13 = 1;
LAB_18005da59:
  if (iVar13 != 0) {
    if (0 < (int)uVar11) {
      do {
        if (puVar2[(longlong)puVar14] != 0) {
          (*DAT_180117f20)();
        }
        puVar14 = puVar14 + 1;
      } while ((longlong)puVar14 < lVar15);
    }
    (*DAT_180117f20)(puVar2);
    return (undefined1 *)0x0;
  }
  *puVar4 = 0x5b;
  pcVar10 = puVar4 + 1;
  *pcVar10 = '\0';
  if (0 < (int)uVar11) {
    puVar12 = puVar14;
    do {
      pcVar9 = (char *)puVar2[(longlong)puVar14];
      pcVar5 = pcVar10;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      lVar7 = puVar2[(longlong)puVar14];
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(lVar7 + lVar6) != '\0');
      pcVar9 = pcVar10 + lVar6;
      pcVar10 = pcVar9;
      if ((int)puVar12 != uVar11 - 1) {
        *pcVar9 = ',';
        pcVar10 = pcVar9 + 1;
        if (param_3 != 0) {
          *pcVar10 = ' ';
          pcVar10 = pcVar9 + 2;
        }
        *pcVar10 = '\0';
        lVar7 = puVar2[(longlong)puVar14];
      }
      (*DAT_180117f20)(lVar7);
      puVar12 = (undefined1 *)(ulonglong)((int)puVar12 + 1);
      puVar14 = puVar14 + 1;
    } while ((longlong)puVar14 < lVar15);
  }
  (*DAT_180117f20)(puVar2);
  pcVar10[0] = ']';
  pcVar10[1] = '\0';
  return puVar4;
}

