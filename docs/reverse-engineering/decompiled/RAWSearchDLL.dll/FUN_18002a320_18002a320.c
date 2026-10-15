// Function: FUN_18002a320
// Address: 18002a320
// Size: 816 bytes


void FUN_18002a320(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  char **ppcVar8;
  ushort uVar9;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  char *local_c8 [4];
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_18008f028 ^ (ulonglong)auStack_108;
  if ((param_2 == (uint *)0x0) || (uVar5 = *param_2, uVar5 == 0)) goto LAB_18002a632;
  uVar1 = param_2[1];
  if (uVar1 == 0x70797466) {
    uVar9 = (ushort)(uVar5 >> 0x10);
    uVar5 = CONCAT22((ushort)uVar5 << 8 | (ushort)uVar5 >> 8,uVar9 << 8 | uVar9 >> 8) - 0x10U &
            0xfffffffc;
    if (0x40 < uVar5) goto LAB_18002a632;
    uVar4 = FUN_18002bee0((ulonglong)uVar5,(longlong)param_2);
    iVar3 = (int)uVar4;
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 != 0) {
      *(int *)(param_3 + 0x18) = iVar3;
      goto LAB_18002a632;
    }
    uVar5 = 0;
    local_c8[0] = "ftypisom";
    ppcVar8 = local_c8;
    local_c8[1] = "ftyp3gp4";
    local_c8[2] = "ftyp3g2a";
    local_c8[3] = "ftypmmp4";
    local_a8 = "ftypM4A ";
    local_a0 = "ftypM4V ";
    local_98 = "ftypmp41";
    local_90 = "ftypmp42";
    local_88 = "ftypmif1";
    local_80 = "ftypmsf1";
    local_78 = "ftypf4v ";
    local_70 = "ftypheic";
    local_68 = "ftypheix";
    local_60 = "ftyphevx";
    local_58 = "ftyphevc";
    do {
      iVar3 = _memicmp(param_2 + 1,*ppcVar8,8);
      if (iVar3 == 0) goto LAB_18002a632;
      uVar5 = uVar5 + 1;
      ppcVar8 = ppcVar8 + 1;
    } while (uVar5 < 0xf);
  }
  else {
    if (uVar1 == 0x766f6f6d) {
      local_dc = uVar5 >> 0x10;
      local_e0 = uVar5 >> 0x10;
      local_e4 = uVar5 >> 0x10;
      local_e8 = uVar5 >> 8;
      uVar6 = 0;
      local_d8 = uVar5 >> 8;
      cVar2 = (char)(uVar5 >> 8);
      cVar7 = (char)(uVar5 >> 0x10);
      if ((('`' < cVar2) && (cVar2 < '{')) || ((byte)(cVar2 + 0xbfU) < 0x1a)) {
        uVar6 = 1;
      }
      if ((('`' < cVar7) && (cVar7 < '{')) || ((byte)(cVar7 + 0xbfU) < 0x1a)) {
        uVar6 = uVar6 + 1;
      }
      local_48._3_1_ = (char)(uVar5 >> 0x18);
      if (((byte)(local_48._3_1_ + 0x9fU) < 0x1a) || ((byte)(local_48._3_1_ + 0xbfU) < 0x1a)) {
        uVar6 = uVar6 + 1;
      }
      local_48 = uVar5;
      if (((0x19 < (byte)((char)param_2[2] + 0x9fU)) && (0x19 < (byte)((char)param_2[2] + 0xbfU)))
         || (uVar6 < 2)) goto LAB_18002a4a6;
    }
    if ((uVar1 != 0x746f6e70) && (uVar1 != 0x65657266)) goto LAB_18002a632;
  }
LAB_18002a4a6:
  *(undefined4 *)(param_3 + 0x18) = 0x2a;
LAB_18002a632:
  __security_check_cookie(local_40 ^ (ulonglong)auStack_108);
  return;
}

