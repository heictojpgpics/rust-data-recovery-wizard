// Function: FUN_180046340
// Address: 180046340
// Size: 111 bytes


undefined8 * FUN_180046340(undefined8 *param_1,uint param_2)

{
  *param_1 = Brance::OfficeTagFromXML::vftable;
  if ((void *)param_1[0x22] != (void *)0x0) {
    free((void *)param_1[0x22]);
    param_1[0x22] = 0;
  }
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

