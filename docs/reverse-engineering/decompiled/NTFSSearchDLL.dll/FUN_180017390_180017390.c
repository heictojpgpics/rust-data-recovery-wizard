// Function: FUN_180017390
// Address: 180017390
// Size: 1394 bytes


undefined8
FUN_180017390(longlong *param_1,longlong *param_2,longlong *param_3,int *param_4,uint *param_5,
             longlong *param_6,uint *param_7,undefined8 *param_8,longlong *param_9,byte *param_10,
             int *param_11,undefined4 *param_12,undefined8 *param_13)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined7 extraout_var;
  longlong *plVar10;
  longlong lVar11;
  undefined6 extraout_var_00;
  ulonglong uVar12;
  char *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  char *pcVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  bool bVar19;
  longlong *local_a8;
  ulonglong local_a0 [3];
  longlong local_88 [10];
  
  local_a0[1] = 0xfffffffffffffffe;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return 0xffffffff80004005;
  }
  if (*(longlong *)(lVar1 + 0x20) == -1) {
    *(longlong *)(lVar1 + 0x20) = *param_3 + -1;
  }
  plVar9 = FUN_180042ef0(param_4,*param_5,*param_9,*param_7,*param_6,(longlong *)param_1[2],param_8,
                         *param_10);
  FUN_1800431d0(local_88,param_4,(ulonglong)*param_5,*param_9,(longlong *)param_1[2],plVar9);
  local_a0[0] = 0xffffffffffffffff;
  iVar7 = *param_11;
  uVar8 = *param_7;
  lVar11 = *param_9;
  bVar4 = FUN_180043030(local_88);
  if ((int)CONCAT71(extraout_var,bVar4) == 0) {
    plVar10 = (longlong *)0x0;
    uVar12 = 0xffffffffffffffff;
  }
  else {
    plVar10 = FUN_180006db0(lVar11,local_88,(ulonglong)(iVar7 * uVar8),local_a0,iVar7);
    uVar12 = local_a0[0];
    if (plVar10 != (longlong *)0x0) {
      FUN_1800198a0((longlong)(param_1 + 0x52),plVar10,local_a0);
      uVar12 = local_a0[0];
    }
  }
  if ((*(longlong *)(lVar1 + 0x10) == -1) && (uVar12 != 0xffffffffffffffff)) {
    *(ulonglong *)(lVar1 + 0x10) = uVar12;
  }
  if (plVar10 == (longlong *)0x0) {
    if (plVar9 != (longlong *)0x0) {
      FUN_180003c80(plVar9);
      FUN_180002f00(plVar9,1);
    }
  }
  else {
    bVar4 = true;
    lVar11 = (**(code **)(*plVar10 + 0x18))(plVar10);
    if (((lVar11 == 0) &&
        (uVar6 = FUN_180041940((longlong)param_4), (int)CONCAT62(extraout_var_00,uVar6) == 0)) &&
       (bVar5 = (**(code **)(*plVar10 + 0x68))(plVar10), (bVar5 & 1) != 0)) {
      bVar4 = false;
      FUN_18001e6c0(param_1 + 0x3b,param_4,plVar10,uVar12,plVar9);
      *(undefined2 *)(lVar1 + 0x2a) = 2;
    }
    uVar12 = FUN_180034b20(param_4,*param_5);
    bVar19 = (int)uVar12 == 0;
    pcVar13 = (char *)(**(code **)(*plVar10 + 0x10))();
    uVar17 = 6;
    if (pcVar13 != (char *)0x0) {
      if (bVar19) {
LAB_1800175c6:
        bVar3 = false;
      }
      else {
        lVar11 = 0;
        do {
          lVar15 = lVar11 + 1;
          if ((&DAT_18004cd70)[lVar11] != pcVar13[lVar11]) {
            if ((*(char *)((longlong)param_1 + 0x381) == '\0') &&
               (iVar7 = strcmp("$LogFile",pcVar13), iVar7 == 0)) goto LAB_1800175c6;
            bVar3 = true;
            goto LAB_1800175c8;
          }
          lVar11 = lVar15;
        } while (lVar15 != 6);
        bVar3 = true;
      }
LAB_1800175c8:
      if ((((char)param_1[0x70] != '\0') || ((!bVar19 && (bVar3)))) && (bVar4)) {
        plVar14 = (longlong *)param_1[0x4a];
        if (plVar14 == (longlong *)0x0) {
          bVar5 = *(byte *)(param_1 + 0x4b);
          plVar14 = (longlong *)param_1[0x6d];
          if ((plVar14 == (longlong *)0x0) &&
             (plVar14 = (longlong *)param_1[0x6e], plVar14 == (longlong *)0x0)) {
            plVar14 = (longlong *)FUN_18002be40(0x70);
            local_a8 = plVar14;
            if (plVar14 != (longlong *)0x0) {
              plVar14 = FUN_18002c330(plVar14);
            }
            param_1[0x6e] = (longlong)plVar14;
            FUN_18002bfd0(plVar14,param_1[0x6f],(int)param_1[0x6a]);
            plVar14 = (longlong *)param_1[0x6e];
            if (*plVar14 != 0) {
              FUN_18002c390(plVar14);
              plVar14 = (longlong *)param_1[0x6e];
            }
          }
        }
        else {
          bVar5 = *(byte *)(param_1 + 0x4b);
        }
        FUN_180017190((longlong)param_1,plVar14,plVar10,(uint)bVar5);
        if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
          bVar5 = (byte)*(undefined2 *)((longlong)plVar10 + 0x23);
        }
        else {
          bVar5 = (*(code *)((undefined **)*plVar10)[7])(plVar10);
        }
        if (((bVar5 >> 4 & 1) != 0) && ((void *)plVar10[9] != (void *)0x0)) {
          FUN_180002ed0((void *)plVar10[9]);
          plVar10[9] = 0;
        }
      }
    }
    uVar12 = (**(code **)(*plVar10 + 0x68))(plVar10);
    if ((uVar12 & 1) != 0) {
      uVar17 = 1;
    }
    *(undefined2 *)(lVar1 + 0x2a) = uVar17;
    if (!bVar19) {
      (**(code **)(*plVar10 + 0x138))();
      uVar18 = 0xffffffff80004005;
      goto LAB_18001787b;
    }
    FUN_180007270(plVar10,(ulonglong)*param_7);
    plVar10[10] = (longlong)plVar9;
    *(char *)((longlong)plVar10 + 0x3e) = (char)*param_12;
  }
  local_a8 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    if ((undefined **)*plVar10 == CNTFSFileProperties::vftable) {
      bVar5 = *(byte *)((longlong)plVar10 + 0x3d);
    }
    else {
      bVar5 = (*(code *)((undefined **)*plVar10)[0xd])(plVar10);
    }
    if ((bVar5 & 1) == 0) {
      if ((undefined **)*local_a8 == CNTFSFileProperties::vftable) {
        uVar8 = (uint)*(ushort *)((longlong)local_a8 + 0x19);
      }
      else {
        uVar8 = (**(code **)*local_a8)(local_a8);
      }
      if (uVar8 == 0x4c) {
        if ((undefined **)*local_a8 == CNTFSFileProperties::vftable) {
          pcVar13 = *(char **)((longlong)local_a8 + 0x11);
        }
        else {
          pcVar13 = (char *)(*(code *)((undefined **)*local_a8)[2])(local_a8);
        }
        if ((pcVar13 != (char *)0x0) && (*pcVar13 == '{')) {
          if ((undefined **)*local_a8 == CNTFSFileProperties::vftable) {
            uVar8 = (uint)*(ushort *)((longlong)local_a8 + 0x19);
          }
          else {
            uVar8 = (**(code **)*local_a8)(local_a8);
          }
          plVar9 = local_a8;
          pcVar13 = pcVar13 + (longlong)(int)uVar8 + -0x26;
          pcVar16 = "{3808876b-c176-4e48-b7ae-04046e6cc752}";
          iVar7 = memcmp("{3808876b-c176-4e48-b7ae-04046e6cc752}",pcVar13,0x26);
          if (((iVar7 == 0) && (pcVar13 + -1 != (char *)0x0)) && (pcVar13[-1] == '}')) {
            LOCK();
            *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
            UNLOCK();
            lVar11 = param_1[0x65];
            plVar9 = *(longlong **)(lVar11 + 8);
            lVar15 = FUN_1800143b0(pcVar16,lVar11,(longlong)plVar9,&local_a8);
            if (param_1[0x66] == 0xaaaaaaaaaaaaaa9) {
              std::_Xlength_error("list<T> too long");
              pcVar2 = (code *)swi(3);
              uVar18 = (*pcVar2)();
              return uVar18;
            }
            param_1[0x66] = param_1[0x66] + 1;
            *(longlong *)(lVar11 + 8) = lVar15;
            *plVar9 = lVar15;
          }
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x10))
            (param_1,param_4,plVar10,param_2,*(undefined8 *)(lVar1 + 0x20),*param_13);
  uVar18 = *param_13;
LAB_18001787b:
  FUN_180043170(local_88);
  return uVar18;
}

