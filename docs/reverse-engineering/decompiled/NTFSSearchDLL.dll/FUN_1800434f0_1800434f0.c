// Function: FUN_1800434f0
// Address: 1800434f0
// Size: 128 bytes


undefined8 FUN_1800434f0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1800454a0(param_1,param_2);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_180045290(param_1);
    if (iVar1 == 0x30) {
      uVar2 = FUN_1800433a0((short *)((longlong)param_1 + 0x5a),(uint)*(byte *)(param_1 + 0x16));
      if ((int)uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

