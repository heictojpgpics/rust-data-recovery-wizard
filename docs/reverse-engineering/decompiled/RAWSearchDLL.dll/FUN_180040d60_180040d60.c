// Function: FUN_180040d60
// Address: 180040d60
// Size: 421 bytes


void FUN_180040d60(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong _Size;
  uint uVar8;
  undefined8 *_Dst;
  undefined1 uVar9;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  longlong local_160 [5];
  char local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_188;
  if (((param_2 != 0) && (0x1ff < param_3)) && (-1 < param_4)) {
    if ((param_4 == *(longlong *)(param_1 + 8)) && (*(int *)(param_2 + 4) == 0)) {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else if ((*(int *)(param_1 + 0x110) != 0) || (4 < *(int *)(param_5 + 0x14))) {
      uVar1 = *(uint *)(param_2 + 4);
      uVar8 = uVar1;
      if (*(int *)(param_1 + 0x18) == 10) {
        uVar8 = uVar1 + 8;
        FUN_1800428b0(local_160,*(longlong **)(param_1 + 0xe8),param_4);
        piVar4 = (int *)FUN_180042930(local_160,(ulonglong)uVar8);
        if (((piVar4 != (int *)0x0) && (piVar5 = FUN_180040620(piVar4), piVar5 != (int *)0x0)) &&
           (iVar3 = (int)piVar5 - (int)piVar4, 0 < iVar3)) {
          uVar8 = uVar1 + 0xc + iVar3;
        }
      }
      if (*(int *)(param_1 + 0x110) == 0) {
        uVar7 = ((param_4 - *(longlong *)(param_1 + 8)) + 1) * (longlong)param_3;
      }
      else {
        uVar7 = (ulonglong)uVar8;
      }
      *(ulonglong *)(param_1 + 0x10) = uVar7;
      uVar9 = 4;
      memset(local_138,0,0x104);
      uVar7 = 0xffffffffffffffff;
      do {
        _Size = uVar7 + 1;
        lVar2 = uVar7 + 1;
        uVar7 = _Size;
      } while (local_138[lVar2] != '\0');
      puVar6 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar6[3] < _Size) {
        FUN_1800086f0(param_1 + 0x20,_Size,uVar9,local_138);
      }
      else {
        _Dst = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          _Dst = (undefined8 *)*puVar6;
        }
        puVar6[2] = _Size;
        memmove(_Dst,local_138,_Size);
        local_168[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_168);
      }
    }
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_188);
  return;
}

