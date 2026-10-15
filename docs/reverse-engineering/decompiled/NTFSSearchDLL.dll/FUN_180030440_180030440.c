// Function: FUN_180030440
// Address: 180030440
// Size: 131 bytes


void FUN_180030440(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  _guard_check_icall();
  FUN_180002670(param_1);
  FUN_180002680(param_1);
  _guard_check_icall();
  puVar2 = (undefined8 *)FUN_180002680(param_1);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_180002670(param_1);
  *puVar2 = uVar1;
  return;
}

