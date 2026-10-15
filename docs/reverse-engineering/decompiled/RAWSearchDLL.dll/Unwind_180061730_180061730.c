// Function: Unwind@180061730
// Address: 180061730
// Size: 41 bytes


void Unwind_180061730(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    FUN_18001f870(*(longlong **)(param_2 + 0xf8),param_2,param_3,param_4);
  }
  return;
}

