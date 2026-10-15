// Function: FUN_18002bee0
// Address: 18002bee0
// Size: 138 bytes


ulonglong FUN_18002bee0(ulonglong param_1,longlong param_2)

{
  int *_Str1;
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  bool bVar12;
  ulonglong local_res8;
  ushort *puStackX_10;
  ushort auStack_40 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _Str1 = (int *)(param_2 + 8);
  uVar9 = 0;
  if ((param_2 == 0) || (_Str1 == (int *)0x0)) {
    return 0;
  }
  cVar1 = *(char *)_Str1;
  local_res8 = param_1;
  switch(cVar1) {
  case '3':
  case 'K':
    if ((cVar1 == '3') && (*(char *)(param_2 + 9) == 'g')) {
      uVar3 = *(byte *)(param_2 + 10) - 0x32;
      if ((((byte)uVar3 < 0x3f) && ((0x4008000000000001U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) ||
         (*(byte *)(param_2 + 10) == 0x73)) {
        return 2;
      }
    }
    else {
      iVar4 = strncmp((char *)_Str1,"KDDI",4);
      if (iVar4 == 0) {
        return 2;
      }
    }
    break;
  case 'F':
  case 'X':
  case 'a':
    if (cVar1 == 'F') {
      if (*(char *)(param_2 + 9) == '4') {
        bVar2 = *(char *)(param_2 + 10) + 0xbf;
        if (0x15 < bVar2) {
          return 0;
        }
        if ((0x208003U >> (bVar2 & 0x1f) & 1) == 0) {
          return 0;
        }
        return 0x2c;
      }
    }
    else if (cVar1 == 'X') {
      if (*_Str1 != 0x43564158) {
        return 0;
      }
      pcVar7 = FUN_18002a060((char *)_Str1,0x200,(char *)0x180093730,7);
      if (pcVar7 == (char *)0x0) {
        return 0;
      }
      return 0x2c;
    }
    pcVar7 = "avc1";
    goto code_r0x00018002c0ad;
  case 'M':
    if (*(char *)(param_2 + 9) == '4') {
      if (*(char *)(param_2 + 10) == 'A') {
        return 0x2d;
      }
      if (*(char *)(param_2 + 10) != 'V') {
        return 0;
      }
      return 0x2e;
    }
    if (*(char *)(param_2 + 9) != 'S') {
      return 0;
    }
    if (*(char *)(param_2 + 10) != 'N') {
      return 0;
    }
    bVar12 = *(char *)(param_2 + 0xb) == 'V';
    goto code_r0x00018002c0be;
  case 'N':
    if (*(char *)(param_2 + 9) != 'D') {
      return 0;
    }
    cVar1 = *(char *)(param_2 + 10);
    if (cVar1 == 'A') {
      return 0x2c;
    }
    if ((cVar1 != 'S') && (cVar1 != 'X')) {
      return 0;
    }
    bVar2 = *(char *)(param_2 + 0xb) + 0xbd;
    if (0x10 < bVar2) {
      return 0;
    }
    if ((0x12421U >> (bVar2 & 0x1f) & 1) == 0) {
      return 0;
    }
    return 0x2c;
  case 'c':
    iVar4 = strncmp((char *)_Str1,"crx",3);
    if (iVar4 == 0) {
      uVar11 = 0x18;
      pcVar7 = FUN_18002a060((char *)_Str1,100,s_CanonCRMiPad_180093718,8);
      if (pcVar7 == (char *)0x0) {
        uVar9 = 0x77;
        puVar5 = FUN_180001350();
        puVar5 = puVar5 + 0x60;
        puStackX_10 = auStack_40;
        uStack_30 = 0;
        uStack_28 = 0;
        puVar6 = (undefined8 *)FUN_1800016b0(auStack_40);
        puVar6[2] = 0;
        puVar6[3] = 7;
        local_res8 = local_res8 & 0xffffffffffff0000;
        FUN_180001790((undefined2 *)puVar6,(undefined2 *)&local_res8);
        if ((ulonglong)puVar6[3] < 3) {
          FUN_18000f8f0((longlong)auStack_40,3,uVar11,&DAT_18006baa8);
        }
        else {
          puVar10 = puVar6;
          if (7 < (ulonglong)puVar6[3]) {
            puVar10 = (undefined8 *)*puVar6;
          }
          puVar6[2] = 3;
          memmove(puVar10,&DAT_18006baa8,6);
          local_res8 = local_res8 & 0xffffffffffff0000;
          FUN_180001790((undefined2 *)((longlong)puVar10 + 6),(undefined2 *)&local_res8);
        }
      }
      else {
        uVar9 = 0x9b;
        puVar5 = FUN_180001350();
        puVar5 = puVar5 + 0x60;
        puStackX_10 = auStack_40;
        uStack_30 = 0;
        uStack_28 = 0;
        puVar6 = (undefined8 *)FUN_1800016b0(auStack_40);
        puVar6[2] = 0;
        puVar6[3] = 7;
        local_res8 = local_res8 & 0xffffffffffff0000;
        FUN_180001790((undefined2 *)puVar6,(undefined2 *)&local_res8);
        if ((ulonglong)puVar6[3] < 3) {
          FUN_18000f8f0((longlong)auStack_40,3,uVar11,&UNK_18006bab8);
        }
        else {
          puVar10 = puVar6;
          if (7 < (ulonglong)puVar6[3]) {
            puVar10 = (undefined8 *)*puVar6;
          }
          puVar6[2] = 3;
          memmove(puVar10,&UNK_18006bab8,6);
          local_res8 = local_res8 & 0xffffffffffff0000;
          FUN_180001790((undefined2 *)((longlong)puVar10 + 6),(undefined2 *)&local_res8);
        }
      }
      FUN_18000ed00((longlong)puVar5,auStack_40);
    }
    break;
  case 'i':
  case 'q':
    iVar4 = strncmp((char *)_Str1,"qt  ",4);
    if (iVar4 == 0) {
      return 0x2a;
    }
    iVar4 = strncmp((char *)_Str1,"iso2",4);
    if ((iVar4 == 0) || (iVar4 = strncmp((char *)_Str1,"isom",4), iVar4 == 0)) {
      uVar8 = 0x2a;
code_r0x00018002c018:
      local_res8 = CONCAT44(local_res8._4_4_,uVar8);
      func_0x00018002c3a0();
      return local_res8 & 0xffffffff;
    }
    break;
  case 'm':
    iVar4 = strncmp((char *)_Str1,"mp4",3);
    if (iVar4 == 0) {
      uVar8 = 0x2c;
      goto code_r0x00018002c018;
    }
    pcVar7 = "mmp4";
code_r0x00018002c0ad:
    iVar4 = strncmp((char *)_Str1,pcVar7,4);
    bVar12 = iVar4 == 0;
code_r0x00018002c0be:
    if (bVar12) {
      return 0x2c;
    }
  }
  return uVar9;
}

