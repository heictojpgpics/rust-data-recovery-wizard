// Function: FUN_180031960
// Address: 180031960
// Size: 94 bytes


ushort FUN_180031960(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_1 + 8))();
  if ((iVar3 != 0) || ((*(byte *)((longlong)param_1 + 0x72) & 4) != 0)) {
    return 1;
  }
  plVar1 = (longlong *)param_1[6];
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
    return *(ushort *)((longlong)plVar1 + 0x23) >> 4 & 1;
  }
  bVar2 = (*(code *)((undefined **)*plVar1)[7])();
  return bVar2 >> 4 & 0xff01;
}

