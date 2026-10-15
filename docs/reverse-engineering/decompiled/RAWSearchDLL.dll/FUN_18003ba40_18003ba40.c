// Function: FUN_18003ba40
// Address: 18003ba40
// Size: 465 bytes


void FUN_18003ba40(longlong param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  undefined *_Buf1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4d;
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_70 = *(undefined8 *)(param_2 + 8);
  local_68 = 0xffffffffffffffff;
  local_78 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_60 = 0x200;
  }
  else if ((undefined **)*param_3 == CRawFileCellTestStorageDevice::vftable) {
    local_60 = *(int *)((longlong)param_3 + 0xc);
    if (local_60 < 1) {
      local_60 = 0x200;
    }
  }
  else {
    local_60 = (*(code *)((undefined **)*param_3)[5])(param_3);
  }
  local_60 = local_60 << 7;
  _Buf1 = FUN_180042930((longlong *)&local_78,0);
  if (_Buf1 != (undefined *)0x0) {
    local_58 = 0x524143563a444e45;
    local_50 = 0xd44;
    local_4d = 0;
LAB_18003bb04:
    iVar2 = 0;
    do {
      if (((*(longlong *)(_Buf1 + iVar2) == 0x524143563a444e45) &&
          (*(short *)(_Buf1 + (longlong)iVar2 + 8) == 0xd44)) &&
         (_Buf1[(longlong)iVar2 + 10] == '\n')) {
        bVar1 = true;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)iVar2 + 0xb;
        goto LAB_18003bb2a;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x401);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x400;
    bVar1 = false;
LAB_18003bb2a:
    if (*(ulonglong *)(param_1 + 0x10) < 0x1400001) {
      if (bVar1) {
        _Buf1 = FUN_180042930((longlong *)&local_78,*(ulonglong *)(param_1 + 0x10));
        if ((_Buf1 == (undefined *)0x0) || (iVar2 = _memicmp(_Buf1,"BEGIN:VCARD",0xb), iVar2 != 0))
        goto LAB_18003bbd5;
      }
      else {
        local_58 = 0xa0d0a0d;
        iVar2 = 0;
        do {
          if (*(longlong *)(_Buf1 + iVar2) == 0xa0d0a0d) {
            *(longlong *)(param_1 + 0x10) =
                 *(longlong *)(param_1 + 0x10) + (4 - (longlong)(0x400 - iVar2));
            goto LAB_18003bbd5;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x401);
        _Buf1 = FUN_180042930((longlong *)&local_78,*(ulonglong *)(param_1 + 0x10));
      }
      if (_Buf1 == (undefined *)0x0) goto LAB_18003bbd5;
      goto LAB_18003bb04;
    }
    *(undefined8 *)(param_1 + 0x10) = 0x1400000;
LAB_18003bbd5:
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_98);
  return;
}

