// Function: FUN_1800319c0
// Address: 1800319c0
// Size: 115 bytes


undefined * FUN_1800319c0(longlong param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 0x40);
  if (puVar2 == (undefined *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
        puVar2 = &DAT_18004c788;
        if (*(undefined **)((longlong)plVar1 + 0x11) != (undefined *)0x0) {
          puVar2 = *(undefined **)((longlong)plVar1 + 0x11);
        }
        return puVar2;
      }
      puVar3 = (undefined *)(*(code *)((undefined **)*plVar1)[2])();
      puVar2 = &DAT_18004c788;
      if (puVar3 != (undefined *)0x0) {
        puVar2 = puVar3;
      }
      return puVar2;
    }
    puVar2 = &DAT_18004c788;
  }
  return puVar2;
}

