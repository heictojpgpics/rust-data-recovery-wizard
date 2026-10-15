// Function: FUN_18002ef50
// Address: 18002ef50
// Size: 892 bytes


undefined8 FUN_18002ef50(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  undefined8 *puVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  ushort *puVar17;
  ushort *puVar18;
  uint uVar19;
  int iVar20;
  
  uVar11 = (uint)*param_3;
  puVar1 = param_1 + 4;
  puVar2 = (ushort *)(param_3 + 0x20);
  puVar17 = (ushort *)(param_3 + 1);
  uVar12 = 0;
  if ((*param_3 & 0xf0) == 0x20) {
    puVar17 = (ushort *)(param_3 + 4);
    uVar12 = (ulonglong)((int)(char)param_3[3] & 7U);
    if (((int)(char)param_3[3] & 7U) == 0) {
      return 1;
    }
  }
  iVar20 = 0;
  if (puVar17 < puVar2) {
    while (iVar20 < 0x401) {
      if (((int)uVar12 == 0) && (uVar12 = (ulonglong)(uVar11 + 8), uVar11 + 8 == 0x17)) {
        uVar7 = *puVar17;
        puVar17 = (ushort *)((longlong)puVar17 + 1);
        uVar12 = (ulonglong)((byte)uVar7 + 0x17);
        if ((byte)uVar7 == 0xff) {
          do {
            uVar7 = *puVar17;
            puVar17 = puVar17 + 1;
            uVar12 = (ulonglong)((int)uVar12 + (uint)uVar7);
          } while (uVar7 == 0xffff);
        }
      }
      if (0x40 < (uint)uVar12) {
        return 0;
      }
      puVar15 = (undefined8 *)(uVar12 + (longlong)param_1);
      if (puVar1 < puVar15) {
        return 1;
      }
      FUN_18002eb10(param_1,(undefined8 *)puVar17,(uint)uVar12);
      puVar17 = (ushort *)((longlong)puVar17 + uVar12);
      if (puVar2 <= puVar17) {
        return 0;
      }
      bVar4 = (byte)*puVar17;
      bVar3 = *(byte *)((longlong)puVar17 + 1);
      uVar9 = (uint)bVar4;
      uVar10 = (uint)(bVar4 >> 4);
      puVar18 = puVar17 + 1;
      if (bVar4 >> 4 == 0) {
        bVar4 = (byte)*puVar18;
        uVar10 = (bVar4 >> 3 & 0x10) + (uVar9 & 0xf) + 0x13;
        uVar11 = bVar4 & 0x78;
LAB_18002f11c:
        puVar18 = (ushort *)((longlong)puVar17 + 3);
        uVar9 = uVar11 * 0x20 + 1;
        uVar13 = (uint)bVar3;
        uVar19 = (uint)bVar4;
LAB_18002f12b:
        uVar11 = (uint)bVar4;
        uVar12 = (ulonglong)uVar10;
        uVar14 = (ulonglong)(uVar13 + uVar9);
      }
      else {
        if (uVar10 == 1) {
          bVar4 = (byte)*puVar18;
          uVar10 = (uVar9 & 0xf) + 3;
          uVar11 = bVar4 & 0xf8;
          goto LAB_18002f11c;
        }
        if (uVar10 != 2) {
          uVar19 = (uint)bVar3;
          uVar9 = uVar9 & 0xf;
          uVar13 = (uVar19 & 0xf8) * 2 + 1;
          bVar4 = bVar3;
          goto LAB_18002f12b;
        }
        uVar11 = (uint)CONCAT11((byte)*puVar18,bVar3);
        uVar14 = (ulonglong)uVar11;
        if ((bVar4 & 8) == 0) {
          bVar4 = *(byte *)((longlong)puVar17 + 3);
          uVar11 = (uint)bVar4;
          uVar19 = (uint)bVar4;
          uVar12 = (ulonglong)((uVar9 & 7) + (bVar4 & 0xf8));
          puVar18 = puVar17 + 2;
        }
        else {
          uVar14 = (ulonglong)(uVar11 + 1);
          bVar4 = (byte)puVar17[2];
          uVar11 = (uint)bVar4;
          uVar19 = (uint)bVar4;
          puVar18 = (ushort *)((longlong)puVar17 + 5);
          uVar12 = (ulonglong)
                   ((uVar9 & 7) + (bVar4 & 0xf8) * 0x100 + 0x100 +
                   (uint)*(byte *)((longlong)puVar17 + 3) * 8);
        }
      }
      iVar16 = 0;
      do {
        iVar16 = iVar16 + 1;
        uVar9 = (uint)uVar12;
        puVar17 = puVar18;
        uVar5 = uVar12;
        puVar6 = puVar15;
        if (0x40 < uVar9) break;
        while (uVar9 != 0) {
          *(undefined1 *)puVar6 = *(undefined1 *)((longlong)puVar6 - uVar14);
          uVar9 = (int)uVar5 - 1;
          uVar5 = (ulonglong)uVar9;
          puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        }
        puVar15 = (undefined8 *)((longlong)puVar15 + uVar12);
        uVar12 = (ulonglong)(uVar19 & 7);
        if ((uVar19 & 7) != 0) break;
        if (puVar2 <= puVar18) {
          return 0;
        }
        bVar4 = (byte)*puVar18;
        puVar17 = (ushort *)((longlong)puVar18 + 1);
        uVar11 = (uint)bVar4;
        if (bVar4 >> 4 == 0) break;
        bVar3 = *(byte *)puVar17;
        bVar8 = bVar4 & 0xf;
        if (bVar4 >> 4 != 0xf) {
          bVar8 = bVar4;
        }
        uVar9 = (uint)bVar8;
        uVar11 = (uint)(bVar8 >> 4);
        uVar12 = (ulonglong)uVar11;
        puVar17 = puVar18 + 1;
        if (bVar8 >> 4 == 0) {
          bVar4 = (byte)*puVar17;
          uVar9 = (bVar8 & 0xf) + 0x13 + (bVar4 >> 3 & 0x10);
          uVar11 = bVar4 & 0x78;
LAB_18002f27e:
          uVar19 = (uint)bVar4;
          uVar12 = (ulonglong)uVar9;
          puVar17 = (ushort *)((longlong)puVar18 + 3);
          uVar14 = (ulonglong)(bVar3 + 1 + uVar11 * 0x20);
        }
        else {
          if (uVar11 == 1) {
            bVar4 = (byte)*puVar17;
            uVar9 = (uVar9 & 0xf) + 3;
            uVar11 = bVar4 & 0xf8;
            goto LAB_18002f27e;
          }
          if (uVar11 == 2) {
            uVar11 = (uint)CONCAT11((byte)*puVar17,bVar3);
            uVar14 = (ulonglong)uVar11;
            if ((bVar8 & 8) == 0) {
              bVar4 = *(byte *)((longlong)puVar18 + 3);
              uVar19 = (uint)bVar4;
              uVar12 = (ulonglong)((uVar9 & 7) + (bVar4 & 0xf8));
              puVar17 = puVar18 + 2;
            }
            else {
              uVar14 = (ulonglong)(uVar11 + 1);
              uVar19 = (uint)(byte)puVar18[2];
              puVar17 = (ushort *)((longlong)puVar18 + 5);
              uVar12 = (ulonglong)
                       ((uVar9 & 7) + ((byte)puVar18[2] & 0xf8) * 0x100 + 0x100 +
                       (uint)*(byte *)((longlong)puVar18 + 3) * 8);
            }
          }
          else {
            uVar19 = (uint)bVar3;
            uVar14 = (ulonglong)((uVar19 & 0xf8) * 2 + 1 + (uVar9 & 0xf));
          }
        }
        puVar18 = puVar17;
        uVar11 = uVar19;
      } while (iVar16 < 0x401);
      param_1 = puVar15;
      iVar20 = iVar20 + 1;
      if (puVar2 <= puVar17) {
        return 0;
      }
    }
  }
  return 0;
}

