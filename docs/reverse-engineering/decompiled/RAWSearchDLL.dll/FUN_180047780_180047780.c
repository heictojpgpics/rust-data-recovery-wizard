// Function: FUN_180047780
// Address: 180047780
// Size: 1081 bytes


void FUN_180047780(longlong param_1,longlong param_2,int param_3,int *param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *_Memory;
  LPSTR pCVar6;
  byte *lpMultiByteStr;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStackY_4b8 [32];
  FILETIME local_468;
  _SYSTEMTIME local_460;
  WCHAR local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_4b8;
  iVar5 = *(int *)(param_1 + 8);
  lVar8 = (longlong)param_3;
  if (param_3 + 8 <= iVar5) {
    iVar3 = *(int *)(param_2 + lVar8);
    iVar4 = *(int *)(param_2 + 4 + lVar8);
    uVar9 = (ulonglong)iVar4;
    lVar8 = param_2 + lVar8;
    if (iVar3 == 2) {
      *param_4 = iVar4;
    }
    else if (iVar3 == 0x40) {
      local_460.wYear = 0;
      local_460.wMonth = 0;
      local_460.wDayOfWeek = 0;
      local_460.wDay = 0;
      local_460.wHour = 0;
      local_460.wMinute = 0;
      local_460.wSecond = 0;
      local_460.wMilliseconds = 0;
      if (7 < (iVar5 - param_3) + 4U) {
        _Memory = (void *)FUN_1800020c0(0x200);
        local_468 = *(FILETIME *)(lVar8 + 4);
        FileTimeToSystemTime(&local_468,&local_460);
        snprintf(_Memory,0x104,"%d:%d:%d %d:%d:%d",local_460._0_8_ & 0xffff);
        uVar9 = 0xffffffffffffffff;
        do {
          uVar9 = uVar9 + 1;
        } while (*(char *)((longlong)_Memory + uVar9) != '\0');
        FUN_1800071e0((longlong)param_5,_Memory,uVar9);
        free(_Memory);
      }
    }
    else if (iVar3 == 0x1f) {
      memset(local_448,0,0x400);
      iVar3 = iVar4 * 2;
      if (((-1 < iVar3) && ((ulonglong)(longlong)iVar3 < 0x401)) &&
         (param_3 + 8 + iVar4 * 2 <= iVar5)) {
        memcpy(local_448,(void *)(lVar8 + 8),(longlong)iVar3);
        uVar9 = 0xffffffffffffffff;
        iVar5 = WideCharToMultiByte(0,0,local_448,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 < 0x1001) {
          pCVar6 = (LPSTR)FUN_1800020c0((longlong)(iVar5 + 1));
          WideCharToMultiByte(0,0,local_448,-1,pCVar6,iVar5,(LPCSTR)0x0,(LPBOOL)0x0);
          do {
            uVar9 = uVar9 + 1;
          } while (pCVar6[uVar9] != '\0');
          FUN_1800071e0((longlong)param_5,pCVar6,uVar9);
          free(pCVar6);
          FUN_180047bc0(pCVar6,param_5);
        }
      }
    }
    else if ((((iVar3 == 0x1e) && (memset(local_448,0,0x400), -1 < iVar4)) && (uVar9 < 0x401)) &&
            (param_3 + 8 + iVar4 <= iVar5)) {
      lpMultiByteStr = (byte *)FUN_1800020c0(uVar9);
      memcpy(lpMultiByteStr,(void *)(lVar8 + 8),uVar9);
      pbVar1 = lpMultiByteStr + uVar9;
      for (pbVar7 = lpMultiByteStr; pbVar7 < pbVar1; pbVar7 = pbVar7 + lVar8) {
        bVar2 = *pbVar7;
        if (0x7f < bVar2) {
          if (0xbf < bVar2) {
            if (bVar2 < 0xe0) {
              if (pbVar1 + -1 <= pbVar7) break;
              if ((pbVar7[1] & 0xc0) == 0x80) {
                lVar8 = 2;
                goto LAB_180047a6a;
              }
            }
            else if (bVar2 < 0xf0) {
              if (pbVar1 + -2 <= pbVar7) break;
              if (((pbVar7[1] & 0xc0) == 0x80) && ((pbVar7[2] & 0xc0) == 0x80)) {
                lVar8 = 3;
                goto LAB_180047a6a;
              }
            }
          }
          uVar9 = 0xffffffffffffffff;
          do {
            uVar9 = uVar9 + 1;
          } while (lpMultiByteStr[uVar9] != 0);
          FUN_1800071e0((longlong)param_5,lpMultiByteStr,uVar9);
          goto LAB_180047b45;
        }
        lVar8 = 1;
LAB_180047a6a:
      }
      uVar9 = 0xffffffffffffffff;
      iVar5 = MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,-1,(LPWSTR)0x0,0);
      if (iVar5 < 0x201) {
        MultiByteToWideChar(0xfde9,0,(LPCSTR)lpMultiByteStr,-1,local_448,iVar5);
        iVar5 = WideCharToMultiByte(0,0,local_448,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 < 0x1001) {
          pCVar6 = (LPSTR)FUN_1800020c0((longlong)(iVar5 + 1));
          WideCharToMultiByte(0,0,local_448,-1,pCVar6,iVar5,(LPCSTR)0x0,(LPBOOL)0x0);
          do {
            uVar9 = uVar9 + 1;
          } while (pCVar6[uVar9] != '\0');
          FUN_1800071e0((longlong)param_5,pCVar6,uVar9);
          free(pCVar6);
LAB_180047b45:
          free(lpMultiByteStr);
          FUN_180047bc0(lpMultiByteStr,param_5);
        }
      }
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_4b8);
  return;
}

