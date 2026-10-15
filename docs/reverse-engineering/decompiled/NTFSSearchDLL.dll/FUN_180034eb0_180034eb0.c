// Function: FUN_180034eb0
// Address: 180034eb0
// Size: 146 bytes


longlong * FUN_180034eb0(longlong *param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  plVar5 = *(longlong **)*param_1;
  if (plVar5 != (longlong *)*param_1) {
    do {
      plVar1 = (longlong *)plVar5[2];
      lVar2 = *plVar1;
      puVar6 = (undefined8 *)(lVar2 + 0x28);
      bVar3 = FUN_180040b50((longlong)puVar6);
      if ((int)CONCAT71(extraout_var,bVar3) != 0) {
        puVar6 = (undefined8 *)(lVar2 + 8);
      }
      uVar4 = FUN_1800401a0(puVar6,(param_4 - param_2) / (longlong)(ulonglong)param_3);
      if ((int)uVar4 != 0) {
        return plVar1;
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)*param_1);
  }
  return (longlong *)0x0;
}

