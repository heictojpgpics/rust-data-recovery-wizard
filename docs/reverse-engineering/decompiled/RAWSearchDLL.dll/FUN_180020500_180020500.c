// Function: FUN_180020500
// Address: 180020500
// Size: 165 bytes


undefined8 * FUN_180020500(undefined8 *param_1,uint param_2)

{
  longlong *_Memory;
  
  *param_1 = RawFormat_xjq::CommonRawAnalyser::CommonRawFileInfo::vftable;
  if ((void *)param_1[0x23] != (void *)0x0) {
    free((void *)param_1[0x23]);
  }
  _Memory = (longlong *)param_1[0x22];
  if (_Memory != (longlong *)0x0) {
    FUN_180001630(_Memory + 4);
    FUN_180001630(_Memory);
    free(_Memory);
  }
  FUN_18000b6b0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}

