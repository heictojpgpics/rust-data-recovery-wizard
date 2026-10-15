// Function: FUN_180056b20
// Address: 180056b20
// Size: 1263 bytes


void FUN_180056b20(longlong *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int local_58;
  
  puVar8 = (undefined4 *)param_1[5];
  uVar20 = *param_1 - 1;
  lVar11 = param_1[3];
  uVar15 = ((int)param_1[1] - 5) + uVar20;
  uVar4 = puVar8[0xd];
  uVar19 = puVar8[0x10];
  puVar23 = (undefined1 *)(param_1[2] + -1);
  uVar29 = puVar8[0x11];
  lVar22 = *(longlong *)(puVar8 + 0x16);
  uVar5 = puVar8[0x1a];
  lVar9 = *(longlong *)(puVar8 + 0x18);
  local_58 = (int)puVar23 - (param_2 - (int)lVar11);
  iVar31 = puVar8[0xb];
  uVar6 = puVar8[0x1b];
  uVar7 = puVar8[0xc];
  lVar10 = *(longlong *)(puVar8 + 0xe);
  puVar25 = puVar23;
LAB_180056bd0:
  if (uVar29 < 0xf) {
    pbVar1 = (byte *)(uVar20 + 1);
    pbVar2 = (byte *)(uVar20 + 2);
    uVar20 = uVar20 + 2;
    uVar19 = uVar19 + ((uint)*pbVar1 << ((byte)uVar29 & 0x1f)) +
             ((uint)*pbVar2 << ((byte)uVar29 + 8 & 0x1f));
    uVar29 = uVar29 + 0x10;
  }
  uVar18 = *(uint *)(lVar22 + (ulonglong)((1 << ((byte)uVar5 & 0x1f)) - 1U & uVar19) * 4);
  uVar19 = uVar19 >> ((byte)(uVar18 >> 8) & 0x1f);
  uVar29 = uVar29 - (uVar18 >> 8 & 0xff);
  cVar12 = (char)uVar18;
  while (cVar12 != '\0') {
    uVar28 = uVar18 >> 0x10;
    puVar24 = puVar25;
    if ((uVar18 & 0x10) != 0) {
      uVar18 = uVar18 & 0xf;
      uVar21 = uVar20;
      if (uVar18 != 0) {
        if (uVar29 < uVar18) {
          pbVar1 = (byte *)(uVar20 + 1);
          uVar20 = uVar20 + 1;
          uVar19 = uVar19 + ((uint)*pbVar1 << ((byte)uVar29 & 0x1f));
          uVar29 = uVar29 + 8;
        }
        uVar13 = (1 << (sbyte)uVar18) - 1U & uVar19;
        uVar19 = uVar19 >> (sbyte)uVar18;
        uVar28 = uVar28 + uVar13;
        uVar29 = uVar29 - uVar18;
        uVar21 = uVar20;
      }
      if (uVar29 < 0xf) {
        pbVar1 = (byte *)(uVar21 + 1);
        pbVar2 = (byte *)(uVar21 + 2);
        uVar21 = uVar21 + 2;
        uVar19 = uVar19 + ((uint)*pbVar1 << ((byte)uVar29 & 0x1f)) +
                 ((uint)*pbVar2 << ((byte)uVar29 + 8 & 0x1f));
        uVar29 = uVar29 + 0x10;
      }
      uVar18 = *(uint *)(lVar9 + (ulonglong)((1 << ((byte)uVar6 & 0x1f)) - 1U & uVar19) * 4);
      uVar19 = uVar19 >> ((byte)(uVar18 >> 8) & 0x1f);
      uVar29 = uVar29 - (uVar18 >> 8 & 0xff);
      uVar13 = uVar18 & 0xff;
      if ((uVar18 & 0x10) == 0) goto LAB_180056ce7;
      goto LAB_180056d21;
    }
    if ((uVar18 & 0x40) != 0) {
      if ((uVar18 & 0x20) == 0) {
        *puVar8 = 0x1b;
        param_1[4] = (longlong)"invalid literal/length code";
      }
      else {
        *puVar8 = 0xb;
      }
      goto LAB_180056faa;
    }
    uVar18 = *(uint *)(lVar22 + (ulonglong)
                                (((1 << ((byte)uVar18 & 0x1f)) - 1U & uVar19) + (uVar18 >> 0x10)) *
                                4);
    uVar19 = uVar19 >> ((byte)(uVar18 >> 8) & 0x1f);
    uVar29 = uVar29 - (uVar18 >> 8 & 0xff);
    cVar12 = (char)uVar18;
  }
  puVar25[1] = (char)(uVar18 >> 0x10);
  puVar24 = puVar25 + 1;
  goto LAB_180056f30;
  while( true ) {
    uVar18 = *(uint *)(lVar9 + (ulonglong)
                               (((1 << ((byte)uVar13 & 0x1f)) - 1U & uVar19) + (uVar18 >> 0x10)) * 4
                      );
    uVar19 = uVar19 >> ((byte)(uVar18 >> 8) & 0x1f);
    uVar29 = uVar29 - (uVar18 >> 8 & 0xff);
    uVar13 = uVar18 & 0xff;
    if ((uVar18 & 0x10) != 0) break;
LAB_180056ce7:
    if ((uVar13 & 0x40) != 0) {
      pcVar16 = "invalid distance code";
      goto LAB_180056f7a;
    }
  }
LAB_180056d21:
  uVar13 = uVar13 & 0xf;
  uVar20 = uVar21;
  uVar30 = uVar29;
  if (uVar29 < uVar13) {
    uVar20 = uVar21 + 1;
    uVar30 = uVar29 + 8;
    uVar19 = uVar19 + ((uint)*(byte *)(uVar21 + 1) << ((byte)uVar29 & 0x1f));
    if (uVar30 < uVar13) {
      uVar20 = uVar21 + 2;
      uVar19 = uVar19 + ((uint)*(byte *)(uVar21 + 2) << ((byte)uVar30 & 0x1f));
      uVar30 = uVar29 + 0x10;
    }
  }
  uVar14 = (int)puVar25 - local_58;
  uVar29 = uVar30 - uVar13;
  uVar18 = ((1 << (sbyte)uVar13) - 1U & uVar19) + (uVar18 >> 0x10);
  uVar19 = uVar19 >> (sbyte)uVar13;
  if (uVar18 <= uVar14) {
    puVar27 = puVar25 + -(ulonglong)uVar18;
    do {
      puVar26 = puVar25;
      puVar17 = puVar27;
      puVar26[1] = puVar17[1];
      uVar28 = uVar28 - 3;
      puVar26[2] = puVar17[2];
      puVar24 = puVar26 + 3;
      *puVar24 = puVar17[3];
      puVar27 = puVar17 + 3;
      puVar25 = puVar24;
    } while (2 < uVar28);
    if (uVar28 != 0) {
      puVar26[4] = puVar17[4];
      puVar24 = puVar26 + 4;
      if (1 < uVar28) {
        puVar26[5] = puVar17[5];
        puVar24 = puVar26 + 5;
      }
    }
    goto LAB_180056f30;
  }
  uVar14 = uVar18 - uVar14;
  if (uVar7 < uVar14) {
    pcVar16 = "invalid distance too far back";
    uVar21 = uVar20;
LAB_180056f7a:
    param_1[4] = (longlong)pcVar16;
    *puVar8 = 0x1b;
    uVar20 = uVar21;
LAB_180056faa:
    lVar22 = uVar20 - (uVar29 >> 3);
    iVar31 = uVar29 + (uVar29 >> 3) * -8;
    puVar8[0x11] = iVar31;
    *param_1 = lVar22 + 1;
    param_1[2] = (longlong)(puVar24 + 1);
    puVar8[0x10] = uVar19 & (1 << ((byte)iVar31 & 0x1f)) - 1U;
    *(int *)(param_1 + 1) = ((int)uVar15 - (int)lVar22) + 5;
    *(int *)(param_1 + 3) = ((int)(puVar23 + ((int)lVar11 - 0x101)) - (int)puVar24) + 0x101;
    return;
  }
  lVar3 = lVar10 + -1;
  if (uVar4 == 0) {
    puVar27 = (undefined1 *)(lVar3 + (ulonglong)(iVar31 - uVar14));
    if (uVar14 < uVar28) {
      uVar28 = uVar28 - uVar14;
      do {
        puVar25 = puVar27 + 1;
        puVar27 = puVar27 + 1;
        puVar24 = puVar24 + 1;
        *puVar24 = *puVar25;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
LAB_180056e45:
      puVar27 = puVar24 + -(ulonglong)uVar18;
      puVar25 = puVar24;
    }
  }
  else if (uVar4 < uVar14) {
    uVar13 = uVar14 - uVar4;
    puVar27 = (undefined1 *)(lVar3 + (ulonglong)(iVar31 + (uVar4 - uVar14)));
    if (uVar13 < uVar28) {
      uVar28 = uVar28 - uVar13;
      do {
        puVar17 = puVar24 + (longlong)(puVar27 + (1 - (longlong)puVar25));
        puVar24 = puVar24 + 1;
        *puVar24 = *puVar17;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      puVar27 = (undefined1 *)(lVar10 + -1);
      puVar25 = puVar24;
      if (uVar4 < uVar28) {
        uVar28 = uVar28 - uVar4;
        uVar13 = uVar4;
        do {
          puVar25 = puVar27 + 1;
          puVar27 = puVar27 + 1;
          puVar24 = puVar24 + 1;
          *puVar24 = *puVar25;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        goto LAB_180056e45;
      }
    }
  }
  else {
    puVar27 = (undefined1 *)(lVar3 + (ulonglong)(uVar4 - uVar14));
    if (uVar14 < uVar28) {
      uVar28 = uVar28 - uVar14;
      do {
        puVar25 = puVar27 + 1;
        puVar27 = puVar27 + 1;
        puVar24 = puVar24 + 1;
        *puVar24 = *puVar25;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      goto LAB_180056e45;
    }
  }
  if (2 < uVar28) {
    uVar21 = (ulonglong)((uVar28 - 3) / 3 + 1);
    do {
      uVar28 = uVar28 - 3;
      puVar25[1] = puVar27[1];
      puVar24 = puVar27 + 2;
      puVar27 = puVar27 + 3;
      puVar25[2] = *puVar24;
      puVar25 = puVar25 + 3;
      *puVar25 = *puVar27;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  puVar24 = puVar25;
  if (uVar28 != 0) {
    puVar25[1] = puVar27[1];
    puVar24 = puVar25 + 1;
    if (1 < uVar28) {
      puVar25[2] = puVar27[2];
      puVar24 = puVar25 + 2;
    }
  }
LAB_180056f30:
  if ((uVar15 <= uVar20) || (puVar25 = puVar24, puVar23 + ((int)lVar11 - 0x101) <= puVar24))
  goto LAB_180056faa;
  goto LAB_180056bd0;
}

