// Function: FUN_180017190
// Address: 180017190
// Size: 501 bytes


ulonglong FUN_180017190(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  longlong *plVar5;
  undefined7 extraout_var;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar6 = 0;
  if ((param_3 != (longlong *)0x0) && (*(int *)(param_1 + 0x78) != 0)) {
    if (param_4 != 0) {
      if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
        bVar2 = *(byte *)((longlong)param_3 + 0x3d);
      }
      else {
        bVar2 = (*(code *)((undefined **)*param_3)[0xd])(param_3);
      }
      if ((bVar2 & 1) != 0) {
        return 0;
      }
    }
    if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
      if ((ushort *)param_3[9] == (ushort *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = FUN_180033aa0((ushort *)param_3[9]);
      }
    }
    else {
      plVar4 = (longlong *)(*(code *)((undefined **)*param_3)[0xf])(param_3);
    }
    if (plVar4 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar4 + 8))(plVar4);
      if (iVar3 == 0) {
        plVar5 = FUN_1800340b0((longlong)plVar4);
        if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
          lVar8 = *(longlong *)((longlong)param_3 + 0x1b);
        }
        else {
          lVar8 = (*(code *)((undefined **)*param_3)[3])(param_3);
        }
        while ((plVar5 != (longlong *)0x0 && (0 < lVar8))) {
          iVar3 = 0;
          if (-1 < plVar5[1]) {
            iVar3 = (int)plVar5[1];
          }
          plVar9 = (longlong *)0x0;
          uVar6 = (ulonglong)(uint)(iVar3 * *(int *)(param_1 + 0x2c));
          plVar4[8] = plVar4[8] + 1;
          bVar1 = FUN_1800341c0((longlong)plVar4);
          if ((int)CONCAT71(extraout_var,bVar1) == 0) {
            if ((longlong *)plVar4[6] == (longlong *)0x0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(longlong *)plVar4[6];
            }
            plVar9 = *(longlong **)
                      (*(longlong *)
                        (*(longlong *)(lVar7 + 8) +
                        ((ulonglong)plVar4[8] >> 1 & *(longlong *)(lVar7 + 0x10) - 1U) * 8) +
                      (ulonglong)((uint)plVar4[8] & 1) * 8);
            if (plVar9 == (longlong *)0x0) goto LAB_1800172dc;
          }
          else {
LAB_1800172dc:
            uVar6 = lVar8 / (longlong)(ulonglong)*(uint *)(param_1 + 0x78);
            if (0 < lVar8 % (longlong)(ulonglong)*(uint *)(param_1 + 0x78)) {
              uVar6 = (ulonglong)((int)uVar6 + 1);
            }
          }
          lVar7 = (ulonglong)*(uint *)(param_1 + 0x2c) * *plVar5;
          lVar8 = lVar8 - (ulonglong)(uint)(*(int *)(param_1 + 0x78) * (int)uVar6);
          plVar5 = plVar9;
          if (0 < lVar7) {
            FUN_18002c1e0(param_2,lVar7,uVar6,uVar6 & 0xffffffff);
          }
        }
        uVar6 = 1;
      }
      (**(code **)*plVar4)(plVar4,1);
    }
  }
  return uVar6;
}

