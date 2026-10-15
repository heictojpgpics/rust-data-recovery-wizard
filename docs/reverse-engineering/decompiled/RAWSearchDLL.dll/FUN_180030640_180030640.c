// Function: FUN_180030640
// Address: 180030640
// Size: 551 bytes


undefined8
FUN_180030640(undefined8 param_1,short *param_2,longlong param_3,longlong param_4,longlong param_5,
             undefined8 param_6,longlong param_7)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_58;
  undefined1 local_54;
  byte local_50 [8];
  int local_48;
  uint local_3c;
  int local_34;
  int local_30;
  undefined2 local_2a;
  
  if (((*param_2 == DAT_18006bd18) && ((char)param_2[1] == DAT_18006bd1a)) &&
     ((byte)(*(char *)((longlong)param_2 + 3) - 3U) < 2)) {
    *(undefined4 *)(param_3 + 0x18) = 0x2b;
    return 1;
  }
  uVar7 = 0;
  uVar6 = 0;
  local_2a = 0;
  uVar1 = FUN_180049c60(local_50,(longlong)param_2);
  if (((int)CONCAT62(extraout_var,uVar1) != 0) && (DAT_180096ef0 == 0)) {
    uVar3 = 0;
    uVar2 = uVar3;
    if (local_3c != 0) {
      uVar2 = ((uint)(*(int *)(&DAT_180068208 +
                              ((longlong)local_48 + (ulonglong)local_50[0] * 3) * 4) * local_34) /
               local_3c + local_30) * *(int *)(&DAT_180068090 + (longlong)local_48 * 4);
    }
    uVar4 = (ulonglong)uVar2;
    if (uVar4 - 1 < 0x56220) {
      lVar8 = (param_5 + 1) * param_4 + uVar4;
      if (lVar8 + 4 <= param_4 * param_7) {
        local_54 = 0;
        local_58 = *(undefined4 *)((longlong)param_2 + uVar4);
        uVar7 = uVar6;
        if ((((char)local_58 == -1) && (((byte)((uint)local_58 >> 8) & 0xe0) == 0xe0)) &&
           ((((byte)((uint)local_58 >> 0x10) & 0xf0) != 0xf0 &&
            (uVar1 = FUN_180049c60(local_50,(longlong)&local_58),
            (int)CONCAT62(extraout_var_00,uVar1) != 0)))) {
          if (local_3c != 0) {
            uVar3 = ((uint)(*(int *)(&DAT_180068208 +
                                    ((longlong)local_48 + (ulonglong)local_50[0] * 3) * 4) *
                           local_34) / local_3c + local_30) *
                    *(int *)(&DAT_180068090 + (longlong)local_48 * 4);
          }
          uVar5 = (ulonglong)uVar3;
          if (((((uVar5 - 1 < 0x56220) && ((longlong)(uVar5 + 4 + lVar8) <= param_4 * param_7)) &&
               (local_58 = *(undefined4 *)((longlong)((longlong)param_2 + uVar4) + uVar5),
               (char)local_58 == -1)) &&
              ((((byte)((uint)local_58 >> 8) & 0xe0) == 0xe0 &&
               (((byte)((uint)local_58 >> 0x10) & 0xf0) != 0xf0)))) &&
             (uVar1 = FUN_180049c60(local_50,(longlong)&local_58),
             (int)CONCAT62(extraout_var_01,uVar1) != 0)) {
            DAT_180096ef0 = param_5;
            uVar7 = 1;
            *(undefined4 *)(param_3 + 0x18) = 0x2b;
          }
        }
      }
    }
  }
  return uVar7;
}

