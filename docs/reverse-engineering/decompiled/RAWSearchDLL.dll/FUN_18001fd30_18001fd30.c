// Function: FUN_18001fd30
// Address: 18001fd30
// Size: 864 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_18001fd30(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  char *pcVar9;
  undefined *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [32];
  undefined8 *puVar14;
  undefined1 (*pauVar15) [32];
  undefined *puVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [32];
  bool bVar20;
  undefined1 auVar21 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 local_30 [24];
  
  local_40 = 0xfffffffffffffffe;
  piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4);
  if (*piVar17 < DAT_1801182ec) goto LAB_18001ff2b;
  while( true ) {
    if ((*piVar17 < DAT_1801183b0) && (_Init_thread_header(&DAT_1801183b0), DAT_1801183b0 == -1)) {
      _DAT_180118390 = (undefined1  [16])0x0;
      DAT_1801183a0 = 0;
      atexit((_func_5014 *)&LAB_180064d20);
      _Init_thread_footer(&DAT_1801183b0);
    }
    if ((*piVar17 < DAT_1801182e8) && (_Init_thread_header(&DAT_1801182e8), DAT_1801182e8 == -1)) {
      _DAT_180118340 = 0;
      _Init_thread_footer(&DAT_1801182e8);
    }
    local_68[0] = 0;
    __ExceptionPtrCreate(local_60);
    local_50 = local_60;
    local_48 = local_68;
    iVar8 = std::_Execute_once((once_flag *)&DAT_180118340,FUN_1800232b0,&local_50);
    if (iVar8 != 0) break;
    bVar20 = __ExceptionPtrToBool(local_60);
    if (!bVar20) {
      std::_XGetLastError();
      pcVar4 = (code *)swi(3);
      puVar10 = (undefined *)(*pcVar4)();
      return puVar10;
    }
    local_38 = local_30;
    pvVar11 = FUN_18001d8d0(local_30,local_60);
    FUN_18001d910(pvVar11);
LAB_18001ff2b:
    _Init_thread_header(&DAT_1801182ec);
    if (DAT_1801182ec == -1) {
      FUN_180001780(0x1801182a0);
      puVar12 = (undefined8 *)FUN_1800016b0(&DAT_1801182a0);
      puVar12[3] = 0xf;
      local_68[0] = 0;
      FUN_180001300((undefined1 *)puVar12,local_68);
      puVar14 = puVar12;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar14 = (undefined8 *)*puVar12;
      }
      puVar12[2] = 0;
      local_68[0] = 0;
      FUN_180001300((undefined1 *)puVar14,local_68);
      FUN_180001780(0x1801182c0);
      puVar12 = (undefined8 *)FUN_1800016b0(&DAT_1801182c0);
      puVar12[3] = 0xf;
      local_68[0] = 0;
      FUN_180001300((undefined1 *)puVar12,local_68);
      puVar14 = puVar12;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar14 = (undefined8 *)*puVar12;
      }
      puVar12[2] = 0;
      local_68[0] = 0;
      FUN_180001300((undefined1 *)puVar14,local_68);
      _DAT_1801182e0 = 0;
      atexit(FUN_180064d30);
      _Init_thread_footer(&DAT_1801182ec);
    }
  }
  __ExceptionPtrDestroy(local_60);
  puVar10 = DAT_180118398;
  if (DAT_180118390 != DAT_180118398) {
    lVar2 = *param_1;
    puVar16 = DAT_180118390;
    do {
      uVar3 = *(ulonglong *)(puVar16 + 0x30);
      pauVar15 = (undefined1 (*) [32])(puVar16 + 0x20);
      if (0xf < *(ulonglong *)(puVar16 + 0x38)) {
        pauVar15 = *(undefined1 (**) [32])*pauVar15;
      }
      pauVar19 = (undefined1 (*) [32])(*(longlong *)(puVar16 + 0x40) + lVar2);
      if (uVar3 < 0x11) {
        cVar7 = FUN_18001dc70(pauVar19,pauVar15,uVar3);
        if (cVar7 != '\0') {
          return puVar16;
        }
      }
      else {
        uVar18 = 0;
        if (0x1f < uVar3) {
          bVar20 = (undefined1 (*) [32])0x20 < pauVar19;
          pauVar13 = pauVar19;
          do {
            auVar21 = *(undefined1 (*) [32])
                       (((longlong)pauVar15 - (longlong)pauVar19) + (longlong)pauVar13);
            auVar5 = vpcmpeqb_avx(SUB3216(*pauVar13,0x10),auVar21._16_16_);
            auVar6 = vpcmpeqb_avx(SUB3216(*pauVar13,0),auVar21._0_16_);
            auVar21._16_16_ = auVar5;
            auVar21._0_16_ = auVar6;
            vptest_avx(auVar21,_DAT_18006ef80);
            if (!bVar20) goto LAB_18001fe32;
            uVar18 = uVar18 + 0x20;
            pauVar13 = pauVar13 + 1;
            uVar1 = (0x20 - (longlong)pauVar19) + (longlong)pauVar13;
            bVar20 = uVar1 < uVar3;
          } while (uVar1 <= uVar3);
        }
        if (uVar3 <= uVar18) {
          return puVar16;
        }
        pcVar9 = *pauVar19 + uVar18;
        while (*pcVar9 == pcVar9[(longlong)pauVar15 - (longlong)pauVar19]) {
          pcVar9 = pcVar9 + 1;
          if (uVar3 <= (ulonglong)((longlong)pcVar9 - (longlong)pauVar19)) {
            return puVar16;
          }
        }
      }
LAB_18001fe32:
      puVar16 = puVar16 + 0x48;
    } while (puVar16 != puVar10);
  }
  return &DAT_1801182a0;
}

