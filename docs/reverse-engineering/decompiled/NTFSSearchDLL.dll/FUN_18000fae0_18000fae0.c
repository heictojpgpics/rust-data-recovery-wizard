// Function: FUN_18000fae0
// Address: 18000fae0
// Size: 810 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_18000fae0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  LPCRITICAL_SECTION p_Var8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_2348 [32];
  undefined1 local_2328;
  undefined8 *local_2318;
  LPCRITICAL_SECTION local_2310;
  longlong local_2308;
  undefined4 *local_2300;
  longlong local_22f8;
  undefined1 local_22f0;
  undefined8 local_22e8;
  undefined1 local_22d8 [512];
  undefined4 local_20d8 [44];
  undefined1 local_2028 [8192];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x18000faf8;
  local_22e8 = 0xfffffffffffffffe;
  local_28 = DAT_180086010 ^ (ulonglong)auStack_2348;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    memset(local_2028,0,0x2000);
    local_2328 = 0;
    (**(code **)(*plVar1 + 8))(plVar1,local_2028,0,1);
    FUN_18003f9f0(local_22d8);
    bVar2 = FUN_18003f8d0(local_22d8,local_2028);
    if (bVar2) {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
      lVar7 = FUN_18003f920((longlong)local_22d8);
      if (lVar7 < lVar6) {
        lVar6 = FUN_18003f920((longlong)local_22d8);
      }
      else {
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
      }
      if ((lVar6 < 8) || (cVar3 = FUN_18000f990(param_1,(longlong)local_22d8,0), cVar3 == '\0')) {
        local_2318 = (undefined8 *)0x0;
      }
      else {
        p_Var8 = (LPCRITICAL_SECTION)FUN_18002be40(0x1a8);
        puVar9 = (undefined8 *)0x0;
        local_2310 = p_Var8;
        if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
          puVar9 = FUN_180039390((undefined8 *)p_Var8,uVar5);
        }
        *(undefined4 *)((longlong)puVar9 + 0x9c) = 0;
        *(undefined4 *)(puVar9 + 1) = 3;
        uVar4 = FUN_18003f940((longlong)local_22d8);
        *(uint *)((longlong)puVar9 + 0xc) = (uint)uVar4;
        *(int *)((longlong)puVar9 + 0x5c) = (int)puVar9;
        puVar9[2] = 0;
        puVar9[3] = 0;
        uVar10 = FUN_18003f8b0((longlong)local_22d8);
        puVar9[0x12] = uVar10;
        uVar4 = FUN_18003f940((longlong)local_22d8);
        lVar7 = FUN_18003f990((longlong)local_22d8);
        puVar9[0x19] = lVar7 * (ulonglong)uVar4;
        uVar5 = *(uint *)((longlong)puVar9 + 0xc);
        if (uVar5 == 0) {
          local_2318 = (undefined8 *)0x0;
        }
        else {
          lVar6 = lVar6 / (longlong)(ulonglong)uVar5;
          puVar9[0xc] = (ulonglong)uVar5 * lVar6;
          puVar9[0x15] = lVar6;
          *(undefined1 *)((longlong)puVar9 + 0x7c) = 0;
          puVar9[0xd] = 100;
          *(undefined1 *)((longlong)puVar9 + 0xf6) = 1;
          *(undefined1 *)((longlong)puVar9 + 0xf1) = 1;
          *(undefined1 *)((longlong)puVar9 + 0xf7) = 1;
          local_2318 = puVar9;
          if (puVar9 != (undefined8 *)0x0) {
            p_Var8 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
            local_2310 = p_Var8;
            EnterCriticalSection(p_Var8);
            puVar9 = local_2318;
            if ((((*(longlong *)(param_1 + 0xb8) == 0) || (local_2318 == (undefined8 *)0x0)) ||
                (*(int *)((longlong)local_2318 + 0x9c) != 0x20)) ||
               (((*(uint *)((longlong)local_2318 + 0xc) != 0 && (-1 < (longlong)local_2318[2])) &&
                ((longlong)local_2318[2] %
                 (longlong)(ulonglong)*(uint *)((longlong)local_2318 + 0xc) == 0)))) {
              puVar11 = (undefined8 *)(param_1 + 0x920);
              cVar3 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_2318,puVar11);
              if (cVar3 != '\0') {
                FUN_180001690(local_20d8);
                local_2308 = *(longlong *)(param_1 + 0xb8);
                local_2300 = local_20d8;
                local_22f8 = param_1 + 0x878;
                local_22f0 = 0;
                FUN_180003ed0(&local_2308,(longlong)puVar9,puVar11);
                FUN_180001700((longlong)local_20d8);
              }
            }
            else {
              (**(code **)*local_2318)(local_2318,1);
            }
            LeaveCriticalSection(p_Var8);
          }
        }
      }
    }
    FUN_18003f9e0();
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_2348);
  return;
}

