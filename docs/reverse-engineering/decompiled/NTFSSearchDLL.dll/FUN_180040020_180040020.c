// Function: FUN_180040020
// Address: 180040020
// Size: 295 bytes


longlong FUN_180040020(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong local_40 [2];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  local_40[1] = 0xffffffffffffffff;
  uVar1 = FUN_1800401a0(param_1,param_2);
  if ((int)uVar1 != 0) {
    FUN_180003b10(local_40);
    local_30 = param_1;
    plVar2 = FUN_180003ba0(param_1,&local_20);
    local_40[0] = *plVar2;
    while( true ) {
      local_28 = param_1;
      plVar2 = FUN_180003b90(param_1,local_10);
      uVar3 = FUN_180003ae0(local_40,plVar2);
      if ((uVar3 & 0xff) == 0) break;
      plVar2 = (longlong *)FUN_180003b00(local_40);
      plVar2 = (longlong *)*plVar2;
      if (((plVar2 != (longlong *)0x0) && (*plVar2 <= param_2)) && (param_2 < *plVar2 + plVar2[2]))
      {
        return (param_2 - *plVar2) + plVar2[1];
      }
      FUN_180003d40(local_40,&local_18);
    }
  }
  return -1;
}

