// Function: FUN_180036ee0
// Address: 180036ee0
// Size: 103 bytes


longlong FUN_180036ee0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_4 == 0) {
    lVar1 = 0;
  }
  else {
    uVar3 = (ulonglong)param_4;
    lVar1 = FUN_180040020((undefined8 *)(param_2 + 8),(param_1 - param_3) / (longlong)uVar3);
    lVar1 = lVar1 * uVar3 + (param_1 - param_3) % (longlong)uVar3;
  }
  lVar2 = lVar1 / (longlong)(ulonglong)*(byte *)(param_2 + 0x18);
  if (lVar1 % (longlong)(ulonglong)*(byte *)(param_2 + 0x18) != 0) {
    lVar2 = -1;
  }
  return lVar2;
}

