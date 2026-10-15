// Function: FUN_18000d4f0
// Address: 18000d4f0
// Size: 124 bytes


longlong FUN_18000d4f0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((param_3 != 0) &&
     (plVar3 = (longlong *)**(longlong **)(param_1 + 0x180),
     plVar3 != *(longlong **)(param_1 + 0x180))) {
    do {
      lVar1 = plVar3[2];
      uVar2 = FUN_1800401a0((undefined8 *)(lVar1 + 8),
                            (param_4 - param_2) / (longlong)(ulonglong)param_3);
      if ((int)uVar2 != 0) {
        return lVar1;
      }
      plVar3 = (longlong *)*plVar3;
    } while (plVar3 != (longlong *)*(longlong *)(param_1 + 0x180));
  }
  return 0;
}

