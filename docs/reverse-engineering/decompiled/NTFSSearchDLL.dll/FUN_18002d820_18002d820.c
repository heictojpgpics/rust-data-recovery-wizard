// Function: FUN_18002d820
// Address: 18002d820
// Size: 98 bytes


undefined8 * FUN_18002d820(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_18002d050(param_1);
  FUN_18002d070(uVar1);
  puVar2 = (undefined8 *)FUN_18002da50(param_1);
  FUN_18002da10(param_2,*puVar2);
  return param_2;
}

