// Function: FUN_18004c480
// Address: 18004c480
// Size: 259 bytes


ulonglong FUN_18004c480(longlong param_1,longlong param_2,longlong *param_3,ulonglong *param_4,
                       uint param_5)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  short *psVar7;
  longlong lVar8;
  
  uVar6 = *param_4;
  do {
    while( true ) {
      if (((longlong)(ulonglong)param_5 <= (longlong)uVar6) ||
         (piVar4 = (int *)FUN_180042930(param_3,uVar6), piVar4 == (int *)0x0)) goto LAB_18004c56b;
      lVar3 = *(longlong *)(param_1 + 0x50);
      iVar2 = *piVar4;
      lVar8 = (longlong)*param_4 % lVar3;
      lVar5 = lVar3 - lVar8;
      sVar1 = *(short *)((longlong)piVar4 + lVar5 + -2);
      if (sVar1 != 0) break;
      if (*(int *)((longlong)piVar4 + lVar5 + -6) == 0) goto LAB_18004c511;
LAB_18004c501:
      if (0 < lVar8) {
        lVar3 = lVar5;
      }
      uVar6 = lVar3 + *param_4;
      *param_4 = uVar6;
    }
    if (sVar1 != -0x2601) goto LAB_18004c501;
LAB_18004c511:
    if (sVar1 == -0x2601) goto LAB_18004c56b;
    psVar7 = FUN_18004b070((short *)piVar4,(int)lVar5);
    if (psVar7 != (short *)0x0) {
      *param_4 = (longlong)psVar7 + *param_4 + (2 - (longlong)piVar4);
LAB_18004c56b:
      *(undefined4 *)(param_2 + 0x18) = 0x23;
      return *param_4;
    }
    if (iVar2 == 0xd9) {
      *param_4 = *param_4 + 2;
      goto LAB_18004c56b;
    }
    *param_4 = *param_4 + *(longlong *)(param_1 + 0x50);
    uVar6 = *param_4;
  } while( true );
}

