// Function: FUN_180003240
// Address: 180003240
// Size: 16 bytes


undefined8 * FUN_180003240(longlong param_1)

{
  char cVar1;
  ushort *puVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *_Memory;
  uint uVar8;
  longlong *plStack_30;
  longlong lStack_28;
  
  puVar2 = *(ushort **)(param_1 + 0x48);
  if (puVar2 == (ushort *)0x0) {
    return (undefined8 *)0x0;
  }
  pcVar3 = *(char **)(puVar2 + 4);
  if (pcVar3 == (char *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    uVar8 = 0;
    cVar1 = *pcVar3;
    puVar6 = puVar5;
    puVar7 = puVar5;
    while (cVar1 != '\0') {
      uVar8 = (int)puVar7 + (*(byte *)((longlong)puVar6 + (longlong)pcVar3) & 0xf) +
              (*(byte *)((longlong)puVar6 + (longlong)pcVar3) >> 4) + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar8;
      puVar6 = (undefined8 *)(longlong)(int)uVar8;
      cVar1 = *(char *)((longlong)puVar6 + (longlong)pcVar3);
    }
    if (*puVar2 == 0) {
      puVar6 = (undefined8 *)FUN_18002be40(0x48);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_180033ee0(puVar6);
        *puVar6 = CNoneResidentNTFSDataRunList::vftable;
        puVar5 = puVar6;
      }
      FUN_1800347d0((longlong)puVar5,*(longlong *)(puVar2 + 4),uVar8 + 1);
    }
    else {
      FUN_180011820((longlong *)&plStack_30);
      FUN_18003fa20(*(longlong *)(puVar2 + 4),uVar8 + 1,(longlong)&plStack_30);
      if (lStack_28 != 0) {
        puVar6 = *(undefined8 **)(*plStack_30 + 0x10);
        puVar7 = (undefined8 *)FUN_18002be40(0x50);
        if (puVar7 != (undefined8 *)0x0) {
          FUN_180033ee0(puVar7);
          *puVar7 = CResidentNTFSDataRunList::vftable;
          *(undefined4 *)(puVar7 + 9) = 0;
          puVar5 = puVar7;
        }
        FUN_180034660((longlong)puVar5,*puVar6,puVar6[2],(uint)*puVar2);
        free(puVar6);
        _Memory = (longlong *)*plStack_30;
        *plStack_30 = (longlong)plStack_30;
        plStack_30[1] = (longlong)plStack_30;
        lStack_28 = 0;
        if (_Memory != plStack_30) {
          do {
            plVar4 = (longlong *)*_Memory;
            free(_Memory);
            _Memory = plVar4;
          } while (plVar4 != plStack_30);
        }
      }
      FUN_180011600((longlong *)&plStack_30);
    }
  }
  return puVar5;
}

