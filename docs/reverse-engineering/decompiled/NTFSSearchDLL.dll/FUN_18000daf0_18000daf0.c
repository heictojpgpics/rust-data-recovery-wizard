// Function: FUN_18000daf0
// Address: 18000daf0
// Size: 64 bytes


void FUN_18000daf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180027610(param_1 + 0x1b8);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x10))
              (*(longlong **)(param_1 + 0x108),lVar1,param_2);
  }
  return;
}

