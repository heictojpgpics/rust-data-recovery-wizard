// Function: FUN_180007270
// Address: 180007270
// Size: 225 bytes


void FUN_180007270(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != (longlong *)0x0) {
    if ((undefined **)*param_1 == CNTFSFileProperties::vftable) {
      lVar4 = *(longlong *)((longlong)param_1 + 0x1b);
    }
    else {
      lVar4 = (*(code *)((undefined **)*param_1)[3])();
    }
    if (lVar4 < 0) {
      plVar5 = (longlong *)0x0;
      if ((undefined **)*param_1 == CNTFSFileProperties::vftable) {
        plVar2 = plVar5;
        if ((ushort *)param_1[9] != (ushort *)0x0) {
          plVar2 = FUN_180033aa0((ushort *)param_1[9]);
        }
      }
      else {
        plVar2 = (longlong *)(*(code *)((undefined **)*param_1)[0xf])(param_1);
      }
      if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2), iVar1 == 0)
         ) {
        plVar3 = FUN_1800340b0((longlong)plVar2);
        while (plVar3 != (longlong *)0x0) {
          plVar5 = (longlong *)((longlong)plVar5 + plVar3[1]);
          plVar3 = (longlong *)FUN_180034150((longlong)plVar2);
        }
        *(ulonglong *)((longlong)param_1 + 0x1b) = (param_2 & 0xffffffff) * (longlong)plVar5 * 0x200
        ;
        (**(code **)*plVar2)(plVar2,1);
      }
    }
  }
  return;
}

