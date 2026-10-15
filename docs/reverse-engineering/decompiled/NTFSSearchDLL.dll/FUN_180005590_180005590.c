// Function: FUN_180005590
// Address: 180005590
// Size: 1109 bytes


undefined1 FUN_180005590(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  undefined7 extraout_var;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  void *_Memory;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_res10;
  undefined8 *local_f8 [2];
  undefined8 local_e8;
  longlong local_e0 [2];
  short local_ce;
  longlong local_c0 [3];
  ulonglong *local_a8;
  longlong local_98 [10];
  undefined8 local_48;
  ulonglong local_40 [3];
  
  local_48 = 0xfffffffffffffffe;
  local_res10 = 0;
  if ((0x13ff < (ulonglong)(param_2[1] - *param_2)) &&
     (uVar5 = FUN_180041080((int *)(*param_2 + 0x1000)), (int)uVar5 == 0)) {
    piVar1 = (int *)*param_2;
    FUN_180007370(&local_e8);
    uVar5 = FUN_180007600(&local_e8,piVar1,0x400,param_3);
    if ((int)uVar5 == 0) {
      ~_String_alloc<>(local_c0);
      ~_String_alloc<>(local_e0);
    }
    else {
      uVar14 = (uint)local_ce;
      if (uVar14 - 1 < 0x2000) {
        puVar6 = FUN_180006010(local_40,param_2);
        uVar11 = 0;
        uVar5 = *puVar6;
        uVar13 = 0xffffffff;
        local_a8 = puVar6;
        if (puVar6[1] != uVar5) {
          do {
            iVar4 = FUN_1800411a0((int *)(uVar5 + uVar11));
            uVar13 = uVar11;
            if (iVar4 != 0) break;
            uVar11 = uVar11 + 0x400;
            uVar5 = *puVar6;
            uVar13 = 0xffffffff;
          } while (uVar11 < puVar6[1] - uVar5);
        }
        pvVar2 = (void *)*puVar6;
        if (pvVar2 != (void *)0x0) {
          _Memory = pvVar2;
          if ((0xfff < puVar6[2] - (longlong)pvVar2) &&
             (_Memory = *(void **)((longlong)pvVar2 - 8),
             0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          free(_Memory);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        if (uVar13 == 0xffffffff) {
          ~_String_alloc<>(local_c0);
          ~_String_alloc<>(local_e0);
        }
        else {
          FUN_1800431d0(local_98,(int *)(*param_2 + uVar13),0x400,0,(longlong *)*param_1,
                        (undefined8 *)0x0);
          iVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))();
          bVar3 = FUN_180043030(local_98);
          if (((int)CONCAT71(extraout_var,bVar3) == 0) ||
             (plVar7 = FUN_180006db0(0,local_98,(ulonglong)(iVar4 * uVar14),(ulonglong *)local_f8,
                                     0x200), plVar7 == (longlong *)0x0)) {
            FUN_180043170(local_98);
            ~_String_alloc<>(local_c0);
            ~_String_alloc<>(local_e0);
          }
          else {
            if ((undefined **)*plVar7 == CNTFSFileProperties::vftable) {
              if ((ushort *)plVar7[9] == (ushort *)0x0) {
                puVar8 = (undefined8 *)0x0;
              }
              else {
                puVar8 = FUN_180033aa0((ushort *)plVar7[9]);
              }
            }
            else {
              puVar8 = (undefined8 *)(*(code *)((undefined **)*plVar7)[0xf])(plVar7);
            }
            local_f8[0] = puVar8;
            if (puVar8 == (undefined8 *)0x0) {
              FUN_180043170(local_98);
              ~_String_alloc<>(local_c0);
              ~_String_alloc<>(local_e0);
            }
            else {
              plVar7 = FUN_1800340b0((longlong)puVar8);
              if (plVar7 == (longlong *)0x0) {
                (**(code **)*puVar8)(puVar8,1);
                FUN_180043170(local_98);
                ~_String_alloc<>(local_c0);
                ~_String_alloc<>(local_e0);
              }
              else {
                if (param_4 == '\0') {
                  lVar12 = *(longlong *)(param_1[1] + 8) - (ulonglong)uVar14 * *plVar7;
                }
                else {
                  lVar12 = *(longlong *)(param_1[1] + 8);
                }
                lVar9 = (**(code **)(*(longlong *)*param_1 + 0x18))();
                if (lVar9 < lVar12) {
                  (**(code **)*puVar8)(puVar8,1);
                  FUN_180043170(local_98);
                  ~_String_alloc<>(local_c0);
                  ~_String_alloc<>(local_e0);
                }
                else {
                  bVar3 = FUN_180004c00(param_1,param_2,uVar14,lVar12,0,(int **)0x0);
                  if (bVar3) {
                    uVar10 = FUN_180004fc0(param_1,param_2,uVar14);
                    if ((char)uVar10 == '\0') {
                      (**(code **)*puVar8)(puVar8,1);
                      FUN_180043170(local_98);
                      ~_String_alloc<>(local_c0);
                      ~_String_alloc<>(local_e0);
                    }
                    else {
                      *(uint *)(param_1[1] + 0x38) = uVar14;
                      *(undefined4 *)param_1[1] = 3;
                      lVar9 = FUN_180040570(local_e0,0);
                      *(longlong *)(param_1[1] + 0x40) = lVar9;
                      *(longlong *)(param_1[1] + 8) = lVar12;
                      *(undefined4 *)(param_1[1] + 0x3c) = 0x400;
                      *(undefined4 *)(param_1[1] + 0x5c) = 2;
                      local_res10 = 1;
                      (**(code **)*puVar8)(puVar8,1);
                      FUN_180043170(local_98);
                      ~_String_alloc<>(local_c0);
                      ~_String_alloc<>(local_e0);
                    }
                  }
                  else {
                    (**(code **)*puVar8)(puVar8,1);
                    FUN_180043170(local_98);
                    ~_String_alloc<>(local_c0);
                    ~_String_alloc<>(local_e0);
                  }
                }
              }
            }
          }
        }
      }
      else {
        ~_String_alloc<>(local_c0);
        ~_String_alloc<>(local_e0);
      }
    }
  }
  return local_res10;
}

