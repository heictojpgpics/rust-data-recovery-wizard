// Function: FUN_18003f250
// Address: 18003f250
// Size: 65 bytes


undefined4 FUN_18003f250(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*param_2 == DAT_1800938b8) && (uVar1 = 0, (int)param_2[1] == DAT_1800938c0)) &&
      (*(short *)((longlong)param_2 + 0xc) == DAT_1800938c4)) &&
     (uVar1 = 0, 0x2800 < *(ulonglong *)(param_1 + 0x110))) {
    uVar1 = 1;
  }
  return uVar1;
}

