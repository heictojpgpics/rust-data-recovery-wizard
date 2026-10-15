// Function: FUN_18000ba40
// Address: 18000ba40
// Size: 948 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000ba40(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStackY_168 [32];
  undefined8 *local_138;
  longlong local_130;
  undefined4 *local_128;
  longlong local_120;
  undefined1 local_118;
  undefined8 local_110;
  LPCRITICAL_SECTION local_108;
  undefined4 local_f8 [44];
  ulonglong local_48;
  
  local_110 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180088250) && (_Init_thread_header(&DAT_180088250), DAT_180088250 == -1)) {
    _DAT_180088248 = 0;
    _Init_thread_footer(&DAT_180088250);
  }
  DAT_180088238 = (DAT_180088238 ^ param_2[6]) & 0xffffffffffff ^ DAT_180088238;
  puVar10 = *(undefined8 **)(param_1 + 0x130);
  puVar6 = (undefined8 *)puVar10[1];
  puVar13 = puVar10;
  if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
    puVar9 = puVar6;
    do {
      if ((DAT_180088238 & 0xffffffffffff) < (*(ulonglong *)(puVar9[4] + 0x18) & 0xffffffffffff)) {
        puVar12 = (undefined8 *)*puVar9;
        puVar13 = puVar9;
      }
      else {
        puVar12 = (undefined8 *)puVar9[2];
      }
      puVar9 = puVar12;
    } while (*(char *)((longlong)puVar12 + 0x19) == '\0');
    do {
      if ((*(ulonglong *)(puVar6[4] + 0x18) & 0xffffffffffff) < (DAT_180088238 & 0xffffffffffff)) {
        puVar9 = (undefined8 *)puVar6[2];
      }
      else {
        puVar9 = (undefined8 *)*puVar6;
        puVar10 = puVar6;
      }
      puVar6 = puVar9;
    } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
  }
  do {
    if (puVar10 == puVar13) {
      __security_check_cookie(local_48 ^ (ulonglong)auStackY_168);
      return;
    }
    plVar1 = (longlong *)puVar10[4];
    if (plVar1 != (longlong *)0x0) {
      lVar11 = plVar1[1];
      for (puVar6 = *(undefined8 **)param_2[1]; puVar6 != (undefined8 *)param_2[1];
          puVar6 = (undefined8 *)*puVar6) {
        plVar2 = (longlong *)puVar6[2];
        if (((plVar2 != (longlong *)0x0) && (lVar7 = plVar2[1], lVar7 <= lVar11)) &&
           (lVar11 < plVar2[2] + lVar7)) {
          lVar11 = (*plVar2 - lVar7) + lVar11;
          if ((((lVar11 != -1) &&
               (bVar3 = FUN_180022f00((longlong *)(param_1 + 0x888),param_2), !bVar3)) &&
              ((*(short *)((longlong)plVar1 + 0x1e) == (short)param_2[7] &&
               ((param_2[8] <= plVar1[4] && (*(char *)((longlong)param_2 + 0x3a) == '\0')))))) &&
             (0x27 < param_2[6])) {
            uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
            lVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
            local_138 = FUN_180021d00(*plVar1,lVar11,*(uint *)(param_2 + 5),0x20,lVar7,uVar5);
            if (local_138 != (undefined8 *)0x0) {
              uVar8 = FUN_18000b3a0(param_1,(longlong)local_138);
              if ((int)uVar8 == 0) {
                if (local_138 != (undefined8 *)0x0) {
                  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
                  local_108 = lpCriticalSection;
                  EnterCriticalSection(lpCriticalSection);
                  puVar6 = local_138;
                  if ((((*(longlong *)(param_1 + 0xb8) == 0) || (local_138 == (undefined8 *)0x0)) ||
                      (*(int *)((longlong)local_138 + 0x9c) != 0x20)) ||
                     (((*(uint *)((longlong)local_138 + 0xc) != 0 && (-1 < (longlong)local_138[2]))
                      && ((longlong)local_138[2] %
                          (longlong)(ulonglong)*(uint *)((longlong)local_138 + 0xc) == 0)))) {
                    puVar9 = (undefined8 *)(param_1 + 0x920);
                    cVar4 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_138,
                                          puVar9);
                    if (cVar4 != '\0') {
                      FUN_180001690(local_f8);
                      local_130 = *(longlong *)(param_1 + 0xb8);
                      local_128 = local_f8;
                      local_120 = param_1 + 0x878;
                      local_118 = 0;
                      FUN_180003ed0(&local_130,(longlong)puVar6,puVar9);
                      FUN_180001700((longlong)local_f8);
                    }
                  }
                  else {
                    (**(code **)*local_138)(local_138,1);
                  }
                  LeaveCriticalSection(lpCriticalSection);
                }
              }
              else {
                if (local_138 != (undefined8 *)0x0) {
                  (**(code **)*local_138)(local_138,1);
                }
                local_138 = (undefined8 *)0x0;
              }
            }
          }
          break;
        }
      }
    }
    puVar6 = (undefined8 *)puVar10[2];
    if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
      cVar4 = *(char *)((longlong)*puVar6 + 0x19);
      puVar10 = puVar6;
      puVar6 = (undefined8 *)*puVar6;
      while (cVar4 == '\0') {
        cVar4 = *(char *)((longlong)*puVar6 + 0x19);
        puVar10 = puVar6;
        puVar6 = (undefined8 *)*puVar6;
      }
    }
    else {
      cVar4 = *(char *)((longlong)puVar10[1] + 0x19);
      puVar9 = (undefined8 *)puVar10[1];
      puVar6 = puVar10;
      while ((puVar10 = puVar9, cVar4 == '\0' && (puVar6 == (undefined8 *)puVar10[2]))) {
        cVar4 = *(char *)((longlong)puVar10[1] + 0x19);
        puVar9 = (undefined8 *)puVar10[1];
        puVar6 = puVar10;
      }
    }
  } while( true );
}

