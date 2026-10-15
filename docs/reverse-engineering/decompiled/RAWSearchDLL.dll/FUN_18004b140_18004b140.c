// Function: FUN_18004b140
// Address: 18004b140
// Size: 40 bytes


void FUN_18004b140(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x58);
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if (param_3 != puVar1) {
    if (0xf < *(ulonglong *)(param_1 + 0x78)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_1800071e0((longlong)param_3,puVar1,*(ulonglong *)(param_1 + 0x70));
    return;
  }
  return;
}

