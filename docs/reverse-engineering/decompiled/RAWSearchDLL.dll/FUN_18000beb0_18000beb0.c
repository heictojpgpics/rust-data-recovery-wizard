// Function: FUN_18000beb0
// Address: 18000beb0
// Size: 1401 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000beb0(longlong param_1,undefined8 param_2,ulonglong *param_3,longlong *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  uint **ppuVar8;
  void *_Dst;
  char *pcVar9;
  FARPROC pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  undefined1 auStack_10e8 [32];
  undefined1 local_10c8 [8];
  undefined1 local_10c0 [16];
  ulonglong *local_10b0;
  ulonglong *local_10a0;
  undefined8 local_1098;
  ulonglong local_1090 [2];
  longlong local_1080;
  longlong local_1070 [4];
  ulonglong local_1050 [5];
  CHAR local_1028 [8];
  longlong local_1020;
  longlong local_1018;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18000bec8;
  local_1098 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_10e8;
  plVar11 = (longlong *)0x0;
  puVar3 = FUN_180001350();
  *(undefined8 *)(puVar3 + 0x60) = 1;
  *(undefined8 *)(puVar3 + 0x70) = 200000000;
  *(undefined8 *)(puVar3 + 0x68) = 0;
  FUN_180001500((longlong *)(puVar3 + 0x90));
  puVar3 = FUN_180010a40();
  local_10c0 = ZEXT816(0);
  local_10b0 = (ulonglong *)0x0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_180001780((longlong)local_1070);
    uVar17 = SUB81(param_3,0);
    puVar4 = (undefined8 *)FUN_1800016b0(local_1070);
    puVar4[3] = 0xf;
    local_10c8[0] = 0;
    FUN_180001300((undefined1 *)puVar4,local_10c8);
    puVar5 = puVar4;
    if (0xf < (ulonglong)puVar4[3]) {
      puVar5 = (undefined8 *)*puVar4;
    }
    puVar4[2] = 0;
    local_10c8[0] = 0;
    FUN_180001300((undefined1 *)puVar5,local_10c8);
    FUN_180001780((longlong)local_1090);
    puVar5 = (undefined8 *)FUN_1800016b0(local_1090);
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    local_10c8[0] = 0;
    FUN_180001300((undefined1 *)puVar5,local_10c8);
    if ((ulonglong)puVar5[3] < 0x11) {
      FUN_1800086f0((longlong)local_1090,0x11,uVar17,"filter_generalraw");
    }
    else {
      puVar4 = puVar5;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar4 = (undefined8 *)*puVar5;
      }
      puVar5[2] = 0x11;
      memmove(puVar4,"filter_generalraw",0x11);
      local_10c8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar4 + 0x11),local_10c8);
    }
    param_4 = local_1070;
    param_3 = local_1090;
    FUN_18000e160(param_1 + 0x30,local_1050);
    FUN_180001630((longlong *)local_1090);
    FUN_180001630(local_1070);
    FUN_180057320((undefined8 *)local_1028);
    puVar7 = local_1050;
    FUN_180057b80((longlong)local_1028,puVar7,param_3,param_4);
    uVar15 = 0;
    if (local_1020 == 0) {
      if ((local_1018 != 0) && (*(int *)(local_1018 + 0x18) == 6)) {
        plVar12 = plVar11;
        for (puVar5 = *(undefined8 **)(local_1018 + 0x10); puVar5 != (undefined8 *)0x0;
            puVar5 = (undefined8 *)*puVar5) {
          uVar15 = (int)plVar12 + 1;
          plVar12 = (longlong *)(ulonglong)uVar15;
        }
      }
    }
    else if (*(int *)(local_1020 + 0x18) == 6) {
      plVar12 = plVar11;
      for (puVar5 = *(undefined8 **)(local_1020 + 0x10); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        uVar15 = (int)plVar12 + 1;
        plVar12 = (longlong *)(ulonglong)uVar15;
      }
    }
    plVar12 = plVar11;
    if (0 < (int)uVar15) {
      do {
        puVar5 = FUN_1800579b0((longlong)local_1028,(uint)plVar12);
        puVar7 = local_1090;
        FUN_180057e80((longlong)puVar5,(longlong)puVar7);
        if (local_1080 != 0) {
          if (local_10b0 == (ulonglong *)local_10c0._8_8_) {
            param_3 = local_1090;
            puVar7 = (ulonglong *)local_10c0._8_8_;
            FUN_18000e1b0((longlong *)local_10c0,(undefined8 *)local_10c0._8_8_,param_3);
          }
          else {
            lVar6 = FUN_1800012e0(puVar5,local_10c0._8_8_);
            puVar7 = local_1090;
            FUN_180007060(lVar6,puVar7);
            local_10c0._8_8_ = local_10c0._8_8_ + 0x20;
          }
        }
        FUN_180001630((longlong *)local_1090);
        uVar16 = (uint)plVar12 + 1;
        plVar12 = (longlong *)(ulonglong)uVar16;
      } while ((int)uVar16 < (int)uVar15);
    }
    FUN_180057610((undefined8 *)local_1028,puVar7,param_3,param_4);
    FUN_180001630((longlong *)local_1050);
  }
  puVar7 = FUN_18000dd90(local_1090,(longlong *)local_10c0);
  local_10a0 = puVar7;
  if ((ulonglong *)(puVar3 + 0x18) != puVar7) {
    param_3 = (ulonglong *)puVar7[1];
    FUN_180011620((ulonglong *)(puVar3 + 0x18),(undefined8 *)*puVar7,param_3);
  }
  FUN_18000def0((longlong *)puVar7);
  if ((longlong *)local_10c0._0_8_ != (longlong *)0x0) {
    uVar14 = local_10c0._8_8_;
    plVar12 = (longlong *)local_10c0._0_8_;
    if (local_10c0._0_8_ != local_10c0._8_8_) {
      do {
        FUN_180001630(plVar12);
        plVar12 = plVar12 + 4;
      } while (plVar12 != (longlong *)uVar14);
    }
    plVar12 = (longlong *)local_10c0._0_8_;
    if ((0xfff < ((longlong)local_10b0 - local_10c0._0_8_ & 0xffffffffffffffe0U)) &&
       (plVar12 = *(longlong **)(local_10c0._0_8_ + -8),
       0x1f < (ulonglong)(local_10c0._0_8_ + (-8 - (longlong)plVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar12);
    local_10c0 = (undefined1  [16])0x0;
    local_10b0 = (ulonglong *)0x0;
  }
  uVar14 = 4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180118200) {
    piVar13 = &DAT_180118200;
    _Init_thread_header(&DAT_180118200);
    if (DAT_180118200 == -1) {
      FUN_180006730(piVar13,uVar14,param_3,param_4);
      atexit(thunk_FUN_1800068c0);
      _Init_thread_footer(&DAT_180118200);
    }
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    ppuVar8 = (uint **)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x90))();
    FUN_180006b30((longlong *)&DAT_1801181a0,ppuVar8,param_3);
  }
  plVar12 = *(longlong **)(param_1 + 0xc0);
  if ((undefined **)*plVar12 == CRawFileCellTestStorageDevice::vftable) {
    iVar2 = *(int *)((longlong)plVar12 + 0xc);
    if (iVar2 < 1) {
      iVar2 = 0x200;
    }
  }
  else {
    iVar2 = (*(code *)((undefined **)*plVar12)[5])();
    plVar12 = *(longlong **)(param_1 + 0xc0);
  }
  *(int *)(param_1 + 0xf0) = iVar2;
  if ((undefined **)*plVar12 == CRawFileCellTestStorageDevice::vftable) {
    iVar2 = *(int *)((longlong)plVar12 + 0xc);
    if (iVar2 < 1) {
      iVar2 = 0x200;
    }
  }
  else {
    iVar2 = (*(code *)((undefined **)*plVar12)[5])();
  }
  iVar2 = *(int *)(param_1 + 200) * iVar2 * 2;
  *(int *)(param_1 + 0xd8) = iVar2;
  _Dst = (void *)FUN_1800020c0((ulonglong)(iVar2 + 0x1000));
  *(void **)(param_1 + 0xe0) = _Dst;
  memset(_Dst,0,(ulonglong)(*(int *)(param_1 + 0xd8) + 0x1000));
  if (DAT_180096ab8 == (HMODULE)0x0) {
    memset(local_1028,0,0x1000);
    GetModuleFileNameA((HMODULE)0x0,local_1028,0x1000);
    pcVar9 = strrchr(local_1028,0x5c);
    uVar14 = s__EUVideoRepair_dll_180066f90._8_8_;
    if (pcVar9 != (char *)0x0) {
      *(undefined8 *)pcVar9 = s__EUVideoRepair_dll_180066f90._0_8_;
      *(undefined8 *)(pcVar9 + 8) = uVar14;
      *(undefined2 *)(pcVar9 + 0x10) = s__EUVideoRepair_dll_180066f90._16_2_;
      pcVar9[0x12] = s__EUVideoRepair_dll_180066f90[0x12];
      DAT_180096ab8 = LoadLibraryA(local_1028);
    }
    if (DAT_180096ab8 == (HMODULE)0x0) goto LAB_18000c365;
  }
  pFVar10 = GetProcAddress(DAT_180096ab8,"GetIMovMp4Repair");
  if (pFVar10 != (FARPROC)0x0) {
    plVar11 = (longlong *)(*pFVar10)();
  }
LAB_18000c365:
  *(longlong **)(param_1 + 0x158) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plVar11 + 0x30);
    plVar12 = *(longlong **)(param_1 + 0xc0);
    if ((undefined **)*plVar12 == CRawFileCellTestStorageDevice::vftable) {
      lVar6 = plVar12[7];
    }
    else {
      lVar6 = (*(code *)((undefined **)*plVar12)[3])(plVar12);
      plVar12 = *(longlong **)(param_1 + 0xc0);
    }
    (*pcVar1)(plVar11,plVar12,0,*(int *)(param_1 + 0xf0) * lVar6);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_10e8);
  return;
}

