// Function: FUN_18001bf30
// Address: 18001bf30
// Size: 619 bytes


void FUN_18001bf30(undefined8 *param_1,ulonglong *param_2,uint *param_3,uint *param_4)

{
  longlong *plVar1;
  undefined **ppuVar2;
  ushort *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_48 [2];
  
  plVar1 = (longlong *)param_2[4];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
    if ((ushort *)plVar1[9] == (ushort *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = FUN_180033aa0((ushort *)plVar1[9]);
    }
  }
  else {
    puVar6 = (undefined8 *)(*(code *)((undefined **)*plVar1)[0xf])();
  }
  bVar4 = false;
  if (puVar6 == (undefined8 *)0x0) {
    ppuVar2 = *(undefined ***)param_2[4];
    if (ppuVar2 == CNTFSFileProperties::vftable) {
      lVar8 = *(longlong *)((longlong)param_2[4] + 0x1b);
    }
    else {
      lVar8 = (*(code *)ppuVar2[3])();
    }
    if (lVar8 < 1) goto LAB_18001c062;
    local_48[0] = 0;
    if (param_1[7] != 0) {
      FUN_180020110((longlong)param_1,param_2,local_48);
    }
    lVar8 = local_48[0];
    ppuVar2 = *(undefined ***)param_2[4];
    if (ppuVar2 == CNTFSFileProperties::vftable) {
      puVar3 = (ushort *)((longlong *)param_2[4])[9];
      if (puVar3 == (ushort *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = FUN_180033aa0(puVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(*(code *)ppuVar2[0xf])();
    }
    *(undefined4 *)(param_2 + 6) = 1;
    ppuVar2 = *(undefined ***)param_2[4];
    if (ppuVar2 == CNTFSFileProperties::vftable) {
      lVar9 = *(longlong *)((longlong)param_2[4] + 0x1b);
    }
    else {
      lVar9 = (*(code *)ppuVar2[3])();
    }
    if (lVar9 <= lVar8) {
      uVar5 = 4;
      goto LAB_18001c0e8;
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
      puVar6 = (undefined8 *)0x0;
    }
  }
  else {
    (**(code **)*puVar6)(puVar6,1);
LAB_18001c062:
    uVar7 = FUN_18001ec70((longlong)param_1,(longlong)param_2,'\0');
    if (((char)uVar7 == '\0') && ((void *)param_2[1] != (void *)0x0)) {
      FUN_18001dd80(param_1,(void *)param_2[1],(uint)param_2[2],(longlong *)param_2[4],'\x01',
                    *(int *)((longlong)param_2 + 0x14) == 0,(void *)0x0,param_3,param_4,'\0');
    }
    ppuVar2 = *(undefined ***)param_2[4];
    if (ppuVar2 == CNTFSFileProperties::vftable) {
      puVar3 = (ushort *)((longlong *)param_2[4])[9];
      if (puVar3 == (ushort *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = FUN_180033aa0(puVar3);
      }
    }
    else {
      puVar6 = (undefined8 *)(*(code *)ppuVar2[0xf])();
    }
    bVar4 = true;
    uVar5 = 2;
LAB_18001c0e8:
    *(undefined4 *)(param_2 + 6) = uVar5;
    if (puVar6 != (undefined8 *)0x0) goto LAB_18001c154;
    if (bVar4) {
      return;
    }
  }
  uVar7 = FUN_18001ec70((longlong)param_1,(longlong)param_2,'\x01');
  if (((char)uVar7 == '\0') && ((void *)param_2[1] != (void *)0x0)) {
    FUN_18001dd80(param_1,(void *)param_2[1],(uint)param_2[2],(longlong *)param_2[4],'\x01',
                  *(int *)((longlong)param_2 + 0x14) == 0,(void *)0x0,param_3,param_4,'\0');
  }
  *(undefined4 *)(param_2 + 6) = 2;
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
LAB_18001c154:
  (**(code **)*puVar6)(puVar6,1);
  return;
}

