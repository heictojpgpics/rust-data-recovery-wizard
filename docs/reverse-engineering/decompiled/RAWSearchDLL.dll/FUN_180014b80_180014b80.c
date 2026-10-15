// Function: FUN_180014b80
// Address: 180014b80
// Size: 534 bytes


void FUN_180014b80(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong _Size;
  longlong lVar7;
  undefined8 *_Dst;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  char local_128 [272];
  ulonglong local_18;
  ulonglong uVar6;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_158;
  lVar7 = (longlong)param_3;
  lVar10 = (param_4 - *(longlong *)(param_1 + 8)) * lVar7;
  lVar2 = *(longlong *)(param_5 + 8);
  if (lVar10 - *(longlong *)(param_1 + 0x118) == 0 || lVar10 < *(longlong *)(param_1 + 0x118)) {
    lVar9 = *(longlong *)(param_1 + 0x110);
    while (((lVar10 < lVar9 && (lVar5 = lVar9 - lVar10, lVar5 + 8 < (lVar2 - param_4) * lVar7)) &&
           (lVar9 <= lVar7 + -4 + lVar10))) {
      if (param_2 == 0) {
LAB_180014c67:
        uVar1 = *(ushort *)(lVar5 + 2 + param_2);
        lVar9 = lVar9 + 0xc +
                (ulonglong)
                CONCAT22(*(ushort *)(lVar5 + param_2) << 8 | *(ushort *)(lVar5 + param_2) >> 8,
                         uVar1 << 8 | uVar1 >> 8);
      }
      else {
        if (*(char *)(param_1 + 0x120) == '\0') {
          if ((*(longlong *)(param_5 + 8) != param_4 && -1 < *(longlong *)(param_5 + 8) - param_4)
             && (*(int *)(lVar5 + 4 + param_2) == DAT_180067700)) {
            uVar1 = *(ushort *)((lVar9 - lVar10) + 2 + param_2);
            uVar3 = *(ushort *)((lVar9 - lVar10) + param_2);
            uVar8 = 4;
            *(ulonglong *)(param_1 + 0x110) =
                 lVar9 + 0xc + (ulonglong)CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
            memset(local_128,0,0x104);
            uVar6 = 0xffffffffffffffff;
            do {
              _Size = uVar6 + 1;
              lVar2 = uVar6 + 1;
              uVar6 = _Size;
            } while (local_128[lVar2] != '\0');
            puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
            if ((ulonglong)puVar4[3] < _Size) {
              FUN_1800086f0(param_1 + 0x20,_Size,uVar8,local_128);
            }
            else {
              _Dst = puVar4;
              if (0xf < (ulonglong)puVar4[3]) {
                _Dst = (undefined8 *)*puVar4;
              }
              puVar4[2] = _Size;
              memmove(_Dst,local_128,_Size);
              local_138[0] = 0;
              FUN_180001300((undefined1 *)((longlong)_Dst + _Size),local_138);
            }
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
            break;
          }
          goto LAB_180014c67;
        }
        uVar1 = *(ushort *)(param_2 + 8);
        uVar3 = (ushort)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
        *(undefined1 *)(param_1 + 0x120) = 0;
        lVar9 = lVar9 + (ulonglong)CONCAT22(uVar1 << 8 | uVar1 >> 8,uVar3 << 8 | uVar3 >> 8);
      }
      *(longlong *)(param_1 + 0x110) = lVar9;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}

