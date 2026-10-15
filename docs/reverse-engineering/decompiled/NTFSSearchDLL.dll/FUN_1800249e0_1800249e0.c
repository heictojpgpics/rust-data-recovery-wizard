// Function: FUN_1800249e0
// Address: 1800249e0
// Size: 82 bytes


ulonglong FUN_1800249e0(undefined8 param_1,undefined8 param_2)

{
  size_t *psVar1;
  size_t *psVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined4 extraout_var;
  
  _Buf1 = (undefined8 *)FUN_180002680(param_1);
  _Buf2 = (undefined8 *)FUN_180002680(param_2);
  psVar1 = _Buf2 + 2;
  if (0xf < (ulonglong)_Buf2[3]) {
    _Buf2 = (undefined8 *)*_Buf2;
  }
  psVar2 = _Buf1 + 2;
  if (0xf < (ulonglong)_Buf1[3]) {
    _Buf1 = (undefined8 *)*_Buf1;
  }
  if (*psVar2 == *psVar1) {
    iVar3 = memcmp(_Buf1,_Buf2,*psVar2);
    _Buf2 = (undefined8 *)CONCAT44(extraout_var,iVar3);
    if (iVar3 == 0) {
      return CONCAT71((int7)((ulonglong)_Buf2 >> 8),1);
    }
  }
  return (ulonglong)_Buf2 & 0xffffffffffffff00;
}

