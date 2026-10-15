// Function: FUN_180014ec0
// Address: 180014ec0
// Size: 39 bytes


void FUN_180014ec0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_180001100(param_1,param_2);
  puVar2 = (undefined8 *)FUN_180002680(param_3);
  *puVar1 = *puVar2;
  puVar1[1] = *(undefined8 *)(param_3 + 8);
  return;
}

