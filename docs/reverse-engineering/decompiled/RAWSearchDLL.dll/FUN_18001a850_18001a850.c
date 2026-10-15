// Function: FUN_18001a850
// Address: 18001a850
// Size: 1596 bytes


void FUN_18001a850(undefined8 param_1,longlong param_2,longlong *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  size_t sVar11;
  LPCWSTR lpWideCharStr;
  ulonglong uVar12;
  longlong *_Buf1;
  ulonglong uVar13;
  undefined8 *_Dst;
  ulonglong _Size;
  undefined1 uVar14;
  undefined8 uVar15;
  LPCSTR ****pppppCVar16;
  LPCSTR ****lpMultiByteStr;
  LPCWSTR pWVar17;
  char *****_Buf2;
  undefined1 auStackY_548 [32];
  undefined1 local_508 [4];
  undefined4 local_504;
  undefined8 *local_500;
  ulonglong local_4f8;
  ulonglong local_4f0 [3];
  ulonglong local_4d8;
  ulonglong local_4d0 [3];
  longlong *local_4b8;
  char ****local_4b0 [2];
  int local_4a0;
  ulonglong local_498;
  LPCSTR ***local_490 [2];
  longlong local_480;
  ulonglong local_478;
  longlong local_470 [5];
  CHAR local_448 [1024];
  ulonglong local_48;
  
  local_4d0[1] = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_548;
  uVar15 = 0;
  local_504 = 0;
  local_4f0[2] = param_2;
  local_4d0[2] = param_2;
  local_4b8 = param_3;
  FUN_180001780((longlong)local_490);
  puVar7 = (undefined8 *)FUN_1800016b0(local_490);
  puVar7[3] = 0xf;
  local_508[0] = (undefined1)uVar15;
  puVar8 = puVar7;
  local_500 = puVar7;
  FUN_180001300((undefined1 *)puVar7,local_508);
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  puVar7[2] = uVar15;
  local_508[0] = 0;
  FUN_180001300((undefined1 *)puVar8,local_508);
  FUN_180001780((longlong)local_4b0);
  puVar8 = (undefined8 *)FUN_1800016b0(local_4b0);
  puVar8[2] = uVar15;
  puVar8[3] = 0xf;
  local_508[0] = 0;
  FUN_180001300((undefined1 *)puVar8,local_508);
  if ((ulonglong)puVar8[3] < 7) {
    FUN_1800086f0((longlong)local_4b0,7,(char)uVar15,"title\":");
  }
  else {
    _Dst = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      _Dst = (undefined8 *)*puVar8;
    }
    puVar8[2] = 7;
    memmove(_Dst,"title\":",7);
    local_508[0] = 0;
    FUN_180001300((undefined1 *)((longlong)_Dst + 7),local_508);
  }
  _Buf2 = local_4b0;
  if (0xf < local_498) {
    _Buf2 = (char *****)local_4b0[0];
  }
  _Size = 0xffffffffffffffff;
  uVar13 = 0xffffffffffffffff;
  do {
    uVar13 = uVar13 + 1;
  } while (*(char *)((longlong)_Buf2 + uVar13) != '\0');
  local_4d8 = param_3[2];
  plVar10 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar10 = (longlong *)*param_3;
  }
  local_4f0[1] = 0xffffffffffffffff;
  if (uVar13 == 0) {
    puVar9 = FUN_180001e40(local_4f0 + 1,&local_4d8);
    uVar13 = *puVar9;
LAB_18001aa33:
    puVar7 = local_500;
    if (uVar13 != 0xffffffffffffffff) {
      uVar13 = (longlong)local_4a0 + 1 + uVar13;
      FUN_180001780((longlong)local_470);
      puVar8 = (undefined8 *)FUN_1800016b0(local_470);
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      local_508[0] = 0;
      FUN_180001300((undefined1 *)puVar8,local_508);
      if ((ulonglong)param_3[2] < uVar13) {
        FUN_1800072f0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_4f0[0] = 0xffffffffffffffff;
      local_4f8 = param_3[2] - uVar13;
      puVar9 = FUN_180001e40(local_4f0,&local_4f8);
      uVar12 = *puVar9;
      plVar10 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar10 = (longlong *)*param_3;
      }
      if ((ulonglong)puVar8[3] < uVar12) {
        FUN_1800086f0((longlong)local_470,uVar12,(char)puVar8,(void *)(uVar13 + (longlong)plVar10));
      }
      else {
        puVar7 = puVar8;
        if (0xf < (ulonglong)puVar8[3]) {
          puVar7 = (undefined8 *)*puVar8;
        }
        puVar8[2] = uVar12;
        memmove(puVar7,(void *)(uVar13 + (longlong)plVar10),uVar12);
        local_508[0] = 0;
        FUN_180001300((undefined1 *)((longlong)puVar7 + uVar12),local_508);
      }
      local_504 = 2;
      FUN_180019970(param_3,local_470);
      local_504 = 0;
      FUN_180001630(local_470);
      plVar10 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar10 = (longlong *)*param_3;
      }
      uVar13 = FUN_18000f820((longlong)plVar10,param_3[2],0,"\"",1);
      puVar7 = local_500;
      if (uVar13 != 0xffffffffffffffff) {
        FUN_180001780((longlong)local_470);
        puVar8 = (undefined8 *)FUN_1800016b0(local_470);
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        local_508[0] = 0;
        FUN_180001300((undefined1 *)puVar8,local_508);
        local_4f0[0] = param_3[2];
        local_4f8 = uVar13;
        puVar9 = FUN_180001e40(&local_4f8,local_4f0);
        uVar12 = *puVar9;
        plVar10 = param_3;
        if (0xf < (ulonglong)param_3[3]) {
          plVar10 = (longlong *)*param_3;
        }
        if ((ulonglong)puVar8[3] < uVar12) {
          FUN_1800086f0((longlong)local_470,uVar12,(char)uVar13,plVar10);
        }
        else {
          puVar7 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar7 = (undefined8 *)*puVar8;
          }
          puVar8[2] = uVar12;
          memmove(puVar7,plVar10,uVar12);
          local_508[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar7 + uVar12),local_508);
        }
        local_504 = 4;
        FUN_180001630((longlong *)local_490);
        uVar15 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        *local_500 = *puVar8;
        local_500[1] = uVar15;
        local_500[2] = uVar3;
        local_500[3] = uVar4;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        local_508[0] = 0;
        FUN_180001300((undefined1 *)puVar8,local_508);
        local_504 = 0;
        FUN_180001630(local_470);
        uVar14 = 0;
        memset(local_448,0,0x400);
        lpMultiByteStr = local_490;
        if (((local_478 < 0x10) ||
            (lpMultiByteStr = (LPCSTR ****)local_490[0],
            (LPCSTR ****)local_490[0] != (LPCSTR ****)0x0)) && (local_480 != 0)) {
          pppppCVar16 = lpMultiByteStr;
          iVar6 = MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,(int)local_480,(LPWSTR)0x0,0);
          uVar14 = SUB81(pppppCVar16,0);
          local_500 = (undefined8 *)CONCAT44(local_500._4_4_,iVar6);
          if (0 < iVar6) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (longlong)(iVar6 + 1);
            sVar11 = SUB168(ZEXT816(2) * auVar2,0);
            if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
              sVar11 = 0xffffffffffffffff;
            }
            lpWideCharStr = (LPCWSTR)FUN_1800020c0(sVar11);
            memset(lpWideCharStr,0,(longlong)(iVar6 + 1) * 2);
            iVar6 = MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,(int)local_480,lpWideCharStr
                                        ,(int)local_500);
            uVar14 = SUB81(lpMultiByteStr,0);
            if (lpWideCharStr != (LPCWSTR)0x0) {
              if ((iVar6 != 0) && ((ulonglong)((longlong)iVar6 * 2) < 0x401)) {
                lpWideCharStr[iVar6] = L'\0';
                pWVar17 = lpWideCharStr;
                WideCharToMultiByte(0,0,lpWideCharStr,iVar6,local_448,0x400,(LPCSTR)0x0,(LPBOOL)0x0)
                ;
                uVar14 = SUB81(pWVar17,0);
              }
              free(lpWideCharStr);
            }
          }
        }
        uVar13 = local_4f0[2];
        uVar12 = local_4f0[2];
        FUN_180001780(local_4f0[2]);
        puVar8 = (undefined8 *)FUN_1800016b0(uVar12);
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        local_508[0] = 0;
        FUN_180001300((undefined1 *)puVar8,local_508);
        do {
          _Size = _Size + 1;
        } while (local_448[_Size] != '\0');
        if ((ulonglong)puVar8[3] < _Size) {
          FUN_1800086f0(uVar13,_Size,uVar14,local_448);
        }
        else {
          puVar7 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar7 = (undefined8 *)*puVar8;
          }
          puVar8[2] = _Size;
          memmove(puVar7,local_448,_Size);
          local_508[0] = 0;
          FUN_180001300((undefined1 *)((longlong)puVar7 + _Size),local_508);
        }
        goto LAB_18001ae2a;
      }
    }
  }
  else if (uVar13 <= local_4d8) {
    local_4d0[0] = local_4d8 - uVar13;
    puVar9 = FUN_180001e40(local_4f0 + 1,local_4d0);
    _Buf1 = (longlong *)(*puVar9 + (longlong)plVar10);
    cVar5 = *(char *)_Buf2;
    while( true ) {
      if ((char)*_Buf1 == cVar5) {
        iVar6 = memcmp(_Buf1,_Buf2,uVar13);
        if (iVar6 == 0) {
          uVar13 = (longlong)_Buf1 - (longlong)plVar10;
          goto LAB_18001aa33;
        }
        cVar5 = *(char *)_Buf2;
      }
      puVar7 = local_500;
      if (_Buf1 == plVar10) break;
      _Buf1 = (longlong *)((longlong)_Buf1 + -1);
    }
  }
  uVar13 = local_4f0[2];
  FUN_180001780(local_4f0[2]);
  puVar8 = (undefined8 *)FUN_1800016b0(uVar13);
  uVar15 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *puVar8 = *puVar7;
  puVar8[1] = uVar15;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  local_508[0] = 0;
  FUN_180001300((undefined1 *)puVar7,local_508);
LAB_18001ae2a:
  local_504 = 1;
  FUN_180001630((longlong *)local_4b0);
  FUN_180001630((longlong *)local_490);
  FUN_180001630(param_3);
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_548);
  return;
}

