// Function: FUN_1800128e0
// Address: 1800128e0
// Size: 599 bytes


void FUN_1800128e0(longlong param_1,short *param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *_Dst;
  ulonglong uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_158;
  uVar5 = (ulonglong)param_3;
  uVar7 = (param_4 - *(longlong *)(param_1 + 8)) * uVar5;
  if (*(char *)(param_1 + 0x139) != '\0') {
    if (*param_2 != 0x4d4d) {
      *(undefined1 *)(param_1 + 0x138) = 0;
    }
    *(undefined1 *)(param_1 + 0x139) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (uVar7 < (ulonglong)(lVar4 * 0x28) || uVar7 + lVar4 * -0x28 == 0) {
    if (*(char *)(param_1 + 0x138) == '\0') {
      lVar1 = (ulonglong)*(uint *)(param_2 + 0x82) << 9;
      if ((ulonglong)(lVar4 * 0x28) < (ulonglong)*(uint *)(param_2 + 0x82)) {
        lVar1 = lVar4;
      }
      *(longlong *)(param_1 + 0x110) = lVar1;
LAB_180012976:
      uVar6 = 4;
      memset(local_128,0,0x104);
      uVar5 = 0xffffffffffffffff;
      do {
        uVar7 = uVar5 + 1;
        lVar4 = uVar5 + 1;
        uVar5 = uVar7;
      } while (local_128[lVar4] != '\0');
      puVar2 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
      if ((ulonglong)puVar2[3] < uVar7) {
        FUN_1800086f0(param_1 + 0x20,uVar7,uVar6,local_128);
      }
      else {
        _Dst = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          _Dst = (undefined8 *)*puVar2;
        }
        puVar2[2] = uVar7;
        memmove(_Dst,local_128,uVar7);
        local_138[0] = 0;
        FUN_180001300((undefined1 *)((longlong)_Dst + uVar7),local_138);
      }
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 0x110);
      if (uVar7 <= uVar3) {
        do {
          if (uVar5 + uVar7 <= uVar3) break;
          lVar4 = uVar3 - uVar7;
          if (uVar5 < lVar4 + 0x58U) {
            uVar3 = uVar3 + 0x58;
            *(ulonglong *)(param_1 + 0x110) = uVar3;
            *(ulonglong *)(param_1 + 0x120) = (ulonglong)*(ushort *)(lVar4 + (longlong)param_2);
            *(ulonglong *)(param_1 + 0x130) = (ulonglong)*(ushort *)(lVar4 + 2 + (longlong)param_2);
            *(undefined1 *)(param_1 + 0x13a) = 0;
          }
          else {
            if (*(char *)(param_1 + 0x13a) != '\0') {
              *(ulonglong *)(param_1 + 0x120) = (ulonglong)*(ushort *)(lVar4 + (longlong)param_2);
              *(ulonglong *)(param_1 + 0x128) =
                   (ulonglong)*(ushort *)(lVar4 + 0x58 + (longlong)param_2);
              *(ulonglong *)(param_1 + 0x130) =
                   (ulonglong)*(ushort *)(lVar4 + 2 + (longlong)param_2);
            }
            if (*(short *)(lVar4 + 0x58 + (longlong)param_2) == 0x4d4d) {
              uVar3 = uVar3 + 0x58;
            }
            else {
              if (*(char *)(param_1 + 0x13a) == '\0') {
                uVar3 = uVar3 - 0x58;
                *(ulonglong *)(param_1 + 0x110) = uVar3;
              }
              if (*(longlong *)(param_1 + 0x120) != 0x4d4d) goto LAB_180012976;
              *(ulonglong *)(param_1 + 0x110) = uVar3 + 0x58;
              if (*(longlong *)(param_1 + 0x128) == 0) break;
              if (*(ulonglong *)(param_1 + 0x130) < 0x59) goto LAB_180012976;
              *(undefined1 *)(param_1 + 0x13a) = 1;
              uVar3 = uVar3 + *(ulonglong *)(param_1 + 0x130);
            }
            *(ulonglong *)(param_1 + 0x110) = uVar3;
          }
        } while (uVar7 <= uVar3);
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_158);
  return;
}

