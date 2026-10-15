// Function: FUN_180038fb0
// Address: 180038fb0
// Size: 128 bytes


longlong FUN_180038fb0(longlong param_1,longlong param_2,int param_3,longlong param_4,
                      longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x178);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = (param_5 - param_4) / 2;
  if ((longlong)((*(longlong *)(param_1 + 8) - *(ulonglong *)(param_1 + 8) % uVar1) + uVar1) <=
      param_2) {
    if (*(longlong *)(param_1 + 8) <= param_4) {
      *(undefined4 *)(param_1 + 0x128) = 1;
      return 0;
    }
    lVar2 = lVar2 - (longlong)param_3 * uVar1;
  }
  return lVar2;
}

