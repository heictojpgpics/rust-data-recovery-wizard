// Function: FUN_1800230c0
// Address: 1800230c0
// Size: 643 bytes


void FUN_1800230c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  puVar2 = (undefined8 *)param_1[2];
  puVar9 = (undefined8 *)*puVar2;
  do {
    uVar10 = 0;
    if (puVar9 == puVar2) {
      lVar5 = param_1[2];
      FUN_180013110(param_1 + 2,*(longlong **)(lVar5 + 8));
      *(longlong *)(param_1[2] + 8) = lVar5;
      *(longlong *)param_1[2] = lVar5;
      *(longlong *)(param_1[2] + 0x10) = lVar5;
      param_1[3] = 0;
      lVar5 = param_1[5];
      FUN_180013090(param_1 + 5,*(longlong **)(lVar5 + 8),param_3,param_4);
      *(longlong *)(param_1[5] + 8) = lVar5;
      *(longlong *)param_1[5] = lVar5;
      *(longlong *)(param_1[5] + 0x10) = lVar5;
      param_1[6] = 0;
      puVar2 = (undefined8 *)param_1[8];
      for (puVar9 = (undefined8 *)*puVar2; puVar9 != puVar2; puVar9 = (undefined8 *)*puVar9) {
        plVar6 = (longlong *)puVar9[2];
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,1);
        }
      }
      plVar6 = (longlong *)param_1[8];
      plVar8 = (longlong *)*plVar6;
      *plVar6 = (longlong)plVar6;
      *(undefined8 *)(param_1[8] + 8) = param_1[8];
      param_1[9] = 0;
      if (plVar8 != (longlong *)param_1[8]) {
        do {
          plVar6 = (longlong *)*plVar8;
          free(plVar8);
          plVar8 = plVar6;
        } while (plVar6 != (longlong *)param_1[8]);
      }
      FUN_180011140(param_1 + 10);
      lVar5 = param_1[0xf];
      FUN_180012f00(param_1 + 0xf,*(longlong **)(lVar5 + 8),param_3,param_4);
      *(longlong *)(param_1[0xf] + 8) = lVar5;
      *(longlong *)param_1[0xf] = lVar5;
      *(longlong *)(param_1[0xf] + 0x10) = lVar5;
      param_1[0x10] = 0;
      return;
    }
    FUN_180024720((ulonglong *)&local_48,puVar9 + 5);
    plVar6 = local_48;
    uVar11 = (ulonglong)((longlong)plStack_40 + (7 - (longlong)local_48)) >> 3;
    if (plStack_40 < local_48) {
      uVar11 = uVar10;
    }
    plVar8 = local_48;
    if (uVar11 != 0) {
      do {
        plVar3 = (longlong *)*plVar8;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,1);
        }
        plVar8 = plVar8 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
    if (plVar6 != (longlong *)0x0) {
      plVar8 = plVar6;
      if ((0xfff < (local_38 - (longlong)plVar6 & 0xfffffffffffffff8U)) &&
         (plVar8 = (longlong *)plVar6[-1],
         0x1f < (ulonglong)((longlong)plVar6 + (-8 - (longlong)plVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(plVar8);
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
      local_38 = 0;
    }
    puVar4 = (undefined8 *)puVar9[2];
    if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
      cVar1 = *(char *)((longlong)*puVar4 + 0x19);
      puVar9 = puVar4;
      puVar4 = (undefined8 *)*puVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((longlong)*puVar4 + 0x19);
        puVar9 = puVar4;
        puVar4 = (undefined8 *)*puVar4;
      }
    }
    else {
      cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
      puVar7 = (undefined8 *)puVar9[1];
      puVar4 = puVar9;
      while ((puVar9 = puVar7, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar9[2]))) {
        cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
        puVar7 = (undefined8 *)puVar9[1];
        puVar4 = puVar9;
      }
    }
  } while( true );
}

