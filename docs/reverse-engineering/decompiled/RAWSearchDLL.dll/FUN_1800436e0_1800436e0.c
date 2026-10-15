// Function: FUN_1800436e0
// Address: 1800436e0
// Size: 368 bytes


uint * FUN_1800436e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong local_28 [4];
  
  FUN_1800428b0(local_28,param_3,*(undefined8 *)(param_2 + 8));
  puVar3 = (uint *)FUN_180042930(local_28,0);
  if ((puVar3 != (uint *)0x0) &&
     (puVar3 = (uint *)FUN_180042930(local_28,0x34), puVar3 != (uint *)0x0)) {
    uVar7 = *puVar3;
    puVar3 = (uint *)FUN_180042930(local_28,(ulonglong)uVar7);
    if ((puVar3 != (uint *)0x0) &&
       ((puVar3 = (uint *)FUN_180042930(local_28,0x28), puVar3 != (uint *)0x0 &&
        (puVar3 = (uint *)FUN_180042930(local_28,(ulonglong)(uVar7 + (*puVar3 - 1) * 8)),
        puVar3 != (uint *)0x0)))) {
      uVar7 = *puVar3;
      uVar6 = (ulonglong)(uVar7 + 0x3c);
      puVar3 = (uint *)FUN_180042930(local_28,(ulonglong)uVar7);
      if (puVar3 != (uint *)0x0) {
        if (puVar3[8] != 0) {
          puVar4 = (uint *)FUN_180042930(local_28,(ulonglong)(uVar7 + 0x3c));
          if (puVar4 == (uint *)0x0) {
            return (uint *)0x0;
          }
          if (*puVar4 == puVar3[8]) {
            uVar6 = (ulonglong)(uVar7 + 0x3c + *puVar4);
          }
        }
        puVar3 = (uint *)FUN_180042930(local_28,uVar6);
        if (puVar3 != (uint *)0x0) {
          uVar1 = *puVar3;
          puVar3 = (uint *)FUN_180042930(local_28,(ulonglong)((int)uVar6 + 4));
          if (puVar3 != (uint *)0x0) {
            if ((uVar1 != 0) && (*puVar3 != 0)) {
              piVar5 = (int *)FUN_180042930(local_28,(ulonglong)uVar1 - 8);
              if (piVar5 == (int *)0x0) {
                return (uint *)0x0;
              }
              iVar2 = *piVar5;
              piVar5 = (int *)FUN_180042930(local_28,(ulonglong)uVar1 - 4);
              if (piVar5 == (int *)0x0) {
                return (uint *)0x0;
              }
              uVar7 = iVar2 + *piVar5;
            }
            *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar7;
            puVar3 = (uint *)0x1;
          }
        }
      }
    }
  }
  return puVar3;
}

