// Function: FUN_1800388c0
// Address: 1800388c0
// Size: 387 bytes


undefined8 *
FUN_1800388c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  wchar_t *_Str1;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *local_res8;
  undefined8 local_20;
  
  bVar6 = true;
  plVar4 = (longlong *)DAT_180088190[1];
  plVar5 = DAT_180088190;
  while (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    iVar2 = _wcsicmp((wchar_t *)((longlong)param_4 + 2),(wchar_t *)((longlong)plVar4 + 0x1e));
    bVar6 = iVar2 < 0;
    plVar5 = plVar4;
    if (bVar6) {
      plVar4 = (longlong *)*plVar4;
    }
    else {
      plVar4 = (longlong *)plVar4[2];
    }
  }
  local_res8 = plVar5;
  if (bVar6 != false) {
    if (plVar5 == (longlong *)*DAT_180088190) {
      puVar3 = FUN_180038a50(plVar5,&local_20,'\x01',plVar5,param_4);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      plVar1 = (longlong *)*plVar5;
      plVar4 = plVar5;
      if (*(char *)(*plVar5 + 0x19) == '\0') {
        do {
          local_res8 = plVar1;
          plVar1 = (longlong *)local_res8[2];
        } while (*(char *)(local_res8[2] + 0x19) == '\0');
      }
      else {
        do {
          local_res8 = plVar4;
          plVar4 = (longlong *)local_res8[1];
          if (*(char *)((longlong)plVar4 + 0x19) != '\0') break;
        } while (local_res8 == (longlong *)*plVar4);
        if (*(char *)((longlong)local_res8 + 0x19) == '\0') {
          local_res8 = plVar4;
        }
      }
    }
    else {
      local_res8 = (longlong *)plVar5[2];
    }
  }
  _Str1 = (wchar_t *)((longlong)local_res8 + 0x1e);
  iVar2 = _wcsicmp(_Str1,(wchar_t *)((longlong)param_4 + 2));
  if (iVar2 < 0) {
    puVar3 = FUN_180038a50(_Str1,&local_20,bVar6,plVar5,param_4);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    *param_2 = local_res8;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

