// Function: FUN_1800039a0
// Address: 1800039a0
// Size: 198 bytes


bool FUN_1800039a0(longlong *param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  
  if (param_3 == 5) {
    return true;
  }
  if (param_2 != (longlong *)0x0) {
    if ((undefined **)*param_1 == CNTFSFileProperties::vftable) {
      bVar1 = (byte)*(undefined2 *)((longlong)param_1 + 0x23);
    }
    else {
      bVar1 = (*(code *)((undefined **)*param_1)[7])();
    }
    if (((bVar1 >> 4 & 1) == 0) || (param_1[0xb] != param_3)) {
      bVar4 = false;
    }
    else {
      if ((undefined **)*param_1 == CNTFSFileProperties::vftable) {
        sVar3 = (short)param_1[0xd] + -1;
        if ((*(byte *)((longlong)param_1 + 0x72) & 8) == 0) {
          sVar3 = (short)param_1[0xd];
        }
      }
      else {
        sVar3 = (*(code *)((undefined **)*param_1)[0x28])(param_1);
      }
      sVar2 = (**(code **)(*param_2 + 0x148))(param_2);
      bVar4 = sVar3 == sVar2;
    }
    return bVar4;
  }
  return false;
}

