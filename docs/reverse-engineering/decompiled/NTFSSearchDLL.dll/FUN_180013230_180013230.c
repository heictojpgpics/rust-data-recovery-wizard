// Function: FUN_180013230
// Address: 180013230
// Size: 96 bytes


longlong FUN_180013230(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_18002be40(0x18);
  if (param_2 == 0) {
    param_2 = lVar1;
    param_3 = lVar1;
  }
  plVar2 = (longlong *)FUN_180001100(lVar1,lVar1);
  *plVar2 = param_2;
  plVar2 = (longlong *)FUN_180001100(lVar1,lVar1 + 8);
  *plVar2 = param_3;
  return lVar1;
}

