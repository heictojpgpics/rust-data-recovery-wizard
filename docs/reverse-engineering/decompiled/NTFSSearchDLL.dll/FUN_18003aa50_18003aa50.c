// Function: FUN_18003aa50
// Address: 18003aa50
// Size: 689 bytes


void FUN_18003aa50(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  TypeDescriptor *pTVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  char *pcVar13;
  longlong *plVar14;
  TypeDescriptor *pTVar15;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50 [4];
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_180086010 ^ (ulonglong)auStack_98;
  lVar8 = param_1[5];
  if (lVar8 != 0) {
    plVar14 = *(longlong **)(lVar8 + 0x188);
    plVar1 = *(longlong **)(lVar8 + 400);
    if (plVar14 != plVar1) {
      do {
        plVar2 = (longlong *)*plVar14;
        if (plVar2 != (longlong *)0x0) {
          local_78 = 0;
          pTVar15 = &IFileProperties::RTTI_Type_Descriptor;
          pTVar5 = (TypeDescriptor *)
                   __RTDynamicCast(plVar2[6],0,&IFileProperties::RTTI_Type_Descriptor,
                                   &CNTFSFileProperties::RTTI_Type_Descriptor);
          if (pTVar5 != (TypeDescriptor *)0x0) {
            if ((undefined **)pTVar5->pVFTable == CNTFSFileProperties::vftable) {
              bVar4 = (byte)*(undefined2 *)((longlong)&pTVar5[2].pVFTable + 3);
            }
            else {
              bVar4 = (**(code **)((longlong)pTVar5->pVFTable + 0x38))(pTVar5);
            }
            if ((bVar4 >> 4 & 1) == 0) {
              pTVar15 = pTVar5;
              uVar6 = FUN_18003a730(param_1,plVar2[9],(longlong *)pTVar5);
              if ((char)uVar6 == '\0') {
                if ((undefined **)pTVar5->pVFTable == CNTFSFileProperties::vftable) {
                  puVar7 = (undefined8 *)0x0;
                  if ((ushort *)pTVar5[4].spare != (ushort *)0x0) {
                    puVar7 = FUN_180033aa0((ushort *)pTVar5[4].spare);
                  }
                }
                else {
                  puVar7 = (undefined8 *)(**(code **)((longlong)pTVar5->pVFTable + 0x78))(pTVar5);
                }
                FUN_1800060b0(&local_68,puVar7);
                bVar3 = FUN_180005ef0(&local_68);
                if (bVar3) {
                  lVar8 = FUN_180005f00(&local_68);
                  plVar9 = FUN_1800340b0(lVar8);
                  if ((plVar9 != (longlong *)0x0) && (*plVar9 <= *(longlong *)(param_1[5] + 0xa8)))
                  {
                    if ((undefined **)pTVar5->pVFTable == CNTFSFileProperties::vftable) {
                      lVar8 = *(longlong *)((longlong)&pTVar5[1].spare + 3);
                    }
                    else {
                      lVar8 = (**(code **)((longlong)pTVar5->pVFTable + 0x18))(pTVar5);
                    }
                    if (-1 < lVar8) {
                      FUN_180005f10(&local_68);
                      goto LAB_18003abdd;
                    }
                    FUN_180005f10(&local_68);
                    goto LAB_18003acab;
                  }
                }
                FUN_180005f10(&local_68);
              }
              else {
                (**(code **)(*plVar2 + 0x30))(plVar2);
              }
            }
            else {
LAB_18003abdd:
              *(undefined2 *)((longlong)plVar2 + 0x6c) = 2;
              local_60 = plVar2;
              puVar10 = FUN_1800319c0((longlong)plVar2);
              FUN_180003be0(local_50,puVar10);
              uVar11 = FUN_1800025d0((longlong)local_50);
              if (2 < uVar11) {
                pcVar12 = (char *)FUN_180002680(local_50);
                pcVar13 = pcVar12;
                if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
                  pcVar13 = *(char **)pcVar12;
                }
                if (*pcVar13 == '$') {
                  if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
                    pcVar12 = *(char **)pcVar12;
                  }
                  if (pcVar12[1] == 'R') {
                    FUN_1800246b0(param_1 + 7,&local_60);
                  }
                }
              }
              uVar11 = FUN_1800025d0((longlong)local_50);
              if (2 < uVar11) {
                pcVar12 = (char *)FUN_180002680(local_50);
                pcVar13 = pcVar12;
                if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
                  pcVar13 = *(char **)pcVar12;
                }
                if (*pcVar13 == '$') {
                  if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
                    pcVar12 = *(char **)pcVar12;
                  }
                  if (pcVar12[1] == 'I') {
                    FUN_1800246b0(param_1 + 7,&local_60);
                  }
                }
              }
              FUN_1800025f0(local_50);
              FUN_18003bfa0(param_1,(longlong)plVar2,pTVar15);
            }
          }
        }
LAB_18003acab:
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar1);
    }
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStack_98);
  return;
}

