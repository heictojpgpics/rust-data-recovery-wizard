// Function: FUN_180049c60
// Address: 180049c60
// Size: 585 bytes


undefined2 FUN_180049c60(byte *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  short sVar7;
  byte bVar8;
  uint uVar9;
  
  sVar7 = 0;
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = *(byte *)(param_2 + 1) >> 3 & 3;
  *(uint *)(param_1 + 4) = uVar2;
  if (uVar2 == 1) {
    return 0;
  }
  *param_1 = uVar2 != 3;
  uVar2 = *(byte *)(param_2 + 1) >> 1 & 3;
  *(uint *)(param_1 + 8) = 3 - uVar2;
  if (3 - uVar2 == 3) {
    return 0;
  }
  param_1[0x2b] = ~*(byte *)(param_2 + 1) & 1;
  bVar4 = *(byte *)(param_2 + 2) >> 4;
  if (bVar4 == 0xf) {
    return 0;
  }
  lVar6 = ((ulonglong)*param_1 + 1) * 3 - (longlong)(int)uVar2;
  uVar5 = *(int *)(&DAT_1800680a0 + (lVar6 * 0xf + (ulonglong)bVar4) * 4) * 1000;
  *(uint *)(param_1 + 0x1c) = uVar5;
  if (uVar5 == 0) {
    return 0;
  }
  bVar8 = *(byte *)(param_2 + 2) >> 2 & 3;
  if (bVar8 == 3) {
    return 0;
  }
  iVar1 = *(int *)(&DAT_180068060 + ((longlong)*(int *)(param_1 + 4) * 3 + (ulonglong)bVar8) * 4);
  *(int *)(param_1 + 0x14) = iVar1;
  *(uint *)(param_1 + 0x20) = *(byte *)(param_2 + 2) >> 1 & 1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&DAT_180068048 + lVar6 * 4);
  param_1[0x29] = *(byte *)(param_2 + 2) & 1;
  uVar9 = (uint)(*(byte *)(param_2 + 3) >> 6);
  *(uint *)(param_1 + 0x10) = uVar9;
  bVar8 = *(byte *)(param_2 + 3) >> 4 & 3;
  param_1[0x2c] = bVar8;
  if (uVar9 == 1) {
    *(ushort *)(param_1 + 0x24) = (bVar8 + 1) * 4;
  }
  param_1[0x28] = *(byte *)(param_2 + 3) >> 3 & 1;
  param_1[0x2a] = *(byte *)(param_2 + 3) >> 2 & 1;
  uVar3 = *(byte *)(param_2 + 3) & 3;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (uVar3 == 2) {
    return 0;
  }
  if (0xe < bVar4) {
    return 0;
  }
  if (uVar2 == 2) {
    if (*(int *)(param_1 + 4) == 3) {
      if ((&DAT_180068028)[(ulonglong)(uVar9 == 3) + (ulonglong)bVar4 * 2] == '\0') {
        return 0;
      }
      switch(uVar5 / 1000 >> (uVar9 != 3)) {
      case 0x20:
      case 0x30:
        sVar7 = (iVar1 == 32000) + 2;
        break;
      default:
        goto LAB_180049ea1;
      case 0x38:
      case 0x40:
      case 0x50:
        if (iVar1 != 48000) {
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          return 1;
        }
        break;
      case 0x60:
      case 0x70:
      case 0x80:
      case 0xa0:
      case 0xc0:
        if (iVar1 != 48000) {
          param_1[0x26] = 1;
          param_1[0x27] = 0;
          return 1;
        }
      }
      *(short *)(param_1 + 0x26) = sVar7;
    }
    else {
      param_1[0x26] = 4;
      param_1[0x27] = 0;
    }
  }
LAB_180049ea1:
  return 1;
}

