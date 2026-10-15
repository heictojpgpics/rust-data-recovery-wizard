// Function: FUN_180026e50
// Address: 180026e50
// Size: 43 bytes


undefined8 * FUN_180026e50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IBuildVolumeBitmap::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

