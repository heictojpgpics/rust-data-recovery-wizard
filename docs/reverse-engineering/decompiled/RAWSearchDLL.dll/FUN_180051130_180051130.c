// Function: FUN_180051130
// Address: 180051130
// Size: 46 bytes


void FUN_180051130(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x98);
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  if (param_3 != puVar1) {
    if (0xf < *(ulonglong *)(param_1 + 0xb8)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_1800071e0((longlong)param_3,puVar1,*(ulonglong *)(param_1 + 0xb0));
    return;
  }
  return;
}

