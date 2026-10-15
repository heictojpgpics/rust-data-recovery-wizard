// Function: FUN_18000abd0
// Address: 18000abd0
// Size: 929 bytes


void FUN_18000abd0(longlong param_1,longlong *param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  LPCRITICAL_SECTION p_Var12;
  undefined8 *puVar13;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined4 *local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  LPCRITICAL_SECTION local_1c0;
  undefined8 local_1b8;
  undefined4 local_1a8 [2];
  longlong local_1a0;
  ulonglong local_198;
  uint local_170;
  longlong local_168;
  undefined4 local_f8 [44];
  ulonglong local_48;
  
  local_1b8 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStack_208;
  FUN_180001690(local_1a8);
  local_1e0 = *(longlong *)(param_1 + 0xb8);
  local_1d8 = local_1a8;
  lVar1 = param_1 + 0x878;
  local_1c8 = 0;
  local_1d0 = lVar1;
  local_1a0 = param_4;
  cVar6 = FUN_180003dd0(&local_1e0,param_2,(ulonglong)param_3);
  if (cVar6 == '\0') goto LAB_18000af42;
  lVar9 = lVar1;
  puVar8 = (undefined8 *)FUN_180002680(lVar1);
  plVar2 = (longlong *)*puVar8;
  plVar11 = (longlong *)plVar2[1];
  lVar9 = FUN_180013f30(lVar9,plVar2,plVar11,local_1a8);
  plVar10 = (longlong *)FUN_180002670(lVar1);
  if (*plVar10 == 0x1642c8590b21641) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *plVar10 = *plVar10 + 1;
  plVar2[1] = lVar9;
  *plVar11 = lVar9;
  bVar4 = false;
  plVar2 = *(longlong **)(param_1 + 0x140);
  plVar11 = (longlong *)*plVar2;
  if (plVar11 == plVar2) {
LAB_18000ad5d:
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      p_Var12 = (LPCRITICAL_SECTION)FUN_18002be40(0x1a8);
      local_1c0 = p_Var12;
      if (p_Var12 == (LPCRITICAL_SECTION)0x0) {
        local_1e8 = (undefined8 *)0x0;
      }
      else {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
        local_1e8 = FUN_180039390((undefined8 *)p_Var12,uVar7);
      }
      local_1e8[2] = local_1a0;
      local_1e8[3] = local_1a0;
      *(uint *)((longlong)local_1e8 + 0xc) = local_170;
      local_1e8[5] = 0;
      *(undefined4 *)(local_1e8 + 1) = 3;
      local_1e8[0x15] = local_198 / local_170;
      local_1e8[0xc] = local_198;
      *(undefined1 *)((longlong)local_1e8 + 0xf1) = 1;
      *(undefined1 *)((longlong)local_1e8 + 0xf6) = 1;
      *(undefined1 *)((longlong)local_1e8 + 0xf7) = 1;
      local_1e8[0x19] = (ulonglong)local_170 * local_168;
      *(undefined4 *)((longlong)local_1e8 + 0x9c) = 8;
      if (local_1e8 != (undefined8 *)0x0) {
        p_Var12 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
        local_1c0 = p_Var12;
        EnterCriticalSection(p_Var12);
        puVar8 = local_1e8;
        if (((*(longlong *)(param_1 + 0xb8) == 0) || (local_1e8 == (undefined8 *)0x0)) ||
           ((*(int *)((longlong)local_1e8 + 0x9c) != 0x20 ||
            (((*(uint *)((longlong)local_1e8 + 0xc) != 0 && (-1 < (longlong)local_1e8[2])) &&
             ((longlong)local_1e8[2] % (longlong)(ulonglong)*(uint *)((longlong)local_1e8 + 0xc) ==
              0)))))) {
          puVar13 = (undefined8 *)(param_1 + 0x920);
          cVar6 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_1e8,puVar13);
          if (cVar6 != '\0') {
            FUN_180001690(local_f8);
            local_1e0 = *(longlong *)(param_1 + 0xb8);
            local_1d8 = local_f8;
            local_1c8 = 0;
            local_1d0 = lVar1;
            FUN_180003ed0(&local_1e0,(longlong)puVar8,puVar13);
            FUN_180001700((longlong)local_f8);
          }
        }
        else {
          (**(code **)*local_1e8)(local_1e8,1);
        }
        LeaveCriticalSection(p_Var12);
      }
    }
  }
  else {
    do {
      lVar9 = plVar11[4];
      if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x10) == local_1a0)) &&
         (*(uint *)(lVar9 + 0xc) == local_170)) {
        *(undefined1 *)(lVar9 + 0xf1) = 1;
        *(undefined1 *)(lVar9 + 0xf7) = 1;
        bVar4 = true;
      }
      plVar10 = (longlong *)plVar11[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar6 = *(char *)(*plVar10 + 0x19);
        plVar11 = plVar10;
        plVar10 = (longlong *)*plVar10;
        while (cVar6 == '\0') {
          cVar6 = *(char *)(*plVar10 + 0x19);
          plVar11 = plVar10;
          plVar10 = (longlong *)*plVar10;
        }
      }
      else {
        cVar6 = *(char *)(plVar11[1] + 0x19);
        plVar5 = (longlong *)plVar11[1];
        plVar10 = plVar11;
        while ((plVar11 = plVar5, cVar6 == '\0' && (plVar10 == (longlong *)plVar11[2]))) {
          cVar6 = *(char *)(plVar11[1] + 0x19);
          plVar5 = (longlong *)plVar11[1];
          plVar10 = plVar11;
        }
      }
    } while (plVar11 != plVar2);
    if (!bVar4) goto LAB_18000ad5d;
  }
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != (longlong *)0x0) {
    local_1e8 = (undefined8 *)0x0;
    (**(code **)(*plVar2 + 0x10))(plVar2,local_1a8,&local_1e8);
  }
LAB_18000af42:
  FUN_180001700((longlong)local_1a8);
  __security_check_cookie(local_48 ^ (ulonglong)auStack_208);
  return;
}

