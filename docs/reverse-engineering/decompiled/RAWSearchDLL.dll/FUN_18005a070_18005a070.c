// Function: FUN_18005a070
// Address: 18005a070
// Size: 185 bytes


void FUN_18005a070(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (param_2 == *(longlong *)(lVar2 + 0x38)) {
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x50);
    }
    if (param_2 == *(longlong *)(lVar2 + 0x40)) {
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x48);
    }
    if (*(longlong *)(param_2 + 0x48) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if (*(longlong *)(param_2 + 0x50) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 8);
  uVar4 = 0;
  iVar1 = *(int *)(lVar2 + 0x104);
  if (0 < iVar1) {
    lVar3 = *(longlong *)(lVar2 + 0xa8);
    uVar5 = uVar4;
    while (param_2 != *(longlong *)(lVar3 + uVar4 * 8)) {
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar4 = uVar4 + 1;
      if ((longlong)iVar1 <= (longlong)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00018005a107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_2 + 0x60) + 0x20))();
        return;
      }
    }
    *(undefined8 *)(lVar3 + (longlong)(int)uVar5 * 8) =
         *(undefined8 *)(lVar3 + -8 + (longlong)iVar1 * 8);
    *(int *)(lVar2 + 0x104) = *(int *)(lVar2 + 0x104) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00018005a125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_2 + 0x60) + 0x20))();
  return;
}

