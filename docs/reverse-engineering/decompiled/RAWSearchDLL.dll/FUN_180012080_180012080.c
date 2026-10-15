// Function: FUN_180012080
// Address: 180012080
// Size: 46 bytes


undefined8 FUN_180012080(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (((*(int *)(param_2 + 0x28) == 0x464d4520) && (*(short *)(param_2 + 0x3a) == 0)) &&
     (*(int *)(param_2 + 0x30) != 0)) {
    *(undefined4 *)(param_3 + 0x18) = 0x1a;
    *(ulonglong *)(param_3 + 0x10) = (ulonglong)*(uint *)(param_2 + 0x30);
    return 1;
  }
  return 0;
}

