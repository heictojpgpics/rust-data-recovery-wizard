// Function: FUN_180008c40
// Address: 180008c40
// Size: 981 bytes


void FUN_180008c40(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  void *pvVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  void *local_48;
  void *pvStack_40;
  longlong local_38;
  ulonglong local_30;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
  uVar5 = *(longlong *)(param_1 + 0x148) * 2;
  local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
  uVar17 = uVar5 + 0x1f >> 5;
  FUN_180012aa0((ulonglong *)&local_48,uVar17,(uint *)&local_res8);
  local_30 = 0;
  local_res18 = 0x3fffffffffffffff;
  local_res20 = FUN_180001110();
  puVar6 = FUN_180002960(&local_res20,&local_res18);
  if (*puVar6 < 0x400000000000000) {
    uVar13 = *puVar6 << 5;
  }
  else {
    uVar13 = 0x7fffffffffffffff;
  }
  if (uVar5 <= uVar13) {
    if ((uVar17 < (ulonglong)((longlong)pvStack_40 - (longlong)local_48 >> 2)) &&
       (pvVar14 = (void *)((longlong)local_48 + uVar17 * 4), pvVar14 != pvStack_40)) {
      pvStack_40 = pvVar14;
    }
    if ((uVar5 & 0x1f) != 0) {
      puVar1 = (uint *)((longlong)local_48 + uVar17 * 4 + -4);
      *puVar1 = *puVar1 & (1 << ((byte)uVar5 & 0x1f)) - 1U;
    }
    iVar16 = 0;
    plVar12 = *(longlong **)(param_1 + 0x140);
    plVar15 = (longlong *)*plVar12;
    local_30 = uVar5;
    if (plVar15 != plVar12) {
      do {
        lVar3 = plVar15[4];
        if ((lVar3 != 0) &&
           ((*(int *)(lVar3 + 0x9c) != 0x20 ||
            ((*(char *)(param_1 + 0x918) == '\0' && (99 < *(longlong *)(lVar3 + 0x68))))))) {
          puVar1 = (uint *)((longlong)local_48 + ((ulonglong)(longlong)iVar16 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
          local_res8 = lVar3;
          uVar7 = FUN_180002680(&local_res8);
          uVar8 = FUN_180002690((longlong)param_2);
          if ((char)uVar8 == '\0') {
            puVar10 = (undefined8 *)FUN_180002680(uVar7);
            plVar12 = param_2;
            puVar11 = (undefined8 *)FUN_180002670((longlong)param_2);
            FUN_180002970(plVar12,(void *)*puVar11,puVar10);
          }
          else {
            uVar7 = FUN_180002680(uVar7);
            uVar7 = FUN_180002680(uVar7);
            plVar12 = param_2;
            plVar9 = (longlong *)FUN_180002670((longlong)param_2);
            puVar10 = (undefined8 *)FUN_180001100(plVar12,*plVar9);
            puVar11 = (undefined8 *)FUN_180002680(uVar7);
            *puVar10 = *puVar11;
            *plVar9 = *plVar9 + 8;
          }
        }
        plVar12 = (longlong *)plVar15[2];
        if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar12 + 0x19);
          plVar15 = plVar12;
          plVar12 = (longlong *)*plVar12;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar12 + 0x19);
            plVar15 = plVar12;
            plVar12 = (longlong *)*plVar12;
          }
        }
        else {
          cVar2 = *(char *)(plVar15[1] + 0x19);
          plVar9 = (longlong *)plVar15[1];
          plVar12 = plVar15;
          while ((plVar15 = plVar9, cVar2 == '\0' && (plVar12 == (longlong *)plVar15[2]))) {
            cVar2 = *(char *)(plVar15[1] + 0x19);
            plVar9 = (longlong *)plVar15[1];
            plVar12 = plVar15;
          }
        }
        iVar16 = iVar16 + 1;
        plVar12 = *(longlong **)(param_1 + 0x140);
      } while (plVar15 != plVar12);
      plVar15 = (longlong *)*plVar12;
    }
    iVar16 = 0;
    if (plVar15 != plVar12) {
      do {
        if ((plVar15[4] != 0) &&
           ((*(uint *)((longlong)local_48 + ((ulonglong)(longlong)iVar16 >> 5) * 4) >>
             ((byte)iVar16 & 0x1f) & 1) == 0)) {
          local_res8 = plVar15[4];
          uVar7 = FUN_180002680(&local_res8);
          uVar8 = FUN_180002690((longlong)param_2);
          if ((char)uVar8 == '\0') {
            puVar10 = (undefined8 *)FUN_180002680(uVar7);
            plVar12 = param_2;
            puVar11 = (undefined8 *)FUN_180002670((longlong)param_2);
            FUN_180002970(plVar12,(void *)*puVar11,puVar10);
          }
          else {
            uVar7 = FUN_180002680(uVar7);
            uVar7 = FUN_180002680(uVar7);
            plVar12 = param_2;
            plVar9 = (longlong *)FUN_180002670((longlong)param_2);
            puVar10 = (undefined8 *)FUN_180001100(plVar12,*plVar9);
            puVar11 = (undefined8 *)FUN_180002680(uVar7);
            *puVar10 = *puVar11;
            *plVar9 = *plVar9 + 8;
          }
        }
        plVar12 = (longlong *)plVar15[2];
        if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar12 + 0x19);
          plVar15 = plVar12;
          plVar12 = (longlong *)*plVar12;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar12 + 0x19);
            plVar15 = plVar12;
            plVar12 = (longlong *)*plVar12;
          }
        }
        else {
          cVar2 = *(char *)(plVar15[1] + 0x19);
          plVar9 = (longlong *)plVar15[1];
          plVar12 = plVar15;
          while ((plVar15 = plVar9, cVar2 == '\0' && (plVar12 == (longlong *)plVar15[2]))) {
            cVar2 = *(char *)(plVar15[1] + 0x19);
            plVar9 = (longlong *)plVar15[1];
            plVar12 = plVar15;
          }
        }
        iVar16 = iVar16 + 1;
      } while (plVar15 != *(longlong **)(param_1 + 0x140));
    }
    if (local_48 != (void *)0x0) {
      pvVar14 = local_48;
      if ((0xfff < (ulonglong)((local_38 - (longlong)local_48 >> 2) * 4)) &&
         (pvVar14 = *(void **)((longlong)local_48 + -8),
         0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
      local_48 = (void *)0x0;
      pvStack_40 = (void *)0x0;
      local_38 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
    return;
  }
  FUN_1800123c0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

