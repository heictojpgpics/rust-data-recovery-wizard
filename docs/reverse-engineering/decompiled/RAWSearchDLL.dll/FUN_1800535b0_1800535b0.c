// Function: FUN_1800535b0
// Address: 1800535b0
// Size: 569 bytes


void FUN_1800535b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_48 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_88;
  if (param_3 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_18011855c) && (_Init_thread_header(&DAT_18011855c), DAT_18011855c == -1)) {
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        DAT_180118558 = *(int *)((longlong)param_3 + 0xc);
        if (DAT_180118558 < 1) {
          DAT_180118558 = 0x200;
        }
      }
      else {
        DAT_180118558 = (*(code *)((undefined **)*param_3)[5])(param_3);
      }
      _Init_thread_footer(&DAT_18011855c);
    }
    local_40 = 0x64434553;
    local_3c = 0;
    local_60 = *(undefined8 *)(param_2 + 8);
    local_58 = 0xffffffffffffffff;
    local_68 = param_3;
    if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
      local_50 = *(int *)((longlong)param_3 + 0xc);
      if (local_50 < 1) {
        local_50 = 0x200;
      }
    }
    else {
      local_50 = (*(code *)((undefined **)*param_3)[5])(param_3);
    }
    local_50 = local_50 << 7;
    puVar3 = FUN_180001350();
    uVar2 = *(ulonglong *)(puVar3 + 0x70);
    uVar7 = 0;
    do {
      piVar4 = (int *)FUN_180042930((longlong *)&local_68,uVar7);
      if (piVar4 == (int *)0x0) break;
      lVar9 = (longlong)DAT_180118558;
      iVar1 = *(int *)((lVar9 - (longlong)uVar7 % lVar9) + -4 + (longlong)piVar4);
      if (iVar1 == 0) {
        piVar5 = FUN_1800534e0(piVar4,DAT_180118558,&local_40);
        if (piVar5 != (int *)0x0) {
          uVar7 = (longlong)piVar5 + ((uVar7 + 0x4c) - (longlong)piVar4);
          break;
        }
        uVar8 = uVar7 - lVar9;
        if ((longlong)uVar7 < 1) {
          uVar8 = uVar7;
        }
        piVar4 = (int *)FUN_180042930((longlong *)&local_68,uVar8);
        iVar1 = DAT_180118558;
        iVar6 = DAT_180118558 * 2;
        if ((longlong)uVar7 < 1) {
          iVar6 = DAT_180118558;
        }
        piVar5 = FUN_1800534e0(piVar4,iVar6,&local_40);
        if (piVar5 != (int *)0x0) {
          uVar7 = (longlong)piVar5 + (uVar8 - (longlong)piVar4) + 0x4c;
          break;
        }
        if (0 < (longlong)uVar7) {
          iVar1 = iVar1 * 2;
        }
        uVar7 = (longlong)iVar1 + uVar8;
      }
      else {
        if (iVar1 == 0x64434553) {
          uVar7 = uVar7 + 0x4c;
          break;
        }
        uVar7 = uVar7 + lVar9;
      }
    } while ((longlong)uVar7 <= (longlong)(uVar2 >> 1));
    *(ulonglong *)(param_2 + 0x10) = uVar7;
    *(undefined4 *)(param_2 + 0x18) = 0x6c;
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_88);
  return;
}

