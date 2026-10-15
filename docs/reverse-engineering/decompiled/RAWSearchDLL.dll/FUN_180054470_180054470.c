// Function: FUN_180054470
// Address: 180054470
// Size: 1154 bytes


undefined8 FUN_180054470(ulonglong *param_1,longlong param_2,ulonglong *param_3,void *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  errno_t eVar4;
  undefined *puVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  code *pcVar14;
  longlong lVar15;
  ulonglong *local_res8;
  ulonglong *local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  lVar7 = *(longlong *)(param_2 + 8);
  ppuVar12 = (undefined **)*param_3;
  pcVar14 = (code *)ppuVar12[5];
  ppuVar13 = CRawFileCellTestStorageDevice::vftable;
  local_res8 = param_1;
  if (ppuVar12 != CRawFileCellTestStorageDevice::vftable) goto LAB_180054825;
  while( true ) {
    local_40 = 0xffffffffffffffff;
    local_50 = param_3;
    local_48 = lVar7;
    if (ppuVar12 == ppuVar13) {
      local_38 = *(int *)((longlong)param_3 + 0xc);
      if (local_38 < 1) {
        local_38 = 0x200;
      }
    }
    else {
      local_38 = (*(code *)ppuVar12[5])(param_3);
    }
    local_38 = local_38 << 7;
    puVar5 = FUN_180001350();
    lVar15 = *(longlong *)((longlong)param_4 + 0x48);
    if (*(longlong *)((longlong)param_4 + 0x48) == 0) {
      lVar15 = *(longlong *)(puVar5 + 0x70);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_180118574) && (_Init_thread_header(&DAT_180118574), DAT_180118574 == -1)) {
      if ((undefined **)*param_3 == ppuVar13) {
        DAT_180118578 = *(int *)((longlong)param_3 + 0xc);
        if (DAT_180118578 < 1) {
          DAT_180118578 = 0x200;
        }
      }
      else {
        DAT_180118578 = (*(code *)((undefined **)*param_3)[5])(param_3);
      }
      _Init_thread_footer(&DAT_180118574);
    }
    ppuVar13 = (undefined **)0x0;
    plVar6 = (longlong *)FUN_180002520();
    if (plVar6 == (longlong *)0x0) {
      FUN_180047ec0(0x80004005);
      pcVar14 = (code *)swi(3);
      uVar10 = (*pcVar14)();
      return uVar10;
    }
    if ((undefined **)*plVar6 == ATL::CAtlStringMgr::vftable) {
      LOCK();
      *(int *)(plVar6 + 4) = (int)plVar6[4] + 1;
      UNLOCK();
      plVar6 = plVar6 + 2;
    }
    else {
      plVar6 = (longlong *)(*(code *)((undefined **)*plVar6)[3])();
    }
    local_res8 = (ulonglong *)(plVar6 + 3);
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(lVar7 + (longlong)param_4) != '\0');
    FUN_180054900((longlong *)&local_res8,param_4,(int)lVar7);
    param_3 = local_res8;
    if (lVar15 < 0) break;
    while( true ) {
      pcVar8 = FUN_180042930((longlong *)&local_50,(ulonglong)ppuVar13);
      if (pcVar8 == (char *)0x0) goto LAB_1800547c3;
      pcVar14 = (code *)(longlong)DAT_180118578;
      if (*(short *)(pcVar8 + (longlong)(pcVar14 + (-2 - (longlong)ppuVar13 % (longlong)pcVar14)))
          == 0) break;
LAB_1800547b0:
      ppuVar13 = (undefined **)((longlong)ppuVar13 + (longlong)pcVar14);
      if (lVar15 < (longlong)ppuVar13) goto LAB_1800547c3;
    }
    iVar2 = (int)param_3[-2];
    lVar7 = (longlong)iVar2;
    if (-1 < iVar2) {
      if ((int)(*(int *)((longlong)param_3 + -0xc) - iVar2 | 1U - (int)param_3[-1]) < 0) {
        FUN_180049a30((longlong *)&local_res8,iVar2);
        param_3 = local_res8;
      }
      eVar4 = _mbslwr_s((uchar *)param_3,(longlong)(iVar2 + 1));
      if (eVar4 != 0) {
        if (eVar4 == 0xc) {
          FUN_180047ec0(0x8007000e);
          pcVar14 = (code *)swi(3);
          uVar10 = (*pcVar14)();
          return uVar10;
        }
        if ((eVar4 == 0x16) || (eVar4 == 0x22)) {
          FUN_180047ec0(0x80070057);
          pcVar14 = (code *)swi(3);
          uVar10 = (*pcVar14)();
          return uVar10;
        }
        if (eVar4 != 0x50) {
          FUN_180047ec0(0x80004005);
          pcVar14 = (code *)swi(3);
          uVar10 = (*pcVar14)();
          return uVar10;
        }
      }
      if (*(int *)((longlong)param_3 + -0xc) < iVar2) {
        FUN_180047ec0(0x80070057);
        pcVar14 = (code *)swi(3);
        uVar10 = (*pcVar14)();
        return uVar10;
      }
      *(int *)(param_3 + -2) = iVar2;
      *(undefined1 *)(lVar7 + (longlong)param_3) = 0;
      iVar2 = *(int *)((longlong)param_4 + 0x40);
      if (1 < (int)param_3[-1]) {
        FUN_180049ae0(&local_res8,(int)param_3[-2]);
        param_3 = local_res8;
      }
      pcVar9 = FUN_180016fc0(pcVar8,DAT_180118578,(char *)param_3,iVar2);
      if (pcVar9 == (char *)0x0) {
        iVar2 = (int)param_3[-2];
        if (iVar2 < 0) {
          FUN_180047ec0(0x80070057);
          pcVar14 = (code *)swi(3);
          uVar10 = (*pcVar14)();
          return uVar10;
        }
        if ((int)(*(int *)((longlong)param_3 + -0xc) - iVar2 | 1U - (int)param_3[-1]) < 0) {
          FUN_180049a30((longlong *)&local_res8,iVar2);
          param_3 = local_res8;
        }
        eVar4 = _mbsupr_s((uchar *)param_3,(longlong)(iVar2 + 1));
        if (eVar4 != 0) {
          if (eVar4 == 0xc) {
            FUN_180047ec0(0x8007000e);
            pcVar14 = (code *)swi(3);
            uVar10 = (*pcVar14)();
            return uVar10;
          }
          if ((eVar4 == 0x16) || (eVar4 == 0x22)) {
            FUN_180047ec0(0x80070057);
            pcVar14 = (code *)swi(3);
            uVar10 = (*pcVar14)();
            return uVar10;
          }
          if (eVar4 != 0x50) {
            FUN_180047ec0(0x80004005);
            pcVar14 = (code *)swi(3);
            uVar10 = (*pcVar14)();
            return uVar10;
          }
        }
        if (*(int *)((longlong)param_3 + -0xc) < iVar2) {
          FUN_180047ec0(0x80070057);
          pcVar14 = (code *)swi(3);
          uVar10 = (*pcVar14)();
          return uVar10;
        }
        *(int *)(param_3 + -2) = iVar2;
        *(undefined1 *)((longlong)iVar2 + (longlong)param_3) = 0;
        iVar2 = *(int *)((longlong)param_4 + 0x40);
        if (1 < (int)param_3[-1]) {
          FUN_180049ae0(&local_res8,(int)param_3[-2]);
          param_3 = local_res8;
        }
        pcVar9 = FUN_180016fc0(pcVar8,DAT_180118578,(char *)param_3,iVar2);
        if (pcVar9 != (char *)0x0) goto LAB_180054804;
        ppuVar12 = ppuVar13;
        if (0 < (longlong)ppuVar13) {
          ppuVar12 = (undefined **)
                     ((longlong)ppuVar13 - (ulonglong)*(uint *)((longlong)param_4 + 0x40));
        }
        pcVar8 = FUN_180042930((longlong *)&local_50,(ulonglong)ppuVar12);
        iVar2 = *(int *)((longlong)param_4 + 0x40);
        iVar11 = iVar2;
        if (1 < (int)param_3[-1]) {
          FUN_180049ae0(&local_res8,(int)param_3[-2]);
          iVar11 = *(int *)((longlong)param_4 + 0x40);
          param_3 = local_res8;
        }
        pcVar8 = FUN_180016fc0(pcVar8,iVar11 * 2,(char *)param_3,iVar2);
        if (pcVar8 == (char *)0x0) {
          pcVar14 = (code *)(longlong)DAT_180118578;
          goto LAB_1800547b0;
        }
        pcVar9 = (char *)(ulonglong)*(uint *)((longlong)param_4 + 0x40);
      }
      else {
LAB_180054804:
        pcVar9 = pcVar9 + ((ulonglong)*(uint *)((longlong)param_4 + 0x40) - (longlong)pcVar8);
      }
      ppuVar13 = (undefined **)((longlong)ppuVar13 + (longlong)pcVar9);
      break;
    }
    FUN_180047ec0(0x80070057);
LAB_180054825:
    (*pcVar14)(param_3);
    ppuVar12 = (undefined **)*param_3;
  }
LAB_1800547c3:
  *(undefined ***)(param_2 + 0x10) = ppuVar13;
  LOCK();
  puVar1 = param_3 + -1;
  uVar3 = *puVar1;
  *(int *)puVar1 = (int)*puVar1 + -1;
  UNLOCK();
  if ((int)uVar3 < 2) {
    (**(code **)(*(longlong *)param_3[-3] + 8))();
  }
  return 1;
}

