// Function: FUN_180037c10
// Address: 180037c10
// Size: 47 bytes


void FUN_180037c10(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180037c40(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = *param_2;
  return;
}

