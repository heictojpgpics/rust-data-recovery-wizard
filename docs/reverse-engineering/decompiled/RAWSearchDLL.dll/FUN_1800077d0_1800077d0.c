// Function: FUN_1800077d0
// Address: 1800077d0
// Size: 96 bytes


longlong FUN_1800077d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1800020c0(0x18);
  if (param_2 == 0) {
    param_2 = lVar1;
    param_3 = lVar1;
  }
  plVar2 = (longlong *)FUN_1800012e0(lVar1,lVar1);
  *plVar2 = param_2;
  plVar2 = (longlong *)FUN_1800012e0(lVar1,lVar1 + 8);
  *plVar2 = param_3;
  return lVar1;
}

