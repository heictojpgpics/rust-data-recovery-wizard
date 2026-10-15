// Function: FUN_180057cd0
// Address: 180057cd0
// Size: 432 bytes


void FUN_180057cd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    FUN_18005cc00(*(longlong **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  plVar4 = (longlong *)**(longlong **)(param_1 + 0x70);
  if (plVar4 != *(longlong **)(param_1 + 0x70)) {
    do {
      puVar2 = (undefined8 *)plVar4[5];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        plVar4[5] = 0;
      }
      plVar6 = (longlong *)plVar4[2];
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x19);
        plVar4 = plVar6;
        plVar6 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar4 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar5 = (longlong *)plVar4[1];
        plVar6 = plVar4;
        while ((plVar4 = plVar5, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar5 = (longlong *)plVar4[1];
          plVar6 = plVar4;
        }
      }
    } while (plVar4 != *(longlong **)(param_1 + 0x70));
  }
  FUN_180057fc0((longlong *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)(param_1 + 0x88);
  plVar6 = (longlong *)*plVar4;
  plVar5 = (longlong *)*plVar6;
  if (plVar5 != plVar6) {
    do {
      puVar2 = (undefined8 *)plVar5[8];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        plVar5[8] = 0;
      }
      plVar6 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x19);
        plVar5 = plVar6;
        plVar6 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar5 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar3 = (longlong *)plVar5[1];
        plVar6 = plVar5;
        while ((plVar5 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar3 = (longlong *)plVar5[1];
          plVar6 = plVar5;
        }
      }
      plVar6 = (longlong *)*plVar4;
    } while (plVar5 != plVar6);
  }
  FUN_180058050(plVar4,(longlong *)plVar6[1]);
  *(longlong **)(*plVar4 + 8) = plVar6;
  *(longlong **)*plVar4 = plVar6;
  *(longlong **)(*plVar4 + 0x10) = plVar6;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(longlong *)(param_1 + 0x98) = *plVar4;
  return;
}

