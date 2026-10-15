// Function: FUN_1800263b0
// Address: 1800263b0
// Size: 202 bytes


undefined8 FUN_1800263b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (((ushort)(*(short *)(param_2 + 2) - 1U) < 2) &&
     (uVar1 = *(ushort *)(param_2 + 4), (ushort)(uVar1 - 1) < 0x10)) {
    uVar3 = 0;
    uVar5 = 6;
    if (uVar1 != 0) {
      do {
        uVar2 = (ulonglong)(uVar3 << 4);
        if (*(char *)(uVar2 + 9 + param_2) != '\0') {
          return 0;
        }
        if (0x100 < *(ushort *)(uVar2 + 0xc + param_2)) {
          return 0;
        }
        if (0xa00000 < *(uint *)(uVar2 + 0xe + param_2)) {
          return 0;
        }
        if (0xa00000 < *(uint *)(uVar2 + 0x12 + param_2)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 0x10 + *(int *)(uVar2 + 0xe + param_2);
      } while (uVar3 < uVar1);
    }
    uVar4 = 0x22;
    if (*(short *)(param_2 + 2) != 1) {
      uVar4 = 0x14;
    }
    *(undefined4 *)(param_3 + 0x18) = uVar4;
    if (uVar5 < 0x100001) {
      *(ulonglong *)(param_3 + 0x10) = (ulonglong)uVar5;
      return 1;
    }
  }
  return 0;
}

