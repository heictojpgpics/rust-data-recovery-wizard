// Function: FUN_180026b80
// Address: 180026b80
// Size: 948 bytes


void FUN_180026b80(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  undefined4 local_290;
  uint local_28c;
  byte *local_288;
  undefined4 local_280;
  uint local_27c;
  undefined8 local_278;
  longlong local_270;
  code *local_268;
  code *local_260;
  undefined8 local_258;
  byte local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_2b8;
  iVar4 = 0;
  if ((((byte)(*(char *)(param_2 + 3) - 6U) < 0xf) && ((*(byte *)(param_2 + 8) & 0xf) == 8)) &&
     (8 < *(uint *)(param_2 + 4))) {
    local_288 = local_238;
    local_290 = 0;
    local_268 = FUN_180056280;
    iVar9 = 5;
    local_278 = 0;
    local_260 = FUN_180056290;
    local_258 = 0;
    local_298 = param_2 + 8;
    lVar5 = FUN_180056280(0,1,0x2548);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 8) = 1;
      *(undefined4 *)(lVar5 + 0x28) = 0xf;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      local_270 = lVar5;
      uVar6 = FUN_180054a90((longlong)&local_298);
      if ((int)uVar6 == 0) {
        do {
          uVar3 = local_27c;
          if ((0x1fe < local_27c) || (0x1f7 < local_28c)) {
LAB_180026cd4:
            uVar6 = local_258;
            pcVar1 = local_260;
            lVar5 = local_270;
            if ((local_270 != 0) && (local_260 != (code *)0x0)) {
              if (*(longlong *)(local_270 + 0x38) != 0) {
                (*local_260)(local_258);
              }
              (*pcVar1)(uVar6,lVar5);
              if ((0xf < uVar3) && (1 < local_238[0] >> 3)) {
                uVar3 = (local_238[0] >> 3) - 1;
                uVar7 = (ulonglong)uVar3;
                uVar8 = (ulonglong)uVar3;
                do {
                  bVar11 = iVar9 != 7;
                  iVar2 = iVar9 + 1;
                  iVar9 = iVar4;
                  if (bVar11) {
                    iVar9 = iVar2;
                  }
                  uVar8 = uVar8 - 1;
                  uVar10 = uVar7;
                } while (uVar8 != 0);
                do {
                  bVar11 = iVar9 != 7;
                  iVar2 = iVar9 + 1;
                  iVar9 = iVar4;
                  if (bVar11) {
                    iVar9 = iVar2;
                  }
                  uVar10 = uVar10 - 1;
                  uVar8 = uVar7;
                } while (uVar10 != 0);
                do {
                  bVar11 = iVar9 != 7;
                  iVar2 = iVar9 + 1;
                  iVar9 = iVar4;
                  if (bVar11) {
                    iVar9 = iVar2;
                  }
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                do {
                  bVar11 = iVar9 != 7;
                  iVar4 = iVar9 + 1;
                  iVar9 = 0;
                  if (bVar11) {
                    iVar9 = iVar4;
                  }
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
            }
            goto LAB_180026f0e;
          }
          local_280 = 1;
          local_290 = 1;
          iVar2 = FUN_180054c10(&local_298);
          uVar6 = local_258;
          pcVar1 = local_260;
          lVar5 = local_270;
          uVar3 = local_27c;
          if (iVar2 == 1) goto LAB_180026cd4;
        } while (iVar2 == 0);
        if ((local_270 != 0) && (local_260 != (code *)0x0)) {
          if (*(longlong *)(local_270 + 0x38) != 0) {
            (*local_260)(local_258);
          }
          (*pcVar1)(uVar6,lVar5);
        }
      }
    }
  }
LAB_180026f0e:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_2b8);
  return;
}

