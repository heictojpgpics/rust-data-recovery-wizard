// Function: FUN_180003690
// Address: 180003690
// Size: 623 bytes


undefined8 FUN_180003690(longlong param_1,longlong *param_2,undefined8 param_3,undefined *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int local_res8 [2];
  longlong local_res10;
  undefined8 *local_res18 [2];
  
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x19,2,param_4,0xfffffffffffffffe);
  if (*(ushort *)(param_1 + 0x19) != 0) {
    uVar4 = FUN_18002be40((ulonglong)*(ushort *)(param_1 + 0x19) + 1);
    *(undefined8 *)(param_1 + 0x11) = uVar4;
    param_4 = *(undefined **)(*param_2 + 0x70);
    (*(code *)param_4)(param_2,uVar4,*(undefined2 *)(param_1 + 0x19));
    *(undefined1 *)((ulonglong)*(ushort *)(param_1 + 0x19) + *(longlong *)(param_1 + 0x11)) = 0;
  }
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x1b,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x23,2);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x25,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x2d,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x35,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x3d,1);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x40,8);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 100,4);
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + 0x60,4);
  puVar11 = (undefined8 *)0x0;
  local_res8[0] = 0;
  uVar4 = 4;
  piVar9 = local_res8;
  (**(code **)(*param_2 + 0x70))(param_2);
  if (local_res8[0] == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    puVar5 = FUN_180033c30(param_2,piVar9,uVar4,param_4);
    *(undefined2 **)(param_1 + 0x48) = puVar5;
  }
  local_res10 = 0;
  (**(code **)(*param_2 + 0x70))(param_2);
  if (local_res10 == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    uVar4 = 0x10;
    puVar6 = (undefined8 *)FUN_18002be40(0x10);
    puVar12 = puVar11;
    local_res18[0] = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar4 = FUN_180003c20(uVar4,(longlong *)0x0,(longlong *)0x0);
      *puVar6 = uVar4;
      puVar12 = puVar6;
    }
    if (0 < local_res10) {
      do {
        puVar6 = (undefined8 *)FUN_18002be40(0x10);
        local_res18[0] = puVar6;
        (**(code **)(*param_2 + 0x70))(param_2,puVar6,8);
        plVar8 = param_2;
        (**(code **)(*param_2 + 0x70))(param_2,puVar6 + 1,8);
        plVar1 = (longlong *)*puVar12;
        plVar2 = (longlong *)plVar1[1];
        lVar7 = FUN_180003da0(plVar8,plVar1,plVar2,local_res18);
        if (puVar12[1] == 0xaaaaaaaaaaaaaa9) {
          std::_Xlength_error("list<T> too long");
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return uVar4;
        }
        puVar12[1] = puVar12[1] + 1;
        plVar1[1] = lVar7;
        *plVar2 = lVar7;
        uVar10 = (int)puVar11 + 1;
        puVar11 = (undefined8 *)(ulonglong)uVar10;
      } while ((int)uVar10 < local_res10);
    }
    *(undefined8 **)(param_1 + 0x50) = puVar12;
  }
  *(undefined1 *)(param_1 + 0x3f) = 0;
  return 1;
}

