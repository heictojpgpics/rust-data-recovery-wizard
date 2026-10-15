// Function: FUN_180022130
// Address: 180022130
// Size: 923 bytes


void FUN_180022130(longlong param_1)

{
  size_t *psVar1;
  size_t *psVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined *local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_68 = 0xfffffffffffffffe;
  local_38 = DAT_180086010 ^ (ulonglong)auStack_d8;
  plVar12 = *(longlong **)(param_1 + 0x10);
  local_70 = plVar12;
  local_98 = (longlong *)*plVar12;
  local_80 = param_1;
  if (local_98 != plVar12) {
    do {
      lVar6 = local_80;
      local_a8 = (longlong *)local_98[5];
      plVar13 = (longlong *)local_98[6];
      local_a0 = plVar13;
      if (local_a8 != plVar13) {
        do {
          lVar4 = *local_a8;
          if (lVar4 != 0) {
            local_88 = *(undefined **)(lVar4 + 0x40);
            if (local_88 == (undefined *)0x0) {
              plVar12 = *(longlong **)(lVar4 + 0x30);
              if (plVar12 == (longlong *)0x0) {
                puVar16 = &DAT_18004c788;
              }
              else if ((undefined **)*plVar12 == CNTFSFileProperties::vftable) {
                puVar16 = *(undefined **)((longlong)plVar12 + 0x11);
                plVar13 = local_a0;
              }
              else {
                puVar16 = (undefined *)(*(code *)((undefined **)*plVar12)[2])();
                plVar13 = local_a0;
              }
              local_88 = &DAT_18004c788;
              if (puVar16 != (undefined *)0x0) {
                local_88 = puVar16;
              }
              if (local_88 == (undefined *)0x0) goto LAB_1800223f6;
            }
            puVar18 = *(undefined8 **)(lVar6 + 0x28);
            puVar15 = (undefined8 *)puVar18[1];
            puVar14 = puVar15;
            puVar17 = puVar18;
            if (*(char *)((longlong)puVar15 + 0x19) == '\0') {
              do {
                if ((longlong)puVar14[4] < *(longlong *)(lVar4 + 0x50)) {
                  puVar11 = (undefined8 *)puVar14[2];
                }
                else {
                  puVar11 = (undefined8 *)*puVar14;
                  puVar17 = puVar14;
                }
                puVar14 = puVar11;
              } while (*(char *)((longlong)puVar11 + 0x19) == '\0');
              do {
                if (*(longlong *)(lVar4 + 0x50) < (longlong)puVar15[4]) {
                  puVar14 = (undefined8 *)*puVar15;
                  puVar18 = puVar15;
                }
                else {
                  puVar14 = (undefined8 *)puVar15[2];
                }
                puVar15 = puVar14;
              } while (*(char *)((longlong)puVar14 + 0x19) == '\0');
            }
            local_90 = 0;
            plVar12 = *(longlong **)(lVar4 + 0x30);
            if (plVar12 == (longlong *)0x0) {
              local_78 = 0;
              plVar12 = &local_78;
            }
            else {
              plVar12 = (longlong *)(**(code **)(*plVar12 + 0x50))(plVar12,local_60);
            }
            lVar5 = *plVar12;
            while (plVar13 = local_a0, puVar17 != puVar18) {
              bVar8 = FUN_1800025c0((longlong)(puVar17 + 9));
              if ((!bVar8) && (puVar17[6] == *(longlong *)(lVar4 + 0x48))) {
                local_b8 = 0;
                plVar12 = (longlong *)
                          __RTDynamicCast(*(undefined8 *)(lVar4 + 0x30),0,
                                          &IFileProperties::RTTI_Type_Descriptor,
                                          &CNTFSFileProperties::RTTI_Type_Descriptor);
                if (plVar12 != (longlong *)0x0) {
                  plVar13 = FUN_180003be0(local_58,local_88);
                  puVar14 = (undefined8 *)FUN_180002680(plVar13);
                  puVar15 = (undefined8 *)FUN_180002680(puVar17 + 9);
                  psVar1 = puVar15 + 2;
                  if (0xf < (ulonglong)puVar15[3]) {
                    puVar15 = (undefined8 *)*puVar15;
                  }
                  psVar2 = puVar14 + 2;
                  if (0xf < (ulonglong)puVar14[3]) {
                    puVar14 = (undefined8 *)*puVar14;
                  }
                  if ((*psVar2 == *psVar1) &&
                     (iVar10 = memcmp(puVar14,puVar15,*psVar2), iVar10 == 0)) {
                    bVar8 = false;
                  }
                  else {
                    bVar8 = true;
                  }
                  FUN_1800025f0(local_58);
                  if (!bVar8) {
                    if ((undefined **)*plVar12 == CNTFSFileProperties::vftable) {
                      bVar9 = *(byte *)((longlong)plVar12 + 0x72) & 1;
                    }
                    else {
                      bVar9 = (*(code *)((undefined **)*plVar12)[0x1b])(plVar12);
                    }
                    if ((bVar9 != 0) || (puVar17[8] == lVar5)) {
                      *(undefined8 *)((longlong)plVar12 + 0x1b) = puVar17[7];
                      plVar13 = local_a0;
                      break;
                    }
                  }
                }
              }
              puVar15 = (undefined8 *)puVar17[2];
              if (*(char *)((longlong)puVar15 + 0x19) == '\0') {
                cVar3 = *(char *)((longlong)*puVar15 + 0x19);
                puVar17 = puVar15;
                puVar15 = (undefined8 *)*puVar15;
                while (cVar3 == '\0') {
                  cVar3 = *(char *)((longlong)*puVar15 + 0x19);
                  puVar17 = puVar15;
                  puVar15 = (undefined8 *)*puVar15;
                }
              }
              else {
                cVar3 = *(char *)((longlong)puVar17[1] + 0x19);
                puVar14 = (undefined8 *)puVar17[1];
                puVar15 = puVar17;
                while ((puVar17 = puVar14, cVar3 == '\0' && (puVar15 == (undefined8 *)puVar17[2])))
                {
                  cVar3 = *(char *)((longlong)puVar17[1] + 0x19);
                  puVar14 = (undefined8 *)puVar17[1];
                  puVar15 = puVar17;
                }
              }
            }
          }
LAB_1800223f6:
          local_a8 = local_a8 + 1;
          plVar12 = local_70;
        } while (local_a8 != plVar13);
      }
      plVar13 = (longlong *)local_98[2];
      if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
        cVar3 = *(char *)(*plVar13 + 0x19);
        local_98 = plVar13;
        plVar13 = (longlong *)*plVar13;
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*plVar13 + 0x19);
          local_98 = plVar13;
          plVar13 = (longlong *)*plVar13;
        }
      }
      else {
        cVar3 = *(char *)(local_98[1] + 0x19);
        plVar7 = (longlong *)local_98[1];
        plVar13 = local_98;
        while ((local_98 = plVar7, cVar3 == '\0' && (plVar13 == (longlong *)local_98[2]))) {
          cVar3 = *(char *)(local_98[1] + 0x19);
          plVar7 = (longlong *)local_98[1];
          plVar13 = local_98;
        }
      }
    } while (local_98 != plVar12);
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_d8);
  return;
}

