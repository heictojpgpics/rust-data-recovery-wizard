// Function: FUN_18002c390
// Address: 18002c390
// Size: 56 bytes


void * FUN_18002c390(undefined8 *param_1)

{
  void *_Dst;
  int _Val;
  
  _Dst = (void *)*param_1;
  if (_Dst == (void *)0x0) {
    return _Dst;
  }
  if (param_1[8] == 0) {
    _Val = 0;
  }
  else {
    _Val = 0xff;
  }
  memset(_Dst,_Val,param_1[1]);
  return (void *)0x1;
}

