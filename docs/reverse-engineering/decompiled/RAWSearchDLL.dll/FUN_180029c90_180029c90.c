// Function: FUN_180029c90
// Address: 180029c90
// Size: 510 bytes


int FUN_180029c90(longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  size_t _Size;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_res8 [2];
  
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  iVar11 = 2;
  if (uVar5 < *(ulonglong *)(param_1 + 0x120)) {
    *(ulonglong *)(param_1 + 0x10) = uVar5 + (longlong)param_3;
  }
  else {
    iVar4 = *(int *)(param_5 + 0x14);
    if (((param_3 < iVar4) || (0 < iVar4)) && (iVar11 = 1, iVar4 < param_3)) {
      iVar3 = param_3 - iVar4;
      if (0x1f < iVar4) {
        uVar12 = *(uint *)(param_1 + 0x118);
        _Size = (size_t)(int)uVar12;
        uVar9 = 0;
        local_res8[0] = 0;
        uVar7 = (uint)((longlong)iVar3 / (longlong)(int)uVar12);
        uVar10 = (longlong)iVar3 / (longlong)(int)uVar12 & 0xffffffff;
        uVar6 = _Size;
        if (1 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
          do {
            uVar8 = (uint)uVar10;
            uVar7 = (int)(uVar8 - uVar9) >> 0x1f;
            uVar12 = uVar8;
            if ((int)uVar9 < (int)uVar8) {
              uVar12 = uVar9;
            }
            uVar12 = (int)((uVar8 - uVar9 ^ uVar7) - uVar7) / 2 + uVar12;
            iVar4 = memcmp(local_res8,(void *)((int)((int)uVar6 * uVar12) + param_2),_Size);
            if (iVar4 == 0) {
              uVar10 = (ulonglong)uVar12;
              uVar12 = uVar9;
            }
            uVar9 = uVar12;
            uVar12 = *(uint *)(param_1 + 0x118);
            uVar7 = (uint)uVar10;
            uVar8 = (int)(uVar7 - uVar9) >> 0x1f;
            uVar6 = (ulonglong)uVar12;
          } while (1 < (int)((uVar7 - uVar9 ^ uVar8) - uVar8));
          uVar5 = *(ulonglong *)(param_1 + 0x10);
        }
        if ((int)uVar9 < (int)uVar7) {
          uVar9 = uVar7;
        }
        iVar3 = (uVar9 + 1) * uVar12;
        cVar1 = *(char *)(iVar3 + param_2);
        while (cVar1 == '\0') {
          iVar3 = iVar3 + -1;
          cVar1 = *(char *)(iVar3 + param_2);
        }
        iVar3 = iVar3 + 1;
      }
      uVar5 = (longlong)iVar3 + uVar5;
      *(ulonglong *)(param_1 + 0x10) = uVar5;
    }
    else {
      uVar5 = (longlong)param_3 + uVar5;
      *(ulonglong *)(param_1 + 0x10) = uVar5;
      if (iVar11 != 1) {
        return iVar11;
      }
    }
    uVar6 = (ulonglong)param_3;
    if (*(ulonglong *)(param_1 + 0x110) < uVar5) {
      *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x110);
      iVar11 = 1;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x178);
      if (uVar2 != 0) {
        iVar4 = (int)(uVar5 % uVar6);
        iVar3 = iVar4 - (uint)uVar2;
        iVar4 = (uint)uVar2 + iVar4;
        iVar11 = 0;
        if (-1 < iVar3) {
          iVar11 = iVar3;
        }
        if (param_3 < iVar4) {
          iVar4 = param_3;
        }
        if (iVar11 < iVar4) {
          do {
            iVar3 = memcmp((void *)(iVar11 + param_2),(void *)(param_1 + 0x128),(ulonglong)uVar2);
            if (iVar3 == 0) {
              *(longlong *)(param_1 + 0x10) =
                   *(longlong *)(param_1 + 0x10) +
                   ((longlong)iVar11 - *(ulonglong *)(param_1 + 0x10) % uVar6) + (ulonglong)uVar2;
              return 1;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar4);
        }
        iVar11 = 2;
        *(ulonglong *)(param_1 + 0x120) =
             (*(ulonglong *)(param_1 + 0x10) - *(ulonglong *)(param_1 + 0x10) % uVar6) + uVar6;
      }
    }
  }
  return iVar11;
}

