// Function: FUN_180028180
// Address: 180028180
// Size: 84 bytes


void FUN_180028180(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  if (*(longlong *)(param_4 + 200) == -1) {
    *(undefined8 *)(param_4 + 200) = param_2;
  }
  if (((*(byte *)(param_4 + 0x9c) & 1) == 0) && (0 < param_3)) {
    lVar1 = param_3;
    if (*(longlong *)(param_4 + 0xa8) < param_3) {
      lVar1 = *(longlong *)(param_4 + 0xa8);
    }
    *(longlong *)(param_4 + 0xa8) = lVar1;
    *(ulonglong *)(param_4 + 0x60) = (ulonglong)*(uint *)(param_4 + 0xc) * lVar1;
  }
  *(ulonglong *)(param_4 + 0xe8) = (ulonglong)*(uint *)(param_4 + 0xc) * param_3;
  return;
}

