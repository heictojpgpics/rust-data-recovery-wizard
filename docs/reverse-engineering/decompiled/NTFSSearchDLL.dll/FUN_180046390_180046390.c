// Function: FUN_180046390
// Address: 180046390
// Size: 409 bytes


longlong FUN_180046390(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ushort *_Dst;
  longlong *plVar3;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ushort *local_48;
  ushort *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1800025c0((longlong)param_2);
  if (bVar1) {
    local_50 = 0;
    FUN_180019de0(param_2);
  }
  else {
    local_58 = 0;
    FUN_1800303d0(param_1,&local_60);
    _Dst = (ushort *)thunk_FUN_18002be40(600);
    local_48 = _Dst;
    while( true ) {
      plVar3 = FUN_180030360(param_1,&local_20);
      bVar1 = FID_conflict_operator__(&local_60,plVar3);
      if (!bVar1) break;
      memset(_Dst,0,600);
      plVar3 = (longlong *)FUN_18002ed80(&local_60);
      local_58 = *plVar3;
      memcpy(_Dst,(void *)(local_58 + 0x52),(ulonglong)*(byte *)(local_58 + 0x50) << 1);
      cVar2 = FUN_1800306d0(param_2,_Dst);
      if (cVar2 != '\0') break;
      FUN_180030340(&local_60);
    }
    local_40 = _Dst;
    free(_Dst);
    plVar3 = FUN_180030360(param_1,local_18);
    bVar1 = FID_conflict_operator__(&local_60,plVar3);
    if (bVar1) {
      local_38 = 0;
      FUN_180019de0(param_2);
      local_50 = local_38;
    }
    else {
      local_30 = local_58;
      FUN_180019de0(param_2);
      local_50 = local_30;
    }
  }
  return local_50;
}

