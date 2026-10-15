// Function: FUN_180025710
// Address: 180025710
// Size: 173 bytes


longlong * FUN_180025710(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = FUN_180021380();
  *param_1 = lVar3;
  local_res8 = SUB81(param_1,0);
  puVar4 = FUN_180025830(param_1,*(undefined8 **)(*param_2 + 8),*param_1,local_res8);
  *(undefined8 **)(*param_1 + 8) = puVar4;
  param_1[1] = param_2[1];
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  if (*(char *)(plVar1[1] + 0x19) == '\0') {
    do {
      plVar5 = plVar2;
      plVar2 = (longlong *)*plVar5;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    *plVar1 = (longlong)plVar5;
    lVar3 = *(longlong *)(*param_1 + 8);
    do {
      lVar6 = lVar3;
      lVar3 = *(longlong *)(lVar6 + 0x10);
    } while (*(char *)(lVar3 + 0x19) == '\0');
    *(longlong *)(*param_1 + 0x10) = lVar6;
  }
  else {
    *plVar1 = (longlong)plVar1;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}

