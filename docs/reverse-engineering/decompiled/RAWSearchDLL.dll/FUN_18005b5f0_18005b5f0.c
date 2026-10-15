// Function: FUN_18005b5f0
// Address: 18005b5f0
// Size: 265 bytes


void FUN_18005b5f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_180059a70(param_1);
  iVar1 = *(int *)(param_1 + 0x104);
  while (iVar1 != 0) {
    plVar2 = (longlong *)**(undefined8 **)(param_1 + 0xa8);
    lVar3 = plVar2[2];
    if (lVar3 == 0) {
      (**(code **)(*(longlong *)plVar2[0xc] + 0x20))();
    }
    else {
      if (plVar2 == *(longlong **)(lVar3 + 0x38)) {
        *(longlong *)(lVar3 + 0x38) = (*(longlong **)(lVar3 + 0x38))[10];
      }
      if (plVar2 == *(longlong **)(lVar3 + 0x40)) {
        *(longlong *)(lVar3 + 0x40) = (*(longlong **)(lVar3 + 0x40))[9];
      }
      if (plVar2[9] != 0) {
        *(longlong *)(plVar2[9] + 0x50) = plVar2[10];
      }
      if (plVar2[10] != 0) {
        *(longlong *)(plVar2[10] + 0x48) = plVar2[9];
      }
      plVar2[10] = 0;
      plVar2[9] = 0;
      plVar2[2] = 0;
    }
    FUN_180059fe0(plVar2);
    iVar1 = *(int *)(param_1 + 0x104);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((*(uint *)(param_1 + 0x78) & 0x200) != 0) {
    free(*(void **)(param_1 + 0x80));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  free(*(void **)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}

