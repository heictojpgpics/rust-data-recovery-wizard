// Function: FUN_180011560
// Address: 180011560
// Size: 178 bytes


void FUN_180011560(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Src;
  undefined8 *_Dst;
  void *_Memory;
  
  _Dst = (undefined8 *)FUN_1800016b0(param_1);
  uVar1 = _Dst[2];
  if (uVar1 <= param_2) {
    uVar2 = _Dst[3];
    if (uVar2 != param_2) {
      if (uVar2 < param_2) {
        FUN_1800117d0(param_1,param_2 - uVar1);
        _Dst[2] = uVar1;
        return;
      }
      if ((param_2 < 0x10) && (0xf < uVar2)) {
        _Src = (void *)*_Dst;
        memcpy(_Dst,_Src,uVar1 + 1);
        _Memory = _Src;
        if ((0xfff < _Dst[3] + 1) &&
           (_Memory = *(void **)((longlong)_Src + -8),
           0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
        _Dst[3] = 0xf;
      }
    }
  }
  return;
}

