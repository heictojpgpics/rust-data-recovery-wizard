// Function: FUN_18000a790
// Address: 18000a790
// Size: 264 bytes


ulonglong FUN_18000a790(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (((param_3 == 0) || (param_2 == 0)) || (*(int *)(param_3 + 8) != 3)) {
    return 0;
  }
  plVar1 = *(longlong **)(param_2 + 0x30);
  uVar4 = 1;
  if (plVar1 == (longlong *)0x0) {
LAB_18000a81f:
    if (*(longlong *)(param_2 + 0x48) == 5) {
      if (*(longlong *)(param_1 + 0x110) != param_3) {
        FUN_18000d570(param_1,param_3);
      }
      lVar3 = FUN_18000d4f0(param_1,*(longlong *)(param_3 + 0x10),*(uint *)(param_3 + 0xc),
                            *(longlong *)(param_2 + 0x58));
      if (lVar3 == 0) {
        *(undefined8 *)(param_2 + 0x48) = 0xffffffffffffffff;
      }
    }
  }
  else {
    if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
      uVar2 = (uint)*(byte *)((longlong)plVar1 + 0x3f);
    }
    else {
      uVar2 = (*(code *)((undefined **)*plVar1)[0x11])(plVar1);
    }
    if (uVar2 == 0) {
      if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
        lVar3 = *(longlong *)((longlong)plVar1 + 0x1b);
      }
      else {
        lVar3 = (*(code *)((undefined **)*plVar1)[3])(plVar1);
      }
      if (-1 < lVar3) goto LAB_18000a81f;
    }
    uVar4 = FUN_18000d840(param_1,param_2,param_3);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}

