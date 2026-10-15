// Function: FUN_180043330
// Address: 180043330
// Size: 99 bytes


undefined1 FUN_180043330(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(byte *)(param_1 + 0x59) < 4) {
    uVar1 = *(undefined1 *)(param_1 + 0x59);
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

