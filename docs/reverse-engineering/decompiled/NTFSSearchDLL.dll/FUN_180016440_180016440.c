// Function: FUN_180016440
// Address: 180016440
// Size: 777 bytes


void FUN_180016440(longlong *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int local_78 [2];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58 [3];
  undefined8 local_40;
  undefined8 *local_38;
  
  local_40 = 0xfffffffffffffffe;
  param_1[0x45] = param_1[0x4a];
  FUN_1800025a0(local_58);
  if (param_1[0x42] != 0) {
    FUN_18001f9c0(param_1 + 0x3b,local_58);
  }
  plVar7 = (longlong *)FUN_180002680(local_58);
  lVar12 = *plVar7;
  local_70 = lVar12;
  plVar7 = (longlong *)FUN_180002670((longlong)local_58);
  local_60 = *plVar7;
  if (lVar12 != local_60) {
    do {
      if (((longlong *)param_1[3] != (longlong *)0x0) &&
         (iVar6 = (**(code **)(*(longlong *)param_1[3] + 0x10))(), iVar6 == 0)) break;
      plVar3 = *(longlong **)(lVar12 + 0x20);
      if ((plVar3 != (longlong *)0x0) && (0xe < plVar3[0xb])) {
        if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
          bVar5 = (byte)*(undefined2 *)((longlong)plVar3 + 0x23);
        }
        else {
          bVar5 = (*(code *)((undefined **)*plVar3)[7])(plVar3);
        }
        if ((bVar5 >> 4 & 1) == 0) {
          uVar8 = FUN_1800161f0((longlong)param_1,*(longlong *)(lVar12 + 0x28),plVar3);
          if ((char)uVar8 == '\0') {
            if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
              puVar9 = (undefined8 *)0x0;
              if ((ushort *)plVar3[9] != (ushort *)0x0) {
                puVar9 = FUN_180033aa0((ushort *)plVar3[9]);
              }
            }
            else {
              puVar9 = (undefined8 *)(*(code *)((undefined **)*plVar3)[0xf])(plVar3);
            }
            if (puVar9 != (undefined8 *)0x0) {
              plVar10 = FUN_1800340b0((longlong)puVar9);
              if (plVar10 == (longlong *)0x0) {
                (**(code **)*puVar9)();
              }
              else if (param_1[0x19] < *plVar10) {
                (**(code **)*puVar9)();
              }
              else {
                (**(code **)*puVar9)(puVar9,1);
                if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
                  lVar11 = *(longlong *)((longlong)plVar3 + 0x1b);
                }
                else {
                  lVar11 = (*(code *)((undefined **)*plVar3)[3])(plVar3);
                }
                if (-1 < lVar11) goto LAB_1800165c2;
              }
            }
          }
        }
        else {
LAB_1800165c2:
          if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
            lVar11 = *(longlong *)((longlong)plVar3 + 0x11);
          }
          else {
            lVar11 = (*(code *)((undefined **)*plVar3)[2])(plVar3);
          }
          if (lVar11 != 0) {
            (**(code **)(*plVar3 + 0x70))(plVar3,1);
            local_68 = 0xfe0001;
            local_78[0] = 0;
            puVar1 = (ulonglong *)(lVar12 + 0x28);
            FUN_1800198a0((longlong)(param_1 + 0x52),plVar3,puVar1);
            LOCK();
            *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
            UNLOCK();
            iVar6 = FUN_180016f10((longlong)param_1,plVar3[0xb],*puVar1,plVar3,&local_68,local_78,2)
            ;
            if (local_78[0] == 0) {
              if (iVar6 == 0) {
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                lVar12 = local_70;
                if (iVar6 == 1) {
                  (**(code **)(*plVar3 + 0x138))(plVar3,1);
                  lVar12 = local_70;
                }
                goto LAB_1800166dc;
              }
            }
            else {
              *(undefined8 *)(lVar12 + 0x20) = 0;
            }
            local_38 = (undefined8 *)FUN_18002be40(0x30);
            puVar9 = (undefined8 *)0x0;
            if (local_38 != (undefined8 *)0x0) {
              *(undefined4 *)local_38 = 0;
              local_38[1] = 0;
              local_38[2] = 0xffffffffffffffff;
              local_38[3] = 0;
              local_38[4] = 0xffffffffffffffff;
              *(undefined1 *)(local_38 + 5) = 0;
              *(undefined2 *)((longlong)local_38 + 0x2a) = 0xffff;
              puVar9 = local_38;
            }
            if (puVar9 == (undefined8 *)0x0) break;
            puVar9[2] = *puVar1;
            cVar4 = (**(code **)(*param_1 + 0x18))(param_1,plVar3,puVar9,1);
            lVar12 = local_70;
            if (cVar4 == '\0') {
              FUN_180002090(puVar9);
              lVar12 = local_70;
            }
          }
        }
      }
LAB_1800166dc:
      lVar12 = lVar12 + 0x38;
      local_60 = *plVar7;
      local_70 = lVar12;
    } while (lVar12 != local_60);
  }
  FUN_180002520(local_58);
  return;
}

