// Function: FUN_180030c20
// Address: 180030c20
// Size: 60 bytes


longlong FUN_180030c20(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)FUN_180002670(param_1);
  plVar2 = (longlong *)FUN_180002680(param_1);
  return *plVar1 - *plVar2 >> 3;
}

