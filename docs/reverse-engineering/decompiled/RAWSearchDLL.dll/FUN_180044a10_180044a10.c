// Function: FUN_180044a10
// Address: 180044a10
// Size: 843 bytes


void FUN_180044a10(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined *puVar3;
  short *psVar4;
  longlong lVar5;
  longlong *plVar6;
  short *psVar7;
  longlong **pplVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  short local_60;
  char cStack_5d;
  int local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  if (param_3 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    return;
  }
  if ((undefined **)*param_3 != CRawFileCellTestStorageDevice::vftable) {
    local_50 = 0x180044adc;
    (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_50 = 0x180044a8e;
  puVar3 = FUN_180042930((longlong *)&stack0xffffffffffffffd8,0);
  if ((puVar3 == (undefined *)0x0) || (puVar3[7] != '!')) {
    *(undefined8 *)(param_2 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x5d;
  *(undefined4 *)(param_1 + 8) = 0x5d;
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_a8;
  _local_60 = 0x190ad702;
  local_5c = -0x77bd0968;
  local_58 = 0;
  local_50 = CONCAT53(local_50._3_5_,0xad702);
  local_50 = CONCAT44(0x8842f698,(undefined4)local_50);
  local_48 = 0;
  local_80 = *(undefined8 *)(param_2 + 8);
  lVar12 = -1;
  local_78 = 0xffffffffffffffff;
  local_88 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_70 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_70 = *(int *)((longlong)param_3 + 0xc);
    if (local_70 < 1) {
      local_70 = 0x200;
    }
  }
  else {
    local_70 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_70 = local_70 << 7;
  puVar3 = FUN_180001350();
  uVar1 = *(ulonglong *)(puVar3 + 0x70);
  uVar11 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_1801183d0) && (_Init_thread_header(&DAT_1801183d0), DAT_1801183d0 == -1)) {
    if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
      DAT_1801183cc = *(int *)((longlong)param_3 + 0xc);
      if (DAT_1801183cc < 1) {
        DAT_1801183cc = 0x200;
      }
    }
    else {
      DAT_1801183cc = (*(code *)((undefined **)*param_3)[5])(param_3);
    }
    _Init_thread_footer(&DAT_1801183d0);
  }
  do {
    psVar4 = (short *)FUN_180042930((longlong *)&local_88,uVar11);
    if (psVar4 == (short *)0x0) break;
    lVar5 = (longlong)uVar11 / (longlong)DAT_1801183cc;
    if ((lVar5 != 0) && (lVar12 != lVar5)) {
      pplVar8 = &local_88;
      plVar6 = (longlong *)
               FUN_180042930((longlong *)pplVar8,uVar11 - (longlong)uVar11 % (longlong)DAT_1801183cc
                            );
      iVar2 = FUN_180044960(pplVar8,plVar6);
      lVar12 = lVar5;
      if (iVar2 != 0) break;
    }
    lVar9 = (longlong)DAT_1801183cc;
    lVar5 = lVar9 - (longlong)uVar11 % lVar9;
    if ((*(int *)(lVar5 + -4 + (longlong)psVar4) == 0) &&
       (*(int *)(lVar5 + -8 + (longlong)psVar4) == 0)) {
      psVar7 = FUN_180044890(psVar4,DAT_1801183cc,&local_60);
      if (psVar7 == (short *)0x0) {
        uVar10 = uVar11 - 0x10;
        if ((longlong)uVar11 < 0x11) {
          uVar10 = uVar11;
        }
        psVar4 = (short *)FUN_180042930((longlong *)&local_88,uVar10);
        psVar4 = FUN_180044890(psVar4,0x20,&local_60);
        if ((psVar4 == (short *)0x0) || (*(int *)(psVar4 + 2) != local_5c)) {
          lVar9 = (longlong)DAT_1801183cc;
          goto LAB_180044c8d;
        }
        lVar12 = (longlong)DAT_1801183cc;
      }
      else {
        if (*(int *)(psVar7 + 2) != local_5c) break;
        if (*(char *)((longlong)psVar7 + 3) == cStack_5d) {
          lVar12 = 4;
        }
        else {
          lVar12 = 6;
          if (*(char *)((longlong)psVar7 + 3) == ';') {
            lVar12 = 5;
          }
        }
        lVar12 = (lVar12 - (longlong)psVar4) + (longlong)psVar7;
        uVar11 = uVar11 + 8;
      }
      uVar11 = uVar11 + lVar12;
      break;
    }
LAB_180044c8d:
    uVar11 = uVar11 + lVar9;
  } while ((longlong)uVar11 <= (longlong)(uVar1 >> 1));
  *(ulonglong *)(param_2 + 0x10) = uVar11;
  __security_check_cookie(local_40 ^ (ulonglong)auStack_a8);
  return;
}

