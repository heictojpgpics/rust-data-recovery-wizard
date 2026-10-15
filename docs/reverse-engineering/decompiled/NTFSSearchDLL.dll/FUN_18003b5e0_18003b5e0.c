// Function: FUN_18003b5e0
// Address: 18003b5e0
// Size: 599 bytes


void FUN_18003b5e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [6];
  ulonglong local_28;
  
  local_58[1] = 0xfffffffffffffffe;
  local_28 = DAT_180086010 ^ (ulonglong)auStack_78;
  bVar5 = FUN_180019dd0((longlong)param_3);
  if ((!bVar5) && (puVar7 = FUN_180037f00(), puVar7 != (undefined8 *)0x0)) {
    local_58[0] = 0;
    FUN_180002650((undefined1 *)(local_58 + 2));
    plVar8 = *(longlong **)*param_3;
    if (plVar8 != (longlong *)*param_3) {
      do {
        lVar1 = plVar8[5];
        if (lVar1 == 0) {
          plVar9 = (longlong *)plVar8[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar6 = *(char *)(*plVar9 + 0x19);
            plVar8 = (longlong *)*plVar9;
            while (cVar6 == '\0') {
              cVar6 = *(char *)(*plVar8 + 0x19);
              plVar9 = plVar8;
              plVar8 = (longlong *)*plVar8;
            }
          }
          else {
            cVar6 = *(char *)(plVar8[1] + 0x19);
            plVar2 = (longlong *)plVar8[1];
            while ((plVar9 = plVar2, cVar6 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
              cVar6 = *(char *)(plVar9[1] + 0x19);
              plVar2 = (longlong *)plVar9[1];
              plVar8 = plVar9;
            }
          }
        }
        else {
          if ((*(longlong **)(param_1 + 0x78) != (longlong *)0x0) &&
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x88))(), cVar6 != '\0'))
          break;
          if (*(longlong *)(lVar1 + 8) == 0) {
            FUN_18003cd60(lVar1,(longlong)puVar7,local_58,local_58 + 2);
            plVar2 = (longlong *)plVar8[2];
            if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
              cVar6 = *(char *)(*plVar2 + 0x19);
              plVar9 = plVar2;
              plVar3 = (longlong *)*plVar2;
              while (cVar6 == '\0') {
                cVar6 = *(char *)(*plVar3 + 0x19);
                plVar9 = plVar3;
                plVar3 = (longlong *)*plVar3;
              }
            }
            else {
              cVar6 = *(char *)(plVar8[1] + 0x19);
              plVar4 = (longlong *)plVar8[1];
              plVar3 = plVar8;
              while ((plVar9 = plVar4, cVar6 == '\0' && (plVar3 == (longlong *)plVar9[2]))) {
                cVar6 = *(char *)(plVar9[1] + 0x19);
                plVar4 = (longlong *)plVar9[1];
                plVar3 = plVar9;
              }
            }
            if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
              plVar2 = (longlong *)*plVar2;
              cVar6 = *(char *)((longlong)plVar2 + 0x19);
              while (cVar6 == '\0') {
                plVar2 = (longlong *)*plVar2;
                cVar6 = *(char *)((longlong)plVar2 + 0x19);
              }
            }
            else {
              cVar6 = *(char *)(plVar8[1] + 0x19);
              plVar3 = (longlong *)plVar8[1];
              plVar2 = plVar8;
              while ((plVar4 = plVar3, cVar6 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
                cVar6 = *(char *)(plVar4[1] + 0x19);
                plVar3 = (longlong *)plVar4[1];
                plVar2 = plVar4;
              }
            }
            plVar8 = FUN_180012020(param_3,plVar8);
            free(plVar8);
          }
          else {
            plVar9 = (longlong *)plVar8[2];
            if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
              cVar6 = *(char *)(*plVar9 + 0x19);
              plVar8 = (longlong *)*plVar9;
              while (cVar6 == '\0') {
                cVar6 = *(char *)(*plVar8 + 0x19);
                plVar9 = plVar8;
                plVar8 = (longlong *)*plVar8;
              }
            }
            else {
              cVar6 = *(char *)(plVar8[1] + 0x19);
              plVar2 = (longlong *)plVar8[1];
              while ((plVar9 = plVar2, cVar6 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
                cVar6 = *(char *)(plVar9[1] + 0x19);
                plVar2 = (longlong *)plVar9[1];
                plVar8 = plVar9;
              }
            }
          }
        }
        plVar8 = plVar9;
      } while (plVar9 != (longlong *)*param_3);
    }
    FUN_1800025f0(local_58 + 2);
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_78);
  return;
}

