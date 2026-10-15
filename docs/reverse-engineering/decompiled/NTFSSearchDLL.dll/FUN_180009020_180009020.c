// Function: FUN_180009020
// Address: 180009020
// Size: 42 bytes


void FUN_180009020(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    *(longlong **)(param_1 + 0xb8) = param_2;
    uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    *(undefined8 *)(param_1 + 0x198) = uVar1;
  }
  return;
}

