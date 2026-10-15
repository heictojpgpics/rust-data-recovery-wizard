// Function: FUN_18001b9c0
// Address: 18001b9c0
// Size: 349 bytes


void FUN_18001b9c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined7 extraout_var;
  
  plVar6 = (longlong *)*param_2;
  if (plVar6 != (longlong *)0x0) {
    if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
      if ((ushort *)plVar6[9] == (ushort *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = FUN_180033aa0((ushort *)plVar6[9]);
      }
    }
    else {
      puVar3 = (undefined8 *)(*(code *)((undefined **)*plVar6)[0xf])();
    }
    plVar6 = param_2 + 1;
    puVar4 = (undefined8 *)FUN_180005f00(plVar6);
    param_2[1] = (longlong)puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_180006090(plVar6,puVar4);
    }
    bVar1 = FUN_180005ef0(param_2 + 1);
    if (bVar1) {
      lVar5 = FUN_180005f00(param_2 + 1);
      plVar6 = FUN_1800340b0(lVar5);
      while (plVar6 != (longlong *)0x0) {
        if ((param_2[4] == -1) && (lVar5 = *plVar6, param_2[4] = lVar5, lVar5 < 1)) {
          *(undefined1 *)((longlong)param_2 + 0x29) = 0;
          return;
        }
        if ((char)param_2[5] == '\0') {
          *(bool *)(param_2 + 5) = *plVar6 == -1;
        }
        param_2[3] = param_2[3] + 1;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
        param_2[2] = param_2[2] + (ulonglong)*(uint *)(param_1 + 0x18) * plVar6[1] * (longlong)iVar2
        ;
        lVar5 = FUN_180005f00(param_2 + 1);
        plVar6 = (longlong *)0x0;
        *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
        bVar1 = FUN_1800341c0(lVar5);
        if ((int)CONCAT71(extraout_var,bVar1) == 0) {
          puVar3 = *(undefined8 **)(lVar5 + 0x30);
          if (puVar3 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)*puVar3;
          }
          plVar6 = *(longlong **)
                    (*(longlong *)
                      (puVar3[1] + (*(ulonglong *)(lVar5 + 0x40) >> 1 & puVar3[2] - 1) * 8) +
                    (ulonglong)((uint)*(ulonglong *)(lVar5 + 0x40) & 1) * 8);
        }
      }
    }
  }
  return;
}

