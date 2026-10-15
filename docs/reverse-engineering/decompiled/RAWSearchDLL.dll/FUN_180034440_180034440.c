// Function: FUN_180034440
// Address: 180034440
// Size: 285 bytes


undefined8 FUN_180034440(undefined8 param_1,char *param_2,int param_3,int *param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = 0;
  iVar5 = 0;
  iVar6 = 0;
  pcVar4 = param_2 + param_3;
  iVar7 = 0x1f;
  piVar2 = (int *)(pcVar4 + -1);
  do {
    if (*piVar2 != 0) break;
    if (*(int *)((longlong)piVar2 + -1) != 0) {
      iVar6 = iVar6 + 1;
      break;
    }
    if (*(int *)((longlong)piVar2 + -2) != 0) {
      iVar6 = iVar6 + 2;
      break;
    }
    if (*(int *)((longlong)piVar2 + -3) != 0) {
      iVar6 = iVar6 + 3;
      break;
    }
    piVar2 = piVar2 + -1;
    iVar6 = iVar6 + 4;
    iVar7 = iVar7 + -4;
  } while (-1 < iVar7);
  if (*(short *)(param_2 + ((longlong)param_3 - (longlong)iVar6) + -2) == -0x2601) {
    iVar5 = param_3 - iVar6;
    uVar3 = 1;
  }
  else {
    pcVar1 = pcVar4;
    if (iVar6 == 0) {
      if ((*(short *)(param_2 + ((longlong)param_3 - (longlong)iVar6) + -2) + 0x1001U & 0xefff) != 0
         ) goto joined_r0x000180034516;
    }
    else if (iVar6 < 1) goto joined_r0x000180034516;
    for (; param_2 <= pcVar1; pcVar1 = pcVar1 + -1) {
      if ((*pcVar1 == -1) && (pcVar1[1] == DAT_180068025)) {
        iVar5 = ((int)pcVar1 - (int)param_2) + 2;
        break;
      }
    }
    if (iVar5 != 0) {
      uVar3 = 1;
    }
  }
  *param_4 = iVar5;
joined_r0x000180034516:
  do {
    iVar7 = 0;
    if (pcVar4 < param_2) {
LAB_180034541:
      if (iVar7 != 0) {
        uVar3 = 1;
      }
      *param_4 = iVar7;
      return uVar3;
    }
    if ((*pcVar4 == -1) && (pcVar4[1] == DAT_180068025)) {
      iVar7 = ((int)pcVar4 - (int)param_2) + 2;
      goto LAB_180034541;
    }
    pcVar4 = pcVar4 + -1;
  } while( true );
}

