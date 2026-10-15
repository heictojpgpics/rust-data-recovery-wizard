// Function: FUN_1800019b0
// Address: 1800019b0
// Size: 885 bytes


longlong * FUN_1800019b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar5 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar7 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar5 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar5 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar8 = (longlong *)plVar5[1];
      plVar7 = plVar5;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar5[2], plVar5 != param_2)) {
    plVar7[1] = (longlong)plVar5;
    *plVar5 = *param_2;
    plVar7 = plVar5;
    if (plVar5 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar5[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar5;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar5;
    }
    else {
      plVar6 = (longlong *)param_2[1];
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar5;
      }
      else {
        plVar6[2] = (longlong)plVar5;
      }
    }
    plVar5[1] = param_2[1];
    lVar2 = plVar5[3];
    *(char *)(plVar5 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar7 = (longlong *)param_2[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar6 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar5 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar4 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar6 = plVar4;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar6 = (longlong *)plVar8[2];
        plVar5 = plVar8;
        while (plVar4 = plVar6, cVar1 == '\0') {
          plVar6 = (longlong *)plVar4[2];
          cVar1 = *(char *)((longlong)plVar6 + 0x19);
          plVar5 = plVar4;
        }
        *(longlong **)(lVar2 + 0x10) = plVar5;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar7;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar5 = (longlong *)*plVar6;
        if (plVar8 == plVar5) {
          plVar5 = (longlong *)plVar6[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar7 = (longlong *)plVar6[2];
            *(undefined1 *)(plVar6 + 3) = 0;
            plVar6[2] = *plVar7;
            if (*(char *)(*plVar7 + 0x19) == '\0') {
              *(longlong **)(*plVar7 + 8) = plVar6;
            }
            plVar7[1] = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar7;
            }
            else {
              puVar3 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar3) {
                *puVar3 = plVar7;
              }
              else {
                puVar3[2] = plVar7;
              }
            }
            *plVar7 = (longlong)plVar6;
            plVar5 = (longlong *)plVar6[2];
            plVar6[1] = (longlong)plVar7;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                *(undefined1 *)(plVar5 + 3) = 0;
                FUN_180001d70(param_1,plVar5);
                plVar5 = (longlong *)plVar6[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              FUN_180001dd0(param_1,(longlong)plVar6);
              break;
            }
LAB_180001cb2:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            lVar2 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar2 + 0x10);
            if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar2 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar2;
            }
            else {
              plVar5 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar5[2]) {
                plVar5[2] = lVar2;
              }
              else {
                *plVar5 = lVar2;
              }
            }
            *(longlong **)(lVar2 + 0x10) = plVar6;
            plVar5 = (longlong *)*plVar6;
            plVar6[1] = lVar2;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) == '\x01') && (*(char *)(*plVar5 + 0x18) == '\x01'))
            goto LAB_180001cb2;
            if (*(char *)(*plVar5 + 0x18) == '\x01') {
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              *(undefined1 *)(plVar5 + 3) = 0;
              FUN_180001dd0(param_1,(longlong)plVar5);
              plVar5 = (longlong *)*plVar6;
            }
            *(char *)(plVar5 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar5 + 0x18) = 1;
            FUN_180001d70(param_1,plVar6);
            break;
          }
        }
        plVar7 = (longlong *)plVar6[1];
        plVar8 = plVar6;
      } while (plVar6 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}

