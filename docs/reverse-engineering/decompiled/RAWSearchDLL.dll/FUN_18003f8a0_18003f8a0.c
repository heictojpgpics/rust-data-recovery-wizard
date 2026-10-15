// Function: FUN_18003f8a0
// Address: 18003f8a0
// Size: 83 bytes


ulonglong FUN_18003f8a0(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if ((int)((ulonglong)param_2 >> 0x20) == 0) {
    uVar1 = (ushort)((ulonglong)param_2 >> 0x10);
    return (ulonglong)CONCAT22((ushort)param_2 >> 8,uVar1 << 8 | uVar1 >> 8) << 8;
  }
  if ((int)param_2 == 0) {
    uVar2 = (ushort)((ulonglong)param_2 >> 0x20);
    uVar1 = (ushort)((ulonglong)param_2 >> 0x30);
    return (ulonglong)CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
  }
  return 0;
}

