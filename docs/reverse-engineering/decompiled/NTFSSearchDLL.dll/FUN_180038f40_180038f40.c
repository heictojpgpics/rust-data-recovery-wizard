// Function: FUN_180038f40
// Address: 180038f40
// Size: 430 bytes


bool FUN_180038f40(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined7 extraout_var;
  undefined6 extraout_var_00;
  longlong lVar6;
  short *psVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  bVar1 = FUN_180041970(param_2);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar3 = FUN_180041700(param_2);
    *(undefined2 *)(param_1 + 7) = uVar3;
    uVar4 = FUN_1800415a0(param_2);
    if ((int)CONCAT62(extraout_var_00,uVar4) == 0) {
      *(short *)(param_1 + 7) = *(short *)(param_1 + 7) + -1;
    }
    lVar6 = FUN_180041850(param_2,0x30,0);
    if (lVar6 != 0) {
      psVar7 = (short *)FUN_180043870(lVar6);
      cVar2 = FUN_180043830(lVar6);
      if ((psVar7 != (short *)0x0) && (cVar2 != '\0')) {
        *(bool *)((longlong)param_1 + 0x3a) = *psVar7 == 0x24;
      }
      uVar8 = FUN_1800437f0(lVar6);
      param_1[8] = uVar8;
      uVar8 = FUN_180043770(lVar6);
      param_1[9] = uVar8;
    }
    puVar9 = (undefined4 *)FUN_180041850(param_2,0x90,0);
    if (puVar9 != (undefined4 *)0x0) {
      uVar10 = FUN_180045e90(puVar9);
      param_1[6] = uVar10;
    }
    lVar6 = FUN_180041850(param_2,0xa0,0);
    if (((lVar6 != 0) && (uVar5 = FUN_180045480(lVar6), 0 < (int)uVar5)) &&
       (uVar8 = FUN_1800439f0(lVar6,(ulonglong)uVar5,(longlong)(param_1 + 1)), (int)uVar8 != 0)) {
      uVar8 = FUN_180043910(lVar6);
      if ((int)uVar8 == 0) {
        return true;
      }
      *(int *)(param_1 + 5) = (int)uVar8;
      *param_1 = param_4;
      uVar8 = FUN_180041610(param_2);
      param_1[3] = uVar8;
      uVar8 = FUN_1800415d0(param_2);
      if ((int)uVar8 != 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 1;
        uVar5 = FUN_180041820(param_2);
        *(uint *)(param_1 + 4) = uVar5;
        if (param_1[6] == -1) {
          param_1[6] = (ulonglong)uVar5;
        }
      }
      return param_1[6] != 5 && param_1[6] != -1;
    }
  }
  return false;
}

