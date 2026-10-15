// Function: FUN_1800404a0
// Address: 1800404a0
// Size: 383 bytes


undefined8
FUN_1800404a0(longlong param_1,int *param_2,int param_3,longlong param_4,longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_3;
  lVar5 = param_4 - *(longlong *)(param_1 + 8);
  if ((ulonglong)(lVar6 * lVar5) < *(ulonglong *)(param_1 + 0x118)) {
    iVar1 = *(int *)(lVar6 + -4 + (longlong)param_2);
    if ((iVar1 != 0) && (iVar1 != 0x64434553)) {
      return 1;
    }
    if (iVar1 == 0x64434553) {
      *(longlong *)(param_1 + 0x110) = (lVar5 + 1) * lVar6;
    }
    else {
      piVar3 = FUN_18003ffc0(param_2,param_3);
      if (piVar3 == (int *)0x0) {
        if (*param_5 + 1 < param_4) {
          lVar5 = (longlong)(param_3 / 2);
          piVar3 = FUN_18003ffc0((int *)((longlong)param_2 - lVar5),param_3 / 2 + param_3);
          if (piVar3 != (int *)0x0) {
            lVar2 = (lVar5 - (longlong)param_2) - lVar5;
            iVar1 = *(int *)((longlong)piVar3 + lVar2 + 8 + (longlong)param_2);
            *(ulonglong *)(param_1 + 0xd8) =
                 (ulonglong)*(uint *)((longlong)piVar3 + lVar2 + 0xc + (longlong)param_2);
            *(ulonglong *)(param_1 + 0xe0) =
                 (ulonglong)*(uint *)((longlong)piVar3 + lVar2 + 0x10 + (longlong)param_2);
            uVar4 = (longlong)piVar3 +
                    (ulonglong)(uint)(iVar1 * 0xc) +
                    ((param_4 - *(longlong *)(param_1 + 8)) * lVar6 - lVar5) + 0x10 +
                    (lVar5 - (longlong)param_2);
            if (*(ulonglong *)(param_1 + 0x118) < uVar4) {
              uVar4 = *(ulonglong *)(param_1 + 0x118);
            }
            *(ulonglong *)(param_1 + 0x110) = uVar4;
            return 0;
          }
        }
        return 1;
      }
      iVar1 = piVar3[2];
      *(ulonglong *)(param_1 + 0xd8) = (ulonglong)(uint)piVar3[3];
      *(ulonglong *)(param_1 + 0xe0) = (ulonglong)(uint)piVar3[4];
      uVar4 = (longlong)piVar3 +
              (((param_4 - *(longlong *)(param_1 + 8)) * lVar6 + (ulonglong)(uint)(iVar1 * 0xc)) -
              (longlong)param_2) + 0x10;
      *(ulonglong *)(param_1 + 0x110) = uVar4;
      if (*(ulonglong *)(param_1 + 0x118) < uVar4) {
        *(ulonglong *)(param_1 + 0x110) = *(ulonglong *)(param_1 + 0x118);
      }
    }
  }
  return 0;
}

