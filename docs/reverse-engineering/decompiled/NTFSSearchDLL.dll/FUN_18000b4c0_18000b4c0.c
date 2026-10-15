// Function: FUN_18000b4c0
// Address: 18000b4c0
// Size: 1407 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000b4c0(longlong param_1,longlong param_2,int *param_3,uint param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined7 extraout_var;
  ulonglong uVar6;
  undefined7 extraout_var_00;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStackY_188 [32];
  undefined8 *local_150;
  longlong *local_148;
  longlong local_140;
  undefined4 *local_138;
  longlong local_130;
  undefined1 local_128;
  undefined8 local_120;
  LPCRITICAL_SECTION local_118 [2];
  undefined4 local_108 [44];
  ulonglong local_58;
  
  lVar7 = DAT_180086040;
  local_120 = 0xfffffffffffffffe;
  local_58 = DAT_180086010 ^ (ulonglong)auStackY_188;
  piVar13 = param_3;
  lVar17 = param_2;
  uVar5 = param_4;
  if (DAT_180086d68 == 0) {
    if (((int)param_4 < 0x1000) &&
       (bVar3 = FUN_1800456f0(param_3), (int)CONCAT71(extraout_var_00,bVar3) != 0)) {
      DAT_180086d68 = 1;
      DAT_180086d58 = (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9;
      DAT_180086040 = param_2;
      memcpy(&DAT_180086d70,param_3,(longlong)(int)param_4);
      goto LAB_18000b9dc;
    }
  }
  else {
    if (param_2 < DAT_180086d58 + DAT_180086040) goto LAB_18000b9dc;
    if ((DAT_180086d58 + DAT_180086040 == param_2) &&
       (8 - DAT_180086d58 <= (int)(param_4 + ((int)param_4 >> 0x1f & 0x1ffU)) >> 9)) {
      memcpy(&DAT_180086d70 + (DAT_180086d58 << 9),param_3,(longlong)((8 - DAT_180086d58) * 0x200));
      piVar13 = (int *)&DAT_180086d70;
      lVar17 = lVar7;
      uVar5 = 0x1000;
    }
    DAT_180086d68 = 0;
    DAT_180086040 = -1;
    DAT_180086d58 = -1;
  }
  bVar3 = FUN_180045d60(piVar13,uVar5,1);
  if ((int)CONCAT71(extraout_var,bVar3) != 0) {
    FUN_18000e780(param_1,(longlong)param_3,param_4,param_2);
    uVar6 = FUN_180045cb0((longlong)piVar13);
    if (uVar6 != 5) {
      local_148 = (longlong *)FUN_18002be40(0x30);
      if (local_148 == (longlong *)0x0) {
        local_148 = (longlong *)0x0;
      }
      else {
        local_148[5] = 0;
      }
      *local_148 = lVar17;
      uVar6 = FUN_180045cb0((longlong)piVar13);
      local_148[3] = local_148[3] & 0xffff000000000000;
      local_148[3] = local_148[3] | uVar6 & 0xffffffffffff;
      uVar6 = FUN_180045c40((longlong)piVar13);
      *(short *)((longlong)local_148 + 0x1e) = (short)uVar6;
      lVar7 = FUN_180045d20((longlong)piVar13);
      local_148[1] = lVar7;
      lVar7 = FUN_180045d40((longlong)piVar13);
      local_148[2] = lVar7;
      lVar7 = FUN_180045bd0((longlong)piVar13,uVar5);
      local_148[4] = lVar7;
      uVar5 = FUN_1800456c0((longlong)piVar13);
      local_148[5] = (ulonglong)uVar5;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_1800881c0) && (_Init_thread_header(&DAT_1800881c0), DAT_1800881c0 == -1)
         ) {
        FUN_180038e40((undefined8 *)&DAT_1800881d0);
        atexit(FUN_18004b0c0);
        _Init_thread_footer(&DAT_1800881c0);
      }
      puVar15 = (undefined8 *)(local_148[3] & 0xffffffffffff);
      puVar14 = *(undefined8 **)(param_1 + 0x150);
      puVar8 = (undefined8 *)puVar14[1];
      puVar11 = puVar8;
      puVar16 = puVar14;
      _DAT_180088200 = puVar15;
      if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
        do {
          if ((longlong)puVar15 < *(longlong *)(puVar11[4] + 0x30)) {
            puVar12 = (undefined8 *)*puVar11;
            puVar16 = puVar11;
          }
          else {
            puVar12 = (undefined8 *)puVar11[2];
          }
          puVar11 = puVar12;
        } while (*(char *)((longlong)puVar12 + 0x19) == '\0');
        do {
          if (*(longlong *)(puVar8[4] + 0x30) < (longlong)puVar15) {
            puVar11 = (undefined8 *)puVar8[2];
          }
          else {
            puVar11 = (undefined8 *)*puVar8;
            puVar14 = puVar8;
          }
          puVar8 = puVar11;
        } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
      }
      while (puVar14 != puVar16) {
        plVar1 = (longlong *)puVar14[4];
        if (plVar1 != (longlong *)0x0) {
          lVar7 = local_148[1];
          for (puVar8 = *(undefined8 **)plVar1[1]; puVar8 != (undefined8 *)plVar1[1];
              puVar8 = (undefined8 *)*puVar8) {
            plVar2 = (longlong *)puVar8[2];
            if (((plVar2 != (longlong *)0x0) && (lVar9 = plVar2[1], lVar9 <= lVar7)) &&
               (puVar15 = (undefined8 *)(plVar2[2] + lVar9), lVar7 < (longlong)puVar15)) {
              lVar7 = (*plVar2 - lVar9) + lVar7;
              if ((((lVar7 != -1) &&
                   (bVar3 = FUN_180022f00((longlong *)(param_1 + 0x888),plVar1), !bVar3)) &&
                  ((*(short *)((longlong)local_148 + 0x1e) == (short)plVar1[7] &&
                   ((plVar1[8] <= local_148[4] && (*(char *)((longlong)plVar1 + 0x3a) == '\0'))))))
                 && (0x27 < plVar1[6])) {
                uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
                lVar9 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
                puVar15 = (undefined8 *)(ulonglong)*(uint *)(plVar1 + 5);
                local_150 = FUN_180021d00(lVar17,lVar7,*(uint *)(plVar1 + 5),0x20,lVar9,uVar5);
                if (local_150 != (undefined8 *)0x0) {
                  uVar10 = FUN_18000b3a0(param_1,(longlong)local_150);
                  if ((int)uVar10 == 0) {
                    if (local_150 != (undefined8 *)0x0) {
                      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
                      local_118[0] = lpCriticalSection;
                      EnterCriticalSection(lpCriticalSection);
                      puVar8 = local_150;
                      if ((((*(longlong *)(param_1 + 0xb8) == 0) || (local_150 == (undefined8 *)0x0)
                           ) || (*(int *)((longlong)local_150 + 0x9c) != 0x20)) ||
                         (((*(uint *)((longlong)local_150 + 0xc) != 0 &&
                           (-1 < (longlong)local_150[2])) &&
                          ((longlong)local_150[2] %
                           (longlong)(ulonglong)*(uint *)((longlong)local_150 + 0xc) == 0)))) {
                        puVar15 = (undefined8 *)(param_1 + 0x920);
                        cVar4 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_150,
                                              puVar15);
                        if (cVar4 != '\0') {
                          FUN_180001690(local_108);
                          local_140 = *(longlong *)(param_1 + 0xb8);
                          local_138 = local_108;
                          local_130 = param_1 + 0x878;
                          local_128 = 0;
                          FUN_180003ed0(&local_140,(longlong)puVar8,puVar15);
                          FUN_180001700((longlong)local_108);
                        }
                      }
                      else {
                        (**(code **)*local_150)(local_150,1);
                      }
                      LeaveCriticalSection(lpCriticalSection);
                    }
                  }
                  else {
                    if (local_150 != (undefined8 *)0x0) {
                      (**(code **)*local_150)(local_150,1);
                    }
                    local_150 = (undefined8 *)0x0;
                  }
                }
              }
              break;
            }
          }
        }
        puVar8 = (undefined8 *)puVar14[2];
        if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
          cVar4 = *(char *)((longlong)*puVar8 + 0x19);
          puVar14 = puVar8;
          puVar8 = (undefined8 *)*puVar8;
          while (cVar4 == '\0') {
            cVar4 = *(char *)((longlong)*puVar8 + 0x19);
            puVar14 = puVar8;
            puVar8 = (undefined8 *)*puVar8;
          }
        }
        else {
          cVar4 = *(char *)((longlong)puVar14[1] + 0x19);
          puVar11 = (undefined8 *)puVar14[1];
          puVar8 = puVar14;
          while ((puVar14 = puVar11, cVar4 == '\0' && (puVar8 == (undefined8 *)puVar14[2]))) {
            cVar4 = *(char *)((longlong)puVar14[1] + 0x19);
            puVar11 = (undefined8 *)puVar14[1];
            puVar8 = puVar14;
          }
        }
      }
      FUN_180014030((longlong *)(param_1 + 0x130),local_118,puVar15,(longlong *)&local_148);
    }
  }
LAB_18000b9dc:
  __security_check_cookie(local_58 ^ (ulonglong)auStackY_188);
  return;
}

