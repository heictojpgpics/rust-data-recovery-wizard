// Function: FUN_180034d20
// Address: 180034d20
// Size: 389 bytes


void FUN_180034d20(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  if (param_2 != 0) {
    FUN_18002e900((longlong *)(param_2 + 0x158),&local_res10);
    plVar3 = *(longlong **)(param_2 + 0x158);
    for (; local_res10 != plVar3; local_res10 = (longlong *)*local_res10) {
      plVar12 = (longlong *)local_res10[3];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        plVar12 = (longlong *)local_res10[3];
      }
      puVar4 = (undefined8 *)local_res10[2];
      if (puVar4 != (undefined8 *)0x0) {
        local_res20 = FUN_18002be40(0x20);
        if (local_res20 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)FUN_180026ec0(local_res20);
        }
        puVar11 = (undefined8 *)0x40;
        local_res18 = puVar8;
        puVar9 = (undefined8 *)FUN_18002be40(0x40);
        if (puVar9 != (undefined8 *)0x0) {
          puVar11 = puVar9;
          puVar9 = FUN_1800073c0(puVar9,puVar4);
        }
        *puVar8 = puVar9;
        plVar5 = (longlong *)*param_1;
        plVar6 = (longlong *)plVar5[1];
        lVar10 = FUN_180003da0(puVar11,plVar5,plVar6,&local_res18);
        if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
          std::_Xlength_error("list<T> too long");
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        param_1[1] = param_1[1] + 1;
        plVar5[1] = lVar10;
        *plVar6 = lVar10;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar12 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
    }
  }
  return;
}

