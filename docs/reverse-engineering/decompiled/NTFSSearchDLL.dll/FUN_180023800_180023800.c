// Function: FUN_180023800
// Address: 180023800
// Size: 352 bytes


longlong * FUN_180023800(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *_Memory;
  longlong *local_30;
  undefined8 local_28;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar7 = FUN_1800131d0(param_1,0,0);
  *param_2 = lVar7;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  puVar3 = (undefined8 *)*puVar2;
  while (puVar3 != puVar2) {
    FUN_1800247a0((char *)&local_30,puVar3 + 5);
    FUN_180024d70((char *)param_2,*param_2,(undefined8 *)*local_30,local_30);
    _Memory = (longlong *)*local_30;
    *local_30 = (longlong)local_30;
    local_30[1] = (longlong)local_30;
    local_28 = 0;
    if (_Memory != local_30) {
      do {
        plVar4 = (longlong *)*_Memory;
        free(_Memory);
        _Memory = plVar4;
      } while (plVar4 != local_30);
    }
    free(local_30);
    puVar5 = (undefined8 *)puVar3[2];
    if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar5 + 0x19);
      puVar3 = puVar5;
      puVar5 = (undefined8 *)*puVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar5 + 0x19);
        puVar3 = puVar5;
        puVar5 = (undefined8 *)*puVar5;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
      puVar6 = (undefined8 *)puVar3[1];
      puVar5 = puVar3;
      while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)puVar3[2]))) {
        cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
        puVar6 = (undefined8 *)puVar3[1];
        puVar5 = puVar3;
      }
    }
  }
  return param_2;
}

