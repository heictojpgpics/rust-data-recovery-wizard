// Function: FUN_180039360
// Address: 180039360
// Size: 43 bytes


undefined8 * FUN_180039360(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = CSearchedPartitionInfo::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

