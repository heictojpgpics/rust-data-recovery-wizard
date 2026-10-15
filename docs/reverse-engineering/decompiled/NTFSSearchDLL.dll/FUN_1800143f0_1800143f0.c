// Function: FUN_1800143f0
// Address: 1800143f0
// Size: 102 bytes


longlong * FUN_1800143f0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}

