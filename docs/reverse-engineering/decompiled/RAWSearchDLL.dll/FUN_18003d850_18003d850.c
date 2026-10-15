// Function: FUN_18003d850
// Address: 18003d850
// Size: 456 bytes


undefined8
FUN_18003d850(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar12 = *(longlong *)(param_1 + 8);
  uVar8 = (ulonglong)param_3;
  uVar11 = uVar8 * (param_4 - lVar12);
  if (uVar11 < (ulonglong)(*(longlong *)(param_1 + 0x148) * 10)) {
    uVar13 = ((param_4 - lVar12) + 1) * uVar8;
    iVar9 = 0;
    *(ulonglong *)(param_1 + 0x140) = uVar13;
    do {
      uVar4 = *(ulonglong *)(param_1 + 0x110);
      iVar9 = iVar9 + 1;
      if (uVar13 <= uVar4) {
        return 1;
      }
      if (*(int *)(param_1 + 0x13c) == 0) {
        uVar7 = uVar4 % uVar8;
      }
      else {
        *(undefined4 *)(param_1 + 0x13c) = 0;
        uVar7 = uVar4 - uVar11;
      }
      lVar1 = uVar7 + param_2;
      if ((((*(char *)(uVar7 + param_2) != 'O') || (*(char *)(lVar1 + 1) != 'g')) ||
          (*(char *)(lVar1 + 2) != 'g')) || (*(char *)(lVar1 + 3) != 'S')) break;
      if ((*(longlong *)(param_5 + 8) - lVar12) * uVar8 < uVar4 + 0x310) {
        *(undefined4 *)(param_1 + 0x13c) = 1;
        return 1;
      }
      uVar6 = *(uint *)(lVar1 + 0x18) >> 0x10;
      bVar5 = (byte)(*(uint *)(lVar1 + 0x18) >> 0x10);
      if (bVar5 == 0) {
        return 0;
      }
      *(ulonglong *)(param_1 + 0x110) = uVar4 + 0x1b;
      if ((longlong)(*(longlong *)(param_5 + 8) * uVar8) <
          (longlong)(((ulonglong)uVar6 & 0xff) + uVar4 + 0x1b)) {
        return 1;
      }
      uVar3 = 0;
      uVar10 = 0x1b;
      if (bVar5 != 0) {
        do {
          bVar2 = false;
          do {
            if (bVar5 <= uVar3) break;
            uVar4 = (ulonglong)uVar10;
            uVar10 = uVar10 + 1;
            if (*(byte *)(uVar4 + lVar1) != 0xff) {
              bVar2 = true;
            }
            uVar3 = uVar3 + 1;
            *(longlong *)(param_1 + 0x110) =
                 *(longlong *)(param_1 + 0x110) + (ulonglong)*(byte *)(uVar4 + lVar1) + 1;
          } while (!bVar2);
        } while (uVar3 < (uVar6 & 0xff));
        lVar12 = *(longlong *)(param_1 + 8);
      }
    } while (iVar9 < 0x201);
    *(undefined4 *)(param_1 + 0x18) = 0x52;
  }
  return 0;
}

