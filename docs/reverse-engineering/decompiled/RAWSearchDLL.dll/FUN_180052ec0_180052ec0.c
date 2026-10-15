// Function: FUN_180052ec0
// Address: 180052ec0
// Size: 314 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180052ec0(undefined8 param_1,longlong *param_2,longlong param_3,uint *param_4,
                  undefined1 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined2 local_28 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_18008f028 ^ (ulonglong)local_28;
  uVar1 = *param_4;
  lVar5 = 1;
  if (0 < param_3) {
    lVar5 = param_3;
  }
  lVar4 = (longlong)
          (int)(((uVar1 >> 0x10 & 0xff) + ((uVar1 >> 8 & 0xff) + (uVar1 & 0xff) * 0x100) * 0x100) *
                0x100 + (uVar1 >> 0x18));
  *param_2 = lVar4;
  uVar3 = _UNK_18006eea8;
  uVar2 = _DAT_18006eea0;
  if (lVar5 != lVar4) {
    uVar1 = *param_4;
    *param_2 = (longlong)
               (int)(((uVar1 >> 0x10 & 0xff) +
                     ((uVar1 >> 8 & 0xff) + (uVar1 & 0xff) * 0x100) * 0x100) * 0x100 +
                    (uVar1 >> 0x18));
    local_20 = uVar2;
    uStack_18 = uVar3;
    if (param_4 + 1 != (uint *)0x0) {
      lVar5 = 0;
      do {
        if ((int)(char)param_4[1] == *(int *)((longlong)&local_20 + lVar5 * 4)) {
          if (lVar5 == 0) {
            iVar6 = 2;
            goto LAB_180052fa5;
          }
          if (lVar5 == 1) {
            iVar6 = 4;
            goto LAB_180052fa5;
          }
          if (lVar5 == 2) {
            iVar6 = 8;
            goto LAB_180052fa5;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
    }
    iVar6 = 0x10;
LAB_180052fa5:
    local_28[0] = *(undefined2 *)((longlong)param_4 + 5);
    if (iVar6 != 0x10) goto LAB_180052fcd;
  }
  *param_5 = 1;
LAB_180052fcd:
  __security_check_cookie(local_10 ^ (ulonglong)local_28);
  return;
}

