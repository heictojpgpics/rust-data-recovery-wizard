// Function: FUN_180059a70
// Address: 180059a70
// Size: 285 bytes


void FUN_180059a70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x38);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  do {
    *(longlong *)(param_1 + 0x38) = plVar6[10];
    if (plVar6 == *(longlong **)(param_1 + 0x40)) {
      *(longlong *)(param_1 + 0x40) = (*(longlong **)(param_1 + 0x40))[9];
    }
    if (plVar6[9] != 0) {
      *(longlong *)(plVar6[9] + 0x50) = plVar6[10];
    }
    if (plVar6[10] != 0) {
      *(longlong *)(plVar6[10] + 0x48) = plVar6[9];
    }
    plVar6[10] = 0;
    plVar6[9] = 0;
    plVar6[2] = 0;
    lVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
    if (lVar4 == 0) {
      lVar4 = plVar6[1];
      iVar1 = *(int *)(lVar4 + 0x104);
      if (0 < iVar1) {
        lVar2 = *(longlong *)(lVar4 + 0xa8);
        lVar5 = 0;
        do {
          if (plVar6 == *(longlong **)(lVar2 + lVar5 * 8)) {
            *(undefined8 *)(lVar2 + lVar5 * 8) = *(undefined8 *)(lVar2 + -8 + (longlong)iVar1 * 8);
            *(int *)(lVar4 + 0x104) = *(int *)(lVar4 + 0x104) + -1;
            break;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar1);
      }
    }
    plVar3 = (longlong *)plVar6[0xc];
    (**(code **)(*plVar6 + 0x78))(plVar6,0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar6 = *(longlong **)(param_1 + 0x38);
    if (plVar6 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return;
    }
  } while( true );
}

