// Function: FUN_180059480
// Address: 180059480
// Size: 547 bytes


void FUN_180059480(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  byte local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_18008f028 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 2) != '\0') {
    uVar7 = 0;
    lVar9 = 1;
    iVar8 = 1;
    if (*(char *)(param_1 + 2) == 'x') {
      if ((*(char *)(param_1 + 3) == '\0') ||
         (pcVar4 = strchr((char *)(param_1 + 3),0x3b), pcVar4 == (char *)0x0)) goto LAB_180059682;
      cVar1 = pcVar4[-1];
      while (cVar1 != 'x') {
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar3 = cVar1 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar3 = cVar1 + -0x57;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_180059682;
          iVar3 = cVar1 + -0x37;
        }
        iVar3 = iVar3 * iVar8;
        iVar8 = iVar8 << 4;
        uVar7 = uVar7 + iVar3;
        cVar1 = pcVar4[-2];
        pcVar4 = pcVar4 + -1;
      }
    }
    else {
      pcVar4 = strchr((char *)(param_1 + 2),0x3b);
      if (pcVar4 == (char *)0x0) goto LAB_180059682;
      pcVar5 = pcVar4 + -1;
      cVar1 = pcVar4[-1];
      while (cVar1 != '#') {
        if (9 < (byte)(cVar1 - 0x30U)) goto LAB_180059682;
        pcVar5 = pcVar5 + -1;
        iVar3 = (cVar1 + -0x30) * iVar8;
        iVar8 = iVar8 * 10;
        uVar7 = uVar7 + iVar3;
        cVar1 = *pcVar5;
      }
    }
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    local_58[6] = 0;
    local_58[7] = 0;
    local_58[8] = 0xc0;
    local_58[9] = 0;
    local_58[10] = 0;
    local_58[0xb] = 0;
    local_58[0xc] = 0xe0;
    local_58[0xd] = 0;
    local_58[0xe] = 0;
    local_58[0xf] = 0;
    local_58[0x10] = 0xf0;
    local_58[0x11] = 0;
    local_58[0x12] = 0;
    local_58[0x13] = 0;
    local_58[0x14] = 0xf8;
    local_58[0x15] = 0;
    local_58[0x16] = 0;
    local_58[0x17] = 0;
    local_58[0x18] = 0xfc;
    local_58[0x19] = 0;
    local_58[0x1a] = 0;
    local_58[0x1b] = 0;
    if (0x7f < uVar7) {
      if (uVar7 < 0x800) {
        lVar9 = 2;
      }
      else if (uVar7 < 0x10000) {
        lVar9 = 3;
      }
      else {
        if (0x1fffff < uVar7) {
          *param_3 = 0;
          goto LAB_180059682;
        }
        lVar9 = 4;
      }
    }
    iVar8 = (int)lVar9;
    pbVar6 = (byte *)(lVar9 + param_2);
    *param_3 = iVar8;
    if (iVar8 != 1) {
      if (iVar8 != 2) {
        if (iVar8 != 3) {
          if (iVar8 != 4) goto LAB_180059682;
          pbVar6 = pbVar6 + -1;
          bVar2 = (byte)uVar7;
          uVar7 = uVar7 >> 6;
          *pbVar6 = bVar2 & 0x3f | 0x80;
        }
        pbVar6 = pbVar6 + -1;
        bVar2 = (byte)uVar7;
        uVar7 = uVar7 >> 6;
        *pbVar6 = bVar2 & 0x3f | 0x80;
      }
      pbVar6 = pbVar6 + -1;
      bVar2 = (byte)uVar7;
      uVar7 = uVar7 >> 6;
      *pbVar6 = bVar2 & 0x3f | 0x80;
    }
    pbVar6[-1] = local_58[(longlong)*param_3 * 4] | (byte)uVar7;
  }
LAB_180059682:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_78);
  return;
}

