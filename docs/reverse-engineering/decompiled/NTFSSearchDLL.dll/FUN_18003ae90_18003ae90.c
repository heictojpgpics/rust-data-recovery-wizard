// Function: FUN_18003ae90
// Address: 18003ae90
// Size: 1864 bytes


undefined8 FUN_18003ae90(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 **ppuVar10;
  longlong lVar11;
  undefined *puVar12;
  byte *pbVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined8 extraout_RAX;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 **ppuVar21;
  longlong lVar22;
  longlong *local_res10;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  
  local_60 = 0xfffffffffffffffe;
  plVar18 = (longlong *)(in_stack_ffffffffffffff38 & 0xffffffff00000000);
  uVar7 = __RTDynamicCast(*(undefined8 *)(param_2 + 0x30),0,&IFileProperties::RTTI_Type_Descriptor,
                          &CNTFSFileProperties::RTTI_Type_Descriptor,plVar18);
  if ((uVar7 == 0) ||
     (uVar7 = FUN_18003c520((longlong)param_1,param_2,param_3), (char)uVar7 == '\0')) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    plVar14 = *(longlong **)(param_2 + 0x30);
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x50))(plVar14,&local_res10);
    }
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    local_a8 = (longlong *)FUN_180012fd0();
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    local_b8 = (undefined8 *)FUN_180012fd0();
    plVar14 = (longlong *)*param_1;
    plVar9 = (longlong *)plVar14[1];
    plVar8 = plVar9;
    local_98 = plVar14;
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      do {
        if (param_3 < plVar8[4]) {
          plVar19 = (longlong *)*plVar8;
          local_98 = plVar8;
        }
        else {
          plVar19 = (longlong *)plVar8[2];
        }
        plVar8 = plVar19;
      } while (*(char *)((longlong)plVar19 + 0x19) == '\0');
      do {
        if (plVar9[4] < param_3) {
          plVar8 = (longlong *)plVar9[2];
        }
        else {
          plVar8 = (longlong *)*plVar9;
          plVar14 = plVar9;
        }
        plVar9 = plVar8;
      } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
    }
LAB_18003af98:
    if (plVar14 != local_98) {
      local_res10 = (longlong *)plVar14[5];
      if (local_res10 == (longlong *)0x0) {
        plVar9 = (longlong *)plVar14[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar9 + 0x19);
          plVar8 = (longlong *)*plVar9;
          while (plVar14 = plVar9, cVar5 == '\0') {
            cVar5 = *(char *)(*plVar8 + 0x19);
            plVar9 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar5 = *(char *)(plVar14[1] + 0x19);
          plVar8 = (longlong *)plVar14[1];
          plVar9 = plVar14;
          while ((plVar14 = plVar8, cVar5 == '\0' && (plVar9 == (longlong *)plVar14[2]))) {
            cVar5 = *(char *)(plVar14[1] + 0x19);
            plVar8 = (longlong *)plVar14[1];
            plVar9 = plVar14;
          }
        }
      }
      else {
        plVar18 = (longlong *)((ulonglong)plVar18 & 0xffffffff00000000);
        plVar9 = (longlong *)
                 __RTDynamicCast(local_res10[6],0,&IFileProperties::RTTI_Type_Descriptor,
                                 &CNTFSFileProperties::RTTI_Type_Descriptor,plVar18);
        if (plVar9 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
          plVar8 = local_res10;
          uVar7 = (ulonglong)plVar18 & 0xffffffff00000000;
          ppuVar10 = (undefined8 **)
                     __RTDynamicCast(*(undefined8 *)(param_2 + 0x30),0,
                                     &IFileProperties::RTTI_Type_Descriptor,
                                     &CNTFSFileProperties::RTTI_Type_Descriptor,uVar7);
          plVar18 = (longlong *)(uVar7 & 0xffffffff00000000);
          ppuVar21 = (undefined8 **)plVar8[6];
          lVar11 = __RTDynamicCast(ppuVar21,0,&IFileProperties::RTTI_Type_Descriptor,
                                   &CNTFSFileProperties::RTTI_Type_Descriptor,plVar18);
          if (((ppuVar10 != (undefined8 **)0x0) && (lVar11 != 0)) &&
             (cVar5 = (*(code *)(*ppuVar10)[0x2a])(ppuVar10,lVar11,param_3), ppuVar21 = ppuVar10,
             cVar5 == '\0')) {
            plVar9 = (longlong *)plVar14[2];
            if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
              cVar5 = *(char *)(*plVar9 + 0x19);
              plVar14 = plVar9;
              plVar9 = (longlong *)*plVar9;
              while (cVar5 == '\0') {
                cVar5 = *(char *)(*plVar9 + 0x19);
                plVar14 = plVar9;
                plVar9 = (longlong *)*plVar9;
              }
            }
            else {
              cVar5 = *(char *)(plVar14[1] + 0x19);
              plVar8 = (longlong *)plVar14[1];
              plVar9 = plVar14;
              while ((plVar14 = plVar8, cVar5 == '\0' && (plVar9 == (longlong *)plVar14[2]))) {
                cVar5 = *(char *)(plVar14[1] + 0x19);
                plVar8 = (longlong *)plVar14[1];
                plVar9 = plVar14;
              }
            }
            goto LAB_18003af98;
          }
          if (((uVar6 & 0x10) == 0) &&
             (ppuVar21 = (undefined8 **)local_res10[6], ppuVar21 != (undefined8 **)0x0)) {
            if ((undefined **)*ppuVar21 == CNTFSFileProperties::vftable) {
              lVar11 = *(longlong *)((longlong)ppuVar21 + 0x1b);
            }
            else {
              lVar11 = (*(code *)(*ppuVar21)[3])();
            }
            if (lVar11 != 0) {
              lVar11 = (**(code **)(*plVar9 + 0xf0))(plVar9);
              puVar17 = (undefined8 *)local_b8[1];
              puVar15 = local_b8;
              if (*(char *)((longlong)local_b8[1] + 0x19) == '\0') {
                do {
                  if ((longlong)puVar17[4] < lVar11) {
                    puVar20 = (undefined8 *)puVar17[2];
                  }
                  else {
                    puVar20 = (undefined8 *)*puVar17;
                    puVar15 = puVar17;
                  }
                  puVar17 = puVar20;
                } while (*(char *)((longlong)puVar20 + 0x19) == '\0');
                if ((puVar15 != local_b8) && ((longlong)puVar15[4] <= lVar11)) {
                  lVar11 = puVar15[5];
                  puVar12 = FUN_1800319c0((longlong)local_res10);
                  pbVar13 = FUN_1800319c0(lVar11);
                  lVar22 = (longlong)puVar12 - (longlong)pbVar13;
                  do {
                    bVar1 = *pbVar13;
                    bVar2 = pbVar13[lVar22];
                    ppuVar21 = (undefined8 **)(ulonglong)bVar2;
                    if (bVar1 != bVar2) break;
                    pbVar13 = pbVar13 + 1;
                  } while (bVar2 != 0);
                  if (bVar1 != bVar2) goto LAB_18003b342;
                  FUN_18003bd80((longlong)param_1,lVar11,(longlong)local_res10);
                  plVar9 = (longlong *)plVar14[2];
                  if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
                    cVar5 = *(char *)(*plVar9 + 0x19);
                    plVar8 = (longlong *)*plVar9;
                    while (cVar5 == '\0') {
                      cVar5 = *(char *)(*plVar8 + 0x19);
                      plVar9 = plVar8;
                      plVar8 = (longlong *)*plVar8;
                    }
                  }
                  else {
                    cVar5 = *(char *)(plVar14[1] + 0x19);
                    plVar19 = (longlong *)plVar14[1];
                    plVar8 = plVar14;
                    while ((plVar9 = plVar19, cVar5 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
                      cVar5 = *(char *)(plVar9[1] + 0x19);
                      plVar19 = (longlong *)plVar9[1];
                      plVar8 = plVar9;
                    }
                  }
                  plVar8 = (longlong *)plVar14[2];
                  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
                    plVar8 = (longlong *)*plVar8;
                    cVar5 = *(char *)((longlong)plVar8 + 0x19);
                    while (cVar5 == '\0') {
                      plVar8 = (longlong *)*plVar8;
                      cVar5 = *(char *)((longlong)plVar8 + 0x19);
                    }
                  }
                  else {
                    cVar5 = *(char *)(plVar14[1] + 0x19);
                    plVar19 = (longlong *)plVar14[1];
                    plVar8 = plVar14;
                    while ((plVar4 = plVar19, cVar5 == '\0' && (plVar8 == (longlong *)plVar4[2]))) {
                      cVar5 = *(char *)(plVar4[1] + 0x19);
                      plVar19 = (longlong *)plVar4[1];
                      plVar8 = plVar4;
                    }
                  }
                  plVar14 = FUN_180012020(param_1,plVar14);
                  free(plVar14);
                  plVar14 = plVar9;
                  if (local_res10 != (longlong *)0x0) {
                    (**(code **)(*local_res10 + 0x30))();
                  }
                  goto LAB_18003af98;
                }
              }
              puVar17 = local_b8;
              local_90 = (**(code **)(*plVar9 + 0xf0))(plVar9);
              uVar16 = FUN_180002680(&local_90);
              puVar15 = (undefined8 *)FUN_180002680(uVar16);
              local_80 = *puVar15;
              local_78 = local_res10;
              plVar18 = (longlong *)FUN_1800151c0(&local_b8,(longlong)&local_80);
              ppuVar21 = &local_b8;
              FUN_1800144c0((longlong *)ppuVar21,local_58,puVar17,plVar18 + 4,plVar18);
            }
          }
LAB_18003b342:
          if (local_res10 != (longlong *)0x0) {
            local_res10[1] = param_2;
            ppuVar21 = (undefined8 **)local_res10[3];
            local_res10[4] = (longlong)ppuVar21;
            ppuVar10 = *(undefined8 ***)(param_2 + 0x10);
            local_res10[3] = (longlong)ppuVar10;
            if (ppuVar21 == (undefined8 **)0x0) {
              ppuVar21 = ppuVar10;
            }
            local_res10[4] = (longlong)ppuVar21;
            *(longlong **)(param_2 + 0x10) = local_res10;
            local_res10[9] = *(longlong *)(param_2 + 0x50);
          }
          if ((uVar6 & 0x10) != 0) {
            lVar11 = *param_4;
            plVar18 = *(longlong **)(lVar11 + 8);
            plVar9 = plVar18;
            lVar22 = FUN_1800143b0(ppuVar21,lVar11,(longlong)plVar18,&local_res10);
            if (param_4[1] == 0xaaaaaaaaaaaaaa9) {
              std::_Xlength_error("list<T> too long");
              pcVar3 = (code *)swi(3);
              uVar16 = (*pcVar3)();
              return uVar16;
            }
            param_4[1] = param_4[1] + 1;
            *(longlong *)(lVar11 + 8) = lVar22;
            *plVar18 = lVar22;
            local_88 = local_res10[10];
            plVar18 = local_res10;
            uVar16 = FUN_180002680(&local_88);
            puVar17 = (undefined8 *)FUN_180002680(uVar16);
            local_70 = *puVar17;
            local_68 = plVar18;
            plVar18 = (longlong *)FUN_1800151c0(&local_a8,(longlong)&local_70);
            FUN_180015210((longlong *)&local_a8,local_48,plVar9,plVar18 + 4,plVar18);
          }
          plVar14[5] = 0;
          plVar9 = (longlong *)plVar14[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar5 = *(char *)(*plVar9 + 0x19);
            plVar8 = (longlong *)*plVar9;
            while (cVar5 == '\0') {
              cVar5 = *(char *)(*plVar8 + 0x19);
              plVar9 = plVar8;
              plVar8 = (longlong *)*plVar8;
            }
          }
          else {
            cVar5 = *(char *)(plVar14[1] + 0x19);
            plVar19 = (longlong *)plVar14[1];
            plVar8 = plVar14;
            while ((plVar9 = plVar19, cVar5 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
              cVar5 = *(char *)(plVar9[1] + 0x19);
              plVar19 = (longlong *)plVar9[1];
              plVar8 = plVar9;
            }
          }
          plVar8 = (longlong *)plVar14[2];
          if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
            plVar8 = (longlong *)*plVar8;
            cVar5 = *(char *)((longlong)plVar8 + 0x19);
            while (cVar5 == '\0') {
              plVar8 = (longlong *)*plVar8;
              cVar5 = *(char *)((longlong)plVar8 + 0x19);
            }
          }
          else {
            cVar5 = *(char *)(plVar14[1] + 0x19);
            plVar19 = (longlong *)plVar14[1];
            plVar8 = plVar14;
            while ((plVar4 = plVar19, cVar5 == '\0' && (plVar8 == (longlong *)plVar4[2]))) {
              cVar5 = *(char *)(plVar4[1] + 0x19);
              plVar19 = (longlong *)plVar4[1];
              plVar8 = plVar4;
            }
          }
          plVar14 = FUN_180012020(param_1,plVar14);
          free(plVar14);
          plVar14 = plVar9;
          goto LAB_18003af98;
        }
        plVar9 = (longlong *)plVar14[2];
        if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
          cVar5 = *(char *)(*plVar9 + 0x19);
          plVar8 = (longlong *)*plVar9;
          while (plVar14 = plVar9, cVar5 == '\0') {
            cVar5 = *(char *)(*plVar8 + 0x19);
            plVar9 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar5 = *(char *)(plVar14[1] + 0x19);
          plVar8 = (longlong *)plVar14[1];
          plVar9 = plVar14;
          while ((plVar14 = plVar8, cVar5 == '\0' && (plVar9 == (longlong *)plVar14[2]))) {
            cVar5 = *(char *)(plVar14[1] + 0x19);
            plVar8 = (longlong *)plVar14[1];
            plVar9 = plVar14;
          }
        }
      }
      goto LAB_18003af98;
    }
    FUN_18003cc20((longlong)param_1,param_2,param_3);
    puVar17 = local_b8;
    cVar5 = *(char *)((longlong)local_b8[1] + 0x19);
    plVar18 = (longlong *)local_b8[1];
    while (cVar5 == '\0') {
      FUN_180011da0(&local_b8,(longlong *)plVar18[2]);
      plVar14 = (longlong *)*plVar18;
      free(plVar18);
      plVar18 = plVar14;
      cVar5 = *(char *)((longlong)plVar14 + 0x19);
    }
    local_b8[1] = puVar17;
    *local_b8 = puVar17;
    local_b8[2] = puVar17;
    local_b0 = 0;
    free(local_b8);
    plVar14 = local_a8;
    cVar5 = *(char *)(local_a8[1] + 0x19);
    plVar18 = (longlong *)local_a8[1];
    while (cVar5 == '\0') {
      FUN_180011da0(&local_a8,(longlong *)plVar18[2]);
      plVar9 = (longlong *)*plVar18;
      free(plVar18);
      plVar18 = plVar9;
      cVar5 = *(char *)((longlong)plVar9 + 0x19);
    }
    local_a8[1] = (longlong)plVar14;
    *local_a8 = (longlong)plVar14;
    local_a8[2] = (longlong)plVar14;
    local_a0 = 0;
    free(local_a8);
    uVar7 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  return uVar7;
}

