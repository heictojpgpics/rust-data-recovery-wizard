// Function: FUN_180016160
// Address: 180016160
// Size: 441 bytes


void FUN_180016160(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong _Size;
  undefined8 *_Dst;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  char local_128 [272];
  ulonglong local_18;
  ulonglong uVar6;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_158;
  lVar9 = (longlong)param_3;
  lVar8 = (param_4 - *(longlong *)(param_1 + 8)) * lVar9;
  if (*(char *)(param_1 + 0x120) != '\0') {
    lVar1 = *(longlong *)(param_2 + 0xc4);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_2 + 100);
    }
    *(longlong *)(param_1 + 0x110) = lVar1;
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar8 - lVar1 == 0 || lVar8 < lVar1) &&
     (lVar4 = *(longlong *)(param_1 + 0x110), lVar8 < lVar4)) {
    while (lVar4 <= lVar9 + lVar8) {
      lVar5 = lVar4 - lVar8;
      if ((lVar5 + 4 < 0) || (lVar9 < lVar5 + 4)) break;
      if ((param_2 != 0) &&
         ((*(longlong *)(lVar5 + 4 + param_2) != DAT_180067964 ||
          (*(int *)(lVar5 + 0xc + param_2) != DAT_18006796c)))) {
        uVar7 = 4;
        memset(local_128,0,0x104);
        uVar6 = 0xffffffffffffffff;
        do {
          _Size = uVar6 + 1;
          lVar8 = uVar6 + 1;
          uVar6 = _Size;
        } while (local_128[lVar8] != '\0');
        puVar3 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
        if ((ulonglong)puVar3[3] < _Size) {
          FUN_1800086f0(param_1 + 0x20,_Size,uVar7,local_128);
        }
        else {
          _Dst = puVar3;
          if (0xf < (ulonglong)puVar3[3]) {
            _Dst = (undefined8 *)*puVar3;
          }
          puVar3[2] = _Size;
          memmove(_Dst,local_128,_Size);
          local_138[0] = 0;
          FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_138);
        }
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
        break;
      }
      if ((lVar5 < 0) || (lVar9 < lVar5)) break;
      lVar2 = *(longlong *)(lVar5 + 0xc4 + param_2);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(lVar5 + 100 + param_2);
      }
      lVar4 = lVar4 + lVar2;
      *(longlong *)(param_1 + 0x110) = lVar4;
      if (((lVar1 < lVar4) || (lVar4 < 0)) || (lVar4 <= lVar8)) break;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}

