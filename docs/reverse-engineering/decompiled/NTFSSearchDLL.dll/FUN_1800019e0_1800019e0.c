// Function: FUN_1800019e0
// Address: 1800019e0
// Size: 1179 bytes


/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1800019e0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  char *pcVar16;
  undefined1 auStackY_1278 [32];
  longlong local_1238 [3];
  undefined8 local_1220;
  longlong local_1210;
  longlong local_1208 [4];
  longlong local_11e8 [4];
  undefined1 local_11c8 [10];
  undefined8 local_11be;
  ushort local_11b6;
  undefined8 local_11b4;
  undefined8 local_11ac;
  undefined8 local_11a4;
  undefined1 local_119c;
  undefined8 local_1199;
  undefined8 local_1191;
  undefined8 local_1181;
  undefined4 local_1179;
  undefined4 local_1175;
  undefined2 local_1171;
  undefined2 local_116f;
  undefined2 local_1169;
  byte local_1167;
  undefined8 local_1158;
  undefined8 *local_1150;
  char local_1148 [256];
  int local_1048 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1800019fe;
  local_1158 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStackY_1278;
  if ((param_2 != (longlong *)0x0) && (iVar6 = (**(code **)(*param_2 + 0x28))(param_2), 0 < iVar6))
  {
    local_1238[0] = 0;
    local_1238[1] = 0;
    local_1238[2] = 0;
    local_1220 = 0;
    FUN_180007370(&local_1210);
    lVar9 = FUN_1800020f0(param_1,param_2,param_3,local_1238);
    if (lVar9 == 0) {
      *(undefined1 *)(param_1 + 0x2e0) = 1;
      memset(local_1148,0,0x100);
      pcVar15 = (char *)0x0;
      if (*(longlong *)(param_1 + 0x450) == 0) {
        iVar6 = local_1220._4_4_;
        if ((-1 < local_1210) && (local_1220._4_4_ - 0x400 < 0xc01)) {
          memset(local_1048,0,0x1000);
          pcVar2 = *(code **)(*param_2 + 8);
          iVar7 = (**(code **)(*param_2 + 0x28))(param_2);
          iVar7 = (*pcVar2)(param_2,local_1048,local_1210 + 6,
                            (longlong)(int)(0x1000 / (longlong)iVar7));
          if ((iVar7 != 0) &&
             (FUN_18003f3a0(local_1048,local_1148,iVar6), pcVar15 = (char *)0x0,
             local_1148[0] != '\0')) {
            pcVar15 = local_1148;
          }
        }
      }
      else {
        pcVar15 = (char *)(param_1 + 0x440);
        if (0xf < *(ulonglong *)(param_1 + 0x458)) {
          pcVar15 = *(char **)pcVar15;
        }
      }
      uVar4 = local_1220;
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
      local_1150 = (undefined8 *)FUN_18002be40(0x290);
      if (local_1150 == (undefined8 *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = FUN_180031b10(local_1150);
      }
      if (plVar10 != (longlong *)0x0) {
        puVar11 = FUN_180002f90();
        uVar14 = 0xffffffffffffffff;
        if (puVar11 != (undefined8 *)0x0) {
          memset(local_11c8,0,0x62);
          pcVar16 = "NTFS";
          if (pcVar15 != (char *)0x0) {
            pcVar16 = pcVar15;
          }
          lVar9 = -1;
          do {
            lVar13 = lVar9;
            lVar9 = lVar13 + 1;
          } while (pcVar16[lVar9] != '\0');
          lVar9 = FUN_18002be40(lVar13 + 2);
          pcVar12 = pcVar16;
          do {
            cVar1 = *pcVar12;
            pcVar12[lVar9 - (longlong)pcVar16] = cVar1;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (pcVar16[lVar13] != '\0');
          *(undefined8 *)((longlong)puVar11 + 0x25) = local_11b4;
          *(undefined8 *)((longlong)puVar11 + 0x35) = local_11a4;
          *(undefined8 *)((longlong)puVar11 + 0x2d) = local_11ac;
          *(longlong *)((longlong)puVar11 + 0x11) = lVar9;
          *(short *)((longlong)puVar11 + 0x19) = (short)lVar13;
          puVar11[8] = local_1199;
          *(undefined8 *)((longlong)puVar11 + 0x1b) = local_11be;
          *(ushort *)((longlong)puVar11 + 0x23) = local_11b6 | 0x10;
          *(undefined1 *)((longlong)puVar11 + 0x3d) = local_119c;
          puVar11[0xb] = local_1181;
          *(undefined4 *)((longlong)puVar11 + 100) = local_1175;
          *(undefined4 *)(puVar11 + 0xc) = local_1179;
          puVar11[9] = local_1191;
          *(undefined2 *)(puVar11 + 0xd) = local_1171;
          *(undefined2 *)((longlong)puVar11 + 0x6a) = local_116f;
          *(byte *)((longlong)puVar11 + 0x72) = *(byte *)((longlong)puVar11 + 0x72) & 0xc2;
          *(byte *)((longlong)puVar11 + 0x72) =
               *(byte *)((longlong)puVar11 + 0x72) | local_1167 & 0x3d;
          *(undefined2 *)(puVar11 + 0xe) = local_1169;
        }
        plVar10[6] = (longlong)puVar11;
        (**(code **)(*plVar10 + 0x38))(plVar10,uVar3,uVar4 & 0xffffffff);
        (**(code **)(*plVar10 + 0x40))(plVar10,3);
        if (pcVar15 != (char *)0x0) {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (pcVar15[lVar9] != '\0');
          if (lVar9 != 0) {
            do {
              uVar14 = uVar14 + 1;
            } while (pcVar15[uVar14] != '\0');
            if (uVar14 < 0x41) {
              FUN_180032230((longlong)plVar10,pcVar15);
            }
          }
        }
        plVar10[10] = 5;
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))
                          (*(longlong **)(param_1 + 0x90),plVar10,0,0);
        if (iVar6 != 0) {
          *(longlong **)(param_1 + 0x3d0) = param_2;
          *(uint *)(param_1 + 0x3d8) = (uint)local_1220;
          *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_1 + 0xb8);
          *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0xa0);
          *(undefined8 *)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x150);
          FUN_18001cf20((undefined1 *)(param_1 + 0x260),*(longlong **)(param_1 + 0x98),local_1208,
                        (uint)local_1220,*(longlong *)(param_1 + 0xa0));
          uVar5 = FUN_18001d460(param_1 + 0x260);
          *(undefined1 *)(param_1 + 0x409) = uVar5;
          FUN_180018740((longlong *)(param_1 + 0x318),*(longlong **)(param_1 + 0x98),local_1208,
                        (uint)local_1220,*(longlong *)(param_1 + 0xa0));
          if (*(longlong *)(param_1 + 0x330) != 0) {
            FUN_1800193c0(param_1 + 0x318);
          }
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x28))();
          FUN_180016750((longlong *)(param_1 + 0x88),local_1208,(char)(local_1220._4_4_ / uVar8),1);
          *(undefined8 *)(param_1 + 0x2d8) = 0;
          ~_String_alloc<>(local_11e8);
          ~_String_alloc<>(local_1208);
          goto LAB_180001e51;
        }
      }
      ~_String_alloc<>(local_11e8);
      ~_String_alloc<>(local_1208);
    }
    else {
      ~_String_alloc<>(local_11e8);
      ~_String_alloc<>(local_1208);
    }
  }
LAB_180001e51:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_1278);
  return;
}

