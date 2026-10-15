// Function: FUN_18005c080
// Address: 18005c080
// Size: 119 bytes


void FUN_18005c080(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 100);
  *param_1 = tinyxml2::MemPoolT<112>::vftable;
  while (iVar1 != 0) {
    iVar1 = *(int *)((longlong)param_1 + 100);
    *(int *)((longlong)param_1 + 100) = iVar1 + -1;
    free(*(void **)(param_1[1] + -8 + (longlong)iVar1 * 8));
    iVar1 = *(int *)((longlong)param_1 + 100);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((undefined8 *)param_1[1] != param_1 + 2) {
    free((undefined8 *)param_1[1]);
  }
  *param_1 = tinyxml2::MemPool::vftable;
  return;
}

