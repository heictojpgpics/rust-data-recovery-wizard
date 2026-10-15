// Function: FUN_18002eed0
// Address: 18002eed0
// Size: 124 bytes


void FUN_18002eed0(undefined8 param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *_Dst;
  void *_Src;
  
  uVar1 = FUN_180002680(param_2);
  uVar2 = FUN_180002680(param_1);
  _Dst = (void *)FUN_18002d070(uVar2);
  _Src = (void *)FUN_18002d070(uVar1);
  memcpy(_Dst,_Src,0x20);
  FUN_180019ea0(param_2);
  return;
}

