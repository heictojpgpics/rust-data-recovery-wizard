// Function: FUN_180012020
// Address: 180012020
// Size: 890 bytes


longlong * FUN_180012020(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = (longlong *)param_2[2];
  plVar6 = param_2 + 2;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar5 = *(char *)(*plVar4 + 0x19);
    plVar7 = (longlong *)*plVar4;
    while (cVar5 == '\0') {
      cVar5 = *(char *)(*plVar7 + 0x19);
      plVar4 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar5 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar4 = plVar8, cVar5 == '\0' && (plVar7 == (longlong *)plVar4[2]))) {
      cVar5 = *(char *)(plVar4[1] + 0x19);
      plVar8 = (longlong *)plVar4[1];
      plVar7 = plVar4;
    }
  }
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar6;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar6 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar7[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar7 = plVar4;
    if (plVar4 != (longlong *)*plVar6) {
      plVar7 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar4[2] = *plVar6;
      *(longlong **)(*plVar6 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      plVar6 = (longlong *)param_2[1];
      if ((longlong *)*plVar6 == param_2) {
        *plVar6 = (longlong)plVar4;
      }
      else {
        plVar6[2] = (longlong)plVar4;
      }
    }
    plVar4[1] = param_2[1];
    cVar5 = (char)plVar4[3];
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = cVar5;
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
        cVar5 = *(char *)(*plVar8 + 0x19);
        plVar4 = (longlong *)*plVar8;
        plVar6 = plVar8;
        while (plVar3 = plVar4, cVar5 == '\0') {
          plVar4 = (longlong *)*plVar3;
          cVar5 = *(char *)((longlong)plVar4 + 0x19);
          plVar6 = plVar3;
        }
      }
      *(longlong **)*param_1 = plVar6;
    }
    lVar1 = *param_1;
    if (*(longlong **)(lVar1 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) != '\0') {
        *(longlong **)(lVar1 + 0x10) = plVar7;
        cVar5 = (char)param_2[3];
        goto LAB_1800121b2;
      }
      cVar5 = *(char *)(plVar8[2] + 0x19);
      plVar6 = (longlong *)plVar8[2];
      plVar4 = plVar8;
      while (plVar3 = plVar6, cVar5 == '\0') {
        plVar6 = (longlong *)plVar3[2];
        cVar5 = *(char *)((longlong)plVar6 + 0x19);
        plVar4 = plVar3;
      }
      *(longlong **)(lVar1 + 0x10) = plVar4;
    }
    cVar5 = (char)param_2[3];
  }
LAB_1800121b2:
  if (cVar5 == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar6 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar4 = (longlong *)*plVar6;
        if (plVar8 == plVar4) {
          plVar4 = (longlong *)plVar6[2];
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
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
              puVar2 = (undefined8 *)plVar6[1];
              if (plVar6 == (longlong *)*puVar2) {
                *puVar2 = plVar7;
              }
              else {
                puVar2[2] = plVar7;
              }
            }
            *plVar7 = (longlong)plVar6;
            plVar4 = (longlong *)plVar6[2];
            plVar6[1] = (longlong)plVar7;
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(*plVar4 + 0x18) != '\x01') || (*(char *)(plVar4[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar4[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar4 + 0x18) = 1;
                *(undefined1 *)(plVar4 + 3) = 0;
                FUN_180012610(param_1,plVar4);
                plVar4 = (longlong *)plVar6[2];
              }
              *(char *)(plVar4 + 3) = (char)plVar6[3];
              *(undefined1 *)(plVar6 + 3) = 1;
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              FUN_180012670(param_1,(longlong)plVar6);
              break;
            }
LAB_180012322:
            *(undefined1 *)(plVar4 + 3) = 0;
          }
        }
        else {
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            lVar1 = *plVar6;
            *(undefined1 *)(plVar6 + 3) = 0;
            *plVar6 = *(longlong *)(lVar1 + 0x10);
            if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = plVar6;
            }
            *(longlong *)(lVar1 + 8) = plVar6[1];
            if (plVar6 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar1;
            }
            else {
              plVar4 = (longlong *)plVar6[1];
              if (plVar6 == (longlong *)plVar4[2]) {
                plVar4[2] = lVar1;
              }
              else {
                *plVar4 = lVar1;
              }
            }
            *(longlong **)(lVar1 + 0x10) = plVar6;
            plVar4 = (longlong *)*plVar6;
            plVar6[1] = lVar1;
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(plVar4[2] + 0x18) == '\x01') && (*(char *)(*plVar4 + 0x18) == '\x01'))
            goto LAB_180012322;
            if (*(char *)(*plVar4 + 0x18) == '\x01') {
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              *(undefined1 *)(plVar4 + 3) = 0;
              FUN_180012670(param_1,(longlong)plVar4);
              plVar4 = (longlong *)*plVar6;
            }
            *(char *)(plVar4 + 3) = (char)plVar6[3];
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(*plVar4 + 0x18) = 1;
            FUN_180012610(param_1,plVar6);
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

