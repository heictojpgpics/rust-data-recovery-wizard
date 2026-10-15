// Function: FUN_1800033a0
// Address: 1800033a0
// Size: 8 bytes


undefined1 FUN_1800033a0(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x3f);
  *(undefined1 *)(param_1 + 0x3f) = param_2;
  return uVar1;
}

