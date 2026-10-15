// Function: FUN_180010270
// Address: 180010270
// Size: 675 bytes


undefined8 *
FUN_180010270(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  plVar4 = (longlong *)FUN_1800016b0(param_1);
  if (0x38e38e38e38e38c < (ulonglong)plVar4[1]) {
    FUN_180010240(0x38e38e38e38e38d,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  plVar4[1] = plVar4[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*plVar4) {
    ((undefined8 *)*plVar4)[1] = param_6;
    *(longlong **)*plVar4 = param_6;
    lVar6 = *plVar4;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*plVar4) {
        *(longlong **)*plVar4 = param_6;
      }
      goto LAB_1800102fe;
    }
    param_4[2] = param_6;
    lVar6 = *plVar4;
    if (param_4 != *(undefined8 **)(lVar6 + 0x10)) goto LAB_1800102fe;
  }
  *(longlong **)(lVar6 + 0x10) = param_6;
LAB_1800102fe:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar9 = param_6;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(longlong *)(*plVar4 + 8) + 0x18) = 1;
      *param_2 = param_6;
      return param_2;
    }
    plVar10 = (longlong *)plVar9[1];
    plVar8 = plVar9 + 1;
    plVar11 = plVar10 + 1;
    lVar6 = *(longlong *)plVar10[1];
    if (plVar10 == (longlong *)lVar6) {
      lVar6 = ((longlong *)plVar10[1])[2];
      if (*(char *)(lVar6 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar10[2];
        if (plVar9 == plVar2) {
          plVar10[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar10;
          }
          plVar2[1] = *plVar11;
          if (plVar10 == (longlong *)*(longlong *)(*plVar4 + 8)) {
            *(longlong **)(*plVar4 + 8) = plVar2;
            *plVar2 = (longlong)plVar10;
            *plVar11 = (longlong)plVar2;
            plVar9 = plVar10;
            plVar10 = plVar2;
            plVar8 = plVar11;
          }
          else {
            plVar9 = (longlong *)*plVar11;
            if (plVar10 == (longlong *)*plVar9) {
              *plVar9 = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
            else {
              plVar9[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar10;
              *plVar11 = (longlong)plVar2;
              plVar9 = plVar10;
              plVar10 = plVar2;
              plVar8 = plVar11;
            }
          }
        }
        *(undefined1 *)(plVar10 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(*plVar8 + 8);
        plVar11 = (longlong *)*plVar8;
        *plVar8 = plVar11[2];
        if (*(char *)(plVar11[2] + 0x19) == '\0') {
          *(longlong **)(plVar11[2] + 8) = plVar8;
        }
        plVar11[1] = plVar8[1];
        if (plVar8 == *(longlong **)(*plVar4 + 8)) {
          *(longlong **)(*plVar4 + 8) = plVar11;
          plVar11[2] = (longlong)plVar8;
        }
        else {
          plVar10 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)plVar10[2]) {
            plVar10[2] = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
          else {
            *plVar10 = (longlong)plVar11;
            plVar11[2] = (longlong)plVar8;
          }
        }
        goto LAB_1800104e5;
      }
LAB_180010417:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_180010417;
      plVar2 = (longlong *)*plVar10;
      plVar7 = plVar10;
      if (plVar9 == plVar2) {
        *plVar10 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar10;
        }
        plVar2[1] = *plVar11;
        if (plVar10 == (longlong *)*(longlong *)(*plVar4 + 8)) {
          *(longlong **)(*plVar4 + 8) = plVar2;
        }
        else {
          puVar5 = (undefined8 *)*plVar11;
          if (plVar10 == (longlong *)puVar5[2]) {
            puVar5[2] = plVar2;
          }
          else {
            *puVar5 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar10;
        *plVar11 = (longlong)plVar2;
        plVar7 = plVar2;
        plVar9 = plVar10;
        plVar8 = plVar11;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar8 + 8);
      plVar11 = (longlong *)plVar8[2];
      plVar8[2] = *plVar11;
      if (*(char *)(*plVar11 + 0x19) == '\0') {
        *(longlong **)(*plVar11 + 8) = plVar8;
      }
      plVar11[1] = plVar8[1];
      if (plVar8 == *(longlong **)(*plVar4 + 8)) {
        *(longlong **)(*plVar4 + 8) = plVar11;
      }
      else {
        puVar5 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar5) {
          *puVar5 = plVar11;
        }
        else {
          puVar5[2] = plVar11;
        }
      }
      *plVar11 = (longlong)plVar8;
LAB_1800104e5:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}

