// Function: FUN_1800268a0
// Address: 1800268a0
// Size: 153 bytes


undefined8 FUN_1800268a0(undefined8 param_1,short *param_2,longlong param_3)

{
  int iVar1;
  
  if (((*param_2 == 0x5746) && ((char)param_2[1] == 'S')) ||
     ((*param_2 == 0x5743 && ((char)param_2[1] == 'S')))) {
    if ((*param_2 == 0x5746) && ((char)param_2[1] == 'S')) {
      iVar1 = FUN_180026940(0x5746,(longlong)param_2);
    }
    else {
      if (*param_2 != 0x5743) {
        return 1;
      }
      if ((char)param_2[1] != 'S') {
        return 1;
      }
      iVar1 = FUN_180026b80(0x5746,(longlong)param_2);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(param_3 + 0x18) = 0x3e;
      *(ulonglong *)(param_3 + 0x10) = (ulonglong)*(uint *)(param_2 + 2);
      return 1;
    }
  }
  return 0;
}

