// Function: FUN_18005c3e0
// Address: 18005c3e0
// Size: 74 bytes


void FUN_18005c3e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  while (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 100);
    *(int *)(param_1 + 100) = iVar1 + -1;
    free(*(void **)(*(longlong *)(param_1 + 8) + -8 + (longlong)iVar1 * 8));
    iVar1 = *(int *)(param_1 + 100);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

