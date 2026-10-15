// Function: FUN_180053de0
// Address: 180053de0
// Size: 528 bytes


void FUN_180053de0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
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
    local_40 = 0x796c6f6b;
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
    lVar1 = *(longlong *)(puVar3 + 0x70);
    uVar7 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_180118568) && (_Init_thread_header(&DAT_180118568), DAT_180118568 == -1)) {
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        iVar2 = *(int *)((longlong)param_3 + 0xc);
        if (iVar2 < 1) {
          iVar2 = 0x200;
        }
      }
      else {
        iVar2 = (*(code *)((undefined **)*param_3)[5])(param_3);
      }
      DAT_180118560 = (ulonglong)iVar2;
      _Init_thread_footer(&DAT_180118568);
    }
    do {
      piVar4 = (int *)FUN_180042930((longlong *)&local_68,uVar7);
      uVar8 = DAT_180118560;
      if (piVar4 == (int *)0x0) break;
      lVar6 = DAT_180118560 - uVar7 % DAT_180118560;
      if ((*(int *)(lVar6 + -4 + (longlong)piVar4) == 0) &&
         (*(int *)(lVar6 + -8 + (longlong)piVar4) == 0)) {
        piVar4 = FUN_1800534e0(piVar4,4,&local_40);
        if (piVar4 != (int *)0x0) {
          uVar7 = uVar7 + 0x200;
          break;
        }
        if ((0x2800 < uVar7) && (uVar8 < uVar7)) {
          uVar7 = uVar7 - uVar8;
          piVar4 = (int *)FUN_180042930((longlong *)&local_68,uVar7);
          uVar8 = DAT_180118560;
          piVar5 = FUN_1800534e0(piVar4,(int)DAT_180118560,&local_40);
          if (piVar5 != (int *)0x0) {
            uVar7 = (longlong)piVar5 + ((uVar7 + 0x200) - (longlong)piVar4);
            break;
          }
          uVar7 = uVar7 + uVar8;
        }
      }
      uVar7 = uVar7 + uVar8;
    } while (uVar7 <= (ulonglong)(lVar1 * 10));
    *(undefined4 *)(param_2 + 0x18) = 0x71;
    *(ulonglong *)(param_2 + 0x10) = uVar7;
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_88);
  return;
}

