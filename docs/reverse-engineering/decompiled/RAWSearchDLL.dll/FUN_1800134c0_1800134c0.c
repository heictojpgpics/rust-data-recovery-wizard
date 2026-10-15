// Function: FUN_1800134c0
// Address: 1800134c0
// Size: 561 bytes


undefined8 FUN_1800134c0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  char cVar12;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((int)param_3 < 0x200) {
    return 1;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == param_4) {
    if ((uint *)(param_2 + 0x34) != (uint *)0x0) {
      if (((int *)(param_2 + 0x28) != (int *)0x0) &&
         (puVar11 = (undefined4 *)
                    ((ulonglong)*(uint *)(param_2 + 0x34) +
                    (ulonglong)(*(int *)(param_2 + 0x28) * 8 - 8) + param_2),
         puVar11 != (undefined4 *)0x0)) {
        *(undefined4 *)(param_1 + 0x114) = *puVar11;
        *(undefined1 *)(param_1 + 0x110) = 1;
      }
    }
  }
  else if (*(char *)(param_1 + 0x110) == '\0') {
    return 1;
  }
  cVar12 = *(char *)(param_1 + 0x111);
  if (cVar12 != '\0') goto LAB_18001360a;
  uVar2 = *(uint *)(param_1 + 0x114);
  lVar7 = (ulonglong)uVar2 / (ulonglong)param_3 + lVar4;
  if (param_4 < lVar7) {
    return 2;
  }
  if (param_4 == lVar7) {
    uVar1 = uVar2 + 0x3c;
    *(uint *)(param_1 + 0x118) = uVar1;
    lVar7 = (ulonglong)uVar2 % (ulonglong)param_3 + param_2;
    if (lVar7 == 0) {
      return 1;
    }
    iVar6 = *(int *)(lVar7 + 0x20);
    *(int *)(param_1 + 0x124) = iVar6;
    if ((ulonglong)uVar1 / (ulonglong)param_3 + lVar4 != param_4) {
      *(undefined1 *)(param_1 + 0x128) = 1;
      return 2;
    }
    piVar8 = (int *)((int)(uVar1 % param_3) + param_2);
    if (piVar8 == (int *)0x0) {
      return 1;
    }
    if (iVar6 == *piVar8) {
      iVar6 = uVar2 + 0x3c + iVar6;
LAB_1800135f9:
      *(int *)(param_1 + 0x118) = iVar6;
    }
  }
  else {
    if (*(char *)(param_1 + 0x128) == '\0') {
      return 1;
    }
    if (param_4 != lVar7 + 1) {
      return 1;
    }
    piVar8 = (int *)((int)(*(uint *)(param_1 + 0x118) % param_3) + param_2);
    if (piVar8 == (int *)0x0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x124) == *piVar8) {
      iVar6 = uVar2 + 0x3c + *(int *)(param_1 + 0x124);
      goto LAB_1800135f9;
    }
  }
  *(undefined1 *)(param_1 + 0x111) = 1;
  cVar12 = '\x01';
LAB_18001360a:
  if (*(char *)(param_1 + 0x11c) == '\0') {
    if (cVar12 == '\0') {
      return 2;
    }
    if ((ulonglong)*(uint *)(param_1 + 0x118) / (ulonglong)param_3 + lVar4 != param_4) {
      return 2;
    }
    piVar8 = (int *)((int)(*(uint *)(param_1 + 0x118) % param_3) + param_2);
    if (piVar8 == (int *)0x0) {
      return 1;
    }
    iVar6 = *piVar8;
    *(int *)(param_1 + 0x120) = iVar6;
    if (piVar8 + 1 == (int *)0x0) {
      return 1;
    }
    if ((iVar6 == 0) || (piVar8[1] == 0)) {
      bVar5 = false;
      *(ulonglong *)(param_1 + 0x10) = (ulonglong)*(uint *)(param_1 + 0x114);
      uVar9 = 1;
    }
    else {
      uVar9 = 2;
      bVar5 = true;
    }
    *(undefined1 *)(param_1 + 0x11c) = 1;
    if (!bVar5) {
      return uVar9;
    }
  }
  if (cVar12 == '\0') {
    return 2;
  }
  if (*(char *)(param_1 + 0x11d) == '\0') {
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x120) - 8;
    lVar4 = lVar4 + uVar10 / (ulonglong)(longlong)(int)param_3;
    if (param_4 <= lVar4) {
      if (lVar4 != param_4) {
        return 2;
      }
      piVar8 = (int *)((int)(uVar10 % (ulonglong)(longlong)(int)param_3) + param_2);
      if (piVar8 != (int *)0x0) {
        iVar6 = *piVar8;
        if (piVar8 + 1 != (int *)0x0) {
          iVar3 = piVar8[1];
          *(undefined1 *)(param_1 + 0x11d) = 1;
          *(ulonglong *)(param_1 + 0x10) = (ulonglong)(uint)(iVar3 + iVar6);
        }
      }
    }
    return 1;
  }
  return 2;
}

