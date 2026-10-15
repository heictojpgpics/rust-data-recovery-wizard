// Function: FUN_18000ecb0
// Address: 18000ecb0
// Size: 1528 bytes


void FUN_18000ecb0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  longlong *local_178;
  undefined8 *local_170;
  longlong local_168 [3];
  longlong *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  longlong local_138;
  undefined4 *local_130;
  longlong local_128;
  undefined1 local_120;
  undefined8 local_118;
  longlong *local_110;
  LPCRITICAL_SECTION local_108;
  undefined4 local_f8 [44];
  ulonglong local_48;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  local_118 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(param_1 + 0xb8) == 0) goto LAB_18000f270;
  puVar10 = param_2;
  FUN_1800025a0(local_168);
  if (puVar10[7] != 0) {
    FUN_18001f9c0(param_2,local_168);
  }
  if (param_4 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulonglong)*(uint *)((longlong)param_4 + 0xc);
  }
  uVar6 = (uint)uVar11;
  iVar16 = 0;
  ppuVar17 = CNTFSFileProperties::vftable;
  local_170 = param_4;
  if (param_4 == (undefined8 *)0x0) {
    local_170 = param_4;
    plVar8 = (longlong *)FUN_180002680(local_168);
    lVar15 = *plVar8;
    plVar8 = (longlong *)FUN_180002670((longlong)local_168);
    lVar9 = *plVar8;
    if (lVar15 != lVar9) {
      do {
        uVar6 = (uint)uVar11;
        plVar8 = *(longlong **)(lVar15 + 0x20);
        if (plVar8 != (longlong *)0x0) {
          if ((undefined **)*plVar8 == ppuVar17) {
            lVar13 = *(longlong *)((longlong)plVar8 + 0x1b);
          }
          else {
            lVar13 = (*(code *)((undefined **)*plVar8)[3])();
          }
          if ((0x800 < lVar13) && ((int)uVar6 < 1)) {
            if (8 < iVar16) break;
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
            uVar6 = FUN_1800442d0(*(longlong **)(lVar15 + 0x20),uVar6);
            uVar11 = (ulonglong)uVar6;
            iVar16 = iVar16 + 1;
            if (0 < (int)uVar6) {
              if ((uVar6 != 0) && (*(ulonglong *)(param_1 + 0x148) < 4)) {
                bVar3 = false;
                lVar15 = 0;
                local_110 = *(longlong **)(param_1 + 0x140);
                local_150 = (longlong *)*local_110;
                if (local_150 != local_110) goto LAB_18000ee15;
                goto LAB_18000ef47;
              }
              puVar10 = (undefined8 *)0x0;
              goto LAB_18000ef57;
            }
          }
        }
        uVar6 = (uint)uVar11;
        lVar15 = lVar15 + 0x38;
        if (lVar15 == lVar9) break;
        ppuVar17 = CNTFSFileProperties::vftable;
      } while( true );
    }
  }
  goto LAB_18000f02b;
  while( true ) {
    plVar8 = (longlong *)local_150[2];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar4 = *(char *)(*plVar8 + 0x19);
      local_150 = plVar8;
      plVar8 = (longlong *)*plVar8;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*plVar8 + 0x19);
        local_150 = plVar8;
        plVar8 = (longlong *)*plVar8;
      }
    }
    else {
      cVar4 = *(char *)(local_150[1] + 0x19);
      plVar1 = (longlong *)local_150[1];
      plVar8 = local_150;
      while ((local_150 = plVar1, cVar4 == '\0' && (plVar8 == (longlong *)local_150[2]))) {
        cVar4 = *(char *)(local_150[1] + 0x19);
        plVar1 = (longlong *)local_150[1];
        plVar8 = local_150;
      }
    }
    if (local_150 == local_110) break;
LAB_18000ee15:
    lVar9 = local_150[4];
    if (((lVar15 == 0) && (*(char *)(lVar9 + 0xf1) != '\0')) && (-1 < *(longlong *)(lVar9 + 0x10)))
    {
      lVar15 = lVar9;
    }
    if (*(uint *)(lVar9 + 0xc) == uVar6) {
      bVar3 = true;
      break;
    }
  }
  if ((lVar15 == 0) || (bVar3)) {
LAB_18000ef47:
    local_170 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)FUN_18002be40(0x1a8);
    local_140 = puVar10;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
      puVar10 = FUN_180039390(puVar10,uVar7);
    }
    puVar10[2] = *(undefined8 *)(lVar15 + 0x10);
    *(uint *)((longlong)puVar10 + 0xc) = uVar6;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 1) = 3;
    lVar9 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
    lVar15 = (lVar9 - *(longlong *)(lVar15 + 0x10)) / (longlong)uVar11;
    puVar10[0x15] = lVar15;
    puVar10[0xc] = uVar11 * lVar15;
    *(undefined4 *)((longlong)puVar10 + 0x9c) = 0x100;
    puVar10[4] = 1;
    *(undefined1 *)(puVar10 + 0x34) = 1;
LAB_18000ef57:
    local_170 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
      local_108 = lpCriticalSection;
      EnterCriticalSection(lpCriticalSection);
      puVar10 = local_170;
      if ((((*(longlong *)(param_1 + 0xb8) == 0) || (local_170 == (undefined8 *)0x0)) ||
          (*(int *)((longlong)local_170 + 0x9c) != 0x20)) ||
         (((*(uint *)((longlong)local_170 + 0xc) != 0 && (-1 < (longlong)local_170[2])) &&
          ((longlong)local_170[2] % (longlong)(ulonglong)*(uint *)((longlong)local_170 + 0xc) == 0))
         )) {
        puVar18 = (undefined8 *)(param_1 + 0x920);
        cVar4 = FUN_180043f60((longlong *)(param_1 + 0x140),(longlong *)&local_170,puVar18);
        if (cVar4 != '\0') {
          FUN_180001690(local_f8);
          local_138 = *(longlong *)(param_1 + 0xb8);
          local_130 = local_f8;
          local_128 = param_1 + 0x878;
          local_120 = 0;
          FUN_180003ed0(&local_138,(longlong)puVar10,puVar18);
          FUN_180001700((longlong)local_f8);
        }
      }
      else {
        (**(code **)*local_170)(local_170,1);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
  }
LAB_18000f02b:
  if ((int)uVar6 < 1) {
    puVar10 = (undefined8 *)FUN_180002680(local_168);
    uVar14 = *puVar10;
    puVar10 = (undefined8 *)FUN_180002670((longlong)local_168);
    *puVar10 = uVar14;
    if (param_2[7] != 0) {
      FUN_18001cb50((longlong)param_2,local_168);
    }
  }
  plVar8 = (longlong *)FUN_180002680(local_168);
  puVar10 = (undefined8 *)*plVar8;
  local_148 = puVar10;
  plVar8 = (longlong *)FUN_180002670((longlong)local_168);
  local_140 = (undefined8 *)*plVar8;
  if (puVar10 != local_140) {
    do {
      plVar1 = (longlong *)puVar10[4];
      if (plVar1 != (longlong *)0x0) {
        local_178 = FUN_180031070();
        if (local_178 == (longlong *)0x0) break;
        LOCK();
        *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
        UNLOCK();
        local_178[0xb] = param_3;
        local_178[6] = (longlong)plVar1;
        if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
          uVar5 = *(ushort *)((longlong)plVar1 + 0x23);
        }
        else {
          uVar5 = (*(code *)((undefined **)*plVar1)[7])(plVar1);
        }
        puVar10 = local_148;
        if ((uVar5 & 0x400) == 0) {
          local_178[10] = plVar1[0xb];
        }
        else {
          local_178[10] = -100;
        }
        local_178[9] = local_148[5];
        FUN_1800101b0(param_1,local_178);
        plVar1 = local_178;
        if (local_170 == (undefined8 *)0x0) {
          if ((local_178 != (longlong *)0x0) && (local_178[6] != 0)) {
            lVar15 = *(longlong *)(param_1 + 0x838);
            if ((lVar15 != 0) && ((lVar15 <= local_178[0xb] && (local_178[0xb] < lVar15 + 8)))) {
              local_188 = 0;
              lVar15 = __RTDynamicCast(local_178[6],0,&IFileProperties::RTTI_Type_Descriptor,
                                       &CNTFSFileProperties::RTTI_Type_Descriptor);
              if (lVar15 != 0) {
                *(byte *)(lVar15 + 0x72) = *(byte *)(lVar15 + 0x72) | 1;
              }
            }
            uVar11 = FUN_180023350(param_1 + 0x888,plVar1,'\0');
            if ((char)uVar11 == '\0') {
              (**(code **)(*plVar1 + 0x30))(plVar1,1);
            }
            else {
              FUN_1800224d0(param_1 + 0x888,plVar1,'\0');
            }
          }
        }
        else {
          lVar15 = param_1 + 0x888;
          uVar11 = FUN_180023350(lVar15,local_178,'\0');
          if ((char)uVar11 == '\0') {
            if (local_178 != (longlong *)0x0) {
              (**(code **)(*local_178 + 0x30))(local_178,1);
            }
            local_178 = (longlong *)0x0;
          }
          else {
            pvVar2 = (void *)local_170[0x32];
            if ((void *)local_170[0x33] == pvVar2) {
              FUN_180013520(local_170 + 0x31,pvVar2,&local_178);
            }
            else {
              puVar18 = local_170;
              puVar12 = (undefined8 *)FUN_180001100(lVar15,pvVar2);
              *puVar12 = local_178;
              puVar18[0x32] = puVar18[0x32] + 8;
            }
          }
        }
      }
      puVar10 = puVar10 + 7;
      local_140 = (undefined8 *)*plVar8;
      local_148 = puVar10;
    } while (puVar10 != local_140);
  }
  FUN_180002520(local_168);
LAB_18000f270:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_1a8);
  return;
}

