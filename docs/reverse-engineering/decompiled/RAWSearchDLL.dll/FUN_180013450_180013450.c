// Function: FUN_180013450
// Address: 180013450
// Size: 66 bytes


undefined8 FUN_180013450(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if (((param_2 != 0) &&
      (((iVar1 = *(int *)(param_2 + 4), iVar1 == s_CPT7FILE_1800673b8._4_4_ ||
        (iVar1 == s_CPT8FILE_180067418._4_4_)) || (iVar1 == DAT_180067374)))) &&
     (*(int *)(param_2 + 0x34) == 0x13c)) {
    *(undefined4 *)(param_3 + 0x18) = 0x11;
    *(undefined8 *)(param_3 + 0x10) = 0;
    return 1;
  }
  return 0;
}

