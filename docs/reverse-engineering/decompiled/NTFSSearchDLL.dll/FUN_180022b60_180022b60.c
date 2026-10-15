// Function: FUN_180022b60
// Address: 180022b60
// Size: 479 bytes


void FUN_180022b60(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong local_res18;
  undefined8 *local_res20;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_40 = 0xfffffffffffffffe;
  plVar9 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (((((undefined8 *)*param_4 != (undefined8 *)0x0) && (param_2 != 0)) && (0 < param_3)) &&
     ((uVar2 = *(uint *)(param_2 + 0xc), uVar2 != 0 &&
      (lVar4 = param_3 - *(longlong *)(param_2 + 0x10), lVar4 % (longlong)(ulonglong)uVar2 == 0))))
  {
    FUN_1800248e0(local_38,(undefined8 *)*param_4);
    if (local_38[0] != 0) {
      plVar5 = (longlong *)FUN_18002be40(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = lVar4 / (longlong)(ulonglong)uVar2;
        plVar5[1] = 0;
        plVar5[2] = 0x400;
        plVar9 = plVar5;
      }
      FUN_180040150((longlong *)(local_38[0] + 8),(longlong)plVar9);
      *(longlong *)(param_2 + 200) = local_res18;
      lVar4 = param_2 + 0x158;
      puVar6 = (undefined8 *)FUN_180002680(lVar4);
      plVar9 = (longlong *)*puVar6;
      plVar5 = (longlong *)plVar9[1];
      lVar4 = FUN_180024e20(lVar4,plVar9,plVar5,local_38);
      puVar7 = (ulonglong *)FUN_180002670(param_2 + 0x158);
      uVar12 = *puVar7;
      lVar8 = FUN_180006390();
      if (lVar8 + ~uVar12 == 0) {
        std::_Xlength_error("list<T> too long");
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *puVar7 = uVar12 + 1;
      plVar9[1] = lVar4;
      *plVar5 = lVar4;
      plVar9 = *(longlong **)(param_1 + 0x68);
      cVar1 = *(char *)(plVar9[1] + 0x19);
      plVar5 = plVar9;
      plVar11 = (longlong *)plVar9[1];
      while (cVar1 == '\0') {
        if (plVar11[4] < local_res18) {
          plVar10 = (longlong *)plVar11[2];
          plVar11 = plVar5;
        }
        else {
          plVar10 = (longlong *)*plVar11;
        }
        plVar5 = plVar11;
        plVar11 = plVar10;
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
      }
      if ((plVar5 == plVar9) || (local_res18 < plVar5[4])) {
        local_50 = &local_res18;
        plVar9 = (longlong *)FUN_1800252c0((undefined8 *)(param_1 + 0x68),local_res18,&local_50);
        FUN_1800155d0((longlong *)(param_1 + 0x68),&local_48,plVar5,plVar9 + 4,plVar9);
        plVar5 = local_48;
      }
      *(longlong *)(param_2 + 0x180) = plVar5[5];
    }
    FUN_180005f30((longlong)local_38);
  }
  FUN_180005f30((longlong)param_4);
  return;
}

