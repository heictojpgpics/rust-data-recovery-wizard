// Function: FUN_180009850
// Address: 180009850
// Size: 59 bytes


longlong * FUN_180009850(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0xb0);
  FUN_180008b30(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}

