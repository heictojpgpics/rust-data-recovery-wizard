// Function: FUN_18002fee0
// Address: 18002fee0
// Size: 861 bytes


undefined8 *
FUN_18002fee0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,void *param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_28;
  
  plVar1 = (longlong *)FUN_180002680(param_1);
  lVar2 = FUN_180030240(param_1);
  if (lVar2 - 1U <= (ulonglong)plVar1[1]) {
    FUN_18002fe90(param_1,param_6);
    std::_Xlength_error("map/set<T> too long");
  }
  FUN_180002680(param_5);
  plVar3 = (longlong *)FUN_180030290(param_1,param_6);
  plVar1[1] = plVar1[1] + 1;
  plVar3[1] = (longlong)param_4;
  local_28 = plVar3;
  if (param_4 == (undefined8 *)*plVar1) {
    puVar4 = (undefined8 *)FUN_180011d90(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_180005f00(plVar1);
    *puVar4 = plVar3;
    puVar4 = (undefined8 *)FUN_180003b00(plVar1);
    *puVar4 = plVar3;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar3;
    plVar5 = (longlong *)FUN_180003b00(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_180003b00(plVar1);
      *puVar4 = plVar3;
    }
  }
  else {
    *param_4 = plVar3;
    plVar5 = (longlong *)FUN_180005f00(plVar1);
    if (param_4 == (undefined8 *)*plVar5) {
      puVar4 = (undefined8 *)FUN_180005f00(plVar1);
      *puVar4 = plVar3;
    }
  }
  while (*(char *)(local_28[1] + 0x18) == '\0') {
    if (local_28[1] == **(longlong **)(local_28[1] + 8)) {
      lVar2 = *(longlong *)(*(longlong *)(local_28[1] + 8) + 0x10);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)(local_28[1] + 0x10)) {
          local_28 = (longlong *)local_28[1];
          FUN_180012670(plVar1,(longlong)local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_180012610(plVar1,*(longlong **)(local_28[1] + 8));
      }
    }
    else {
      lVar2 = **(longlong **)(local_28[1] + 8);
      if (*(char *)(lVar2 + 0x18) == '\0') {
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(lVar2 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        local_28 = *(longlong **)(local_28[1] + 8);
      }
      else {
        if (local_28 == *(longlong **)local_28[1]) {
          local_28 = (longlong *)local_28[1];
          FUN_180012610(plVar1,local_28);
        }
        *(undefined1 *)(local_28[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(local_28[1] + 8) + 0x18) = 0;
        FUN_180012670(plVar1,*(longlong *)(local_28[1] + 8));
      }
    }
  }
  plVar5 = (longlong *)FUN_180011d90(plVar1);
  *(undefined1 *)(*plVar5 + 0x18) = 1;
  FUN_180002680(plVar1);
  FUN_1800060b0(param_2,plVar3);
  return param_2;
}

