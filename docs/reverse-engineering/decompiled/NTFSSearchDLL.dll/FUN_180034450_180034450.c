// Function: FUN_180034450
// Address: 180034450
// Size: 191 bytes


void FUN_180034450(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  if ((((int)*(longlong *)(param_1 + 0x20) + (int)uVar3 & 1U) == 0) &&
     (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 0x20) + 2U >> 1)) {
    FUN_1800331d0(param_1,param_2);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 2 - 1U & uVar3;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  uVar3 = *(longlong *)(param_1 + 0x20) + uVar3;
  lVar1 = (*(longlong *)(param_1 + 0x10) - 1U & uVar3 >> 1) * 8;
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar4 + lVar1) == 0) {
    uVar2 = FUN_18002be40(0x10);
    *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 8)) = uVar2;
    lVar4 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 *)(*(longlong *)(lVar1 + lVar4) + (ulonglong)((uint)uVar3 & 1) * 8) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}

