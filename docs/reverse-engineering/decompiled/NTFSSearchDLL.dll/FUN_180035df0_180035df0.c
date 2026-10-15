// Function: FUN_180035df0
// Address: 180035df0
// Size: 680 bytes


void FUN_180035df0(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  bool bVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *local_res20;
  
  plVar12 = *(longlong **)*param_2;
  if (plVar12 != (longlong *)*param_2) {
    do {
      lVar11 = plVar12[2];
      if ((lVar11 != 0) &&
         (plVar8 = (longlong *)
                   __RTDynamicCast(*(undefined8 *)(lVar11 + 0x18),0,
                                   &IFileProperties::RTTI_Type_Descriptor,
                                   &CNTFSFileProperties::RTTI_Type_Descriptor,0),
         plVar8 != (longlong *)0x0)) {
        local_res20 = FUN_180031070();
        if (local_res20 == (longlong *)0x0) {
          return;
        }
        local_res20[7] = lVar11;
        local_res20[6] = (longlong)plVar8;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        local_res20[0xb] = *(longlong *)(lVar11 + 8);
        local_res20[9] = *(longlong *)(lVar11 + 0x10);
        local_res20[10] = *(longlong *)(lVar11 + 0x20);
        FUN_1800360a0(param_1,local_res20);
        plVar5 = local_res20;
        *(undefined2 *)((longlong)local_res20 + 0x6c) = 2;
        plVar9 = local_res20;
        iVar7 = (**(code **)(*local_res20 + 8))();
        if ((iVar7 == 0) && ((*(byte *)((longlong)plVar5 + 0x72) & 4) == 0)) {
          plVar9 = (longlong *)plVar5[6];
          if (plVar9 != (longlong *)0x0) {
            if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
              bVar6 = (byte)*(undefined2 *)((longlong)plVar9 + 0x23);
            }
            else {
              bVar6 = (*(code *)((undefined **)*plVar9)[7])();
            }
            if ((bVar6 >> 4 & 1) != 0) goto LAB_180035ff8;
          }
          plVar9 = (longlong *)local_res20[6];
          if (plVar9 != (longlong *)0x0) {
            if ((undefined **)*plVar9 == CNTFSFileProperties::vftable) {
              lVar11 = *(longlong *)((longlong)plVar9 + 0x1b);
            }
            else {
              lVar11 = (*(code *)((undefined **)*plVar9)[3])();
            }
            if ((((0 < lVar11) && (bVar4 = false, *(longlong *)(param_1 + 0x20) != 0)) &&
                (lVar11 = *(longlong *)(param_1 + 0x58), lVar11 != 0)) &&
               (uVar1 = *(uint *)(lVar11 + 0xc), uVar1 != 0)) {
              uVar2 = *(ulonglong *)(lVar11 + 0x60);
              if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
                plVar9 = (longlong *)0x0;
                if ((ushort *)plVar8[9] != (ushort *)0x0) {
                  plVar9 = FUN_180033aa0((ushort *)plVar8[9]);
                }
              }
              else {
                plVar9 = (longlong *)(*(code *)((undefined **)*plVar8)[0xf])(plVar8);
              }
              if (plVar9 != (longlong *)0x0) {
                plVar8 = FUN_1800340b0((longlong)plVar9);
                if (plVar8 != (longlong *)0x0) {
                  if ((*plVar8 < (longlong)(uVar2 / uVar1)) || (*plVar8 == 0)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                }
                (**(code **)*plVar9)();
                if (bVar4) goto LAB_180035ff8;
              }
            }
          }
          if (local_res20 != (longlong *)0x0) {
            (**(code **)(*local_res20 + 0x30))();
          }
          local_res20 = (longlong *)0x0;
        }
        else {
LAB_180035ff8:
          pvVar3 = (void *)param_3[1];
          if ((void *)param_3[2] == pvVar3) {
            FUN_180013520(param_3,pvVar3,&local_res20);
          }
          else {
            puVar10 = (undefined8 *)FUN_180001100(plVar9,pvVar3);
            *puVar10 = local_res20;
            param_3[1] = param_3[1] + 8;
          }
        }
      }
      plVar12 = (longlong *)*plVar12;
    } while (plVar12 != (longlong *)*param_2);
  }
  return;
}

