// Function: FUN_180042f90
// Address: 180042f90
// Size: 84 bytes


undefined2 FUN_180042f90(longlong *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(*param_1 + 0x10);
  if (((*param_1 == 0) || (puVar2 == (undefined2 *)0x0)) ||
     (puVar2 == (undefined2 *)0xffffffffffffffff)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  return uVar1;
}

