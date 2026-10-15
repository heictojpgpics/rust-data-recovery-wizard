// Function: FUN_18001d960
// Address: 18001d960
// Size: 447 bytes


ulonglong FUN_18001d960(longlong param_1,longlong *param_2,byte *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *local_res18;
  
  if ((param_3 == (byte *)0x0) || (*(longlong *)(param_1 + 8) == 0)) {
LAB_18001da13:
    return in_RAX & 0xffffffffffffff00;
  }
  local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,param_4);
  cVar1 = FUN_18001d5f0(param_1,param_3,(int *)&local_res18);
  in_RAX = CONCAT71(extraout_var,cVar1);
  if (cVar1 == '\0') goto LAB_18001da13;
  local_res18 = (undefined8 *)FUN_18003ec54(0x48);
  plVar9 = (longlong *)0x0;
  plVar3 = plVar9;
  if (local_res18 != (undefined8 *)0x0) {
    plVar3 = FUN_180034760(local_res18);
  }
  if (((plVar3 != (longlong *)0x0) &&
      (uVar4 = FUN_1800347d0((longlong)plVar3,(longlong)param_3,param_4), (int)uVar4 != 0)) &&
     ((plVar5 = FUN_1800340b0((longlong)plVar3), plVar5 == (longlong *)0x0 || (*plVar5 < 0)))) {
    in_RAX = (**(code **)*plVar3)(plVar3,1);
    goto LAB_18001da13;
  }
  uVar8 = 1;
  if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
    lVar6 = *(longlong *)((longlong)param_2 + 0x1b);
  }
  else {
    lVar6 = (*(code *)((undefined **)*param_2)[3])(param_2);
  }
  if (lVar6 == 0) {
    plVar5 = FUN_1800340b0((longlong)plVar3);
    if ((plVar5 != (longlong *)0x0) && (*plVar5 == 0)) {
      uVar8 = 0;
      goto LAB_18001daf8;
    }
    lVar6 = -1;
    plVar7 = plVar9;
    while (plVar5 != (longlong *)0x0) {
      if (lVar6 == -1) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
        lVar6 = (ulonglong)*(uint *)(param_1 + 0x18) * (longlong)iVar2 * *plVar5;
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
      plVar7 = (longlong *)
               ((longlong)plVar7 +
               (ulonglong)*(uint *)(param_1 + 0x18) * plVar5[1] * (longlong)iVar2);
      plVar9 = (longlong *)((longlong)plVar9 + plVar5[1]);
      plVar5 = (longlong *)FUN_180034150((longlong)plVar3);
    }
    *(longlong **)((longlong)param_2 + 0x1b) = plVar7;
  }
  if ((0 < (longlong)*(longlong **)(param_1 + 0x70)) && (plVar9 < *(longlong **)(param_1 + 0x70))) {
    FUN_180003250((longlong)param_2,plVar3);
    *(byte *)((longlong)param_2 + 0x72) = *(byte *)((longlong)param_2 + 0x72) | 4;
  }
LAB_18001daf8:
  if (plVar3 == (longlong *)0x0) {
    return uVar8;
  }
  (**(code **)*plVar3)(plVar3,1);
  return uVar8;
}

