// Function: FUN_180045bd0
// Address: 180045bd0
// Size: 106 bytes


undefined8 FUN_180045bd0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_180045690(param_1);
  FUN_1800456c0(param_1);
  if ((ulonglong)(longlong)param_2 < (ulonglong)uVar1 + 0x54) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + (ulonglong)uVar1 + 0x18);
  }
  return uVar2;
}

