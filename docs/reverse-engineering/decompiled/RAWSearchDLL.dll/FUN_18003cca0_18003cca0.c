// Function: FUN_18003cca0
// Address: 18003cca0
// Size: 94 bytes


undefined8 * FUN_18003cca0(undefined8 *param_1,uint param_2)

{
  *param_1 = Brance::CRWAnalyser::CRWRawFileInfo::vftable;
  FUN_18003cd00((longlong)(param_1 + 0x22));
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

