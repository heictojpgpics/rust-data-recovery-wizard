// Function: FUN_180035970
// Address: 180035970
// Size: 99 bytes


longlong FUN_180035970(longlong param_1,longlong param_2,int param_3,longlong param_4,
                      longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x138);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar2 = (param_5 - param_4) / 2;
  if (((longlong)((uVar1 - uVar1 % uVar2) + uVar2) <= param_2) && (param_4 < (longlong)uVar1)) {
    lVar3 = lVar3 - (longlong)param_3 * uVar2;
  }
  return lVar3;
}

