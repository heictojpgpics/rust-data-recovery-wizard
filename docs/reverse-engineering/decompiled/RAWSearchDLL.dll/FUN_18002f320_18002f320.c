// Function: FUN_18002f320
// Address: 18002f320
// Size: 777 bytes


void FUN_18002f320(longlong param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  uint uVar4;
  ulonglong *_Dst;
  int iVar5;
  longlong lVar6;
  int *_Src;
  undefined1 auStack_d8 [32];
  int local_b8;
  short local_b4 [14];
  ulonglong local_98;
  int local_8d;
  undefined8 local_88;
  longlong local_64;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_28;
  
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_d8;
  local_b8 = 0x30314341;
  iVar5 = 0;
  local_b4[0] = 0x3531;
  local_b4[1] = 0x4341;
  local_b4[2] = 0x3031;
  local_b4[3] = 0x3431;
  local_b4[4] = 0x4341;
  local_b4[5] = 0x3031;
  local_b4[6] = 0x3331;
  local_b4[7] = 0x4341;
  local_b4[8] = 0x3031;
  local_b4[9] = 0x3231;
  do {
    if ((*param_2 == *(int *)((longlong)&local_b8 + (longlong)iVar5 * 6)) &&
       ((short)param_2[1] == local_b4[(longlong)iVar5 * 3])) {
      iVar5 = 1;
      *(undefined4 *)(param_1 + 0x500) = 1;
      goto LAB_18002f3a7;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar5 = *(int *)(param_1 + 0x500);
LAB_18002f3a7:
  if (iVar5 == 1) {
    if (*(char *)(param_1 + 0x11c) == '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 1;
      iVar5 = *(int *)((longlong)*(int *)(param_1 + 0x110) + (longlong)param_2);
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 4;
      *(int *)(param_1 + 0x118) = iVar5;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x118);
    }
    uVar4 = *(uint *)(param_1 + 0x114);
    if ((int)uVar4 < iVar5) {
      iVar5 = *(int *)(param_1 + 0x110);
      uVar1 = *(ulonglong *)(param_1 + 0x10);
      do {
        lVar6 = (longlong)iVar5;
        if (*(byte *)(lVar6 + (longlong)param_2) != uVar4) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          break;
        }
        uVar2 = (ulonglong)
                (uint)(*(int *)(lVar6 + 5 + (longlong)param_2) +
                      *(int *)(lVar6 + 1 + (longlong)param_2));
        if (uVar2 <= uVar1) {
          uVar2 = uVar1;
        }
        iVar5 = iVar5 + 9;
        uVar4 = uVar4 + 1;
        *(ulonglong *)(param_1 + 0x10) = uVar2;
        *(int *)(param_1 + 0x110) = iVar5;
        *(uint *)(param_1 + 0x114) = uVar4;
        if (param_3 < iVar5) {
          *(int *)(param_1 + 0x110) = iVar5 - param_3;
          break;
        }
        uVar1 = uVar2;
      } while ((int)uVar4 < *(int *)(param_1 + 0x118));
    }
  }
  else {
    local_b8 = 0x30314341;
    iVar5 = 0;
    local_b4[0] = 0x3831;
    local_b4[1] = 0x4341;
    local_b4[2] = 0x3031;
    local_b4[3] = 0x3432;
    local_b4[4] = 0x4341;
    local_b4[5] = 0x3031;
    local_b4[6] = 0x3732;
    local_b4[7] = 0x4341;
    local_b4[8] = 0x3031;
    local_b4[9] = 0x3233;
    do {
      if ((*param_2 == *(int *)((longlong)&local_b8 + (longlong)iVar5 * 6)) &&
         ((short)param_2[1] == local_b4[(longlong)iVar5 * 3])) {
        *(undefined4 *)(param_1 + 0x500) = 2;
        goto LAB_18002f591;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    if (*(int *)(param_1 + 0x500) == 2) {
LAB_18002f591:
      _Dst = &local_98;
      memset(_Dst,0,0x6c);
      FUN_18002f630(_Dst,(ulonglong *)(param_2 + 0x20),&local_98);
      if (((((local_8d == 0) && ((int)local_88 == 0x6c)) &&
           ((int)((ulonglong)local_88 >> 0x20) == 4)) && ((local_54 == 0x20 && (local_50 == 0x80))))
         && (local_4c == 0x40)) {
        *(longlong *)(param_1 + 0x10) = local_64 + 0x6c;
      }
    }
    else {
      if (*(int *)(param_1 + 0x500) != 3) {
        local_b4[10] = 0x4341;
        local_b4[0xb] = 0x3031;
        local_b4[0xc] = 0x3132;
        if ((*param_2 != 0x30314341) || ((short)param_2[1] != 0x3132)) goto LAB_18002f5e9;
        *(undefined4 *)(param_1 + 0x500) = 3;
      }
      _Src = param_2;
      iVar5 = *(int *)(param_1 + 0x120);
      if (param_3 < *(int *)(param_1 + 0x120)) {
        _Src = param_2 + 0x20;
        iVar5 = param_3 + -0x80;
        if (*(int *)(param_1 + 0x124) != 0) {
          _Src = param_2;
          iVar5 = param_3;
        }
      }
      memcpy((void *)(param_1 + 0x128 + (longlong)*(int *)(param_1 + 0x124)),_Src,(longlong)iVar5);
      *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + iVar5;
      iVar5 = *(int *)(param_1 + 0x120) - iVar5;
      *(int *)(param_1 + 0x120) = iVar5;
      if (iVar5 < 1) {
        FUN_18002fc50(param_1);
      }
    }
  }
LAB_18002f5e9:
  puVar3 = FUN_180001350();
  if ((ulonglong)(*(longlong *)(puVar3 + 0x70) * 100) < *(ulonglong *)(param_1 + 0x10)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_d8);
  return;
}

