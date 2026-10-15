// Function: FUN_180010b10
// Address: 180010b10
// Size: 1042 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_180010b10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char ***pppcVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 ***pppuVar10;
  char *_Src;
  undefined1 uVar11;
  ulonglong uVar12;
  longlong *lpFileName;
  undefined8 *_Dst;
  undefined1 auStackY_1a88 [32];
  undefined1 local_1a38;
  undefined1 local_1a37 [3];
  undefined4 local_1a34;
  undefined8 local_1a30;
  undefined8 local_1a28 [2];
  undefined8 local_1a18 [2];
  char **local_1a08 [2];
  longlong local_19f8;
  ulonglong local_19f0;
  longlong local_19e8 [4];
  longlong local_19c8 [4];
  undefined1 local_19a8;
  longlong local_19a0 [4];
  undefined1 local_1980;
  undefined8 **local_1978;
  undefined8 local_1970;
  ulonglong local_1968;
  ulonglong local_1960;
  char local_1958 [272];
  CHAR local_1848 [1024];
  longlong local_1448 [130];
  char local_1038 [4096];
  ulonglong local_38;
  undefined8 uStack_30;
  longlong lVar9;
  
  uStack_30 = 0x180010b2c;
  local_1a30 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_1a88;
  local_1a34 = 0;
  plVar1 = (longlong *)(param_1 + 8);
  lVar8 = *plVar1;
  FUN_180011380(plVar1,*(longlong **)(lVar8 + 8),param_3,param_4);
  *(longlong *)(*plVar1 + 8) = lVar8;
  *(longlong *)*plVar1 = lVar8;
  *(longlong *)(*plVar1 + 0x10) = lVar8;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(local_1448,0,0x410);
  if ((DAT_180096ac0 == 0) || (DAT_180096ad0 == '\0')) {
    local_1978 = (undefined8 ***)0x0;
    local_1970 = 0;
    local_1968 = 0;
    local_1960 = 0;
    memset(local_1958,0,0x104);
    memset(local_1848,0,0x400);
    GetModuleFileNameA((HMODULE)0x0,local_1848,0x3ff);
    _splitpath_s(local_1848,(char *)&local_1978,0x20,local_1958,0x104,(char *)0x0,0,(char *)0x0,0);
    DAT_180096ac0 = FID_conflict_sprintf_s((wchar_t *)&DAT_180096ad0,0x3ff,L"猥猥",&local_1978);
  }
  FUN_1800114f0(local_1448,&DAT_180066f88,&DAT_180096ad0,"config/RawConfig.ini");
  memset(local_1038,0,0x1000);
  lpFileName = local_1448;
  uVar12 = 0x1000;
  DVar3 = GetPrivateProfileSectionA("Filter",local_1038,0x1000,(LPCSTR)lpFileName);
  if ((DVar3 != 0) && (_Src = local_1038, local_1038[0] != '\0')) {
    local_1a38 = 0;
    puVar4 = (undefined8 *)FUN_1800016b0(&local_1978);
    do {
      FUN_1800108c0(&DAT_1800670f0,_Src,uVar12,lpFileName);
      uVar11 = (undefined1)uVar12;
      FUN_180001780((longlong)&local_1978);
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      FUN_180001300((undefined1 *)puVar4,&local_1a38);
      uVar12 = 0xffffffffffffffff;
      do {
        uVar12 = uVar12 + 1;
      } while (_Src[uVar12] != '\0');
      if ((ulonglong)puVar4[3] < uVar12) {
        FUN_1800086f0((longlong)&local_1978,uVar12,uVar11,_Src);
      }
      else {
        _Dst = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          _Dst = (undefined8 *)*puVar4;
        }
        puVar4[2] = uVar12;
        memmove(_Dst,_Src,uVar12);
        local_1a37[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + uVar12),local_1a37);
      }
      pppuVar10 = &local_1978;
      if (0xf < local_1960) {
        pppuVar10 = (undefined8 ***)local_1978;
      }
      lpFileName = (longlong *)&DAT_1800670f4;
      uVar12 = 0;
      uVar5 = FUN_18000f820((longlong)pppuVar10,local_1968,0,"=",1);
      if (uVar5 != 0xffffffffffffffff) {
        FUN_180006e00(&local_1978,(longlong)local_19e8,0,uVar5);
        uVar12 = uVar5 + 1;
        FUN_180006e00(&local_1978,(longlong)local_1a08,uVar12,0xffffffffffffffff);
        pppcVar6 = local_1a08;
        if (0xf < local_19f0) {
          pppcVar6 = (char ***)local_1a08[0];
        }
        if ((local_19f8 == 1) && (*(char *)pppcVar6 == DAT_1800670f8)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_180007060((longlong)local_19c8,local_19e8);
          local_19a8 = 1;
          local_1a34 = 4;
          plVar7 = (longlong *)FUN_180011970(plVar1,(longlong)local_19c8);
          lpFileName = plVar7 + 4;
          FUN_180011a10(plVar1,local_1a28,uVar12,lpFileName,plVar7);
          plVar7 = local_19c8;
        }
        else {
          FUN_180007060((longlong)local_19a0,local_19e8);
          local_1980 = 0;
          local_1a34 = 8;
          plVar7 = (longlong *)FUN_180011970(plVar1,(longlong)local_19a0);
          lpFileName = plVar7 + 4;
          FUN_180011a10(plVar1,local_1a18,uVar12,lpFileName,plVar7);
          plVar7 = local_19a0;
        }
        local_1a34 = 0;
        FUN_180001630(plVar7);
        FUN_180001630((longlong *)local_1a08);
        FUN_180001630(local_19e8);
      }
      lVar8 = -1;
      do {
        lVar9 = lVar8;
        lVar8 = lVar9 + 1;
      } while (_Src[lVar8] != '\0');
      _Src = _Src + lVar9 + 2;
      FUN_180001630((longlong *)&local_1978);
    } while (*_Src != '\0');
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_1a88);
  return;
}

