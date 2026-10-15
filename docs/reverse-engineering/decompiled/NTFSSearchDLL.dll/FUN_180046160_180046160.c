// Function: FUN_180046160
// Address: 180046160
// Size: 196 bytes


ulonglong FUN_180046160(int *param_1)

{
  ulonglong uVar1;
  int *piVar2;
  uint7 uVar3;
  
  if (*param_1 == 0x454c4946) {
    if (*(ushort *)((longlong)param_1 + 6) < 0x11) {
      piVar2 = param_1;
      if (((uint)param_1[7] < 0x1001) &&
         (piVar2 = (int *)((ulonglong)(uint)param_1[7] % 0x400), (int)piVar2 == 0)) {
        if ((uint)((ulonglong)(uint)param_1[7] / 0x200) < *(ushort *)((longlong)param_1 + 6) - 1) {
          uVar1 = (ulonglong)(uint)param_1[7] / 0x200 & 0xffffff00;
        }
        else if (*(ushort *)(param_1 + 1) < 0x2a) {
          uVar1 = (ulonglong)(byte)(*(ushort *)(param_1 + 1) >> 8) << 8;
        }
        else {
          uVar3 = (uint7)(byte)(*(ushort *)(param_1 + 1) >> 8);
          if (*(ushort *)(param_1 + 1) < 0x101) {
            uVar1 = CONCAT71(uVar3,1);
          }
          else {
            uVar1 = (ulonglong)uVar3 << 8;
          }
        }
      }
      else {
        uVar1 = (ulonglong)piVar2 & 0xffffffffffffff00;
      }
    }
    else {
      uVar1 = (ulonglong)(byte)(*(ushort *)((longlong)param_1 + 6) >> 8) << 8;
    }
  }
  else {
    uVar1 = (ulonglong)param_1 & 0xffffffffffffff00;
  }
  return uVar1;
}

