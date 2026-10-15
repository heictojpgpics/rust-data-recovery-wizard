// Function: FUN_180057e80
// Address: 180057e80
// Size: 131 bytes


longlong FUN_180057e80(longlong param_1,longlong param_2)

{
  undefined4 *_Memory;
  longlong lVar1;
  
  FUN_180007000(param_2,&DAT_180066bb1);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) || (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) {
    _Memory = FUN_18005d530(lVar1,0,0);
    if (_Memory != (undefined4 *)0x0) {
      FUN_18000f660(param_2,_Memory);
      free(_Memory);
    }
  }
  return param_2;
}

