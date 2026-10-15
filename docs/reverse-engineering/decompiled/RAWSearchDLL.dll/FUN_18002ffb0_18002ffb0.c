// Function: FUN_18002ffb0
// Address: 18002ffb0
// Size: 292 bytes


undefined8
FUN_18002ffb0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  ushort local_18;
  ushort uStack_16;
  ushort uStack_14;
  
  *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + (longlong)param_3;
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  uVar5 = 0;
  while( true ) {
    if ((*(ulonglong *)(param_1 + 0x110) <= uVar3) ||
       (iVar4 = (int)uVar5, uVar5 = (ulonglong)(iVar4 + 1), 0x400 < iVar4)) {
      return 2;
    }
    uVar1 = *(undefined8 *)((int)(uVar3 % (ulonglong)(longlong)param_3) + param_2);
    local_18 = (ushort)uVar1;
    if (((ushort)(local_18 << 8 | local_18 >> 8 & 0xfff0) != 0xfff0) ||
       (((byte)((ulonglong)uVar1 >> 8) >> 1 & 3) != 0)) break;
    uStack_16 = (ushort)((ulonglong)uVar1 >> 0x10);
    uStack_14 = (ushort)((ulonglong)uVar1 >> 0x20);
    uVar2 = (ulonglong)(uStack_16 >> 8 & 3) << 2 |
            (ulonglong)((ushort)(uStack_14 << 8 | uStack_14 >> 8) >> 5);
    if (uVar2 == 0) break;
    *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 1;
    uVar3 = uVar3 + uVar2;
    *(ulonglong *)(param_1 + 0x10) = uVar3;
  }
  if (*(int *)(param_5 + 0x14) < 1) {
    uVar3 = 0;
  }
  bVar6 = DAT_180117f05 == '\0';
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  if (bVar6) {
    return 1;
  }
  if (4 < *(ulonglong *)(param_1 + 0x118)) {
    return 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  DAT_180117f05 = 0;
  return 1;
}

