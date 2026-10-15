// Function: FUN_18002e890
// Address: 18002e890
// Size: 155 bytes


ulonglong FUN_18002e890(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       char param_5)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) && (0 < param_4)) {
    cVar2 = FUN_18002ea50((longlong)param_1);
    if (cVar2 != '\0') {
      cVar2 = (char)uVar3;
      if ((DAT_18008f065 != cVar2) && (uVar3 = uVar3 & 0xffffffff, param_5 == cVar2)) {
        uVar3 = 1;
      }
      uVar1 = *param_1;
      if (DAT_18008f044 != 0xffffffff) {
        DAT_18008f044 =
             (((uint)((ulonglong)uVar1 >> 8) & 0xff | ((uint)uVar1 & 0xff) << 8) << 8 |
             (uint)((ulonglong)uVar1 >> 0x10) & 0xff) << 8 | (uint)((ulonglong)uVar1 >> 0x18) & 0xff
        ;
      }
    }
  }
  return uVar3 & 0xffffffff;
}

