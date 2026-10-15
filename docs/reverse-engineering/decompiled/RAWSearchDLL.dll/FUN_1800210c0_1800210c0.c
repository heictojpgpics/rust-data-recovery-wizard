// Function: FUN_1800210c0
// Address: 1800210c0
// Size: 71 bytes


void FUN_1800210c0(undefined8 *param_1)

{
  longlong *_Memory;
  
  _Memory = (longlong *)*param_1;
  if (_Memory != (longlong *)0x0) {
    FUN_180001630(_Memory + 4);
    FUN_180001630(_Memory);
    free(_Memory);
    return;
  }
  return;
}

