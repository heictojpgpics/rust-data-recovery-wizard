// Function: FUN_1800355c0
// Address: 1800355c0
// Size: 276 bytes


double FUN_1800355c0(undefined8 param_1,double *param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = 0.0;
  switch(param_3) {
  case 1:
  case 6:
    return (double)*(byte *)param_2;
  case 3:
  case 8:
    if (param_4 != '\0') {
      return (double)*(ushort *)param_2;
    }
    return (double)CONCAT11(*(undefined1 *)param_2,*(undefined1 *)((longlong)param_2 + 1));
  case 4:
  case 9:
    uVar1 = FUN_180042a60((undefined4 *)param_2,param_4);
    return (double)uVar1;
  case 5:
  case 10:
    dVar4 = 0.0;
    iVar2 = FUN_180042a60((undefined4 *)((longlong)param_2 + 4),param_4);
    if (iVar2 != 0) {
      iVar3 = FUN_180042a60((undefined4 *)param_2,param_4);
      return (double)(iVar3 / iVar2);
    }
    break;
  case 0xb:
  case 0xc:
    dVar4 = *param_2;
  }
  return dVar4;
}

