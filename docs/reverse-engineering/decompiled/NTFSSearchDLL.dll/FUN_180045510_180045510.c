// Function: FUN_180045510
// Address: 180045510
// Size: 267 bytes


undefined8 FUN_180045510(int *param_1,uint param_2,char param_3)

{
  undefined8 uVar1;
  
  if (*param_1 != 0x58444e49) {
    return 0;
  }
  if (param_3 == '\0') {
    if (param_2 < (uint)param_1[8]) {
      return 0;
    }
    if ((int)(param_2 + ((int)param_2 >> 0x1f & 0x1ffU)) >> 9 <
        (int)(*(ushort *)((longlong)param_1 + 6) - 1)) {
      return 0;
    }
  }
  if ((uint)param_1[8] < (uint)param_1[7]) {
    uVar1 = 0;
  }
  else if (*(ushort *)((longlong)param_1 + 6) < 0x11) {
    if (*(ushort *)((longlong)param_1 + 6) - 1 == ((uint)(param_1[8] + param_1[6]) / 0x200 & 0xffff)
       ) {
      if (*(ushort *)(param_1 + 1) < 0x28) {
        uVar1 = 0;
      }
      else if (*(ushort *)(param_1 + 1) < 0x101) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

