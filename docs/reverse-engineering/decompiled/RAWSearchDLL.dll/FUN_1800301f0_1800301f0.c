// Function: FUN_1800301f0
// Address: 1800301f0
// Size: 235 bytes


undefined8
FUN_1800301f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ushort local_18;
  ushort uStack_16;
  ushort uStack_14;
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar4 = 0;
  while( true ) {
    iVar4 = iVar4 + 1;
    if (param_4 * param_7 < param_4 * param_5 + 9 + lVar3) {
      if (iVar4 < 2) {
        return 0;
      }
      DAT_180117f05 = 1;
      *(undefined4 *)(param_3 + 0x18) = 0x2d;
      return 1;
    }
    uVar1 = *(undefined8 *)(lVar3 + param_2);
    local_18 = (ushort)uVar1;
    if ((ushort)(local_18 << 8 | local_18 >> 8 & 0xfff0) != 0xfff0) {
      return 0;
    }
    if (((byte)((ulonglong)uVar1 >> 8) >> 1 & 3) != 0) break;
    uStack_16 = (ushort)((ulonglong)uVar1 >> 0x10);
    uStack_14 = (ushort)((ulonglong)uVar1 >> 0x20);
    uVar2 = (ulonglong)(uStack_16 >> 8 & 3) << 2 |
            (ulonglong)((ushort)(uStack_14 << 8 | uStack_14 >> 8) >> 5);
    if (uVar2 == 0) {
      return 0;
    }
    lVar3 = lVar3 + uVar2;
    *(longlong *)(param_1 + 8) = lVar3;
    if (4 < iVar4) {
      *(undefined4 *)(param_3 + 0x18) = 0x2d;
      return 1;
    }
  }
  return 0;
}

