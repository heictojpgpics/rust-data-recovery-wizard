// Function: FUN_180017cf0
// Address: 180017cf0
// Size: 726 bytes


longlong FUN_180017cf0(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                      undefined8 param_5,longlong *param_6,undefined8 *param_7,longlong *param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_98 [2];
  longlong local_90;
  uint local_88 [2];
  undefined4 *local_80;
  undefined4 local_78;
  int local_74;
  uint local_70 [2];
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined4 *local_48;
  
  local_58[1] = 0xfffffffffffffffe;
  uVar9 = 0x200;
  local_88[0] = 0x200;
  lVar6 = 0;
  local_90 = 0;
  if ((param_2 == 0) || (param_7 == (undefined8 *)0x0)) {
    lVar6 = 0x2980005;
    local_90 = lVar6;
  }
  else if ((param_3 & 0x3ff) == 0) {
    if ((longlong *)param_1[2] == (longlong *)0x0) {
      lVar6 = 0x2a30006;
      local_90 = lVar6;
    }
    else {
      local_88[0] = (**(code **)(*(longlong *)param_1[2] + 0x28))();
      uVar9 = (ulonglong)local_88[0];
      if (local_88[0] == 0) {
        lVar6 = 0x2a90006;
        local_90 = lVar6;
      }
    }
  }
  else {
    lVar6 = 0x29d0005;
    local_90 = lVar6;
  }
  if (lVar6 == 0) {
    local_58[0] = param_1[6];
    local_70[0] = *(uint *)((longlong)param_1 + 0x2c);
    local_74 = (int)(0x400 / uVar9);
    if (local_74 == 0) {
      local_74 = 1;
    }
    uVar8 = 0;
    if (param_3 != 0) {
      local_60 = 0;
      do {
        if (((longlong *)param_1[3] != (longlong *)0x0) &&
           (iVar3 = (**(code **)(*(longlong *)param_1[3] + 0x10))(), iVar3 == 0)) {
          return local_90;
        }
        local_98[0] = 0x400;
        if ((0x400 < (uint)uVar9) && (local_98[0] = (uint)uVar9, param_3 - uVar8 < uVar9)) {
          local_98[0] = (int)param_3 - (int)uVar8;
        }
        uVar1 = local_98[0];
        *param_6 = *param_6 + 1;
        piVar7 = (int *)(param_2 + uVar8);
        if (((piVar7 != (int *)0x0) &&
            (((*(char *)((longlong)param_1 + 0x259) != '\0' ||
              (uVar4 = FUN_180034b20(piVar7,local_98[0]), (int)uVar4 == 0)) &&
             (uVar5 = FUN_180041bb0(piVar7,uVar1), (int)uVar5 != 0)))) &&
           (bVar2 = FUN_180041970((longlong)piVar7), (int)CONCAT71(extraout_var,bVar2) == 0)) {
          uVar4 = uVar8 / uVar9;
          uVar10 = param_4 + uVar4;
          if (uVar4 < (ulonglong)(param_8[1] - *param_8 >> 2)) {
            uVar10 = (ulonglong)*(uint *)(*param_8 + uVar4 * 4);
          }
          uVar4 = uVar8 % uVar9 >> 10;
          local_78 = (undefined4)uVar4;
          local_68 = uVar10;
          local_80 = (undefined4 *)FUN_18002be40(0x30);
          if (local_80 == (undefined4 *)0x0) {
            return 0x3a90001;
          }
          *local_80 = 0;
          *(undefined8 *)(local_80 + 2) = 0;
          *(undefined8 *)(local_80 + 4) = 0xffffffffffffffff;
          *(undefined8 *)(local_80 + 6) = 0;
          *(undefined8 *)(local_80 + 8) = 0xffffffffffffffff;
          *(undefined1 *)(local_80 + 10) = 0;
          *(undefined2 *)((longlong)local_80 + 0x2a) = 0xffff;
          local_48 = local_80;
          uVar5 = FUN_1800078a0(local_80,piVar7,uVar1,uVar10,(char)uVar4);
          if ((int)uVar5 == 0) {
            if (local_80 != (undefined4 *)0x0) {
LAB_180017f73:
              FUN_180002090(local_80);
            }
            local_80 = (undefined4 *)0x0;
          }
          else {
            FUN_180017390(param_1,(longlong *)&local_80,param_6,piVar7,local_98,local_58,local_70,
                          param_7,(longlong *)&local_68,(byte *)&local_74,(int *)local_88,&local_78,
                          &local_60);
            if (local_80 != (undefined4 *)0x0) goto LAB_180017f73;
          }
        }
        uVar8 = uVar8 + 0x400;
        lVar6 = local_90;
      } while (uVar8 < param_3);
    }
  }
  return lVar6;
}

