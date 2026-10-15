// Function: FUN_18003a260
// Address: 18003a260
// Size: 1863 bytes


void FUN_18003a260(longlong param_1,ulonglong param_2,uint param_3,longlong param_4,longlong param_5
                  ,ushort *param_6,int *param_7,uint *param_8)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(int)param_3;
  pcVar7 = "TiffAnalyzer GetMainTag tag = %d, len = %u,offset = %u\n";
  uVar1 = param_6[1];
  uVar4 = *(uint *)(param_6 + 6);
  uVar8 = *(uint *)(param_6 + 4);
  uVar2 = *param_6;
  uVar3 = *(undefined4 *)(param_6 + 2);
  if (uVar4 < 5) {
    pcVar7 = "TiffAnalyzer GetMainTag tag = %d, len = %u, size = %u\n";
  }
  FUN_1800108c0(pcVar7,(ulonglong)uVar2,(ulonglong)uVar4,(ulonglong)uVar8);
  if (uVar2 < 0x101) {
    if (uVar2 == 0x100) {
      *(longlong *)(param_1 + 0x208) = (longlong)*param_7;
      return;
    }
    if (uVar2 != 0x2e) {
      return;
    }
    *(undefined4 *)(param_1 + 0x18c) = 1;
  }
  else {
    if (uVar2 < 0x202) {
      if (uVar2 == 0x201) {
        if (uVar8 == 0xffffffff) {
          return;
        }
        uVar4 = *(uint *)(param_6 + 4);
        *(ulonglong *)(param_1 + 0x1f8) = (ulonglong)uVar4;
        if ((*(longlong *)(param_1 + 8) < param_4) ||
           ((param_5 - *(longlong *)(param_1 + 8)) * lVar12 <= (longlong)(ulonglong)uVar4)) {
          *(uint *)(param_1 + 400) = uVar4;
          return;
        }
        lVar12 = FUN_180038fb0(param_1,param_2,param_3,param_4,param_5);
        if (lVar12 != 0) {
          pcVar7 = (char *)((ulonglong)uVar4 + lVar12);
          iVar5 = strncmp(pcVar7,&DAT_180093760,4);
          if (((iVar5 != 0) && (iVar5 = strncmp(pcVar7,&DAT_1800937a4,4), iVar5 != 0)) &&
             (iVar5 = strncmp(pcVar7,&DAT_18009379c,4), iVar5 != 0)) {
            return;
          }
          *(undefined4 *)(param_1 + 0x1a0) = 1;
          return;
        }
      }
      else {
        switch(uVar2) {
        case 0x101:
          *(longlong *)(param_1 + 0x210) = (longlong)*param_7;
          return;
        default:
          return;
        case 0x103:
          *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_6 + 4);
          return;
        case 0x10f:
          FUN_180039470(param_1,param_2,(ulonglong)param_3,param_4,param_5,(longlong)param_6);
          return;
        case 0x110:
          FUN_1800397a0(param_1,param_2,(ulonglong)param_3,param_4,param_5,(longlong)param_6);
          return;
        case 0x111:
          if (uVar8 == 0xffffffff) {
            return;
          }
          uVar4 = *(uint *)(param_6 + 4);
          uVar10 = (ulonglong)uVar4;
          lVar9 = *(longlong *)(param_1 + 8);
          if (*(int *)(param_6 + 2) == 1) {
            *(ulonglong *)(param_1 + 0x140) = uVar10;
            if ((lVar9 < param_4) || ((param_5 - lVar9) * lVar12 <= (longlong)uVar10)) {
              *(uint *)(param_1 + 0x198) = uVar4;
              return;
            }
            lVar12 = FUN_180038fb0(param_1,param_2,param_3,param_4,param_5);
            if (lVar12 != 0) {
              pcVar7 = (char *)(uVar10 + lVar12);
              iVar5 = strncmp(pcVar7,&DAT_180093758,4);
              if (((iVar5 != 0) && (iVar5 = strncmp(pcVar7,&DAT_180093768,4), iVar5 != 0)) &&
                 (iVar5 = strncmp(pcVar7,&DAT_18009378c,4), iVar5 != 0)) {
                return;
              }
              *(undefined4 *)(param_1 + 0x1a4) = 1;
              return;
            }
          }
          else {
            lVar11 = (ulonglong)((*(int *)(param_6 + 2) + -1) * (uint)param_6[1]) +
                     *(longlong *)(param_1 + 0x1e8) + uVar10;
            if ((lVar11 < (param_5 - lVar9) * lVar12) &&
               (lVar12 = FUN_180038fb0(param_1,param_2,param_3,param_4,param_5), lVar12 != 0)) {
              uVar4 = FUN_180042a60((undefined4 *)(lVar11 + lVar12),*(char *)(param_1 + 0x110));
              *(ulonglong *)(param_1 + 0x140) = (ulonglong)uVar4;
              return;
            }
          }
          break;
        case 0x117:
          if (*param_7 == -1) {
            return;
          }
          uVar4 = *(uint *)(param_6 + 4);
          if (*(int *)(param_6 + 2) == 1) {
            iVar5 = 0;
            *(uint *)(param_1 + 0x170) = uVar4;
            if (*(int *)(param_1 + 0x1a4) == 0) {
              iVar5 = *(int *)(param_1 + 0x198);
            }
            else {
              *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x140);
              *(ulonglong *)(param_1 + 0xe0) = (ulonglong)uVar4;
              *(undefined8 *)(param_1 + 0x198) = 0;
              *(undefined4 *)(param_1 + 0x1a4) = 0;
            }
            if (iVar5 != 0) {
              puVar6 = (uint *)FUN_18003aae0((longlong *)(param_1 + 0x150),(uint *)(param_1 + 0x198)
                                            );
              *puVar6 = uVar4;
              uVar4 = *(uint *)(param_1 + 0x170);
              *(undefined4 *)(param_1 + 0x198) = 0;
            }
          }
          else {
            lVar9 = (ulonglong)((*(int *)(param_6 + 2) + -1) * (uint)param_6[1]) +
                    *(longlong *)(param_1 + 0x1e8) + (ulonglong)uVar4;
            if (((param_5 - *(longlong *)(param_1 + 8)) * lVar12 <= lVar9) ||
               (lVar11 = FUN_180038fb0(param_1,param_2,param_3,param_4,param_5), lVar11 == 0))
            break;
            uVar4 = FUN_180042a60((undefined4 *)(lVar9 + lVar11),*(char *)(param_1 + 0x110));
            *(uint *)(param_1 + 0x170) = uVar4;
          }
          lVar9 = *(longlong *)(param_1 + 0x138);
          lVar11 = (longlong)(int)uVar4 + *(longlong *)(param_1 + 0x140);
          if (((lVar9 < lVar11) && (0 < (int)uVar4)) && (0 < *(longlong *)(param_1 + 0x140))) {
            *(longlong *)(param_1 + 0x138) = lVar11;
            lVar9 = lVar11;
          }
          *(undefined4 *)(param_1 + 0x230) = 1;
          if (lVar9 / lVar12 != lVar11 / lVar12) {
            return;
          }
          *(longlong *)(param_1 + 0x138) = lVar11;
          return;
        case 0x132:
          FUN_180039a80(param_1,param_2,(ulonglong)param_3,param_4,param_5,(longlong)param_6);
          return;
        case 0x144:
          if (*(longlong *)(param_1 + 0x138) < (longlong)(ulonglong)(uVar4 + uVar8)) {
            *(ulonglong *)(param_1 + 0x138) = (ulonglong)(uVar4 + uVar8);
          }
          *(undefined4 *)(param_1 + 0x228) = uVar3;
          *(uint *)(param_1 + 0x22c) = (uint)uVar1;
          *(uint *)(param_1 + 0x218) = uVar8;
          *(uint *)(param_1 + 0x224) = uVar4;
          return;
        case 0x145:
          FUN_18003a050(param_1,param_2);
          return;
        case 0x14a:
          if (*(longlong *)(param_1 + 0x138) < (longlong)(ulonglong)(uVar4 + uVar8)) {
            *(ulonglong *)(param_1 + 0x138) = (ulonglong)(uVar4 + uVar8);
          }
          FUN_180039dc0(param_1,param_2,param_3,param_4,param_5,(ulonglong)param_6,param_8);
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x128) = 1;
      return;
    }
    if (uVar2 < 0x927d) {
      if (uVar2 == 0x927c) {
        lVar12 = *(longlong *)(param_1 + 0x130);
        uVar8 = *(int *)(param_1 + 0x1e8) + uVar8;
        *param_8 = uVar8;
        if ((lVar12 == 0) || (lVar12 < (longlong)(ulonglong)uVar8)) {
          *(ulonglong *)(param_1 + 0x130) = (ulonglong)uVar8;
        }
        FUN_180039030(param_1,uVar8);
        return;
      }
      if (uVar2 == 0x202) {
        if (uVar8 == 0xffffffff) {
          return;
        }
        uVar4 = *(uint *)(param_6 + 4);
        lVar12 = *(longlong *)(param_1 + 0x1f8) + (ulonglong)uVar4;
        if (*(longlong *)(param_1 + 0x138) < lVar12) {
          *(longlong *)(param_1 + 0x138) = lVar12;
        }
        puVar6 = (uint *)(param_1 + 400);
        if (*(int *)(param_1 + 0x1a0) != 0) {
          *(ulonglong *)(param_1 + 0xe0) = (ulonglong)uVar4;
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          *puVar6 = 0;
          *(undefined4 *)(param_1 + 0x194) = 0;
          *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0x1f8);
          *(undefined4 *)(param_1 + 0x230) = 1;
          return;
        }
        if (*puVar6 != 0) {
          puVar6 = (uint *)FUN_18003aae0((longlong *)(param_1 + 0x150),puVar6);
          *puVar6 = uVar4;
        }
        *(undefined4 *)(param_1 + 0x230) = 1;
        return;
      }
      if (uVar2 == 0x828d) {
        *(undefined4 *)(param_1 + 0x24c) = 1;
        return;
      }
      if (uVar2 != 0x8769) {
        return;
      }
      if (*(longlong *)(param_1 + 0x138) < (longlong)(ulonglong)(uVar4 + uVar8)) {
        *(ulonglong *)(param_1 + 0x138) = (ulonglong)(uVar4 + uVar8);
      }
      lVar12 = *(longlong *)(param_1 + 0x130);
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *param_8 = uVar8;
      if ((lVar12 == 0) || (lVar12 < (longlong)(ulonglong)uVar8)) {
        *(ulonglong *)(param_1 + 0x130) = (ulonglong)uVar8;
      }
      FUN_180039030(param_1,uVar8);
      return;
    }
    if (uVar2 != 0x935c) {
      if (uVar2 != 0xc612) {
        return;
      }
      *(undefined4 *)(param_1 + 0x188) = 1;
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x138) < (longlong)(ulonglong)(uVar4 + uVar8)) {
    *(ulonglong *)(param_1 + 0x138) = (ulonglong)(uVar4 + uVar8);
  }
  return;
}

