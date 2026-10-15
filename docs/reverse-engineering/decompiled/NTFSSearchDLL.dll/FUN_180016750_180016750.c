// Function: FUN_180016750
// Address: 180016750
// Size: 1794 bytes


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_180016750(longlong *param_1,undefined8 *param_2,undefined1 param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong **pplVar16;
  void *pvVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 *_Memory;
  int local_res8 [2];
  undefined8 *local_res10;
  undefined1 local_res18;
  int local_res20;
  ulonglong in_stack_ffffffffffffff18;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  void *local_98;
  longlong local_90;
  longlong local_88;
  undefined4 *local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong local_68 [5];
  
  local_68[2] = 0xfffffffffffffffe;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar9 = (**(code **)(*(longlong *)param_1[2] + 0x28))();
  uVar3 = *(uint *)((longlong)param_1 + 0x2c);
  uVar10 = (ulonglong)(uint)(iVar9 << 0xf);
  local_98 = (void *)FUN_18002be40(uVar10);
  if (local_98 == (void *)0x0) {
    uVar10 = 0x17c0004;
  }
  else {
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    local_c8 = (longlong *)FUN_180013230(uVar10,0,0);
    pplVar16 = &local_c8;
    FUN_180040690(param_2,(longlong)pplVar16);
    local_90 = 0;
    for (plVar15 = (longlong *)*local_c8; plVar15 != local_c8; plVar15 = (longlong *)*plVar15) {
      pplVar16 = (longlong **)(*(longlong *)(plVar15[2] + 0x10) * (ulonglong)uVar3);
      local_90 = local_90 + (longlong)pplVar16;
    }
    if (param_4 != 0) {
      in_stack_ffffffffffffff18 = 0;
      FUN_180016e60((longlong)param_1,pplVar16,local_90,0,0);
    }
    FUN_180017fd0((ulonglong *)&local_80);
    local_b0 = (longlong *)0x0;
    local_a0 = 0;
    local_68[0] = 0;
    plVar15 = (longlong *)*local_c8;
    local_b8 = plVar15;
    if (plVar15 != local_c8) {
      do {
        lVar21 = 0;
        local_b8 = plVar15;
        if (((longlong *)param_1[3] != (longlong *)0x0) &&
           (iVar9 = (**(code **)(*(longlong *)param_1[3] + 0x10))(), iVar9 == 0)) break;
        plVar13 = (longlong *)plVar15[2];
        local_res8[0] = (**(code **)(*(longlong *)param_1[2] + 0x28))();
        local_88 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * *plVar13 + param_1[6];
        lVar22 = plVar13[2] * (ulonglong)*(uint *)((longlong)param_1 + 0x2c);
        local_a8 = 0;
        if (0 < lVar22) {
          do {
            if (((longlong *)param_1[3] != (longlong *)0x0) &&
               (iVar9 = (**(code **)(*(longlong *)param_1[3] + 0x10))(), plVar15 = local_b8,
               iVar9 == 0)) break;
            lVar7 = local_88;
            uVar3 = (int)lVar22 - (int)lVar21;
            if (0x8000 < lVar22 - lVar21) {
              uVar3 = 0x8000;
            }
            uVar10 = (ulonglong)uVar3;
            lVar18 = lVar21 + local_88;
            in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffffffffffff00;
            iVar9 = (**(code **)(*(longlong *)param_1[2] + 8))
                              ((longlong *)param_1[2],local_98,lVar18,uVar3,
                               in_stack_ffffffffffffff18);
            lVar6 = local_a8;
            plVar15 = local_b8;
            if (iVar9 == 0) break;
            puVar11 = local_80;
            uVar14 = uVar10;
            if (uVar3 != 0) {
              do {
                *puVar11 = (int)lVar18;
                lVar18 = lVar18 + 1;
                uVar14 = uVar14 - 1;
                puVar11 = puVar11 + 1;
              } while (uVar14 != 0);
            }
            lVar21 = lVar21 + uVar10;
            in_stack_ffffffffffffff18 = CONCAT71((int7)(in_stack_ffffffffffffff18 >> 8),local_res18)
            ;
            pvVar17 = local_98;
            uVar14 = FUN_180017cf0(param_1,(longlong)local_98,(ulonglong)(uVar3 * local_res8[0]),
                                   lVar7 + local_a8,in_stack_ffffffffffffff18,local_68,local_res10,
                                   (longlong *)&local_80);
            local_a8 = lVar6 + uVar10;
            local_b0 = (longlong *)((longlong)local_b0 + uVar10);
            local_a0 = uVar14;
            if (local_res20 != 0) {
              FUN_180016e60((longlong)param_1,pvVar17,local_90,local_b0,uVar14);
              in_stack_ffffffffffffff18 = uVar14;
            }
            plVar15 = local_b8;
          } while (lVar21 < lVar22);
        }
        plVar15 = (longlong *)*plVar15;
        local_b8 = plVar15;
      } while (plVar15 != local_c8);
    }
    puVar11 = local_80;
    uVar10 = local_a0;
    param_1[0x6d] = param_1[0x4a];
    FUN_18001a980(param_1 + 0x65);
    local_b0 = (longlong *)param_1[0x67];
    plVar15 = (longlong *)*local_b0;
    local_b8 = plVar15;
    if (plVar15 != local_b0) {
      do {
        plVar13 = plVar15 + 2;
        plVar4 = (longlong *)*plVar13;
        if (plVar4 != (longlong *)0x0) {
          local_b8 = plVar15;
          if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
            uVar8 = *(ushort *)((longlong)plVar4 + 0x23);
          }
          else {
            uVar8 = (*(code *)((undefined **)*plVar4)[7])();
          }
          if (((uVar8 & 0x10) != 0) ||
             (uVar12 = FUN_1800161f0((longlong)param_1,plVar15[3],(longlong *)*plVar13),
             (char)uVar12 == '\0')) {
            plVar15 = local_b8;
            local_88 = 0x12f0001;
            local_res8[0] = 0;
            *(byte *)(*plVar13 + 0x72) = *(byte *)(*plVar13 + 0x72) | 1;
            LOCK();
            *(int *)(*plVar13 + 0xc) = *(int *)(*plVar13 + 0xc) + 1;
            UNLOCK();
            plVar4 = (longlong *)*plVar13;
            if ((plVar4 != (longlong *)0x0) &&
               (FUN_180016f10((longlong)param_1,plVar4[0xb],local_b8[3],plVar4,&local_88,local_res8,
                              2), local_res8[0] != 0)) {
              *plVar13 = 0;
            }
          }
        }
        plVar15 = (longlong *)*plVar15;
        local_b0 = (longlong *)param_1[0x67];
        puVar11 = local_80;
        local_b8 = plVar15;
      } while (plVar15 != local_b0);
    }
    FUN_180016440(param_1);
    plVar15 = *(longlong **)param_1[0x5f];
    if (plVar15 != (longlong *)param_1[0x5f]) {
      do {
        puVar5 = (ulonglong *)plVar15[5];
        if ((puVar5 != (ulonglong *)0x0) && (puVar5[5] != 0)) {
          plVar13 = FUN_180002f90();
          uVar10 = puVar5[3];
          uVar14 = *puVar5;
          uVar19 = uVar14 & 0xffffffffffff;
          uVar2 = *(undefined2 *)((longlong)puVar5 + 0xe);
          *(ulonglong *)((longlong)plVar13 + 0x25) = uVar10;
          *(ulonglong *)((longlong)plVar13 + 0x35) = uVar10;
          *(ulonglong *)((longlong)plVar13 + 0x2d) = uVar10;
          *(undefined8 *)((longlong)plVar13 + 0x11) = 0;
          *(undefined2 *)((longlong)plVar13 + 0x19) = 0;
          plVar13[8] = 0;
          *(undefined8 *)((longlong)plVar13 + 0x1b) = 0;
          *(undefined2 *)((longlong)plVar13 + 0x23) = 0x10;
          *(undefined1 *)((longlong)plVar13 + 0x3d) = 1;
          plVar13[0xb] = uVar19;
          plVar13[0xc] = 0;
          plVar13[9] = 0;
          *(short *)(plVar13 + 0xd) = (short)(uVar14 >> 0x30);
          *(undefined2 *)((longlong)plVar13 + 0x6a) = uVar2;
          *(byte *)((longlong)plVar13 + 0x72) = *(byte *)((longlong)plVar13 + 0x72) & 0xc3 | 1;
          *(undefined2 *)(plVar13 + 0xe) = 0;
          (**(code **)(*plVar13 + 8))(plVar13);
          if (0xe < uVar19) {
            local_68[1] = 0x1600001;
            FUN_180016f10((longlong)param_1,plVar13[0xb],puVar5[1] & 0xffffffffffff,plVar13,
                          local_68 + 1,(undefined4 *)&local_a8,2);
          }
        }
        plVar13 = (longlong *)plVar15[2];
        if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar13 + 0x19);
          plVar15 = plVar13;
          plVar13 = (longlong *)*plVar13;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar13 + 0x19);
            plVar15 = plVar13;
            plVar13 = (longlong *)*plVar13;
          }
        }
        else {
          cVar1 = *(char *)(plVar15[1] + 0x19);
          plVar4 = (longlong *)plVar15[1];
          plVar13 = plVar15;
          while ((plVar15 = plVar4, cVar1 == '\0' && (plVar13 == (longlong *)plVar15[2]))) {
            cVar1 = *(char *)(plVar15[1] + 0x19);
            plVar4 = (longlong *)plVar15[1];
            plVar13 = plVar15;
          }
        }
        uVar10 = local_a0;
        puVar11 = local_80;
      } while (plVar15 != (longlong *)param_1[0x5f]);
    }
    uVar12 = 0;
    FUN_180017b50((longlong)param_1,(longlong *)0x0);
    FUN_180011140(param_1 + 0x4f);
    plVar15 = (longlong *)*local_c8;
    plVar13 = local_c8;
    if (plVar15 != local_c8) {
      do {
        if ((void *)plVar15[2] != (void *)0x0) {
          uVar12 = 0x18;
          free((void *)plVar15[2]);
          plVar13 = local_c8;
        }
        plVar15 = (longlong *)*plVar15;
      } while (plVar15 != plVar13);
    }
    plVar15 = (longlong *)*plVar13;
    *plVar13 = (longlong)plVar13;
    local_c8[1] = (longlong)local_c8;
    local_c0 = 0;
    if (plVar15 != local_c8) {
      do {
        plVar13 = (longlong *)*plVar15;
        uVar12 = 0x18;
        free(plVar15);
        plVar15 = plVar13;
      } while (plVar13 != local_c8);
    }
    free(local_98);
    if (local_res20 != 0) {
      FUN_180016e60((longlong)param_1,uVar12,local_90,local_90,uVar10);
    }
    *(undefined1 *)(param_1 + 0x3b) = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined1 *)(param_1 + 0x40) = 0;
    param_1[0x46] = 0;
    FUN_180011140(param_1 + 0x47);
    plVar15 = (longlong *)param_1[0x3f];
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x138))(plVar15,1);
      param_1[0x3f] = 0;
    }
    pvVar17 = (void *)param_1[0x42];
    if (pvVar17 != (void *)0x0) {
      FUN_180029390((longlong)pvVar17);
      free(pvVar17);
      param_1[0x42] = 0;
    }
    puVar20 = (undefined8 *)param_1[0x5a];
    if (puVar20 != (undefined8 *)param_1[0x5b]) {
      do {
        pvVar17 = (void *)*puVar20;
        free(*(void **)((longlong)pvVar17 + 0x28));
        free(pvVar17);
        puVar20 = puVar20 + 1;
      } while (puVar20 != (undefined8 *)param_1[0x5b]);
      puVar20 = (undefined8 *)param_1[0x5a];
    }
    param_1[0x5b] = (longlong)puVar20;
    FUN_180011140(param_1 + 0x56);
    FUN_180011140(param_1 + 0x58);
    FUN_180011140(param_1 + 0x5f);
    if (puVar11 != (undefined4 *)0x0) {
      _Memory = puVar11;
      if ((0xfff < (ulonglong)((local_70 - (longlong)puVar11 >> 2) * 4)) &&
         (_Memory = *(undefined4 **)(puVar11 + -2),
         0x1f < (ulonglong)((longlong)puVar11 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
      local_80 = (undefined4 *)0x0;
      uStack_78 = 0;
      local_70 = 0;
    }
    plVar15 = (longlong *)*local_c8;
    *local_c8 = (longlong)local_c8;
    local_c8[1] = (longlong)local_c8;
    local_c0 = 0;
    if (plVar15 != local_c8) {
      do {
        plVar13 = (longlong *)*plVar15;
        free(plVar15);
        plVar15 = plVar13;
      } while (plVar13 != local_c8);
    }
    free(local_c8);
  }
  return uVar10;
}

