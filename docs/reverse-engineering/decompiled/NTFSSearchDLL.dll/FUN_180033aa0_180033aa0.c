// Function: FUN_180033aa0
// Address: 180033aa0
// Size: 397 bytes


undefined8 * FUN_180033aa0(ushort *param_1)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *_Memory;
  uint uVar7;
  longlong *local_30;
  longlong local_28;
  
  pcVar2 = *(char **)(param_1 + 4);
  if (pcVar2 == (char *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x0;
    uVar7 = 0;
    cVar1 = *pcVar2;
    puVar5 = puVar4;
    puVar6 = puVar4;
    while (cVar1 != '\0') {
      uVar7 = (int)puVar6 + (*(byte *)((longlong)puVar5 + (longlong)pcVar2) & 0xf) +
              (*(byte *)((longlong)puVar5 + (longlong)pcVar2) >> 4) + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar7;
      puVar5 = (undefined8 *)(longlong)(int)uVar7;
      cVar1 = *(char *)((longlong)puVar5 + (longlong)pcVar2);
    }
    if (*param_1 == 0) {
      puVar5 = (undefined8 *)FUN_18002be40(0x48);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_180033ee0(puVar5);
        *puVar5 = CNoneResidentNTFSDataRunList::vftable;
        puVar4 = puVar5;
      }
      FUN_1800347d0((longlong)puVar4,*(longlong *)(param_1 + 4),uVar7 + 1);
    }
    else {
      FUN_180011820((longlong *)&local_30);
      FUN_18003fa20(*(longlong *)(param_1 + 4),uVar7 + 1,(longlong)&local_30);
      if (local_28 != 0) {
        puVar5 = *(undefined8 **)(*local_30 + 0x10);
        puVar6 = (undefined8 *)FUN_18002be40(0x50);
        if (puVar6 != (undefined8 *)0x0) {
          FUN_180033ee0(puVar6);
          *puVar6 = CResidentNTFSDataRunList::vftable;
          *(undefined4 *)(puVar6 + 9) = 0;
          puVar4 = puVar6;
        }
        FUN_180034660((longlong)puVar4,*puVar5,puVar5[2],(uint)*param_1);
        free(puVar5);
        _Memory = (longlong *)*local_30;
        *local_30 = (longlong)local_30;
        local_30[1] = (longlong)local_30;
        local_28 = 0;
        if (_Memory != local_30) {
          do {
            plVar3 = (longlong *)*_Memory;
            free(_Memory);
            _Memory = plVar3;
          } while (plVar3 != local_30);
        }
      }
      FUN_180011600((longlong *)&local_30);
    }
  }
  return puVar4;
}

