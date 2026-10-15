// Function: FUN_18003e650
// Address: 18003e650
// Size: 75 bytes


undefined8 FUN_18003e650(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar1 = (ushort)((uint)*(undefined4 *)(param_2 + 4) >> 0x10);
    uVar2 = (ushort)*(undefined4 *)(param_2 + 4);
    uVar3 = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
    if ((((ushort)(*(ushort *)(param_2 + 8) << 8 | *(ushort *)(param_2 + 8) >> 8) < 2) &&
        (uVar3 < 0x65)) && (*(int *)((ulonglong)uVar3 + param_2) == DAT_18006ca30)) {
      return 1;
    }
  }
  return 0;
}

