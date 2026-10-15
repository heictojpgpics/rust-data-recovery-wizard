// Function: FUN_1800148e0
// Address: 1800148e0
// Size: 702 bytes


undefined8 *
FUN_1800148e0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (0x7fffffffffffffd < (ulonglong)param_1[1]) {
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  plVar5 = (longlong *)FUN_1800159a0(param_1,param_5);
  param_1[1] = param_1[1] + 1;
  plVar5[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = plVar5;
    *(longlong **)*param_1 = plVar5;
    *(longlong **)(*param_1 + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(*param_1 + 0x10)) {
      *(longlong **)(*param_1 + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)*param_1) {
      *(longlong **)*param_1 = plVar5;
    }
  }
  cVar1 = *(char *)(plVar5[1] + 0x18);
  plVar9 = plVar5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(longlong *)(*param_1 + 8) + 0x18) = 1;
      *param_2 = plVar5;
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
          if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
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
        if (plVar8 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar11;
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
        goto LAB_180014b65;
      }
LAB_180014a97:
      *(undefined1 *)(plVar10 + 3) = 1;
      *(undefined1 *)(lVar6 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar8 + 8) + 0x18) = 0;
      plVar9 = *(longlong **)(*plVar8 + 8);
    }
    else {
      if (*(char *)(lVar6 + 0x18) == '\0') goto LAB_180014a97;
      plVar2 = (longlong *)*plVar10;
      plVar7 = plVar10;
      if (plVar9 == plVar2) {
        *plVar10 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar10;
        }
        plVar2[1] = *plVar11;
        if (plVar10 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar11;
          if (plVar10 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
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
      if (plVar8 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar11;
      }
      else {
        puVar4 = (undefined8 *)plVar8[1];
        if (plVar8 == (longlong *)*puVar4) {
          *puVar4 = plVar11;
        }
        else {
          puVar4[2] = plVar11;
        }
      }
      *plVar11 = (longlong)plVar8;
LAB_180014b65:
      plVar8[1] = (longlong)plVar11;
    }
    cVar1 = *(char *)(plVar9[1] + 0x18);
  } while( true );
}

