// Function: FUN_18001c060
// Address: 18001c060
// Size: 63 bytes


void FUN_18001c060(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0xd0);
  lVar3 = (ulonglong)(uVar1 % (ulonglong)(longlong)*(int *)(param_1 + 0x130) != 0) +
          *(longlong *)(param_1 + 8) + uVar1 / (ulonglong)(longlong)*(int *)(param_1 + 0x130);
  if (*(longlong *)(lVar2 + 0x18) < lVar3) {
    *(longlong *)(lVar2 + 0x18) = lVar3;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return;
}

