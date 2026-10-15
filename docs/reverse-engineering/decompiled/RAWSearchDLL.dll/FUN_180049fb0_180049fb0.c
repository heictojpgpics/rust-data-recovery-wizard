// Function: FUN_180049fb0
// Address: 180049fb0
// Size: 488 bytes


double FUN_180049fb0(double *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  dVar6 = 0.0;
  switch(param_2) {
  case 1:
    return (double)*(byte *)param_1;
  case 3:
    if (DAT_180118004 != 0) {
      return (double)CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + 1));
    }
    return (double)*(ushort *)param_1;
  case 4:
    if (DAT_180118004 == 0) {
      uVar3 = *(undefined3 *)((longlong)param_1 + 1);
      uVar1 = *(undefined1 *)param_1;
    }
    else {
      uVar3 = CONCAT21(CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + 1)),
                       *(undefined1 *)((longlong)param_1 + 2));
      uVar1 = *(undefined1 *)((longlong)param_1 + 3);
    }
    return (double)CONCAT31(uVar3,uVar1);
  case 5:
  case 10:
    dVar6 = 0.0;
    iVar4 = FUN_180049f60((undefined4 *)((longlong)param_1 + 4));
    if (iVar4 != 0) {
      iVar5 = FUN_180049f60((undefined4 *)param_1);
      return (double)iVar5 / (double)iVar4;
    }
    break;
  case 6:
    return (double)(int)*(char *)param_1;
  case 8:
    if (DAT_180118004 == 0) {
      uVar1 = *(undefined1 *)((longlong)param_1 + 1);
      uVar2 = *(undefined1 *)param_1;
    }
    else {
      uVar1 = *(undefined1 *)param_1;
      uVar2 = *(undefined1 *)((longlong)param_1 + 1);
    }
    return (double)(int)CONCAT11(uVar1,uVar2);
  case 9:
    iVar4 = FUN_180049f60((undefined4 *)param_1);
    return (double)iVar4;
  case 0xb:
    return (double)*(float *)param_1;
  case 0xc:
    dVar6 = *param_1;
  }
  return dVar6;
}

