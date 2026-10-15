// Function: FUN_180022aa0
// Address: 180022aa0
// Size: 177 bytes


longlong FUN_180022aa0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((param_2 != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    plVar2 = *(longlong **)*param_1;
    plVar6 = (longlong *)*plVar2;
    if (plVar6 != plVar2) {
      do {
        lVar3 = plVar6[4];
        if ((((lVar3 != 0) && (lVar3 != param_2)) &&
            (*(longlong *)(lVar3 + 0x10) == *(longlong *)(param_2 + 0x10))) &&
           (*(int *)(lVar3 + 0xc) != *(int *)(param_2 + 0xc))) break;
        plVar4 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar6 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar6 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar4 = plVar6;
          while ((plVar6 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar6[2]))) {
            cVar1 = *(char *)(plVar6[1] + 0x19);
            plVar5 = (longlong *)plVar6[1];
            plVar4 = plVar6;
          }
        }
      } while (plVar6 != plVar2);
      if (plVar6 != plVar2) {
        return plVar6[4];
      }
    }
  }
  return 0;
}

