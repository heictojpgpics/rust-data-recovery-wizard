// Function: FUN_18000dec0
// Address: 18000dec0
// Size: 43 bytes


undefined8 * FUN_18000dec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IIterator<class_CRawFileInfo*___ptr64>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

