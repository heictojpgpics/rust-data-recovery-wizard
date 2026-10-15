// Function: FUN_1800099f0
// Address: 1800099f0
// Size: 1613 bytes


void FUN_1800099f0(longlong param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION p_Var1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 auStackY_178 [32];
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 *local_138;
  LPCRITICAL_SECTION local_130;
  LPCRITICAL_SECTION local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined4 *local_110;
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined4 local_e8 [44];
  ulonglong local_38;
  
  local_f8 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStackY_178;
  uVar12 = *(ulonglong *)(param_1 + 0x148);
  local_138 = param_2;
  if ((9 < uVar12) &&
     (plVar6 = (longlong *)**(longlong **)(param_1 + 0x140),
     plVar6 != *(longlong **)(param_1 + 0x140))) {
    do {
      puVar7 = (undefined8 *)plVar6[4];
      if ((*(int *)((longlong)puVar7 + 0x9c) == 0x20) &&
         (((longlong)puVar7[5] < 1 && ((longlong)puVar7[4] < 1)))) {
        p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
        local_128 = p_Var1;
        EnterCriticalSection(p_Var1);
        plVar2 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar2 + 0x19);
          plVar10 = plVar2;
          plVar3 = (longlong *)*plVar2;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*plVar3 + 0x19);
            plVar10 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar10 = plVar4, cVar5 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
            cVar5 = *(char *)(plVar10[1] + 0x19);
            plVar4 = (longlong *)plVar10[1];
            plVar3 = plVar10;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar5 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar5 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar5 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar3 = (longlong *)plVar6[1];
          plVar2 = plVar6;
          while ((plVar4 = plVar3, cVar5 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar5 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
        plVar6 = FUN_180012020((longlong *)(param_1 + 0x140),plVar6);
        free(plVar6);
        (**(code **)*puVar7)(puVar7,1);
        LeaveCriticalSection(p_Var1);
      }
      else if ((puVar7[2] == 0) || ((puVar7[4] != 0 || (puVar7[0xd] != 0)))) {
        plVar10 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar10 + 0x19);
          plVar6 = (longlong *)*plVar10;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*plVar6 + 0x19);
            plVar10 = plVar6;
            plVar6 = (longlong *)*plVar6;
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          while ((plVar10 = plVar2, cVar5 == '\0' && (plVar6 == (longlong *)plVar10[2]))) {
            cVar5 = *(char *)(plVar10[1] + 0x19);
            plVar2 = (longlong *)plVar10[1];
            plVar6 = plVar10;
          }
        }
      }
      else {
        p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
        local_130 = p_Var1;
        EnterCriticalSection(p_Var1);
        plVar2 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar2 + 0x19);
          plVar10 = plVar2;
          plVar3 = (longlong *)*plVar2;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*plVar3 + 0x19);
            plVar10 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar10 = plVar4, cVar5 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
            cVar5 = *(char *)(plVar10[1] + 0x19);
            plVar4 = (longlong *)plVar10[1];
            plVar3 = plVar10;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar5 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar5 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar5 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar3 = (longlong *)plVar6[1];
          plVar2 = plVar6;
          while ((plVar4 = plVar3, cVar5 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar5 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
        plVar6 = FUN_180012020((longlong *)(param_1 + 0x140),plVar6);
        free(plVar6);
        (**(code **)*puVar7)(puVar7,1);
        LeaveCriticalSection(p_Var1);
      }
      plVar6 = plVar10;
    } while (plVar10 != *(longlong **)(param_1 + 0x140));
    uVar12 = *(ulonglong *)(param_1 + 0x148);
  }
  if ((uVar12 == 0) && (local_138 != (undefined8 *)0x0)) {
    p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
    local_130 = p_Var1;
    EnterCriticalSection(p_Var1);
    puVar7 = local_138;
    if (((*(longlong *)(param_1 + 0xb8) == 0) ||
        ((local_138 == (undefined8 *)0x0 || (*(int *)((longlong)local_138 + 0x9c) != 0x20)))) ||
       ((*(uint *)((longlong)local_138 + 0xc) != 0 &&
        ((-1 < (longlong)local_138[2] &&
         ((longlong)local_138[2] % (longlong)(ulonglong)*(uint *)((longlong)local_138 + 0xc) == 0)))
        ))) {
      puVar13 = (undefined8 *)(param_1 + 0x920);
      cVar5 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_138,puVar13);
      if (cVar5 != '\0') {
        FUN_180001690(local_e8);
        local_118 = *(longlong *)(param_1 + 0xb8);
        local_110 = local_e8;
        local_108 = param_1 + 0x878;
        local_100 = 0;
        FUN_180003ed0(&local_118,(longlong)puVar7,puVar13);
        FUN_180001700((longlong)local_e8);
      }
    }
    else {
      (**(code **)*local_138)(local_138,1);
    }
    LeaveCriticalSection(p_Var1);
  }
  local_148 = (undefined8 *)0x0;
  uStack_140 = 0;
  puVar7 = (undefined8 *)FUN_180012c60();
  plVar6 = (longlong *)**(longlong **)(param_1 + 0x140);
  local_148 = puVar7;
  if (plVar6 != *(longlong **)(param_1 + 0x140)) {
    do {
      puVar13 = (undefined8 *)plVar6[4];
      if (*(char *)((longlong)puVar7[1] + 0x19) == '\0') {
        puVar8 = (undefined8 *)puVar7[1];
        puVar11 = puVar7;
        do {
          if ((longlong)puVar8[4] < (longlong)puVar13[2]) {
            puVar9 = (undefined8 *)puVar8[2];
          }
          else {
            puVar9 = (undefined8 *)*puVar8;
            puVar11 = puVar8;
          }
          puVar8 = puVar9;
        } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
        if ((puVar11 == puVar7) || ((longlong)puVar13[2] < (longlong)puVar11[4]))
        goto LAB_180009f16;
        if ((*(char *)(puVar11[5] + 0xf2) != *(char *)((longlong)puVar13 + 0xf2)) ||
           (*(int *)(puVar11[5] + 0xc) != *(int *)((longlong)puVar13 + 0xc))) goto LAB_180009f50;
        p_Var1 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
        local_130 = p_Var1;
        EnterCriticalSection(p_Var1);
        plVar2 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar2 + 0x19);
          plVar10 = plVar2;
          plVar3 = (longlong *)*plVar2;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*plVar3 + 0x19);
            plVar10 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar10 = plVar4, cVar5 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
            cVar5 = *(char *)(plVar10[1] + 0x19);
            plVar4 = (longlong *)plVar10[1];
            plVar3 = plVar10;
          }
        }
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar5 = *(char *)((longlong)plVar2 + 0x19);
          while (cVar5 == '\0') {
            plVar2 = (longlong *)*plVar2;
            cVar5 = *(char *)((longlong)plVar2 + 0x19);
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar3 = (longlong *)plVar6[1];
          plVar2 = plVar6;
          while ((plVar4 = plVar3, cVar5 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar5 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
        plVar6 = FUN_180012020((longlong *)(param_1 + 0x140),plVar6);
        free(plVar6);
        (**(code **)*puVar13)(puVar13,1);
        LeaveCriticalSection(p_Var1);
        puVar7 = local_148;
      }
      else {
LAB_180009f16:
        local_128 = (LPCRITICAL_SECTION)puVar13[2];
        local_120 = puVar13;
        plVar10 = (longlong *)FUN_180014470(&local_148,(longlong)&local_128);
        FUN_1800144c0((longlong *)&local_148,&local_118,puVar7,plVar10 + 4,plVar10);
        puVar7 = local_148;
LAB_180009f50:
        plVar10 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar10 + 0x19);
          plVar6 = (longlong *)*plVar10;
          while (cVar5 == '\0') {
            cVar5 = *(char *)(*plVar6 + 0x19);
            plVar10 = plVar6;
            plVar6 = (longlong *)*plVar6;
          }
        }
        else {
          cVar5 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          while ((plVar10 = plVar2, cVar5 == '\0' && (plVar6 == (longlong *)plVar10[2]))) {
            cVar5 = *(char *)(plVar10[1] + 0x19);
            plVar2 = (longlong *)plVar10[1];
            plVar6 = plVar10;
          }
        }
      }
      plVar6 = plVar10;
    } while (plVar10 != *(longlong **)(param_1 + 0x140));
  }
  puVar7 = local_148;
  cVar5 = *(char *)((longlong)local_148[1] + 0x19);
  plVar6 = (longlong *)local_148[1];
  while (cVar5 == '\0') {
    FUN_180011da0(&local_148,(longlong *)plVar6[2]);
    plVar10 = (longlong *)*plVar6;
    free(plVar6);
    plVar6 = plVar10;
    cVar5 = *(char *)((longlong)plVar10 + 0x19);
  }
  local_148[1] = puVar7;
  *local_148 = puVar7;
  local_148[2] = puVar7;
  uStack_140 = 0;
  free(local_148);
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_178);
  return;
}

