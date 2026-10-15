// Function: FUN_180057020
// Address: 180057020
// Size: 758 bytes


uint FUN_180057020(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = ~param_1;
  if (param_3 != 0) {
    do {
      if (((ulonglong)param_2 & 3) == 0) break;
      uVar1 = *param_2;
      param_2 = (uint *)((longlong)param_2 + 1);
      uVar2 = *(uint *)(&DAT_180068c10 + (ulonglong)(byte)((byte)uVar1 ^ (byte)uVar2) * 4) ^
              uVar2 >> 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (0x1f < param_3) {
    uVar3 = (ulonglong)(param_3 >> 5);
    do {
      uVar2 = uVar2 ^ *param_2;
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[1];
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[2];
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[3];
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[4];
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[5];
      param_3 = param_3 - 0x20;
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[6];
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4) ^ param_2[7];
      param_2 = param_2 + 8;
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (3 < param_3) {
    uVar3 = (ulonglong)(param_3 >> 2);
    do {
      uVar2 = uVar2 ^ *param_2;
      param_3 = param_3 - 4;
      param_2 = param_2 + 1;
      uVar2 = *(uint *)(&DAT_180069010 + (ulonglong)(byte)(uVar2 >> 0x10) * 4) ^
              *(uint *)(&DAT_180069410 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
              *(uint *)(&DAT_180068c10 + (ulonglong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_180069810 + (ulonglong)(uVar2 & 0xff) * 4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = *param_2;
    param_2 = (uint *)((longlong)param_2 + 1);
    uVar2 = *(uint *)(&DAT_180068c10 + (ulonglong)(byte)((byte)uVar1 ^ (byte)uVar2) * 4) ^
            uVar2 >> 8;
  }
  return ~uVar2;
}

