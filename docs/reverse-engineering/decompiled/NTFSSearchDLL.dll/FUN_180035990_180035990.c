// Function: FUN_180035990
// Address: 180035990
// Size: 1111 bytes


void FUN_180035990(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  void *_Memory;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *_Memory_00;
  CHAR *pCVar14;
  LPSTR pCVar15;
  longlong **pplVar16;
  undefined1 auStackY_2d8 [32];
  longlong *local_298 [2];
  undefined8 local_288;
  longlong local_278 [11];
  longlong local_220;
  longlong local_218;
  CHAR local_1f8 [64];
  CHAR local_1b8 [111];
  char cStack_149;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142 [266];
  ulonglong local_38;
  
  local_288 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStackY_2d8;
  if ((param_1[10] == 0) || (param_1[4] == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    goto LAB_180035dbc;
  }
  iVar5 = 0;
  lVar6 = __RTDynamicCast(param_1[0xb],0,&CSearchedPartitionInfo::RTTI_Type_Descriptor,
                          &CSearchedNTFSPartitionInfo::RTTI_Type_Descriptor);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    goto LAB_180035dbc;
  }
  FUN_18003a090(local_278,param_1[4]);
  param_1[5] = *(longlong *)(lVar6 + 0x10);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar6 + 0xc);
  FUN_180011720((longlong *)local_298);
  FUN_180034d20(param_1,lVar6);
  if (param_1[0xe] != 0) {
    iVar4 = iVar5;
    pCVar14 = (CHAR *)0x0;
    for (puVar2 = *(undefined8 **)*param_1; puVar2 != (undefined8 *)*param_1;
        puVar2 = (undefined8 *)*puVar2) {
      pCVar14 = pCVar14 + *(longlong *)(puVar2[2] + 0x10);
      iVar4 = (int)pCVar14;
    }
    lVar8 = param_1[3];
    local_1f8[0] = '\0';
    local_1f8[1] = '\0';
    local_1f8[2] = '\0';
    local_1f8[3] = '\0';
    local_1f8[4] = '\0';
    local_1f8[5] = '\0';
    local_1f8[6] = '\0';
    local_1f8[7] = '\0';
    local_1f8[8] = '\0';
    local_1f8[9] = '\0';
    local_1f8[10] = '\0';
    local_1f8[0xb] = '\0';
    local_1f8[0xc] = '\0';
    local_1f8[0xd] = '\0';
    local_1f8[0xe] = '\0';
    local_1f8[0xf] = '\0';
    local_1f8[0x10] = '\0';
    local_1f8[0x11] = '\0';
    local_1f8[0x12] = '\0';
    local_1f8[0x13] = '\0';
    local_1f8[0x14] = '\0';
    local_1f8[0x15] = '\0';
    local_1f8[0x16] = '\0';
    local_1f8[0x17] = '\0';
    local_1f8[0x18] = '\0';
    local_1f8[0x19] = '\0';
    local_1f8[0x1a] = '\0';
    local_1f8[0x1b] = '\0';
    local_1f8[0x1c] = '\0';
    local_1f8[0x1d] = '\0';
    local_1f8[0x1e] = '\0';
    local_1f8[0x1f] = '\0';
    local_1f8[0x20] = '\0';
    local_1f8[0x21] = '\0';
    local_1f8[0x22] = '\0';
    local_1f8[0x23] = '\0';
    local_1f8[0x24] = '\0';
    local_1f8[0x25] = '\0';
    local_1f8[0x26] = '\0';
    local_1f8[0x27] = '\0';
    local_1f8[0x28] = '\0';
    local_1f8[0x29] = '\0';
    local_1f8[0x2a] = '\0';
    local_1f8[0x2b] = '\0';
    local_1f8[0x2c] = '\0';
    local_1f8[0x2d] = '\0';
    local_1f8[0x2e] = '\0';
    local_1f8[0x2f] = '\0';
    local_1f8[0x30] = '\0';
    local_1f8[0x31] = '\0';
    puVar7 = FUN_18002c550();
    LoadStringA(*(HINSTANCE *)(puVar7 + 0x38),0x1df,local_1f8,0x104);
    local_148 = DAT_180072e38;
    local_144 = DAT_180072e3c;
    memset(local_142,0,0xfe);
    pcVar10 = &cStack_149;
    do {
      pcVar10 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    lVar9 = 0;
    do {
      cVar1 = local_1f8[lVar9];
      pcVar10[lVar9] = cVar1;
      lVar9 = lVar9 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(longlong *)param_1[0xe] + 8))
              ((longlong *)param_1[0xe],&local_148,(int)lVar8 + iVar4);
  }
  pCVar15 = (LPSTR)0x64;
  memset(local_1b8,0,100);
  plVar13 = (longlong *)param_1[4];
  if ((plVar13 == (longlong *)0x0) ||
     (iVar4 = (**(code **)(*plVar13 + 0x28))(plVar13), iVar4 == 0x200)) {
    iVar4 = 0x400;
  }
  else {
    iVar4 = (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  if (-1 < *(longlong *)(lVar6 + 200)) {
    pCVar15 = local_1b8;
    iVar5 = FUN_1800377e0(*(longlong *)(lVar6 + 200),(longlong *)param_1[4],pCVar15,iVar4);
  }
  pCVar14 = local_1b8;
  if (iVar5 == 0) {
    pCVar14 = (CHAR *)0x0;
  }
  lVar8 = FUN_180037ca0(param_1[5],(int)param_1[6],pCVar15,pCVar14);
  if (lVar8 == 0) {
LAB_180035d91:
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    lVar9 = param_1[10];
    plVar13 = *(longlong **)(lVar9 + 0x18);
    if (plVar13 != (longlong *)0x0) {
      if (*(char *)(lVar6 + 0x1a0) == '\0') {
        local_218 = plVar13[1] - *plVar13 >> 3;
        local_220 = param_1[0x12];
        if (((((longlong *)param_1[4] != (longlong *)0x0) && (lVar9 != 0)) &&
            (plVar12 = *(longlong **)(lVar9 + 8), plVar12 != (longlong *)0x0)) && (plVar12[1] != 0))
        {
          FUN_1800356d0(param_1,*(longlong *)(lVar6 + 0x10),*(longlong *)(lVar6 + 0x60),plVar12,
                        (longlong *)param_1[4],*(int *)(lVar6 + 0xa4),*(int *)(lVar6 + 0xa0),
                        (longlong *)param_1[0xe]);
          plVar12 = *(longlong **)*param_1;
          if (plVar12 != (longlong *)*param_1) {
            do {
              if (plVar12[2] != 0) {
                FUN_180035df0((longlong)param_1,(longlong *)(plVar12[2] + 8),plVar13);
              }
              plVar12 = (longlong *)*plVar12;
            } while (plVar12 != (longlong *)*param_1);
          }
          FUN_180035df0((longlong)param_1,param_1 + 2,plVar13);
          lVar9 = param_1[10];
        }
      }
      pplVar16 = local_298;
      FUN_18003a2b0(local_278,lVar6,plVar13,pplVar16,*(longlong *)(lVar9 + 0x28));
      bVar3 = FUN_180019dd0((longlong)local_278);
      if (!bVar3) {
        FUN_18003c830(local_278,lVar8);
      }
      lVar6 = FUN_18003b840(local_278);
      plVar12 = param_1 + 7;
      param_1[8] = *plVar12;
      FUN_18003da80(lVar6,plVar12);
      plVar11 = (longlong *)*param_1;
      _Memory_00 = (longlong *)*plVar11;
      if (_Memory_00 != plVar11) {
        do {
          _Memory = (void *)_Memory_00[2];
          if (_Memory != (void *)0x0) {
            FUN_180026f20((longlong)_Memory,plVar12,plVar13,pplVar16);
            plVar12 = (longlong *)0x20;
            free(_Memory);
          }
          _Memory_00 = (longlong *)*_Memory_00;
          plVar11 = (longlong *)*param_1;
        } while (_Memory_00 != plVar11);
        _Memory_00 = (longlong *)*plVar11;
      }
      *plVar11 = (longlong)plVar11;
      *(longlong *)(*param_1 + 8) = *param_1;
      param_1[1] = 0;
      if (_Memory_00 != (longlong *)*param_1) {
        do {
          plVar13 = (longlong *)*_Memory_00;
          free(_Memory_00);
          _Memory_00 = plVar13;
        } while (plVar13 != (longlong *)*param_1);
      }
      FUN_180027b30(param_1 + 2);
      if (lVar6 != 0) {
        FUN_1800312b0(lVar8,lVar6);
      }
      plVar13 = (longlong *)*local_298[0];
      if (plVar13 != local_298[0]) {
        do {
          FUN_18001b930((undefined1 *)plVar13[3]);
          plVar13 = (longlong *)*plVar13;
        } while (plVar13 != local_298[0]);
      }
      param_1[0xf] = lVar8;
      goto LAB_180035d91;
    }
  }
  FUN_1800116b0((longlong *)local_298);
  FUN_18003a150(local_278);
LAB_180035dbc:
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_2d8);
  return;
}

