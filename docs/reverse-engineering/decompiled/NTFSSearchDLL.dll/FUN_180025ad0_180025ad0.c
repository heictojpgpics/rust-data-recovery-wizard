// Function: FUN_180025ad0
// Address: 180025ad0
// Size: 675 bytes


undefined8 *
FUN_180025ad0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (0x276276276276274 < (ulonglong)param_1[1]) {
    FUN_1800259a0(0x276276276276275,param_6);
    std::_Xlength_error("map/set<T> too long");
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_180025b59;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_180025b59;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_180025b59:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(longlong *)(*param_1 + 8) + 0x18) = 1;
      *param_2 = param_6;
      return param_2;
    }
    plVar9 = (longlong *)plVar8[1];
    plVar7 = plVar8 + 1;
    plVar10 = plVar9 + 1;
    lVar5 = *(longlong *)plVar9[1];
    if (plVar9 == (longlong *)lVar5) {
      lVar5 = ((longlong *)plVar9[1])[2];
      if (*(char *)(lVar5 + 0x18) != '\0') {
        plVar2 = (longlong *)plVar9[2];
        if (plVar8 == plVar2) {
          plVar9[2] = *plVar2;
          if (*(char *)(*plVar2 + 0x19) == '\0') {
            *(longlong **)(*plVar2 + 8) = plVar9;
          }
          plVar2[1] = *plVar10;
          if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar2;
            *plVar2 = (longlong)plVar9;
            *plVar10 = (longlong)plVar2;
            plVar8 = plVar9;
            plVar9 = plVar2;
            plVar7 = plVar10;
          }
          else {
            plVar8 = (longlong *)*plVar10;
            if (plVar9 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
            else {
              plVar8[2] = (longlong)plVar2;
              *plVar2 = (longlong)plVar9;
              *plVar10 = (longlong)plVar2;
              plVar8 = plVar9;
              plVar9 = plVar2;
              plVar7 = plVar10;
            }
          }
        }
        *(undefined1 *)(plVar9 + 3) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        plVar10 = (longlong *)*plVar7;
        *plVar7 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar7;
        }
        plVar10[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar10;
          plVar10[2] = (longlong)plVar7;
        }
        else {
          plVar9 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar9[2]) {
            plVar9[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
          else {
            *plVar9 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar7;
          }
        }
        goto LAB_180025d45;
      }
LAB_180025c77:
      *(undefined1 *)(plVar9 + 3) = 1;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(*plVar7 + 8);
    }
    else {
      if (*(char *)(lVar5 + 0x18) == '\0') goto LAB_180025c77;
      plVar2 = (longlong *)*plVar9;
      plVar6 = plVar9;
      if (plVar8 == plVar2) {
        *plVar9 = plVar2[2];
        if (*(char *)(plVar2[2] + 0x19) == '\0') {
          *(longlong **)(plVar2[2] + 8) = plVar9;
        }
        plVar2[1] = *plVar10;
        if (plVar9 == (longlong *)*(longlong *)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar2;
        }
        else {
          puVar4 = (undefined8 *)*plVar10;
          if (plVar9 == (longlong *)puVar4[2]) {
            puVar4[2] = plVar2;
          }
          else {
            *puVar4 = plVar2;
          }
        }
        plVar2[2] = (longlong)plVar9;
        *plVar10 = (longlong)plVar2;
        plVar6 = plVar2;
        plVar8 = plVar9;
        plVar7 = plVar10;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(*plVar7 + 8);
      plVar10 = (longlong *)plVar7[2];
      plVar7[2] = *plVar10;
      if (*(char *)(*plVar10 + 0x19) == '\0') {
        *(longlong **)(*plVar10 + 8) = plVar7;
      }
      plVar10[1] = plVar7[1];
      if (plVar7 == *(longlong **)(*param_1 + 8)) {
        *(longlong **)(*param_1 + 8) = plVar10;
      }
      else {
        puVar4 = (undefined8 *)plVar7[1];
        if (plVar7 == (longlong *)*puVar4) {
          *puVar4 = plVar10;
        }
        else {
          puVar4[2] = plVar10;
        }
      }
      *plVar10 = (longlong)plVar7;
LAB_180025d45:
      plVar7[1] = (longlong)plVar10;
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}

