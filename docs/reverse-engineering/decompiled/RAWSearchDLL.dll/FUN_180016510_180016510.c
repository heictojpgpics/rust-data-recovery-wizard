// Function: FUN_180016510
// Address: 180016510
// Size: 446 bytes


void FUN_180016510(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong _Size;
  ulonglong uVar4;
  undefined8 *_Dst;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_158;
  lVar6 = (param_4 - *(longlong *)(param_1 + 8)) * (longlong)param_3;
  if (lVar6 - *(longlong *)(param_1 + 0x118) == 0 || lVar6 < *(longlong *)(param_1 + 0x118)) {
    lVar3 = *(longlong *)(param_1 + 0x110);
    if (((lVar6 < lVar3) && (lVar7 = (longlong)param_3 + 10 + lVar6, lVar3 <= lVar7)) &&
       (*(longlong *)(param_5 + 8) != param_4 && -1 < *(longlong *)(param_5 + 8) - param_4)) {
      if (*(char *)(param_1 + 0x120) == '\0') {
        lVar2 = lVar3 - lVar6;
      }
      else {
        *(undefined1 *)(param_1 + 0x120) = 0;
        lVar2 = 0x24;
      }
LAB_180016638:
      if (lVar3 <= lVar7) {
        if ((param_2 != 0) && (*(int *)(lVar2 + param_2) == 0x4b427e)) goto code_r0x00018001664a;
        uVar5 = 4;
        memset(local_128,0,0x104);
        uVar4 = 0xffffffffffffffff;
        do {
          _Size = uVar4 + 1;
          lVar6 = uVar4 + 1;
          uVar4 = _Size;
        } while (local_128[lVar6] != '\0');
        goto LAB_18001657f;
      }
    }
  }
  else {
    uVar5 = 4;
    memset(local_128,0,0x104);
    uVar4 = 0xffffffffffffffff;
    do {
      _Size = uVar4 + 1;
      lVar6 = uVar4 + 1;
      uVar4 = _Size;
    } while (local_128[lVar6] != '\0');
LAB_18001657f:
    puVar1 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar1[3] < _Size) {
      FUN_1800086f0(param_1 + 0x20,_Size,uVar5,local_128);
    }
    else {
      _Dst = puVar1;
      if (0xf < (ulonglong)puVar1[3]) {
        _Dst = (undefined8 *)*puVar1;
      }
      puVar1[2] = _Size;
      memmove(_Dst,local_128,_Size);
      local_138[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_138);
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
  }
LAB_180016675:
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
code_r0x00018001664a:
  *(longlong *)(param_1 + 0x110) = lVar3 + 10;
  lVar3 = (ulonglong)*(uint *)(lVar2 + param_2 + 6) + lVar3 + 10;
  *(longlong *)(param_1 + 0x110) = lVar3;
  lVar2 = lVar3 - lVar6;
  if (lVar3 <= lVar6) goto LAB_180016675;
  goto LAB_180016638;
}

