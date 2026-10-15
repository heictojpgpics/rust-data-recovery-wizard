// Function: FUN_18000db30
// Address: 18000db30
// Size: 305 bytes


void FUN_18000db30(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + 0x770);
  plVar2 = (longlong *)*plVar3;
  if (plVar2 != *(longlong **)(param_1 + 0x778)) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1);
      }
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    } while (plVar2 != *(longlong **)(param_1 + 0x778));
  }
  *(longlong *)(param_1 + 0x778) = *plVar3;
  FUN_180018030(plVar3,*(longlong *)(param_1 + 0x428) - *(longlong *)(param_1 + 0x420) >> 3,param_3)
  ;
  memmove((void *)*plVar3,*(void **)(param_1 + 0x420),
          *(longlong *)(param_1 + 0x428) - (longlong)*(void **)(param_1 + 0x420));
  plVar2 = (longlong *)*plVar3;
  if (plVar2 != *(longlong **)(param_1 + 0x778)) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x30))(plVar1,1);
      }
      *plVar2 = 0;
      plVar2 = plVar2 + 1;
    } while (plVar2 != *(longlong **)(param_1 + 0x778));
  }
  *(longlong *)(param_1 + 0x778) = *plVar3;
  plVar3 = *(longlong **)(param_1 + 0x820);
  if (plVar3 != *(longlong **)(param_1 + 0x828)) {
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1);
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != *(longlong **)(param_1 + 0x828));
  }
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_1 + 0x820);
  FUN_1800112c0((longlong *)(param_1 + 0x810));
  return;
}

