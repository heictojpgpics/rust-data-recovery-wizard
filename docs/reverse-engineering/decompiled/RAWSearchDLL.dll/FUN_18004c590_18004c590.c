// Function: FUN_18004c590
// Address: 18004c590
// Size: 1064 bytes


void FUN_18004c590(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  LPSTR lpMultiByteStr;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  size_t _Size;
  undefined1 uVar15;
  LPCWSTR lpWideCharStr;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStackY_6d8 [32];
  undefined1 local_698 [4];
  undefined4 local_694;
  undefined8 local_690;
  longlong local_688;
  longlong local_680 [5];
  undefined2 local_658;
  undefined1 local_655 [525];
  WCHAR local_448 [512];
  ulonglong local_48;
  
  local_690 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_6d8;
  uVar13 = 0;
  iVar16 = 0;
  iVar7 = 0;
  local_694 = 0;
  local_688 = param_2;
  if (param_3 == (void *)0x0) {
    FUN_180001780(param_2);
    puVar8 = (undefined8 *)FUN_1800016b0(param_2);
    puVar8[3] = 0xf;
    local_698[0] = 0;
    FUN_180001300((undefined1 *)puVar8,local_698);
    puVar9 = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      puVar9 = (undefined8 *)*puVar8;
    }
    puVar8[2] = 0;
    local_698[0] = 0;
    FUN_180001300((undefined1 *)puVar9,local_698);
  }
  else {
    memset(&local_658,0,0x201);
    iVar14 = param_4;
    if (0x200 < param_4) {
      iVar14 = 0x200;
    }
    if (iVar14 < 0) {
LAB_18004c938:
      FUN_180001780(param_2);
      puVar8 = (undefined8 *)FUN_1800016b0(param_2);
      puVar8[3] = 0xf;
      local_698[0] = 0;
      FUN_180001300((undefined1 *)puVar8,local_698);
      puVar9 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar9 = (undefined8 *)*puVar8;
      }
      puVar8[2] = 0;
    }
    else {
      _Size = (size_t)iVar14;
      memcpy(&local_658,param_3,_Size);
      bVar2 = true;
      bVar6 = true;
      uVar11 = uVar13;
      uVar12 = uVar13;
      uVar17 = uVar13;
      if (0 < (longlong)_Size) {
        do {
          iVar16 = (int)uVar17;
          iVar7 = (int)uVar12;
          cVar1 = *(char *)((longlong)&local_658 + uVar11);
          if (cVar1 == '(') {
            if (bVar2) {
              bVar2 = false;
              uVar12 = (ulonglong)((int)uVar13 + 1);
            }
          }
          else if (cVar1 == ')') {
            if (bVar6) {
              bVar6 = false;
              uVar17 = uVar13;
            }
          }
          else if (cVar1 == '/') break;
          iVar16 = (int)uVar17;
          iVar7 = (int)uVar12;
          uVar13 = (ulonglong)((int)uVar13 + 1);
          uVar11 = uVar11 + 1;
        } while ((longlong)uVar11 < (longlong)_Size);
      }
      memset(&local_658,0,0x200);
      if ((((iVar7 < 0) || (iVar14 = iVar16 - iVar7, iVar14 < 0)) || (param_4 < iVar16)) ||
         (param_4 < iVar7)) goto LAB_18004c938;
      uVar11 = (ulonglong)iVar14;
      uVar13 = uVar11;
      memcpy(&local_658,(void *)((longlong)iVar7 + (longlong)param_3),uVar11);
      uVar15 = (undefined1)uVar13;
      if (local_658 == -2) {
        memset(local_448,0,0x400);
        if ((uVar11 < 0x401) && (iVar14 <= param_4 + -3)) {
          memcpy(local_448,local_655,uVar11);
          uVar13 = 0xffffffffffffffff;
          iVar7 = WideCharToMultiByte(0,0,local_448,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 < 0x1001) {
            lpMultiByteStr = (LPSTR)FUN_1800020c0((longlong)(iVar7 + 1));
            lpWideCharStr = local_448;
            WideCharToMultiByte(0,0,lpWideCharStr,-1,lpMultiByteStr,iVar7,(LPCSTR)0x0,(LPBOOL)0x0);
            uVar15 = SUB81(lpWideCharStr,0);
            FUN_180001780((longlong)local_680);
            puVar9 = (undefined8 *)FUN_1800016b0(local_680);
            puVar9[2] = 0;
            puVar9[3] = 0xf;
            local_698[0] = 0;
            FUN_180001300((undefined1 *)puVar9,local_698);
            do {
              uVar13 = uVar13 + 1;
            } while (lpMultiByteStr[uVar13] != '\0');
            if ((ulonglong)puVar9[3] < uVar13) {
              FUN_1800086f0((longlong)local_680,uVar13,uVar15,lpMultiByteStr);
            }
            else {
              puVar8 = puVar9;
              if (0xf < (ulonglong)puVar9[3]) {
                puVar8 = (undefined8 *)*puVar9;
              }
              puVar9[2] = uVar13;
              memmove(puVar8,lpMultiByteStr,uVar13);
              local_698[0] = 0;
              FUN_180001300((undefined1 *)((longlong)puVar8 + uVar13),local_698);
            }
            free(lpMultiByteStr);
            FUN_180001780(param_2);
            puVar8 = (undefined8 *)FUN_1800016b0(param_2);
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            *puVar8 = *puVar9;
            puVar8[1] = uVar3;
            puVar8[2] = uVar4;
            puVar8[3] = uVar5;
            puVar9[2] = 0;
            puVar9[3] = 0xf;
            local_698[0] = 0;
            FUN_180001300((undefined1 *)puVar9,local_698);
            local_694 = 1;
            FUN_180001630(local_680);
            goto LAB_18004c98b;
          }
        }
        goto LAB_18004c938;
      }
      lVar10 = param_2;
      FUN_180001780(param_2);
      puVar8 = (undefined8 *)FUN_1800016b0(lVar10);
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      local_698[0] = 0;
      FUN_180001300((undefined1 *)puVar8,local_698);
      uVar13 = 0xffffffffffffffff;
      do {
        uVar11 = uVar13 + 1;
        lVar10 = uVar13 + 1;
        uVar13 = uVar11;
      } while (*(char *)((longlong)&local_658 + lVar10) != '\0');
      if ((ulonglong)puVar8[3] < uVar11) {
        FUN_1800086f0(param_2,uVar11,uVar15,&local_658);
        goto LAB_18004c983;
      }
      puVar9 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar9 = (undefined8 *)*puVar8;
      }
      puVar8[2] = uVar11;
      memmove(puVar9,&local_658,uVar11);
      puVar9 = (undefined8 *)((longlong)puVar9 + uVar11);
    }
    local_698[0] = 0;
    FUN_180001300((undefined1 *)puVar9,local_698);
  }
LAB_18004c983:
  local_694 = 1;
LAB_18004c98b:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_6d8);
  return;
}

