// Function: FUN_180030700
// Address: 180030700
// Size: 605 bytes


longlong FUN_180030700(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  plVar1 = (longlong *)FUN_180002680(param_1);
  lVar2 = param_2 - *plVar1 >> 3;
  uVar3 = FUN_180002680(param_1);
  uVar4 = FUN_180030c20((longlong)param_1);
  uVar5 = FUN_180030bd0(param_1);
  if (uVar4 == uVar5) {
    FUN_180030960();
  }
  uVar5 = FUN_180030aa0(param_1,uVar4 + 1);
  lVar6 = FUN_180030c60(uVar3,uVar5);
  uVar7 = FUN_18002d070(param_3);
  uVar8 = FUN_18002d070(lVar6 + lVar2 * 8);
  construct<>(uVar3,uVar8,uVar7);
  plVar1 = (longlong *)FUN_180002670((longlong)param_1);
  if (param_2 == *plVar1) {
    puVar9 = (undefined8 *)FUN_180002670((longlong)param_1);
    uVar3 = *puVar9;
    puVar9 = (undefined8 *)FUN_180002680(param_1);
    FUN_180030b30(param_1,*puVar9,uVar3,lVar6);
  }
  else {
    puVar9 = (undefined8 *)FUN_180002680(param_1);
    FUN_180030b90(param_1,*puVar9,param_2,lVar6);
    puVar9 = (undefined8 *)FUN_180002670((longlong)param_1);
    FUN_180030b90(param_1,param_2,*puVar9,lVar6 + 8 + lVar2 * 8);
  }
  FUN_180030980(param_1,lVar6,uVar4 + 1,uVar5);
  plVar1 = (longlong *)FUN_180002680(param_1);
  return *plVar1 + lVar2 * 8;
}

