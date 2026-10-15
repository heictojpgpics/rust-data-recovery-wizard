// Function: FUN_1800161f0
// Address: 1800161f0
// Size: 584 bytes


ulonglong FUN_1800161f0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  LONG LVar3;
  longlong in_RAX;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined7 extraout_var;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int local_res18 [2];
  uint local_res20 [2];
  FILETIME local_48;
  FILETIME local_40;
  
  if (param_3 == (longlong *)0x0) {
LAB_1800163ec:
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  else {
    uVar4 = (**(code **)(*param_3 + 0xf0))(param_3);
    if (((0 < param_2) && (param_2 != 5)) &&
       ((undefined **)*param_3 != CNTFSFileProperties::vftable)) {
      (*(code *)((undefined **)*param_3)[0x29])(param_3);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x318);
    puVar6 = (undefined8 *)puVar11[1];
    puVar5 = puVar6;
    puVar10 = puVar11;
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      do {
        if ((ulonglong)puVar5[4] < uVar4) {
          puVar9 = (undefined8 *)puVar5[2];
        }
        else {
          puVar9 = (undefined8 *)*puVar5;
          puVar10 = puVar5;
        }
        puVar5 = puVar9;
      } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
      do {
        if (uVar4 < (ulonglong)puVar6[4]) {
          puVar5 = (undefined8 *)*puVar6;
          puVar11 = puVar6;
        }
        else {
          puVar5 = (undefined8 *)puVar6[2];
        }
        puVar6 = puVar5;
      } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
    }
    puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3,&local_40);
    while (puVar10 != puVar11) {
      plVar1 = (longlong *)puVar10[5];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
        LVar3 = CompareFileTime(&local_40,&local_48);
        if (LVar3 == 0) {
          if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
            pcVar7 = *(char **)((longlong)param_3 + 0x11);
          }
          else {
            pcVar7 = (char *)(*(code *)((undefined **)*param_3)[2])(param_3);
          }
          if (pcVar7 != (char *)0x0) {
            uVar4 = 0xffffffffffffffff;
            do {
              uVar4 = uVar4 + 1;
            } while (pcVar7[uVar4] != '\0');
            if (((1 < uVar4) && (*pcVar7 == '$')) && (pcVar7[1] == 'I')) goto LAB_180016392;
          }
          if (((*(byte *)((longlong)param_3 + 0x72) & 2) == 0) ||
             ((*(byte *)((longlong)plVar1 + 0x72) & 2) == 0)) {
            local_res18[0] = 0;
            local_res20[0] = ~(uint)(*(byte *)((longlong)plVar1 + 0x72) >> 2) & 1;
            cVar2 = FUN_18001c710(param_1 + 0x1d8,plVar1,param_3,(int *)local_res20,local_res18);
            in_RAX = CONCAT71(extraout_var,cVar2);
            if (cVar2 != '\0') goto LAB_1800163ec;
            if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
              lVar8 = *(longlong *)((longlong)param_3 + 0x1b);
            }
            else {
              lVar8 = (*(code *)((undefined **)*param_3)[3])(param_3);
            }
            if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
              in_RAX = *(longlong *)((longlong)plVar1 + 0x1b);
            }
            else {
              in_RAX = (*(code *)((undefined **)*plVar1)[3])(plVar1);
            }
            if (lVar8 == in_RAX) goto LAB_1800163ec;
          }
        }
      }
LAB_180016392:
      puVar6 = (undefined8 *)puVar10[2];
      if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
        cVar2 = *(char *)((longlong)*puVar6 + 0x19);
        puVar10 = puVar6;
        puVar5 = (undefined8 *)*puVar6;
        while (cVar2 == '\0') {
          puVar6 = (undefined8 *)*puVar5;
          puVar10 = puVar5;
          puVar5 = puVar6;
          cVar2 = *(char *)((longlong)puVar6 + 0x19);
        }
      }
      else {
        cVar2 = *(char *)((longlong)puVar10[1] + 0x19);
        puVar9 = (undefined8 *)puVar10[1];
        puVar5 = puVar10;
        while ((puVar6 = puVar9, puVar10 = puVar6, cVar2 == '\0' &&
               (puVar5 == (undefined8 *)puVar6[2]))) {
          cVar2 = *(char *)((longlong)puVar6[1] + 0x19);
          puVar9 = (undefined8 *)puVar6[1];
          puVar5 = puVar6;
        }
      }
    }
    uVar4 = (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  return uVar4;
}

