// Function: FUN_180026ac0
// Address: 180026ac0
// Size: 640 bytes


void FUN_180026ac0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *local_res18;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [2];
  
  if (param_3 != (longlong *)0x0) {
    puVar10 = *(undefined8 **)*param_1;
    puVar8 = (undefined8 *)puVar10[1];
    local_res18 = puVar10;
    if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
      puVar6 = puVar10;
      puVar7 = puVar8;
      do {
        local_res18 = puVar7;
        lVar2 = *(longlong *)(local_res18[4] + 0x10);
        if ((*(longlong *)(param_2 + 0x10) < lVar2) ||
           ((*(longlong *)(param_2 + 0x10) <= lVar2 &&
            (*(uint *)(param_2 + 0xc) < *(uint *)(local_res18[4] + 0xc))))) {
          puVar7 = (undefined8 *)*local_res18;
        }
        else {
          puVar7 = (undefined8 *)local_res18[2];
          local_res18 = puVar6;
        }
        puVar6 = local_res18;
      } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
      do {
        lVar2 = *(longlong *)(puVar8[4] + 0x10);
        if ((lVar2 < *(longlong *)(param_2 + 0x10)) ||
           ((lVar2 <= *(longlong *)(param_2 + 0x10) &&
            (*(uint *)(puVar8[4] + 0xc) < *(uint *)(param_2 + 0xc))))) {
          puVar7 = (undefined8 *)puVar8[2];
        }
        else {
          puVar7 = (undefined8 *)*puVar8;
          puVar10 = puVar8;
        }
        puVar8 = puVar7;
      } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
    }
    while (puVar10 != local_res18) {
      lVar2 = puVar10[4];
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) == (int)*(short *)((longlong)param_3 + 0x1a))) {
        puVar8 = (undefined8 *)(lVar2 + 0x158);
        puVar6 = puVar8;
        puVar4 = FUN_180003b90(puVar8,&local_78);
        plVar5 = FUN_180003b90(puVar6,&local_70);
        puVar7 = (undefined8 *)*plVar5;
        puVar6 = (undefined8 *)FUN_180002680(puVar6);
        for (puVar6 = *(undefined8 **)*puVar6; puVar6 != puVar7; puVar6 = (undefined8 *)*puVar6) {
          local_68 = FUN_1800065b0(local_48,puVar6 + 2);
          lVar2 = *(longlong *)*local_68;
          lVar3 = *param_3;
          FUN_180005f30((longlong)local_68);
          if (lVar2 == lVar3) break;
        }
        if ((undefined8 *)*puVar4 == puVar6) {
          uVar9 = 0x50;
          puVar7 = (undefined8 *)FUN_18002be40(0x50);
          local_60 = puVar7;
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            *(undefined4 *)(puVar7 + 1) = 1;
            *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
            *puVar7 = std::_Ref_count_obj<class_CMFTInfo>::vftable;
            puVar6 = (undefined8 *)FUN_180001100(uVar9,puVar7 + 2);
            FUN_1800073c0(puVar6,param_3);
          }
          puVar6 = FUN_180005f80(&local_58);
          local_58 = puVar7 + 2;
          local_50 = puVar7;
          FUN_180026d40(puVar8,puVar6);
          FUN_180005f30((longlong)&local_58);
        }
      }
      puVar8 = (undefined8 *)puVar10[2];
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)*puVar8 + 0x19);
        puVar10 = puVar8;
        puVar8 = (undefined8 *)*puVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar8 + 0x19);
          puVar10 = puVar8;
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
        puVar7 = (undefined8 *)puVar10[1];
        puVar8 = puVar10;
        while ((puVar10 = puVar7, cVar1 == '\0' && (puVar8 == (undefined8 *)puVar10[2]))) {
          cVar1 = *(char *)((longlong)puVar10[1] + 0x19);
          puVar7 = (undefined8 *)puVar10[1];
          puVar8 = puVar10;
        }
      }
    }
  }
  return;
}

