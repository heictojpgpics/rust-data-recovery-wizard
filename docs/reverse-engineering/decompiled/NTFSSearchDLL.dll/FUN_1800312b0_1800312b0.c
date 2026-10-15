// Function: FUN_1800312b0
// Address: 1800312b0
// Size: 49 bytes


void FUN_1800312b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    *(longlong *)(param_2 + 0x20) = lVar1;
    *(longlong *)(param_2 + 8) = param_1;
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x10);
    }
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_2 + 0x20) = lVar1;
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x50);
  }
  return;
}

