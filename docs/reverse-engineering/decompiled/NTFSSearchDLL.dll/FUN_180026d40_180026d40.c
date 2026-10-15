// Function: FUN_180026d40
// Address: 180026d40
// Size: 155 bytes


longlong FUN_180026d40(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 local_res10;
  
  puVar8 = param_1;
  puVar3 = (undefined8 *)FUN_180002680(param_1);
  plVar7 = (longlong *)*puVar3;
  plVar1 = (longlong *)plVar7[1];
  lVar4 = FUN_180026de0(puVar8,plVar7,plVar1,param_2);
  puVar5 = (ulonglong *)FUN_180002670((longlong)param_1);
  uVar9 = *puVar5;
  lVar6 = FUN_180006390();
  if (lVar6 + ~uVar9 == 0) {
    std::_Xlength_error("list<T> too long");
    pcVar2 = (code *)swi(3);
    lVar4 = (*pcVar2)();
    return lVar4;
  }
  *puVar5 = uVar9 + 1;
  plVar7[1] = lVar4;
  *plVar1 = lVar4;
  plVar7 = FUN_180003b90(param_1,&local_res10);
  lVar4 = *(longlong *)(*plVar7 + 8);
  *plVar7 = lVar4;
  return lVar4 + 0x10;
}

