// Function: FUN_18003f900
// Address: 18003f900
// Size: 734 bytes


undefined8
FUN_18003f900(undefined4 *param_1,longlong **param_2,int param_3,longlong param_4,longlong *param_5)

{
  undefined8 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar8 = (ulonglong)param_3;
  if ((param_2 != (longlong **)0x0) && (0x1ff < param_3)) {
    *(ulonglong *)(param_1 + 0x48) = ((param_4 - *(longlong *)(param_1 + 2)) + 1) * uVar8;
    lVar7 = (param_5[1] - param_4) * uVar8;
    if (((*param_2 != DAT_1800938b8) ||
        (((*(int *)(param_2 + 1) != DAT_1800938c0 ||
          (*(short *)((longlong)param_2 + 0xc) != DAT_1800938c4)) ||
         (*(ulonglong *)(param_1 + 0x44) < 0x2801)))) &&
       (uVar1 = FUN_18003eec0(param_1,param_2,param_4,param_3,1), (int)uVar1 == 0)) {
      uVar6 = *(ulonglong *)(param_1 + 0x44);
      uVar11 = 0;
      iVar9 = 0;
      do {
        while( true ) {
          if (((uVar8 < uVar6) && (uVar6 % uVar8 == 0)) && (0 < iVar9)) {
            return 1;
          }
          iVar10 = iVar9 + 1;
          if (0x2800 < iVar9) {
            return 0;
          }
          if (*(ulonglong *)(param_1 + 0x48) <= uVar6) {
            return 1;
          }
          uVar3 = uVar6 % uVar8;
          if ((param_5[1] - param_4) * uVar8 < uVar3 + 0x54) {
            param_1[0x46] = 1;
            return 1;
          }
          uVar12 = uVar3;
          if (param_1[0x46] != 0) {
            param_1[0x46] = 0;
            lVar4 = (param_4 - *(longlong *)(param_1 + 2)) * uVar8;
            if ((param_4 - *param_5) * uVar8 < lVar4 - uVar6) {
              return 0;
            }
            uVar3 = uVar6 - lVar4;
            uVar12 = uVar11;
          }
          pplVar5 = (longlong **)((longlong)param_2 + uVar3);
          uVar1 = FUN_18003eec0(param_1,pplVar5,param_4,param_3,2);
          if ((int)uVar1 != 0) {
            return 0;
          }
          uVar6 = *(ulonglong *)(param_1 + 0x44);
          uVar11 = uVar12;
          iVar9 = iVar10;
          if (*(char *)pplVar5 == (char)uVar1) break;
          *(undefined8 *)(param_1 + 0x54) = 0;
          if (uVar6 < 0x401) {
LAB_18003fb0b:
            if ((((longlong)uVar12 < lVar7) && (*pplVar5 == DAT_1800938b8)) &&
               ((*(int *)(pplVar5 + 1) == DAT_1800938c0 &&
                ((*(short *)((longlong)pplVar5 + 0xc) == DAT_1800938c4 && (0x2800 < uVar6)))))) {
              return 0;
            }
          }
          else if ((longlong)uVar12 < lVar7) {
            iVar10 = FUN_18003f250((longlong)param_1,(longlong *)pplVar5);
            if (iVar10 != 0) {
              return 0;
            }
            goto LAB_18003fb0b;
          }
          if (*(int *)pplVar5 == DAT_1800938ac) {
            uVar3 = 0;
            if (pplVar5 != (longlong **)0x0) {
              uVar2 = (ushort)((uint)*(undefined4 *)(pplVar5 + 2) >> 0x10);
              uVar3 = (ulonglong)
                      CONCAT22((ushort)*(undefined4 *)(pplVar5 + 2) >> 8,uVar2 << 8 | uVar2 >> 8);
            }
            uVar6 = uVar6 + 0x14 + uVar3;
            *(ulonglong *)(param_1 + 0x44) = uVar6;
          }
          else {
            uVar1 = FUN_18003eec0(param_1,pplVar5,param_4,param_3,3);
            if ((int)uVar1 != 0) {
              return 0;
            }
            if (*(int *)pplVar5 == 0) {
              return 0;
            }
            *(longlong *)(param_1 + 0x44) = *(longlong *)(param_1 + 0x44) + 1;
            uVar6 = *(ulonglong *)(param_1 + 0x44);
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x54);
        uVar6 = uVar6 + 1;
        *(ulonglong *)(param_1 + 0x44) = uVar6;
        *(longlong *)(param_1 + 0x54) = lVar4 + 1;
      } while (lVar4 < 0x2801);
    }
  }
  return 0;
}

