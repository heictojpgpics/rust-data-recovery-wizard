// Function: FUN_180034150
// Address: 180034150
// Size: 99 bytes


undefined8 FUN_180034150(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
  if (*(longlong *)(param_1 + 0x40) != *(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x28)
     ) {
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      lVar1 = **(longlong **)(param_1 + 0x30);
    }
    return *(undefined8 *)
            (*(longlong *)
              (*(longlong *)(lVar1 + 8) +
              (*(ulonglong *)(param_1 + 0x40) >> 1 & *(longlong *)(lVar1 + 0x10) - 1U) * 8) +
            (ulonglong)((uint)*(ulonglong *)(param_1 + 0x40) & 1) * 8);
  }
  return 0;
}

