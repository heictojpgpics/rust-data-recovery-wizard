// Function: FUN_18003d650
// Address: 18003d650
// Size: 32 bytes


undefined8 FUN_18003d650(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (DAT_180096ef8 == 0)) {
    *(undefined4 *)(param_3 + 0x18) = 0x52;
    return 1;
  }
  return 0;
}

