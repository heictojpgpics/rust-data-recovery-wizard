// Function: FUN_18001a540
// Address: 18001a540
// Size: 678 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18001a540(int *param_1,undefined8 param_2,byte param_3,longlong *param_4,longlong param_5,
                  short param_6,undefined8 *param_7)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStackY_1098 [32];
  undefined8 local_1060;
  longlong local_1058;
  undefined8 local_1050;
  int local_1048 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x18001a55a;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_1098;
  local_1058 = param_5;
  uVar12 = (uint)param_3;
  iVar3 = (**(code **)(*param_4 + 0x28))(param_4);
  FUN_180044ab0(param_1,iVar3 * uVar12,(longlong)param_7,0,(undefined8 *)0x0);
  iVar3 = (**(code **)(*param_4 + 0x28))(param_4);
  plVar4 = FUN_180042a80(param_1,iVar3 * (uint)param_3,param_5,(int)param_6,param_4);
  if (plVar4 != (longlong *)0x0) {
    plVar5 = FUN_180003ba0(plVar4,&local_1050);
    plVar5 = (longlong *)*plVar5;
    plVar6 = FUN_180003b90(plVar4,&local_1060);
    if (plVar5 != (longlong *)*plVar6) {
      do {
        if (*(longlong *)(plVar5[2] + 8) == 0) {
          free((void *)plVar5[2]);
          plVar6 = (longlong *)*plVar5;
          *(longlong **)plVar5[1] = plVar6;
          *(longlong *)(*plVar5 + 8) = plVar5[1];
          plVar11 = plVar4;
          plVar7 = (longlong *)FUN_180002670((longlong)plVar4);
          *plVar7 = *plVar7 + -1;
          FUN_180003c70(plVar11,plVar5);
        }
        else {
          plVar6 = (longlong *)*plVar5;
        }
        puVar8 = FUN_180003b90(plVar4,&local_1060);
        plVar5 = plVar6;
      } while (plVar6 != (longlong *)*puVar8);
    }
    do {
      bVar2 = false;
      plVar5 = FUN_180003ba0(plVar4,&local_1050);
      plVar5 = (longlong *)*plVar5;
      plVar6 = FUN_180003b90(plVar4,&local_1060);
      if (plVar5 == (longlong *)*plVar6) break;
      do {
        lVar9 = FUN_180042980(*(longlong *)(plVar5[2] + 8),param_6,param_5,param_7,param_3);
        if (lVar9 == -1) {
          plVar6 = (longlong *)*plVar5;
        }
        else {
          memset(local_1048,0,0x1000);
          lVar1 = *param_4;
          (**(code **)(lVar1 + 0x28))(param_4);
          (**(code **)(lVar1 + 8))(param_4,local_1048,lVar9);
          uVar10 = FUN_180041bb0(local_1048,0x1000);
          if ((int)uVar10 != 0) {
            iVar3 = (**(code **)(*param_4 + 0x28))(param_4);
            if ((int)(iVar3 * uVar12) < 0x1001) {
              iVar3 = (**(code **)(*param_4 + 0x28))(param_4);
              iVar3 = iVar3 * uVar12;
            }
            else {
              iVar3 = 0x1000;
            }
            FUN_180044ab0(local_1048,iVar3,(longlong)param_7,0,(undefined8 *)0x0);
          }
          plVar6 = (longlong *)*plVar5;
          *(longlong **)plVar5[1] = plVar6;
          *(longlong *)(*plVar5 + 8) = plVar5[1];
          plVar11 = plVar4;
          plVar7 = (longlong *)FUN_180002670((longlong)plVar4);
          *plVar7 = *plVar7 + -1;
          FUN_180003c70(plVar11,plVar5);
          bVar2 = true;
        }
        puVar8 = FUN_180003b90(plVar4,&local_1060);
        plVar5 = plVar6;
        param_5 = local_1058;
      } while (plVar6 != (longlong *)*puVar8);
    } while (bVar2);
    FUN_180040b10(param_7);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1098);
  return;
}

