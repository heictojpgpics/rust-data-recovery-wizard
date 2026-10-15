// Function: FUN_1800309a0
// Address: 1800309a0
// Size: 746 bytes


ulonglong FUN_1800309a0(longlong param_1,byte *param_2,int param_3,undefined8 *param_4,
                       longlong *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  byte local_58 [4];
  int local_54;
  int local_50;
  uint local_44;
  int local_3c;
  int local_38;
  undefined2 local_32;
  
  uVar4 = 0;
  lVar10 = (longlong)param_3;
  uVar2 = 0;
  if (param_4 == *(undefined8 **)(param_1 + 8)) {
    local_32 = 0;
    if ((((*param_2 == 0xff) && ((param_2[1] & 0xe0) == 0xe0)) && ((param_2[2] & 0xf0) != 0xf0)) &&
       (uVar1 = FUN_180049c60(local_58,(longlong)param_2), (int)CONCAT62(extraout_var,uVar1) != 0))
    {
      *(undefined4 *)(param_1 + 0x120) = 1;
    }
    FUN_180030c90(param_1,(char *)param_2,((int)param_5[1] - (int)param_4) * param_3);
    if ((*(longlong *)(param_1 + 0x30) == 0) &&
       (((lVar6 = param_5[1], *(short *)param_2 != DAT_18006bd18 || (param_2[2] != DAT_18006bd1a))
        || (1 < (byte)(param_2[3] - 3))))) {
      if (((*param_2 == 0xff) && ((param_2[1] & 0xe0) == 0xe0)) && ((param_2[2] & 0xf0) != 0xf0)) {
        local_32 = 0;
        uVar1 = FUN_180049c60(local_58,(longlong)param_2);
        if (((int)CONCAT62(extraout_var_00,uVar1) != 0) && (local_54 - 2U < 2)) {
          if (local_44 != 0) {
            uVar2 = ((uint)(*(int *)(&DAT_180068208 +
                                    ((longlong)local_50 + (ulonglong)local_58[0] * 3) * 4) *
                           local_3c) / local_44 + local_38) *
                    *(int *)(&DAT_180068090 + (longlong)local_50 * 4);
          }
          uVar4 = (ulonglong)uVar2;
          if ((0x5621e < uVar4 - 1) || ((lVar6 - (longlong)param_4) * lVar10 < (longlong)uVar4))
          goto LAB_180030b3f;
        }
        if (((param_2[uVar4 + 1] & 0xe0) == 0xe0) &&
           (((((param_2 + uVar4)[2] & 0xf0) != 0xf0 &&
             (uVar1 = FUN_180049c60(local_58,(longlong)(param_2 + uVar4)),
             (int)CONCAT62(extraout_var_01,uVar1) != 0)) && (local_54 - 2U < 2))))
        goto LAB_180030b57;
      }
LAB_180030b3f:
      *(undefined8 *)(param_1 + 0xd0) = 0;
      DAT_180096ef0 = 0;
      return 1;
    }
  }
LAB_180030b57:
  if (*(int *)(param_1 + 0x120) != 0) {
    uVar4 = FUN_180032350(param_1,(longlong *)param_2,param_3,param_4,(longlong)param_5);
    return uVar4;
  }
  lVar6 = (longlong)param_4 - *(longlong *)(param_1 + 8);
  if (0x1f400000 < (ulonglong)((lVar6 + 1) * lVar10)) {
    DAT_180096ef0 = 0;
    return 1;
  }
  uVar2 = *(uint *)((longlong)param_5 + 0x14);
  iVar9 = param_3 - uVar2;
  uVar7 = 0;
  if ((0x1f < (int)uVar2) &&
     (lVar6 = lVar6 * lVar10,
     lVar6 - *(longlong *)(param_1 + 0x110) != 0 && *(longlong *)(param_1 + 0x110) <= lVar6)) {
    iVar3 = param_3 * 2;
    if (param_5[1] + -3 <= (longlong)param_4) {
      iVar3 = param_3;
    }
    pbVar8 = param_2 + -lVar10;
    if (param_5[1] + -3 <= (longlong)param_4) {
      pbVar8 = param_2;
    }
    iVar3 = FUN_1800318b0(param_1,(char *)pbVar8,(ulonglong)uVar2,iVar3,uVar2);
    uVar7 = (uint)(0 < iVar3);
    if (iVar3 < 1) {
      if (((*param_2 != 0) && (*param_2 == param_2[1])) &&
         ((param_2[1] == param_2[2] &&
          ((param_2[2] == param_2[3] && (*param_5 < *(longlong *)(param_1 + 0x138))))))) {
        param_3 = param_3 + 0x40;
        param_2 = param_2 + -0x40;
      }
      uVar5 = FUN_180031c50(param_1,param_2,param_3,*(int *)((longlong)param_5 + 0x14));
      uVar7 = (uint)(0 < (int)uVar5);
    }
  }
  *(undefined8 **)(param_1 + 0x138) = param_4;
  if (uVar7 != 0) {
    DAT_180096ef0 = 0;
    *(longlong *)(param_1 + 0x10) =
         ((longlong)param_4 - *(longlong *)(param_1 + 8)) * lVar10 + (longlong)iVar9;
  }
  return (ulonglong)((uVar7 ^ 1) + 1);
}

