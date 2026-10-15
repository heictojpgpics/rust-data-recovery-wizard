// Function: FUN_18000ffd0
// Address: 18000ffd0
// Size: 466 bytes


void FUN_18000ffd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  
  if ((param_2 != 0) && (plVar6 = *(longlong **)(param_1 + 0xd8), plVar6 != (longlong *)0x0)) {
    FUN_180011760(plVar6);
    plVar8 = (longlong *)**(longlong **)(param_2 + 0x148);
    if (plVar8 != *(longlong **)(param_2 + 0x148)) {
      do {
        plVar1 = *(longlong **)(param_1 + 0xd8);
        lVar7 = *plVar1;
        plVar2 = *(longlong **)(lVar7 + 8);
        lVar4 = FUN_180014360(plVar6,lVar7,(longlong)plVar2,plVar8 + 2);
        if (plVar1[1] == 0x666666666666665) {
          std::_Xlength_error("list<T> too long");
          goto LAB_180010194;
        }
        plVar6 = (longlong *)(plVar1[1] + 1);
        plVar1[1] = (longlong)plVar6;
        *(longlong *)(lVar7 + 8) = lVar4;
        *plVar2 = lVar4;
        plVar8 = (longlong *)*plVar8;
      } while (plVar8 != (longlong *)*(longlong *)(param_2 + 0x148));
    }
    if ((*(char *)(param_2 + 0xf1) == '\0') || ((*(byte *)(param_2 + 0xf8) & 1) == 0)) {
      lVar7 = param_1 + 0x888;
      FUN_180023800(lVar7,(longlong *)&local_40);
      plVar8 = local_40;
      for (plVar6 = (longlong *)*local_40; plVar6 != plVar8; plVar6 = (longlong *)*plVar6) {
        local_30 = plVar6[2];
        lStack_28 = plVar6[3];
        local_20 = plVar6[4];
        plVar1 = *(longlong **)(param_1 + 0xd8);
        lVar4 = *plVar1;
        plVar2 = *(longlong **)(lVar4 + 8);
        lVar5 = FUN_180014360(lVar7,lVar4,(longlong)plVar2,&local_30);
        if (plVar1[1] == 0x666666666666665) {
LAB_180010194:
          std::_Xlength_error("list<T> too long");
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar7 = plVar1[1] + 1;
        plVar1[1] = lVar7;
        *(longlong *)(lVar4 + 8) = lVar5;
        *plVar2 = lVar5;
      }
      plVar6 = (longlong *)*local_40;
      *local_40 = (longlong)local_40;
      local_40[1] = (longlong)local_40;
      local_38 = 0;
      if (plVar6 != local_40) {
        do {
          plVar8 = (longlong *)*plVar6;
          free(plVar6);
          plVar6 = plVar8;
        } while (plVar8 != local_40);
      }
      free(local_40);
    }
  }
  return;
}

