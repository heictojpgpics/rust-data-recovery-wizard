// Function: FUN_180058580
// Address: 180058580
// Size: 53 bytes


void FUN_180058580(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_180058800(param_1);
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 4) = *param_2;
  puVar1[5] = *(undefined8 *)(param_2 + 2);
  return;
}

