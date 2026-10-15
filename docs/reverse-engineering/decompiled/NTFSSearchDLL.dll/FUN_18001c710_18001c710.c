// Function: FUN_18001c710
// Address: 18001c710
// Size: 1055 bytes


undefined1
FUN_18001c710(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined2 local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined2 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  local_48 = 0xfffffffffffffffe;
  local_res10[0] = 1;
  if (param_2 == (longlong *)0x0) {
    return 1;
  }
  if (param_3 != (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    local_b8 = 0;
    plVar5 = param_2;
    plVar4 = (longlong *)FUN_180002680(&local_b8);
    local_78 = *plVar4;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = -1;
    local_58 = 0x100;
    local_80 = plVar5;
    FUN_18001b9c0(param_1,(longlong *)&local_80);
    local_b0 = (longlong *)0x0;
    local_b8 = 0;
    plVar5 = (longlong *)FUN_180002680(&local_b8);
    local_a8 = *plVar5;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = -1;
    local_88 = 0x100;
    local_b0 = param_3;
    FUN_18001b9c0(param_1,(longlong *)&local_b0);
    bVar2 = FUN_180005ef0(&local_78);
    if ((bVar2) && (bVar2 = FUN_180005ef0(&local_a8), bVar2)) {
      plVar5 = (longlong *)FUN_180005f00(&local_78);
      iVar3 = (**(code **)(*plVar5 + 8))(plVar5);
      if ((iVar3 == 0) && (local_88._1_1_ != '\0')) {
        if (local_58._1_1_ == '\0') {
          if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
            lVar7 = *(longlong *)((longlong)param_3 + 0x1b);
          }
          else {
            lVar7 = (*(code *)((undefined **)*param_3)[3])(param_3);
          }
          plVar5 = (longlong *)FUN_180005f00(&local_a8);
          FUN_18001c660((longlong)local_res10,(longlong)param_2,plVar5,lVar7,local_res10);
          *param_4 = *param_5;
          FUN_180005f10(&local_a8);
        }
        else {
          if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
            lVar7 = *(longlong *)((longlong)param_2 + 0x1b);
          }
          else {
            lVar7 = (*(code *)((undefined **)*param_2)[3])(param_2);
          }
          if ((local_70 < lVar7) && (local_70 < local_a0)) {
            if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
              lVar7 = *(longlong *)((longlong)param_3 + 0x1b);
            }
            else {
              lVar7 = (*(code *)((undefined **)*param_3)[3])(param_3);
            }
            plVar5 = (longlong *)FUN_180005f00(&local_a8);
            FUN_18001c660((longlong)local_res10,(longlong)param_2,plVar5,lVar7,local_res10);
            *param_4 = *param_5;
            FUN_180005f10(&local_a8);
          }
          else if (local_60 == local_90) {
            FUN_180005f10(&local_a8);
          }
          else if ((*(byte *)((longlong)param_2 + 0x72) & 4) == 0) {
            FUN_180005f10(&local_a8);
          }
          else if ((*(byte *)((longlong)param_3 + 0x72) & 4) == 0) {
            if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
              lVar7 = *(longlong *)((longlong)param_3 + 0x1b);
            }
            else {
              lVar7 = (*(code *)((undefined **)*param_3)[3])(param_3);
            }
            plVar5 = (longlong *)FUN_180005f00(&local_a8);
            FUN_18001c660((longlong)local_res10,(longlong)param_2,plVar5,lVar7,local_res10);
            *param_4 = *param_5;
            FUN_180005f10(&local_a8);
          }
          else if ((*param_4 == 0) && (*param_5 != 0)) {
            if (local_a0 < local_70) {
              FUN_180005f10(&local_a8);
            }
            else {
              puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x58))(param_2,&local_b8);
              uVar1 = *puVar6;
              puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,local_40);
              if (((int)((ulonglong)*puVar6 >> 0x20) == (int)((ulonglong)uVar1 >> 0x20)) &&
                 ((int)*puVar6 == (int)uVar1)) {
                puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x60))(param_2,local_38);
                uVar1 = *puVar6;
                puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x50))(param_2,local_50);
                if (((int)((ulonglong)*puVar6 >> 0x20) == (int)((ulonglong)uVar1 >> 0x20)) &&
                   ((int)*puVar6 == (int)uVar1)) {
                  puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3,local_50);
                  *(undefined8 *)((longlong)param_2 + 0x25) = *puVar6;
                  puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x58))(param_3,local_50);
                  *(undefined8 *)((longlong)param_2 + 0x2d) = *puVar6;
                  puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x60))(param_3,local_50);
                  *(undefined8 *)((longlong)param_2 + 0x35) = *puVar6;
                }
              }
              if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
                lVar7 = *(longlong *)((longlong)param_2 + 0x1b);
              }
              else {
                lVar7 = (*(code *)((undefined **)*param_2)[3])(param_2);
              }
              if (local_70 < lVar7) {
                if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
                  lVar7 = *(longlong *)((longlong)param_3 + 0x1b);
                }
                else {
                  lVar7 = (*(code *)((undefined **)*param_3)[3])(param_3);
                }
                plVar5 = (longlong *)FUN_180005f00(&local_a8);
                FUN_18001c660((longlong)local_res10,(longlong)param_2,plVar5,lVar7,local_res10);
                *param_4 = *param_5;
                FUN_180005f10(&local_a8);
              }
              else {
                FUN_180005f10(&local_a8);
              }
            }
          }
          else {
            FUN_180005f10(&local_a8);
          }
        }
      }
      else {
        FUN_180005f10(&local_a8);
      }
    }
    else {
      FUN_180005f10(&local_a8);
    }
    FUN_180005f10(&local_78);
    return local_res10[0];
  }
  return 1;
}

