// Function: FUN_18002a770
// Address: 18002a770
// Size: 52 bytes


void FUN_18002a770(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_18002c5d0(param_1,param_3,0,(longlong *)0x0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x10);
  }
  return;
}

