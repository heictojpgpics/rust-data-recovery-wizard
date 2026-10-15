// Function: FUN_1800199a0
// Address: 1800199a0
// Size: 117 bytes


void FUN_1800199a0(longlong param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != *(undefined8 **)(param_1 + 0x48)) {
    do {
      _Memory = (void *)*puVar1;
      free(*(void **)((longlong)_Memory + 0x28));
      free(_Memory);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
  FUN_180011140((longlong *)(param_1 + 0x20));
  FUN_180011140((longlong *)(param_1 + 0x30));
  FUN_180011140((longlong *)(param_1 + 0x68));
  return;
}

