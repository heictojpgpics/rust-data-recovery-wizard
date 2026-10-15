// Function: FUN_1800198a0
// Address: 1800198a0
// Size: 242 bytes


void FUN_1800198a0(longlong param_1,longlong *param_2,ulonglong *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (((lVar4 != 0) && (uVar5 = (**(code **)(*param_2 + 0x68))(param_2), (uVar5 & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x38) != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
    puVar10 = puVar3;
    puVar9 = (undefined8 *)puVar3[1];
    while (cVar1 == '\0') {
      if ((ulonglong)puVar9[4] < (ulonglong)param_2[0xb]) {
        puVar7 = (undefined8 *)puVar9[2];
        puVar9 = puVar10;
      }
      else {
        puVar7 = (undefined8 *)*puVar9;
      }
      puVar10 = puVar9;
      puVar9 = puVar7;
      cVar1 = *(char *)((longlong)puVar7 + 0x19);
    }
    if ((puVar10 == puVar3) || ((ulonglong)param_2[0xb] < (ulonglong)puVar10[4])) {
      puVar10 = puVar3;
    }
    if ((puVar10 != puVar3) && (lVar4 = puVar10[5], *(longlong *)(lVar4 + 0x28) != 0)) {
      lVar6 = (**(code **)(*param_2 + 0x10))(param_2);
      pcVar8 = *(char **)(lVar4 + 0x28);
      lVar6 = lVar6 - (longlong)pcVar8;
      do {
        cVar1 = *pcVar8;
        cVar2 = pcVar8[lVar6];
        if (cVar1 != cVar2) break;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      if ((cVar1 == cVar2) &&
         (uVar5 = *(ulonglong *)(lVar4 + 8) & 0xffffffffffff, uVar5 != *param_3)) {
        *param_3 = uVar5;
      }
    }
  }
  return;
}

