// Function: FUN_18000af80
// Address: 18000af80
// Size: 1056 bytes


void FUN_18000af80(longlong param_1,longlong param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  LPCRITICAL_SECTION local_320;
  longlong local_318;
  undefined4 *local_310;
  longlong local_308;
  undefined1 local_300;
  undefined8 local_2f8;
  undefined4 local_2e8 [44];
  undefined1 local_238 [512];
  ulonglong local_38;
  
  if (param_3 == (void *)0x0) {
    return;
  }
  local_2f8 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStack_348;
  FUN_18003f9f0(local_238);
  bVar1 = FUN_18003f8d0(local_238,param_3);
  if (!bVar1) goto LAB_18000b371;
  lVar3 = FUN_18003f920((longlong)local_238);
  if (param_2 - lVar3 < 0) {
    local_328 = (undefined8 *)0x0;
LAB_18000b26e:
    if (param_2 < 0) {
      local_328 = (undefined8 *)0x0;
      goto LAB_18000b371;
    }
    local_328 = FUN_18000aa50(param_1,(longlong)local_238,param_2,1);
    if (local_328 == (undefined8 *)0x0) goto LAB_18000b371;
    local_320 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
    EnterCriticalSection(local_320);
    puVar5 = local_328;
    if (((*(longlong *)(param_1 + 0xb8) == 0) || (local_328 == (undefined8 *)0x0)) ||
       ((*(int *)((longlong)local_328 + 0x9c) != 0x20 ||
        (((*(uint *)((longlong)local_328 + 0xc) != 0 && (-1 < (longlong)local_328[2])) &&
         ((longlong)local_328[2] % (longlong)(ulonglong)*(uint *)((longlong)local_328 + 0xc) == 0)))
        ))) {
      puVar6 = (undefined8 *)(param_1 + 0x920);
      cVar2 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_328,puVar6);
      if (cVar2 != '\0') {
        FUN_180001690(local_2e8);
        local_318 = *(longlong *)(param_1 + 0xb8);
        local_310 = local_2e8;
        local_308 = param_1 + 0x878;
        local_300 = 0;
        FUN_180003ed0(&local_318,(longlong)puVar5,puVar6);
        FUN_180001700((longlong)local_2e8);
      }
    }
    else {
      (**(code **)*local_328)(local_328,1);
    }
  }
  else {
    local_328 = FUN_18000aa50(param_1,(longlong)local_238,param_2 - lVar3,2);
    if (local_328 == (undefined8 *)0x0) goto LAB_18000b26e;
    uVar4 = FUN_18000a8a0(param_1,(longlong)local_328);
    if ((int)uVar4 == 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x140);
      puVar6 = (undefined8 *)puVar5[1];
      puVar9 = puVar5;
      if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
        puVar8 = puVar5;
        puVar7 = puVar6;
        do {
          puVar9 = puVar7;
          lVar3 = *(longlong *)(puVar9[4] + 0x10);
          if (((longlong)local_328[2] < lVar3) ||
             (((longlong)local_328[2] <= lVar3 &&
              (*(uint *)((longlong)local_328 + 0xc) < *(uint *)(puVar9[4] + 0xc))))) {
            puVar7 = (undefined8 *)*puVar9;
          }
          else {
            puVar7 = (undefined8 *)puVar9[2];
            puVar9 = puVar8;
          }
          puVar8 = puVar9;
        } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
        do {
          lVar3 = *(longlong *)(puVar6[4] + 0x10);
          if ((lVar3 < (longlong)local_328[2]) ||
             ((lVar3 <= (longlong)local_328[2] &&
              (*(uint *)(puVar6[4] + 0xc) < *(uint *)((longlong)local_328 + 0xc))))) {
            puVar7 = (undefined8 *)puVar6[2];
          }
          else {
            puVar7 = (undefined8 *)*puVar6;
            puVar5 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
      }
      while (puVar5 != puVar9) {
        lVar3 = puVar5[4];
        if (*(longlong *)(lVar3 + 0x60) == 0) {
          *(undefined8 *)(lVar3 + 0x60) = local_328[0xc];
          *(undefined8 *)(lVar3 + 0xa8) = local_328[0x15];
        }
        puVar6 = (undefined8 *)puVar5[2];
        if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
          cVar2 = *(char *)((longlong)*puVar6 + 0x19);
          puVar5 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((longlong)*puVar6 + 0x19);
            puVar5 = puVar6;
            puVar6 = (undefined8 *)*puVar6;
          }
        }
        else {
          cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
          puVar7 = (undefined8 *)puVar5[1];
          puVar6 = puVar5;
          while ((puVar5 = puVar7, cVar2 == '\0' && (puVar6 == (undefined8 *)puVar5[2]))) {
            cVar2 = *(char *)((longlong)puVar5[1] + 0x19);
            puVar7 = (undefined8 *)puVar5[1];
            puVar6 = puVar5;
          }
        }
      }
      if (local_328 != (undefined8 *)0x0) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
        local_320 = lpCriticalSection;
        EnterCriticalSection(lpCriticalSection);
        puVar5 = local_328;
        if ((((*(longlong *)(param_1 + 0xb8) == 0) || (local_328 == (undefined8 *)0x0)) ||
            (*(int *)((longlong)local_328 + 0x9c) != 0x20)) ||
           (((*(uint *)((longlong)local_328 + 0xc) != 0 && (-1 < (longlong)local_328[2])) &&
            ((longlong)local_328[2] % (longlong)(ulonglong)*(uint *)((longlong)local_328 + 0xc) == 0
            )))) {
          puVar6 = (undefined8 *)(param_1 + 0x920);
          cVar2 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_328,puVar6);
          if (cVar2 != '\0') {
            FUN_180001690(local_2e8);
            local_318 = *(longlong *)(param_1 + 0xb8);
            local_310 = local_2e8;
            local_308 = param_1 + 0x878;
            local_300 = 0;
            FUN_180003ed0(&local_318,(longlong)puVar5,puVar6);
            FUN_180001700((longlong)local_2e8);
          }
        }
        else {
          (**(code **)*local_328)(local_328,1);
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      goto LAB_18000b26e;
    }
    lVar3 = FUN_18003f920((longlong)local_238);
    local_328[2] = local_328[2] - lVar3;
    local_320 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
    EnterCriticalSection(local_320);
    FUN_1800268c0((undefined8 *)(param_1 + 400),(longlong)local_328,0,2);
    if (local_328 != (undefined8 *)0x0) {
      (**(code **)*local_328)(local_328,1);
    }
    local_328 = (undefined8 *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a8));
LAB_18000b371:
  FUN_18003f9e0();
  __security_check_cookie(local_38 ^ (ulonglong)auStack_348);
  return;
}

