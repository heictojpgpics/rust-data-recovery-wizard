// Function: FUN_180031230
// Address: 180031230
// Size: 1055 bytes


void FUN_180031230(undefined8 param_1,char *param_2,int param_3,longlong param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  LPCWSTR pWVar7;
  ulonglong _Size;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  size_t sVar12;
  LPCSTR pCVar13;
  LPCWSTR pWVar14;
  char *pcVar15;
  undefined1 auStackY_898 [32];
  undefined1 local_858 [16];
  char local_848 [1024];
  CHAR local_448;
  char acStack_447 [1023];
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_898;
  memset(local_848,0,0x400);
  memset(&local_448,0,0x400);
  if ((param_2 == (char *)0x0) || (param_3 < 2)) goto LAB_180031633;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    if (param_3 < 0x3ff) {
      iVar5 = param_3 + -1;
    }
    else {
      iVar5 = 0x3ff;
    }
    sVar12 = (size_t)iVar5;
    strncpy(local_848,param_2 + 1,sVar12);
    uVar11 = (undefined1)sVar12;
    uVar8 = 0xffffffffffffffff;
    lVar3 = -1;
    do {
      lVar9 = lVar3;
      lVar3 = lVar9 + 1;
    } while (local_848[lVar9 + 1] != '\0');
    if (lVar9 + 2 != 0) {
      pCVar13 = local_848;
      iVar5 = (int)(lVar9 + 2);
      iVar4 = MultiByteToWideChar(0,0,pCVar13,iVar5,(LPWSTR)0x0,0);
      uVar11 = SUB81(pCVar13,0);
      if (0 < iVar4) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (longlong)(iVar4 + 1);
        sVar12 = SUB168(ZEXT816(2) * auVar2,0);
        if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
          sVar12 = 0xffffffffffffffff;
        }
        pWVar7 = (LPCWSTR)FUN_1800020c0(sVar12);
        memset(pWVar7,0,(longlong)(iVar4 + 1) * 2);
        pCVar13 = local_848;
        iVar5 = MultiByteToWideChar(0,0,pCVar13,iVar5,pWVar7,iVar4);
        uVar11 = SUB81(pCVar13,0);
        if (pWVar7 != (LPCWSTR)0x0) {
          if (iVar5 != 0) {
            pWVar14 = pWVar7;
            iVar4 = WideCharToMultiByte(0xfde9,0,pWVar7,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
            uVar11 = SUB81(pWVar14,0);
            if (iVar4 - 1U < 0x400) {
              pWVar14 = pWVar7;
              WideCharToMultiByte(0xfde9,0,pWVar7,iVar5,&local_448,iVar4,(LPCSTR)0x0,(LPBOOL)0x0);
              uVar11 = SUB81(pWVar14,0);
            }
          }
          free(pWVar7);
        }
      }
    }
    do {
      _Size = uVar8 + 1;
      pcVar15 = acStack_447 + uVar8;
      uVar8 = _Size;
    } while (*pcVar15 != '\0');
    puVar6 = (undefined8 *)FUN_1800016b0(param_4);
    if (_Size <= (ulonglong)puVar6[3]) {
      puVar10 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar10 = (undefined8 *)*puVar6;
      }
      puVar6[2] = _Size;
      memmove(puVar10,&local_448,_Size);
      local_858[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar10 + _Size),local_858);
      goto LAB_180031633;
    }
    pcVar15 = &local_448;
  }
  else {
    if (cVar1 == '\x01') {
      if (param_3 < 5) goto LAB_180031633;
      pWVar7 = (LPCWSTR)(param_2 + 3);
      uVar8 = (ulonglong)(longlong)(param_3 + -3) >> 1;
      if ((pWVar7 == (LPCWSTR)0x0) || (uVar8 == 0)) goto LAB_180031633;
      iVar5 = (int)uVar8;
      pWVar14 = pWVar7;
      iVar4 = WideCharToMultiByte(0xfde9,0,pWVar7,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      uVar11 = SUB81(pWVar14,0);
      if (iVar4 < 1) goto LAB_180031633;
      if (iVar4 < 0x3e9) {
        memset(local_848,0,1000);
        iVar4 = WideCharToMultiByte(0xfde9,0,pWVar7,iVar5,local_848,iVar4,(LPCSTR)0x0,(LPBOOL)0x0);
        uVar11 = SUB81(pWVar7,0);
      }
      if (iVar4 == 0) goto LAB_180031633;
      uVar8 = 0xffffffffffffffff;
      do {
        _Size = uVar8 + 1;
        lVar3 = uVar8 + 1;
        uVar8 = _Size;
      } while (local_848[lVar3] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(param_4);
      if (_Size <= (ulonglong)puVar6[3]) {
        puVar10 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar10 = (undefined8 *)*puVar6;
        }
        puVar6[2] = _Size;
        memmove(puVar10,local_848,_Size);
        local_858[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar10 + _Size),local_858);
        goto LAB_180031633;
      }
    }
    else {
      if ((cVar1 != '\x03') || (param_3 < 3)) goto LAB_180031633;
      sVar12 = (size_t)(param_3 + -1);
      strncpy(local_848,param_2 + 1,sVar12);
      uVar11 = (undefined1)sVar12;
      uVar8 = 0xffffffffffffffff;
      do {
        _Size = uVar8 + 1;
        lVar3 = uVar8 + 1;
        uVar8 = _Size;
      } while (local_848[lVar3] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(param_4);
      if (_Size <= (ulonglong)puVar6[3]) {
        puVar10 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar10 = (undefined8 *)*puVar6;
        }
        puVar6[2] = _Size;
        memmove(puVar10,local_848,_Size);
        local_858[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar10 + _Size),local_858);
        goto LAB_180031633;
      }
    }
    pcVar15 = local_848;
  }
  FUN_1800086f0(param_4,_Size,uVar11,pcVar15);
LAB_180031633:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_898);
  return;
}

