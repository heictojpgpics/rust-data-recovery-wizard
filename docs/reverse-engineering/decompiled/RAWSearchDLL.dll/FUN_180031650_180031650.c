// Function: FUN_180031650
// Address: 180031650
// Size: 606 bytes


void FUN_180031650(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int cbMultiByte;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  LPCWSTR lpWideCharStr;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong _Size;
  undefined1 uVar10;
  longlong *lpMultiByteStr;
  LPCWSTR pWVar12;
  undefined1 auStackY_4b8 [32];
  undefined1 local_478 [4];
  undefined4 local_474;
  int local_470;
  longlong local_468;
  undefined8 local_460;
  longlong local_458;
  longlong *local_450;
  CHAR local_448;
  char acStack_447 [1023];
  ulonglong local_48;
  longlong *plVar11;
  
  local_460 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_4b8;
  local_474 = 0;
  lVar7 = param_2;
  local_458 = param_2;
  local_450 = param_3;
  FUN_180001780(param_2);
  puVar5 = (undefined8 *)FUN_1800016b0(lVar7);
  puVar5[3] = 0xf;
  local_478[0] = 0;
  puVar8 = puVar5;
  FUN_180001300((undefined1 *)puVar5,local_478);
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  puVar5[2] = 0;
  local_478[0] = 0;
  FUN_180001300((undefined1 *)puVar8,local_478);
  local_474 = 1;
  uVar10 = 0;
  memset(&local_448,0,0x400);
  local_468 = param_3[2];
  lpMultiByteStr = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    lpMultiByteStr = (longlong *)*param_3;
  }
  uVar9 = 0xffffffffffffffff;
  if ((lpMultiByteStr != (longlong *)0x0) && (local_468 != 0)) {
    plVar11 = lpMultiByteStr;
    local_470 = MultiByteToWideChar(0,0,(LPCSTR)lpMultiByteStr,(int)local_468,(LPWSTR)0x0,0);
    uVar10 = SUB81(plVar11,0);
    if (0 < local_470) {
      iVar3 = local_470 + 1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (longlong)iVar3;
      sVar6 = SUB168(ZEXT816(2) * auVar2,0);
      if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
        sVar6 = 0xffffffffffffffff;
      }
      lpWideCharStr = (LPCWSTR)FUN_1800020c0(sVar6);
      memset(lpWideCharStr,0,(longlong)iVar3 * 2);
      iVar3 = MultiByteToWideChar(0,0,(LPCSTR)lpMultiByteStr,(int)local_468,lpWideCharStr,local_470)
      ;
      uVar10 = SUB81(lpMultiByteStr,0);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar4 = 0x400;
        if (iVar3 != 0) {
          pWVar12 = lpWideCharStr;
          cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,iVar3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                            (LPBOOL)0x0);
          uVar10 = SUB81(pWVar12,0);
          if ((0 < cbMultiByte) && (iVar4 = cbMultiByte, cbMultiByte < 0x401)) {
            pWVar12 = lpWideCharStr;
            iVar4 = WideCharToMultiByte(0xfde9,0,lpWideCharStr,iVar3,&local_448,cbMultiByte,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
            uVar10 = SUB81(pWVar12,0);
          }
        }
        free(lpWideCharStr);
        if (iVar4 == 0) goto LAB_180031878;
      }
    }
  }
  do {
    _Size = uVar9 + 1;
    pcVar1 = acStack_447 + uVar9;
    uVar9 = _Size;
  } while (*pcVar1 != '\0');
  if ((ulonglong)puVar5[3] < _Size) {
    FUN_1800086f0(param_2,_Size,uVar10,&local_448);
  }
  else {
    puVar8 = puVar5;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar8 = (undefined8 *)*puVar5;
    }
    puVar5[2] = _Size;
    memmove(puVar8,&local_448,_Size);
    local_478[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar8 + _Size),local_478);
  }
LAB_180031878:
  FUN_180001630(param_3);
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_4b8);
  return;
}

