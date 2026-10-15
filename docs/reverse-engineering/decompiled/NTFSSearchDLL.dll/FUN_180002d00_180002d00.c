// Function: FUN_180002d00
// Address: 180002d00
// Size: 60 bytes


void FUN_180002d00(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(code **)(*param_2 + 0x40) == FUN_1800335c0) {
    *(int *)(param_1 + 8) = (int)param_2[5];
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

