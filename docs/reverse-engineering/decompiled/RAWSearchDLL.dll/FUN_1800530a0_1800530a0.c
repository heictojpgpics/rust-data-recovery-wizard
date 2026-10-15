// Function: FUN_1800530a0
// Address: 1800530a0
// Size: 876 bytes


void FUN_1800530a0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined *local_98 [5];
  undefined8 local_70;
  int local_68;
  undefined1 local_64;
  char local_60 [24];
  ulonglong local_48;
  
  local_a0 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_e8;
  if (param_3 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    local_b8 = *(undefined8 *)(param_2 + 8);
    local_b0 = 0xffffffffffffffff;
    local_c0 = param_3;
    if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
      local_a8 = *(int *)((longlong)param_3 + 0xc);
      if (local_a8 < 1) {
        local_a8 = 0x200;
      }
    }
    else {
      local_a8 = (*(code *)((undefined **)*param_3)[5])(param_3);
    }
    local_a8 = local_a8 << 7;
    pcVar7 = FUN_180042930((longlong *)&local_c0,0);
    FUN_180053410(param_1,pcVar7);
    if (*(int *)(param_1 + 0x10) == 0) {
      builtin_strncpy(local_60,"INDX",5);
      local_60[5] = '\0';
      local_60[6] = '\0';
      local_60[7] = '\x14';
      local_60[8] = '\0';
      local_60[9] = '\0';
      local_60[10] = '\0';
      local_60[0xb] = '\0';
      local_60[0xc] = '\0';
      local_60[0xd] = '\0';
      local_60[0xe] = '\0';
      local_60[0xf] = '\x02';
      local_60[0x10] = '\0';
      local_60[0x11] = '\0';
      local_60[0x12] = '\0';
      local_60[0x13] = '\0';
      local_60[0x14] = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_180118550) && (_Init_thread_header(&DAT_180118550), DAT_180118550 == -1)
         ) {
        if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
          DAT_180118554 = *(int *)((longlong)param_3 + 0xc);
          if (DAT_180118554 < 1) {
            DAT_180118554 = 0x200;
          }
        }
        else {
          DAT_180118554 = (*(code *)((undefined **)*param_3)[5])(param_3);
        }
        _Init_thread_footer(&DAT_180118550);
      }
      puVar8 = FUN_180001350();
      lVar3 = *(longlong *)(puVar8 + 0x70);
      pcVar7 = (char *)0x0;
      if (-1 < lVar3 * 0x14) {
        do {
          pcVar10 = FUN_180042930((longlong *)&local_c0,(ulonglong)pcVar7);
          if (pcVar10 == (char *)0x0) {
            if ((longlong)pcVar7 < 1) goto LAB_180053396;
            pcVar7 = pcVar7 + -(longlong)DAT_180118554;
            break;
          }
          lVar13 = (longlong)DAT_180118554;
          if (*(int *)(pcVar10 + (lVar13 - (longlong)pcVar7 % lVar13) + -4) == 0) {
            pcVar11 = FUN_180016fc0(pcVar10,DAT_180118554,local_60,0x14);
            if (pcVar11 != (char *)0x0) {
              pcVar7 = pcVar11 + (longlong)(pcVar7 + (0x14 - (longlong)pcVar10));
              break;
            }
            pcVar10 = pcVar7 + -0x20;
            if ((longlong)pcVar7 < 0x21) {
              pcVar10 = pcVar7;
            }
            pcVar10 = FUN_180042930((longlong *)&local_c0,(ulonglong)pcVar10);
            pcVar10 = FUN_180016fc0(pcVar10,0x40,local_60,0x14);
            if (pcVar10 != (char *)0x0) {
              pcVar7 = pcVar7 + DAT_180118554;
              break;
            }
            lVar13 = (longlong)DAT_180118554;
          }
          pcVar7 = pcVar7 + lVar13;
        } while ((longlong)pcVar7 <= lVar3 * 0x14);
        if (0 < (longlong)pcVar7) {
          *(undefined4 *)(param_2 + 0x18) = 0x5f;
          *(char **)(param_2 + 0x10) = pcVar7;
        }
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = 0x5e;
      puVar8 = FUN_180001350();
      lVar3 = *(longlong *)(puVar8 + 0x70);
      puVar8 = FUN_180042930((longlong *)&local_c0,0);
      local_68 = 0;
      local_64 = 0;
      local_98[0] = (undefined *)&DAT_18006ca30;
      local_98[1] = (undefined *)&DAT_18006ca28;
      local_98[2] = &DAT_18006ca20;
      local_98[3] = &DAT_18006ca58;
      local_98[4] = &DAT_18006ca50;
      local_70 = 0;
      uVar1 = *(undefined4 *)(puVar8 + 4);
      local_c8._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
      local_c8._1_1_ = (undefined1)((uint)uVar1 >> 8);
      uVar5 = CONCAT11((char)uVar1,local_c8._1_1_);
      local_c8._0_2_ = CONCAT11(local_c8._2_1_,(char)((uint)uVar1 >> 0x18));
      local_c8 = CONCAT22(uVar5,(undefined2)local_c8);
      uVar12 = local_c8;
      piVar9 = (int *)FUN_180042930((longlong *)&local_c0,(ulonglong)local_c8);
      iVar6 = local_68;
      if (piVar9 != (int *)0x0) {
        while( true ) {
          lVar13 = 0;
          bVar4 = false;
          do {
            if (*piVar9 == *(int *)local_98[lVar13]) {
              bVar4 = true;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < 5);
          if ((!bVar4) || (iVar6 == *piVar9)) break;
          iVar2 = piVar9[1];
          local_c8._2_1_ = (undefined1)((uint)iVar2 >> 0x10);
          local_c8._1_1_ = (undefined1)((uint)iVar2 >> 8);
          uVar5 = CONCAT11((char)iVar2,local_c8._1_1_);
          local_c8._0_2_ = CONCAT11(local_c8._2_1_,(char)((uint)iVar2 >> 0x18));
          local_c8 = CONCAT22(uVar5,(undefined2)local_c8);
          if (local_c8 == 0) break;
          uVar12 = uVar12 + local_c8;
          if (((ulonglong)(lVar3 * 0x14) < (ulonglong)uVar12) ||
             (piVar9 = (int *)FUN_180042930((longlong *)&local_c0,(ulonglong)uVar12),
             piVar9 == (int *)0x0)) break;
        }
      }
      *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar12;
    }
  }
LAB_180053396:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_e8);
  return;
}

