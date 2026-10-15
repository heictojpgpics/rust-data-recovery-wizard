// Function: FUN_18000ce30
// Address: 18000ce30
// Size: 227 bytes


void FUN_18000ce30(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  *(undefined1 *)(param_1 + 0x150) = 1;
  if ((*(int *)((longlong)*(longlong **)(param_1 + 0xc0) + 0x14) == 0) &&
     ((pcVar1 = *(code **)(**(longlong **)(param_1 + 0xc0) + 0x70), pcVar1 == FUN_18000b760 ||
      (cVar3 = (*pcVar1)(), cVar3 == '\0')))) {
    plVar5 = (longlong *)**(longlong **)(param_1 + 0xf8);
    if (plVar5 != *(longlong **)(param_1 + 0xf8)) {
      do {
        plVar2 = (longlong *)plVar5[2];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0,0xffffffffffffffff);
          if ((*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) && (plVar2[2] != 0)) {
            (**(code **)**(undefined8 **)(param_1 + 0x108))();
          }
        }
        plVar5 = (longlong *)*plVar5;
      } while (plVar5 != (longlong *)*(longlong *)(param_1 + 0xf8));
    }
    FUN_18000db40((longlong *)(param_1 + 0xf8));
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    puVar4 = FUN_1800424b0();
    *puVar4 = 0;
  }
  return;
}

