// Function: FUN_180002010
// Address: 180002010
// Size: 13 bytes


void FUN_180002010(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

