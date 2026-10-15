// Function: FUN_180010c00
// Address: 180010c00
// Size: 852 bytes


void FUN_180010c00(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined8 local_d8 [3];
  longlong local_c0;
  longlong *local_70;
  undefined1 local_58;
  
  local_e8 = 0xfffffffffffffffe;
  plVar12 = *(longlong **)(param_1 + 0x140);
  local_res18 = (longlong *)*plVar12;
  local_res20 = plVar12;
  if (local_res18 != plVar12) {
    do {
      plVar15 = local_res18;
      lVar3 = local_res18[4];
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x160) != 0)) {
        puVar10 = (undefined8 *)FUN_180002680(lVar3 + 0x158);
        FUN_1800065b0(local_f8,(undefined8 *)(*(longlong *)*puVar10 + 0x10));
        lVar8 = local_f8[0];
        if (local_f8[0] != 0) {
          FUN_180018570(local_d8);
          uVar11 = FUN_180019a20((longlong)local_d8,*(longlong **)(param_1 + 0xb8),
                                 (undefined8 *)(lVar8 + 8),*(longlong *)(lVar3 + 0x180),
                                 *(int *)(lVar3 + 0xc),*(undefined8 *)(lVar3 + 0x10));
          if (((((char)uVar11 != '\0') && (local_58 = 1, local_c0 != 0)) &&
              (iVar9 = FUN_1800193c0(local_d8), iVar9 != 0)) &&
             (plVar13 = (longlong *)*local_70, plVar13 != local_70)) {
            do {
              puVar4 = (ulonglong *)plVar13[5];
              if ((puVar4 != (ulonglong *)0x0) && (puVar4[5] != 0)) {
                plVar12 = FUN_180002f90();
                uVar5 = puVar4[3];
                uVar6 = *puVar4;
                uVar14 = uVar6 & 0xffffffffffff;
                uVar2 = *(undefined2 *)((longlong)puVar4 + 0xe);
                *(ulonglong *)((longlong)plVar12 + 0x25) = uVar5;
                *(ulonglong *)((longlong)plVar12 + 0x35) = uVar5;
                *(ulonglong *)((longlong)plVar12 + 0x2d) = uVar5;
                *(undefined8 *)((longlong)plVar12 + 0x11) = 0;
                *(undefined2 *)((longlong)plVar12 + 0x19) = 0;
                plVar12[8] = 0;
                *(undefined8 *)((longlong)plVar12 + 0x1b) = 0;
                *(undefined2 *)((longlong)plVar12 + 0x23) = 0x10;
                *(undefined1 *)((longlong)plVar12 + 0x3d) = 1;
                plVar12[0xb] = uVar14;
                plVar12[0xc] = 0;
                plVar12[9] = 0;
                *(short *)(plVar12 + 0xd) = (short)(uVar6 >> 0x30);
                *(undefined2 *)((longlong)plVar12 + 0x6a) = uVar2;
                *(byte *)((longlong)plVar12 + 0x72) = *(byte *)((longlong)plVar12 + 0x72) & 0xc3 | 1
                ;
                *(undefined2 *)(plVar12 + 0xe) = 0;
                (**(code **)(*plVar12 + 8))(plVar12,puVar4[5]);
                if (0xe < uVar14) {
                  local_res10 = FUN_180031070();
                  local_res10[6] = plVar12;
                  local_res10[10] = uVar14;
                  uVar5 = puVar4[1];
                  local_res10[9] = uVar5 & 0xffffffffffff;
                  *(undefined2 *)((longlong)local_res10 + 0x6c) = 2;
                  pvVar7 = *(void **)(lVar3 + 400);
                  if (*(void **)(lVar3 + 0x198) == pvVar7) {
                    FUN_180013520((longlong *)(lVar3 + 0x188),pvVar7,&local_res10);
                  }
                  else {
                    puVar10 = (undefined8 *)FUN_180001100(uVar5 & 0xffffffffffff,pvVar7);
                    *puVar10 = local_res10;
                    *(longlong *)(lVar3 + 400) = *(longlong *)(lVar3 + 400) + 8;
                  }
                }
              }
              plVar12 = (longlong *)plVar13[2];
              if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar12 + 0x19);
                plVar13 = plVar12;
                plVar12 = (longlong *)*plVar12;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*plVar12 + 0x19);
                  plVar13 = plVar12;
                  plVar12 = (longlong *)*plVar12;
                }
              }
              else {
                cVar1 = *(char *)(plVar13[1] + 0x19);
                plVar15 = (longlong *)plVar13[1];
                plVar12 = plVar13;
                while ((plVar13 = plVar15, cVar1 == '\0' && (plVar12 == (longlong *)plVar13[2]))) {
                  cVar1 = *(char *)(plVar13[1] + 0x19);
                  plVar15 = (longlong *)plVar13[1];
                  plVar12 = plVar13;
                }
              }
              plVar12 = local_res20;
              plVar15 = local_res18;
            } while (plVar13 != local_70);
          }
          FUN_180018630((longlong)local_d8);
        }
        FUN_180005f30((longlong)local_f8);
      }
      local_res18 = (longlong *)plVar15[2];
      if (*(char *)((longlong)local_res18 + 0x19) == '\0') {
        cVar1 = *(char *)(*local_res18 + 0x19);
        plVar15 = (longlong *)*local_res18;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar15 + 0x19);
          local_res18 = plVar15;
          plVar15 = (longlong *)*plVar15;
        }
      }
      else {
        cVar1 = *(char *)(plVar15[1] + 0x19);
        plVar13 = (longlong *)plVar15[1];
        while ((local_res18 = plVar13, cVar1 == '\0' && (plVar15 == (longlong *)local_res18[2]))) {
          cVar1 = *(char *)(local_res18[1] + 0x19);
          plVar13 = (longlong *)local_res18[1];
          plVar15 = local_res18;
        }
      }
    } while (local_res18 != plVar12);
  }
  return;
}

