// Function: FUN_180026640
// Address: 180026640
// Size: 65 bytes


undefined8 FUN_180026640(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_3 + 0x18) = 0xc;
  if ((((*(int *)(param_2 + 4) == 0) && (*(int *)(param_2 + 0xc) == 0)) &&
      (*(int *)(param_2 + 0x14) == 0)) &&
     ((*(short *)(param_2 + 0x18) == 0x103 && (*(uint *)(param_2 + 8) != 0)))) {
    *(ulonglong *)(param_3 + 0x10) = (ulonglong)*(uint *)(param_2 + 8);
    return 1;
  }
  *(undefined8 *)(param_3 + 0x10) = 0;
  return 0;
}

