// Function: FUN_1800312f0
// Address: 1800312f0
// Size: 158 bytes


void FUN_1800312f0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      return;
    }
    iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    if (iVar3 != 0) break;
    plVar1 = (longlong *)plVar1[1];
  }
  if (((ulonglong)*(ushort *)(param_1 + 0x68) < (ulonglong)(plVar1[0x43] - plVar1[0x42] >> 3)) &&
     (plVar2 = *(longlong **)(plVar1[0x42] + (ulonglong)*(ushort *)(param_1 + 0x68) * 8),
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
    return;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  return;
}

