// Function: FUN_18005c770
// Address: 18005c770
// Size: 52 bytes


undefined8 * FUN_18005c770(undefined8 *param_1,uint param_2)

{
  FUN_18005bd60(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

