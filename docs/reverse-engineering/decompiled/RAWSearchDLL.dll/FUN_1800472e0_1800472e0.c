// Function: FUN_1800472e0
// Address: 1800472e0
// Size: 1182 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1800472e0(undefined4 *param_1,short *param_2,longlong param_3,undefined4 param_4)

{
  undefined8 ******ppppppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined8 ***pppuVar11;
  ulonglong uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ***pppuVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [4];
  int local_124;
  undefined8 local_120;
  int local_118 [2];
  undefined8 **local_110;
  int local_108;
  uint local_104;
  undefined8 local_100;
  short local_f8;
  ushort uStack_f6;
  short sStack_f4;
  short sStack_f2;
  short sStack_f0;
  short sStack_ee;
  short sStack_ec;
  short sStack_ea;
  short sStack_e8;
  short sStack_e6;
  short sStack_e4;
  short sStack_e2;
  int iStack_e0;
  undefined2 uStack_dc;
  short sStack_da;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 *******local_c8 [2];
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8 [4];
  longlong local_88 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  ulonglong local_48;
  
  local_100 = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStackY_158;
  if (param_2 != (short *)0x0) {
    param_1[2] = param_4;
    local_68 = 0x2b27b3d9;
    uStack_64 = 0xab910800;
    local_60 = 0xf94f6810;
    uStack_5c = 0xe0859ff2;
    local_58 = 0;
    local_f8 = *param_2;
    uStack_f6 = param_2[1];
    sStack_f4 = param_2[2];
    sStack_f2 = param_2[3];
    sStack_f0 = param_2[4];
    sStack_ee = param_2[5];
    sStack_ec = param_2[6];
    sStack_ea = param_2[7];
    sStack_e8 = param_2[8];
    sStack_e6 = param_2[9];
    sStack_e4 = param_2[10];
    sStack_e2 = param_2[0xb];
    iStack_e0 = *(int *)(param_2 + 0xc);
    uStack_dc = (undefined2)*(longlong *)(param_2 + 0xe);
    sStack_da = param_2[0xf];
    uStack_d8 = (undefined4)*(undefined8 *)(param_2 + 0x10);
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    uStack_d0 = (undefined4)*(undefined8 *)(param_2 + 0x14);
    uStack_cc = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
    if ((((local_f8 == -2) && (uStack_f6 < 2)) && (iStack_e0 - 1U < 2)) &&
       ((*(longlong *)(param_2 + 0xe) != -0x546ef7ffd4d84c27 ||
        (CONCAT44(uStack_d0,uStack_d4) != -0x1f7a600d06b097f0)))) {
      local_118[0] = 0;
      FUN_180001690((undefined1 *)local_c8);
      uVar12 = (ulonglong)uStack_cc;
      if ((uStack_cc + 4 <= (uint)param_1[2]) && (-1 < (int)uStack_cc)) {
        *param_1 = *(undefined4 *)(uVar12 + (longlong)param_2);
        iVar5 = *(int *)(uVar12 + 4 + (longlong)param_2);
        param_1[1] = iVar5;
        local_108 = uStack_cc + 8;
        local_124 = 0;
        if (0 < iVar5) {
          local_104 = uStack_cc + 0x10;
          uVar16 = (ulonglong)local_104;
          do {
            if (((0x1e < local_124) || ((int)uVar16 < 8)) || ((int)param_1[2] < (int)uVar16)) break;
            ppppppuVar1 = *(undefined8 *******)((longlong)local_108 + (longlong)param_2);
            local_120._4_4_ = (int)((ulonglong)ppppppuVar1 >> 0x20);
            iVar15 = local_120._4_4_ + (int)uVar12;
            iVar5 = (int)ppppppuVar1;
            local_120 = ppppppuVar1;
            if (iVar5 == 2) {
              if (-1 < iVar15) {
                FUN_180047780((longlong)param_1,(longlong)param_2,iVar15,local_118,(byte *)local_c8)
                ;
              }
              pppppppuVar7 = (undefined8 *******)(param_3 + 0x20);
              if ((undefined8 ********)pppppppuVar7 != local_c8) {
                pppppppuVar13 = local_c8;
                if (0xf < local_b0) {
                  pppppppuVar13 = local_c8[0];
                }
                FUN_1800071e0((longlong)pppppppuVar7,pppppppuVar13,local_b8);
              }
              local_110 = *(undefined8 ***)(param_3 + 0x30);
              if (0xf < *(ulonglong *)(param_3 + 0x38)) {
                pppppppuVar7 = (undefined8 *******)*pppppppuVar7;
              }
              local_120 = (undefined8 ******)0x0;
              pppuVar14 = (undefined8 ***)&local_120;
              pppuVar11 = &local_110;
LAB_1800476bc:
              puVar9 = FUN_180001e40((ulonglong *)pppuVar11,(ulonglong *)pppuVar14);
              memcmp(pppppppuVar7,&DAT_180066bb1,*puVar9);
            }
            else {
              if (iVar5 == 4) {
                if (-1 < iVar15) {
                  FUN_180047780((longlong)param_1,(longlong)param_2,iVar15,local_118,
                                (byte *)local_c8);
                }
                pppppppuVar7 = (undefined8 *******)(param_3 + 0x60);
LAB_180047677:
                if ((undefined8 ********)pppppppuVar7 != local_c8) {
                  pppppppuVar13 = local_c8;
                  if (0xf < local_b0) {
                    pppppppuVar13 = local_c8[0];
                  }
                  FUN_1800071e0((longlong)pppppppuVar7,pppppppuVar13,local_b8);
                }
                local_120 = pppppppuVar7[2];
                if ((undefined8 ******)0xf < pppppppuVar7[3]) {
                  pppppppuVar7 = (undefined8 *******)*pppppppuVar7;
                }
                pppuVar11 = (undefined8 ***)&local_120;
                pppuVar14 = &local_110;
                local_110 = (undefined8 **)0x0;
                goto LAB_1800476bc;
              }
              if (iVar5 == 8) {
                if (-1 < iVar15) {
                  FUN_180047780((longlong)param_1,(longlong)param_2,iVar15,local_118,
                                (byte *)local_c8);
                }
                pppppppuVar7 = (undefined8 *******)(param_3 + 0x80);
                goto LAB_180047677;
              }
              if (iVar5 == 0xc) {
                if (-1 < iVar15) {
                  FUN_180047780((longlong)param_1,(longlong)param_2,iVar15,local_118,
                                (byte *)local_c8);
                }
                local_110 = (undefined8 **)&local_68;
                puVar8 = (undefined8 *)&local_68;
                plVar6 = (longlong *)FUN_180007060((longlong)puVar8,local_c8);
                pppppppuVar7 = (undefined8 *******)FUN_180047da0(puVar8,(longlong)local_a8,plVar6);
                if (local_c8 != (undefined8 ********)pppppppuVar7) {
                  FUN_180001630((longlong *)local_c8);
                  puVar8 = (undefined8 *)FUN_1800016b0(pppppppuVar7);
                  puVar10 = (undefined8 *)FUN_1800016b0(local_c8);
                  uVar2 = puVar8[1];
                  uVar3 = puVar8[2];
                  uVar4 = puVar8[3];
                  *puVar10 = *puVar8;
                  puVar10[1] = uVar2;
                  puVar10[2] = uVar3;
                  puVar10[3] = uVar4;
                  puVar8[2] = 0;
                  puVar8[3] = 0xf;
                  local_128[0] = 0;
                  FUN_180001300((undefined1 *)puVar8,local_128);
                }
                FUN_180001630(local_a8);
                pppppppuVar7 = (undefined8 *******)(param_3 + 0xa0);
                goto LAB_180047677;
              }
              if (iVar5 == 0xd) {
                if (-1 < iVar15) {
                  FUN_180047780((longlong)param_1,(longlong)param_2,iVar15,local_118,
                                (byte *)local_c8);
                }
                local_110 = (undefined8 **)&local_68;
                puVar8 = (undefined8 *)&local_68;
                plVar6 = (longlong *)FUN_180007060((longlong)puVar8,local_c8);
                pppppppuVar7 = (undefined8 *******)FUN_180047da0(puVar8,(longlong)local_88,plVar6);
                if (local_c8 != (undefined8 ********)pppppppuVar7) {
                  FUN_180001630((longlong *)local_c8);
                  puVar8 = (undefined8 *)FUN_1800016b0(pppppppuVar7);
                  puVar10 = (undefined8 *)FUN_1800016b0(local_c8);
                  uVar2 = puVar8[1];
                  uVar3 = puVar8[2];
                  uVar4 = puVar8[3];
                  *puVar10 = *puVar8;
                  puVar10[1] = uVar2;
                  puVar10[2] = uVar3;
                  puVar10[3] = uVar4;
                  puVar8[2] = 0;
                  puVar8[3] = 0xf;
                  local_128[0] = 0;
                  FUN_180001300((undefined1 *)puVar8,local_128);
                }
                FUN_180001630(local_88);
                pppppppuVar7 = (undefined8 *******)(param_3 + 0xc0);
                goto LAB_180047677;
              }
            }
            local_108 = local_108 + 8;
            local_104 = local_104 + 8;
            uVar16 = (ulonglong)local_104;
            iVar5 = local_124;
            puVar10 = (undefined8 *)FUN_1800016b0(local_c8);
            puVar8 = puVar10;
            if (0xf < (ulonglong)puVar10[3]) {
              puVar8 = (undefined8 *)*puVar10;
            }
            puVar10[2] = 0;
            local_128[0] = 0;
            FUN_180001300((undefined1 *)puVar8,local_128);
            local_124 = iVar5 + 1;
            uVar12 = (ulonglong)uStack_cc;
          } while (local_124 < (int)param_1[1]);
        }
      }
      FUN_180001630((longlong *)local_c8);
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_158);
  return;
}

