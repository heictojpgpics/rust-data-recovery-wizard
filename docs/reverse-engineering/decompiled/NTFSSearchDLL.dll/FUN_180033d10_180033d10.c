// Function: FUN_180033d10
// Address: 180033d10
// Size: 121 bytes


void FUN_180033d10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  void *_Src;
  longlong lVar3;
  undefined8 local_res10;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  local_res10 = param_2;
  _Dst = (void *)FUN_18002be40(0x80);
  lVar3 = param_1[1];
  _Src = (void *)*param_1;
  FUN_180002ca0((undefined1 *)&local_res10);
  memmove(_Dst,_Src,lVar3 - (longlong)_Src);
  FUN_180006300(param_1,(longlong)_Dst,lVar1 - lVar2,0x80);
  return;
}

