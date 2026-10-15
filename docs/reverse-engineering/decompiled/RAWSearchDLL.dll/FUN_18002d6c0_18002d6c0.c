// Function: FUN_18002d6c0
// Address: 18002d6c0
// Size: 59 bytes


longlong * FUN_18002d6c0(longlong param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = (longlong *)(param_1 + -0x98);
  FUN_18002ba80(_Memory);
  if ((param_2 & 1) != 0) {
    free(_Memory);
  }
  return _Memory;
}

