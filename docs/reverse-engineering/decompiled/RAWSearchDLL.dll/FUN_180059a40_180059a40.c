// Function: FUN_180059a40
// Address: 180059a40
// Size: 42 bytes


undefined8 FUN_180059a40(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_1800591e0((uint *)(param_1 + 3));
  return uVar2;
}

