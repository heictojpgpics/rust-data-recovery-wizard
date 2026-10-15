// Function: FUN_1800127b0
// Address: 1800127b0
// Size: 69 bytes


undefined8 FUN_1800127b0(undefined8 param_1,short *param_2,longlong param_3)

{
  if ((param_2 != (short *)0x0) &&
     (((*param_2 == 0x4d4d && (param_2[8] == 0x3d3d)) ||
      ((*(int *)(param_2 + 0x80) == DAT_18008f034 && (*(int *)(param_2 + 0x82) == 0x200000)))))) {
    *(undefined4 *)(param_3 + 0x18) = 1;
    return 1;
  }
  return 0;
}

