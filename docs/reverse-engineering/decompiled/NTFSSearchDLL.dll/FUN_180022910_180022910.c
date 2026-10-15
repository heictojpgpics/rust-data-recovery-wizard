// Function: FUN_180022910
// Address: 180022910
// Size: 390 bytes


void FUN_180022910(longlong *param_1,longlong *param_2,TypeDescriptor *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *_Memory;
  undefined8 *puVar9;
  longlong local_res8;
  
  FUN_180023cb0(param_1,'\x01',param_3);
  puVar9 = (undefined8 *)0x0;
  FUN_180023cb0(param_1,'\0',param_3);
  puVar2 = (undefined8 *)param_1[2];
  puVar3 = (undefined8 *)*puVar2;
  while (puVar3 != puVar2) {
    param_4 = (undefined8 *)puVar3[6];
    param_3 = (TypeDescriptor *)puVar3[5];
    puVar9 = (undefined8 *)param_2[1];
    FUN_180024a40(param_2,puVar9,param_3,(longlong)param_4);
    puVar3[6] = puVar3[5];
    puVar4 = (undefined8 *)puVar3[2];
    if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar4 + 0x19);
      puVar3 = puVar4;
      puVar4 = (undefined8 *)*puVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar4 + 0x19);
        puVar3 = puVar4;
        puVar4 = (undefined8 *)*puVar4;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar6 = (undefined8 *)puVar3[1];
      puVar4 = puVar3;
      while ((puVar3 = puVar6, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar3[2]))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar6 = (undefined8 *)puVar3[1];
        puVar4 = puVar3;
      }
    }
  }
  if (param_1[0xc] != 0) {
    FUN_18000f3f0(param_1[0xc],puVar9,(size_t)param_3,param_4);
  }
  puVar2 = (undefined8 *)param_1[8];
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
    lVar8 = puVar3[2];
    local_res8 = lVar8;
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x30) != 0)) {
      pvVar5 = (void *)param_2[1];
      if ((void *)param_2[2] == pvVar5) {
        FUN_180013520(param_2,pvVar5,&local_res8);
      }
      else {
        plVar7 = (longlong *)FUN_180001100(lVar8,pvVar5);
        *plVar7 = lVar8;
        param_2[1] = param_2[1] + 8;
      }
    }
  }
  plVar7 = (longlong *)param_1[8];
  _Memory = (longlong *)*plVar7;
  *plVar7 = (longlong)plVar7;
  *(longlong *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  if (_Memory != (longlong *)param_1[8]) {
    do {
      plVar7 = (longlong *)*_Memory;
      free(_Memory);
      _Memory = plVar7;
    } while (plVar7 != (longlong *)param_1[8]);
  }
  lVar8 = param_1[2];
  FUN_180013110(param_1 + 2,*(longlong **)(lVar8 + 8));
  *(longlong *)(param_1[2] + 8) = lVar8;
  *(longlong *)param_1[2] = lVar8;
  *(longlong *)(param_1[2] + 0x10) = lVar8;
  param_1[3] = 0;
  return;
}

