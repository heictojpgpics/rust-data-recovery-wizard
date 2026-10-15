// Function: FUN_180024990
// Address: 180024990
// Size: 58 bytes


void FUN_180024990(longlong param_1,void *param_2,longlong param_3,int param_4)

{
  if (param_1 != 0) {
    FUN_180024a40((longlong *)(param_1 + 0x130),*(void **)(param_1 + 0x138),param_2,param_3);
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + (longlong)param_4;
  }
  return;
}

