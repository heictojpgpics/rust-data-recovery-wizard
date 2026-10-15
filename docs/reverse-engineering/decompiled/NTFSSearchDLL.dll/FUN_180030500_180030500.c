// Function: FUN_180030500
// Address: 180030500
// Size: 124 bytes


longlong FUN_180030500(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  bVar1 = FUN_180030680((longlong)param_1);
  if (bVar1) {
    uVar2 = FUN_18002d070(param_2);
    lVar3 = FUN_180030580((longlong)param_1,uVar2);
  }
  else {
    uVar2 = FUN_18002d070(param_2);
    plVar4 = (longlong *)FUN_180002670((longlong)param_1);
    lVar3 = FUN_180030700(param_1,*plVar4,uVar2);
  }
  return lVar3;
}

