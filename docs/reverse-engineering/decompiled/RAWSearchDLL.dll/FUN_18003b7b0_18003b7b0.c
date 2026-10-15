// Function: FUN_18003b7b0
// Address: 18003b7b0
// Size: 100 bytes


undefined8 FUN_18003b7b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(param_3 + 0x18) = 9;
  uVar1 = (ushort)((uint)*(undefined4 *)(param_2 + 4) >> 0x10);
  uVar2 = (ushort)*(undefined4 *)(param_2 + 4);
  uVar4 = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
  uVar1 = (ushort)((uint)*(undefined4 *)(param_2 + 8) >> 0x10);
  uVar2 = (ushort)*(undefined4 *)(param_2 + 8);
  iVar3 = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
  if ((0x17 < uVar4) && (iVar3 != -1)) {
    *(ulonglong *)(param_3 + 0x10) = (ulonglong)(iVar3 + uVar4);
    return 1;
  }
  *(undefined8 *)(param_3 + 0x10) = 0;
  return 0;
}

