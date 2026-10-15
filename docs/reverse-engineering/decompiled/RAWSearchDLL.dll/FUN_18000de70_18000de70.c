// Function: FUN_18000de70
// Address: 18000de70
// Size: 67 bytes


undefined8 * FUN_18000de70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = ListIterator<class_CRawFileInfo*___ptr64>::vftable;
  *param_1 = IIterator<class_CRawFileInfo*___ptr64>::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

