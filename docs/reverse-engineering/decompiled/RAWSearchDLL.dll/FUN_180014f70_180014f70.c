// Function: FUN_180014f70
// Address: 180014f70
// Size: 640 bytes


void FUN_180014f70(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  ushort uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  char local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_188;
  lVar12 = (longlong)param_3;
  lVar8 = (param_4 - *(longlong *)(param_1 + 8)) * lVar12;
  if (lVar8 - *(longlong *)(param_1 + 0x118) == 0 || lVar8 < *(longlong *)(param_1 + 0x118)) {
    lVar6 = *(longlong *)(param_1 + 0x110);
    if (lVar8 < lVar6) {
      do {
        if (((lVar12 + 8 + lVar8 < lVar6) || ((lVar6 - lVar8) + -4 < 0)) ||
           (*(longlong *)(param_5 + 8) == param_4 || *(longlong *)(param_5 + 8) - param_4 < 0))
        break;
        if ((param_2 == 0) ||
           (iVar3 = _memicmp((void *)((lVar6 - lVar8) + param_2),&DAT_180067790,4), iVar3 != 0)) {
          uVar11 = 4;
          memset(local_158,0,0x104);
          uVar7 = 0xffffffffffffffff;
          do {
            uVar9 = uVar7 + 1;
            lVar8 = uVar7 + 1;
            uVar7 = uVar9;
          } while (local_158[lVar8] != '\0');
          puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
          if ((ulonglong)puVar4[3] < uVar9) {
            FUN_1800086f0(param_1 + 0x20,uVar9,uVar11,local_158);
          }
          else {
            puVar10 = puVar4;
            if (0xf < (ulonglong)puVar4[3]) {
              puVar10 = (undefined8 *)*puVar4;
            }
            puVar4[2] = uVar9;
            memmove(puVar10,local_158,uVar9);
            local_168[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar10 + uVar9),local_168);
          }
          lVar8 = *(longlong *)(param_1 + 0x110);
          if (0 < lVar8 % lVar12) {
            lVar8 = (lVar8 - lVar8 % lVar12) + lVar12;
          }
          *(longlong *)(param_1 + 0x110) = lVar8;
          *(longlong *)(param_1 + 0x10) = lVar8;
          break;
        }
        *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 8;
        uVar1 = *(undefined4 *)((*(longlong *)(param_1 + 0x110) - lVar8) + -4 + param_2);
        uVar2 = (ushort)((uint)uVar1 >> 0x10);
        uVar5 = (ushort)uVar1;
        uVar7 = (ulonglong)(ushort)(uVar2 << 8 | uVar2 >> 8) |
                (longlong)(int)((uint)(ushort)(uVar5 << 8 | uVar5 >> 8) << 0x10);
        if ((longlong)uVar7 < 0) break;
        lVar6 = *(longlong *)(param_1 + 0x110) + uVar7;
        *(longlong *)(param_1 + 0x110) = lVar6;
      } while (lVar8 < lVar6);
    }
  }
  else {
    uVar11 = 4;
    memset(local_158,0,0x104);
    uVar7 = 0xffffffffffffffff;
    do {
      uVar9 = uVar7 + 1;
      lVar8 = uVar7 + 1;
      uVar7 = uVar9;
    } while (local_158[lVar8] != '\0');
    puVar4 = (undefined8 *)FUN_1800016b0(param_1 + 0x20);
    if ((ulonglong)puVar4[3] < uVar9) {
      FUN_1800086f0(param_1 + 0x20,uVar9,uVar11,local_158);
    }
    else {
      puVar10 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar10 = (undefined8 *)*puVar4;
      }
      puVar4[2] = uVar9;
      memmove(puVar10,local_158,uVar9);
      local_168[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar10 + uVar9),local_168);
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x110);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_188);
  return;
}

