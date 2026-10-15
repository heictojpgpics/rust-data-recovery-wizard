// Function: FUN_180003da0
// Address: 180003da0
// Size: 45 bytes


void FUN_180003da0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_180003c20(param_1,param_2,param_3);
  *(undefined8 *)(lVar1 + 0x10) = *param_4;
  return;
}

