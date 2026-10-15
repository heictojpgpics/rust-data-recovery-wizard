// Function: FUN_180026f90
// Address: 180026f90
// Size: 105 bytes


undefined8 FUN_180026f90(undefined8 param_1,short *param_2,longlong param_3)

{
  if ((((param_2 != (short *)0x0) && ((*param_2 + 0xe01U & 0xf7ff) == 0)) && (param_2[1] != -1)) &&
     (((param_2[2] != -1 && (param_2[3] != -1)) &&
      (((uint)(*(byte *)((longlong)param_2 + 5) >> 5) |
       ((*(byte *)((longlong)param_2 + 3) & 3) << 8 | (uint)(byte)param_2[2]) << 3) - 1 < 999)))) {
    *(undefined4 *)(param_3 + 0x18) = 0x4f;
    return 1;
  }
  return 0;
}

