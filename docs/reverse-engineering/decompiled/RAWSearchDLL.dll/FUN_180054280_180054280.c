// Function: FUN_180054280
// Address: 180054280
// Size: 488 bytes


void FUN_180054280(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_38 = 0xfffffffffffffffe;
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_78;
  if (param_3 != (longlong *)0x0) {
    local_30[0] = 0x732f3c0a;
    local_30[1] = 0x3e6776;
    local_50 = *(undefined8 *)(param_2 + 8);
    local_48 = 0xffffffffffffffff;
    local_58 = param_3;
    if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
      local_40 = *(int *)((longlong)param_3 + 0xc);
      if (local_40 < 1) {
        local_40 = 0x200;
      }
    }
    else {
      local_40 = (*(code *)((undefined **)*param_3)[5])(param_3);
    }
    local_40 = local_40 << 7;
    uVar3 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_18011856c) && (_Init_thread_header(&DAT_18011856c), DAT_18011856c == -1)) {
      if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
        DAT_180118570 = *(int *)((longlong)param_3 + 0xc);
        if (DAT_180118570 < 1) {
          DAT_180118570 = 0x200;
        }
      }
      else {
        DAT_180118570 = (*(code *)((undefined **)*param_3)[5])(param_3);
      }
      _Init_thread_footer(&DAT_18011856c);
    }
    do {
      piVar1 = (int *)FUN_180042930((longlong *)&local_58,uVar3);
      if (piVar1 == (int *)0x0) break;
      lVar4 = (longlong)DAT_180118570;
      if (*(short *)((lVar4 - (longlong)uVar3 % lVar4) + -2 + (longlong)piVar1) == 0) {
        piVar2 = FUN_180054000(piVar1,DAT_180118570,local_30);
        if (piVar2 == (int *)0x0) {
          piVar1 = (int *)FUN_180042930((longlong *)&local_58,uVar3 - 0x10);
          piVar1 = FUN_180054000(piVar1,0x20,local_30);
          if (piVar1 == (int *)0x0) {
            lVar4 = (longlong)DAT_180118570;
            goto LAB_1800543ba;
          }
          lVar4 = (longlong)DAT_180118570;
        }
        else {
          lVar4 = (longlong)piVar2 - (longlong)piVar1;
          uVar3 = uVar3 + 9;
        }
        uVar3 = uVar3 + lVar4;
        break;
      }
LAB_1800543ba:
      uVar3 = uVar3 + lVar4;
    } while ((longlong)uVar3 < 0x100001);
    *(undefined4 *)(param_2 + 0x18) = 0x5b;
    *(ulonglong *)(param_2 + 0x10) = uVar3;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_78);
  return;
}

