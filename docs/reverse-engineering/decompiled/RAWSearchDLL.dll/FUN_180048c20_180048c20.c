// Function: FUN_180048c20
// Address: 180048c20
// Size: 40 bytes


void FUN_180048c20(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x50);
  puVar1 = (undefined8 *)(param_1 + 0x58);
  if (param_3 != puVar1) {
    if (0xf < *(ulonglong *)(param_1 + 0x70)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_1800071e0((longlong)param_3,puVar1,*(ulonglong *)(param_1 + 0x68));
    return;
  }
  return;
}

