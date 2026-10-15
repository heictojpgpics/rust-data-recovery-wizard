// Function: FUN_180038730
// Address: 180038730
// Size: 1118 bytes


void FUN_180038730(longlong param_1,undefined1 *param_2,int param_3,ulonglong param_4,
                  longlong param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  uint local_res8 [2];
  uint local_58;
  int local_54;
  int local_50;
  ushort local_48;
  undefined2 local_46;
  int local_44;
  uint local_40;
  uint local_3c;
  
  lVar9 = *(longlong *)(param_1 + 0x120);
  *(longlong *)(param_1 + 0x120) = lVar9 + 1;
  if (lVar9 < 0xb) {
    if (*(char *)(param_1 + 0x110) == '\0') {
      uVar1 = *param_2;
      uVar2 = param_2[1];
    }
    else {
      uVar1 = param_2[1];
      uVar2 = *param_2;
    }
    uVar11 = 0;
    uVar12 = CONCAT11(uVar1,uVar2);
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    if ((((uVar12 == 0) ||
         (((param_6 - param_5) * (longlong)*(int *)(param_1 + 0x234)) / 0xc <
          (longlong)(ulonglong)uVar12)) || (param_3 < 1)) ||
       ((0x200 < uVar12 ||
        (uVar16 = ((uint)uVar12 + (uint)uVar12 * 2) * 4,
        (longlong)((param_6 - param_4) * (longlong)*(int *)(param_1 + 0x234)) <=
        (longlong)(int)(param_3 + 2 + uVar16))))) {
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    else {
      pbVar10 = param_2 + 2;
      lVar9 = (ulonglong)uVar16 + *(longlong *)(param_1 + 0x148) + 2;
      *(undefined4 *)(param_1 + 0x1f0) = 1;
      if (*(longlong *)(param_1 + 0x138) < lVar9) {
        *(longlong *)(param_1 + 0x138) = lVar9;
      }
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      if (uVar12 != 0) {
        do {
          cVar15 = *(char *)(param_1 + 0x110);
          uVar13 = (ushort)pbVar10[1];
          uVar4 = (ushort)*pbVar10;
          if (cVar15 == '\0') {
            uVar4 = (ushort)*pbVar10 << 8;
          }
          else {
            uVar13 = (ushort)pbVar10[1] << 8;
          }
          uVar7 = (uint)pbVar10[2];
          uVar13 = uVar13 | uVar4;
          uVar16 = (uint)pbVar10[3];
          if (cVar15 == '\0') {
            uVar7 = (uint)pbVar10[2] << 8;
          }
          else {
            uVar16 = (uint)pbVar10[3] << 8;
          }
          uVar8 = 0;
          switch(uVar16 | uVar7) {
          case 1:
          case 2:
          case 6:
          case 7:
            uVar8 = 1;
            break;
          case 3:
          case 8:
            uVar8 = 2;
            break;
          case 4:
          case 9:
          case 0xb:
            uVar8 = 4;
            break;
          case 5:
          case 10:
          case 0xc:
            uVar8 = 8;
          }
          iVar5 = FUN_180042a60((undefined4 *)(pbVar10 + 4),cVar15);
          local_40 = FUN_180042a60((undefined4 *)(pbVar10 + 8),cVar15);
          local_46 = (undefined2)uVar8;
          uVar8 = uVar8 & 0xffff;
          local_3c = uVar8 * iVar5;
          if (local_3c == 0) goto LAB_180038b6c;
          if ((4 < (int)local_3c) &&
             (*(longlong *)(param_1 + 0x138) < (longlong)(ulonglong)(local_3c + local_40))) {
            *(ulonglong *)(param_1 + 0x138) = (ulonglong)(local_3c + local_40);
          }
          local_48 = uVar13;
          local_44 = iVar5;
          if (uVar8 == 1) {
LAB_180038987:
            if (uVar8 == 1) {
              uVar16 = (uint)pbVar10[-4];
            }
            else if (uVar8 == 3) {
              if (cVar15 == '\0') {
                uVar16 = (uint)CONCAT11(pbVar10[-4],pbVar10[-3]);
              }
              else {
                uVar16 = (uint)*(ushort *)(pbVar10 + -4);
              }
            }
            else {
              uVar16 = 0;
              if (uVar8 == 4) {
                if (cVar15 == '\0') {
                  uVar16 = CONCAT31(CONCAT21(CONCAT11(pbVar10[-4],pbVar10[-3]),pbVar10[-2]),
                                    pbVar10[-1]);
                }
                else {
                  uVar16 = *(uint *)(pbVar10 + -4);
                }
              }
            }
LAB_180038a0f:
            local_res8[0] = uVar16;
            FUN_18003a260(param_1,param_4,*(uint *)(param_1 + 0x234),param_5,param_6,&local_48,
                          (int *)local_res8,&local_58);
          }
          else {
            uVar16 = local_3c;
            if (uVar8 == 2) goto LAB_180038a0f;
            if (uVar8 == 3) goto LAB_180038987;
            local_res8[0] = local_3c;
            uVar16 = local_40;
            if (uVar8 == 4) goto LAB_180038a0f;
          }
          uVar16 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar16;
          pbVar10 = pbVar10 + 0xc;
        } while ((int)uVar16 < (int)(uint)uVar12);
        uVar11 = (ulonglong)local_58;
      }
      iVar3 = local_50;
      iVar5 = local_54;
      FUN_180038bc0(param_1);
      lVar9 = *(longlong *)(param_1 + 0x208);
      if (((lVar9 != 0) && (599 < *(longlong *)(param_1 + 0x210))) && (399 < lVar9)) {
        *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x210) * lVar9;
      }
      uVar14 = *(ulonglong *)(param_1 + 0x138);
      uVar16 = iVar3 + iVar5;
      if ((longlong)uVar14 < (longlong)(ulonglong)uVar16) {
        *(ulonglong *)(param_1 + 0x138) = (ulonglong)uVar16;
        uVar14 = (ulonglong)uVar16;
      }
      uVar16 = FUN_180042a60((undefined4 *)pbVar10,*(char *)(param_1 + 0x110));
      uVar6 = (ulonglong)uVar16;
      if (uVar16 == 0) {
        if ((longlong)uVar11 < *(longlong *)(param_1 + 0x130)) {
          *(ulonglong *)(param_1 + 0x130) = uVar6;
        }
        else {
          *(ulonglong *)(param_1 + 0x130) = uVar11;
          uVar6 = uVar11;
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x130) = uVar6;
        FUN_180039030(param_1,uVar16);
        uVar14 = *(ulonglong *)(param_1 + 0x138);
        uVar6 = *(ulonglong *)(param_1 + 0x130);
      }
      if (*(int *)(param_1 + 0x128) != 0) {
        *(undefined8 *)(param_1 + 0x130) = 1;
        uVar6 = 1;
      }
      if (((longlong)uVar14 < (longlong)uVar6) && (*(int *)(param_1 + 0x1f0) != 0)) {
        *(ulonglong *)(param_1 + 0x138) = uVar6;
      }
    }
  }
  else {
LAB_180038b6c:
    *(undefined4 *)(param_1 + 0x128) = 1;
  }
  return;
}

