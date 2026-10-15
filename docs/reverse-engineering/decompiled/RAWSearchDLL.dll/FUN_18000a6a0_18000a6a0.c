// Function: FUN_18000a6a0
// Address: 18000a6a0
// Size: 59 bytes


longlong * FUN_18000a6a0(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0x90);
  FUN_18000a040(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}

