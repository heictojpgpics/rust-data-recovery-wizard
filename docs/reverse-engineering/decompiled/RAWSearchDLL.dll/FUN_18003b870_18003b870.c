// Function: FUN_18003b870
// Address: 18003b870
// Size: 81 bytes


undefined8 FUN_18003b870(undefined8 param_1,short *param_2,longlong param_3)

{
  if (((*param_2 == 0x4d42) && (param_2[3] == 0)) && (param_2[4] == 0)) {
    if (((*(int *)(param_2 + 7) == 0x28) || (*(int *)(param_2 + 7) == 0x7c)) &&
       ((*(int *)(param_2 + 0xf) == 0 || (*(int *)(param_2 + 0x11) != 0)))) {
      *(undefined4 *)(param_3 + 0x18) = 0xb;
      *(ulonglong *)(param_3 + 0x10) = (ulonglong)*(uint *)(param_2 + 1);
      return 1;
    }
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  return 0;
}

