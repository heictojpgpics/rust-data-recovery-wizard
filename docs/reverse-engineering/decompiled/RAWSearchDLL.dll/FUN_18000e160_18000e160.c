// Function: FUN_18000e160
// Address: 18000e160
// Size: 70 bytes


undefined8 FUN_18000e160(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
    std::_Xbad_function_call();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  return param_2;
}

