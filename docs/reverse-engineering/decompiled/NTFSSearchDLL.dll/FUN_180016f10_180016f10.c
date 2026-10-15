// Function: FUN_180016f10
// Address: 180016f10
// Size: 638 bytes


int FUN_180016f10(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4,
                 undefined8 param_5,undefined4 *param_6,undefined2 param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  
  uVar12 = param_3;
  plVar10 = param_4;
  uVar6 = (**(code **)(*param_4 + 0xf0))(param_4);
  uVar11 = param_3;
  if ((0 < (longlong)param_3) && (param_3 != 5)) {
    if ((undefined **)*param_4 == CNTFSFileProperties::vftable) {
      uVar11 = param_3 << 0x10 | (ulonglong)*(ushort *)((longlong)param_4 + 0x6a);
    }
    else {
      uVar4 = (*(code *)((undefined **)*param_4)[0x29])(param_4);
      uVar11 = param_3 << 0x10 | (ulonglong)uVar4;
    }
  }
  cVar3 = (**(code **)(*param_4 + 0xd8))(param_4);
  if ((cVar3 != '\0') &&
     (uVar12 = uVar6, uVar7 = FUN_180017910(param_1,param_4,uVar6,plVar10), (char)uVar7 != '\0')) {
    LOCK();
    piVar1 = (int *)((longlong)param_4 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*param_4 + 0x138))(param_4,1);
    }
    *param_6 = 1;
    return 1;
  }
  plVar8 = FUN_180031070();
  plVar10 = plVar8;
  if (plVar8 == (longlong *)0x0) goto LAB_180017160;
  *(undefined2 *)((longlong)plVar8 + 0x6c) = param_7;
  plVar8[6] = (longlong)param_4;
  uVar4 = (**(code **)(*param_4 + 0x38))(param_4);
  if ((uVar4 & 0x400) == 0) {
LAB_180017029:
    uVar9 = uVar6;
  }
  else {
    cVar3 = FUN_180031960(plVar8);
    uVar9 = 0xffffffffffffff9c;
    if (cVar3 != '\0') goto LAB_180017029;
  }
  plVar8[10] = uVar9;
  plVar8[9] = uVar11;
  if (param_2 < (longlong)param_3) {
    *param_6 = 0;
    plVar10 = *(longlong **)(param_1 + 8);
    if ((plVar10 != (longlong *)0x0) &&
       (iVar5 = (**(code **)(*plVar10 + 0xa0))(plVar10,plVar8), iVar5 == 0)) {
      local_88 = uVar11;
      local_80 = plVar8;
      FUN_1800181f0((longlong *)(param_1 + 0x278),local_58,uVar12,&local_88);
      local_78 = uVar6;
      local_70 = param_4;
      FUN_1800181f0((longlong *)(param_1 + 0x318),local_48,uVar12,&local_78);
    }
    plVar10 = (longlong *)0x1;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 8);
    plVar10 = (longlong *)0x1;
    if ((plVar2 != (longlong *)0x0) &&
       (iVar5 = (**(code **)(*plVar2 + 0xa0))(plVar2,plVar8), iVar5 == 0)) {
      uVar12 = 1;
      uVar11 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                         (*(longlong **)(param_1 + 8),plVar8,1,param_5);
      plVar10 = (longlong *)(uVar11 & 0xffffffff);
      if ((int)uVar11 == 0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,1);
        *param_6 = 1;
        goto LAB_180017160;
      }
    }
    FUN_180017b50(param_1,plVar8);
    local_68 = uVar6;
    local_60 = param_4;
    FUN_1800181f0((longlong *)(param_1 + 0x318),local_38,uVar12,&local_68);
  }
LAB_180017160:
  return (int)plVar10;
}

