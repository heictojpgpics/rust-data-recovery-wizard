// Function: FUN_18002ea60
// Address: 18002ea60
// Size: 68 bytes


longlong FUN_18002ea60(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180002680(param_1);
  FUN_18002eda0((longlong)puVar1,param_2);
  puVar1 = FUN_180019e90(puVar1);
  return (longlong)puVar1 + param_2 * 2;
}

