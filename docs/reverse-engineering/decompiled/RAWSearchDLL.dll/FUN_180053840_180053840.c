// Function: FUN_180053840
// Address: 180053840
// Size: 987 bytes


void FUN_180053840(undefined8 param_1,longlong param_2,longlong param_3)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  char *_Str1_00;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  char cStack_48;
  char cStack_47;
  undefined4 uStack_46;
  char cStack_42;
  undefined4 uStack_41;
  char cStack_3d;
  undefined4 uStack_3c;
  char local_38;
  undefined4 local_37;
  undefined1 local_33;
  undefined4 local_32;
  undefined1 local_2e;
  ulonglong local_28;
  
  local_28 = DAT_18008f028 ^ (ulonglong)auStack_88;
  _Str1 = (char *)(param_2 + 8);
  local_58 = DAT_18006cc6c;
  local_54 = DAT_18006cc70;
  local_68 = DAT_18006cc74;
  local_64 = DAT_18006cc78;
  iVar1 = _strnicmp(_Str1,(char *)&local_58,4);
  if (iVar1 == 0) {
    iVar1 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_68,4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 0x18) = 0x43;
      goto LAB_180053be4;
    }
  }
  local_68 = DAT_18006cc40;
  local_64 = DAT_18006cc44;
  local_58 = DAT_18006cc48;
  local_54 = DAT_18006cc4c;
  iVar1 = _strnicmp(_Str1,(char *)&local_68,4);
  if (iVar1 == 0) {
    iVar1 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_58,4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 0x18) = 10;
      goto LAB_180053be4;
    }
  }
  local_58 = DAT_18006cc50;
  local_54 = DAT_18006cc54;
  local_68 = DAT_18006cc48;
  local_64 = DAT_18006cc4c;
  local_60 = DAT_18006cc58;
  local_5c = DAT_18006cc5c;
  iVar1 = _strnicmp(_Str1,(char *)&local_58,4);
  if (iVar1 == 0) {
    iVar1 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_68,4);
    if (iVar1 != 0) goto LAB_180053991;
LAB_1800539be:
    *(undefined4 *)(param_3 + 0x18) = 4;
  }
  else {
LAB_180053991:
    iVar1 = _strnicmp(_Str1,(char *)&local_58,4);
    if (iVar1 == 0) {
      iVar1 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_60,4);
      if (iVar1 == 0) goto LAB_1800539be;
    }
    local_60 = DAT_18006cc9c;
    local_5c = DAT_18006cca0;
    local_38 = s__Corel_Binary_Meta_File__18006cca8[0x18];
    local_50 = (undefined4)s__Corel_Binary_Meta_File__18006cca8._0_8_;
    uStack_4c = SUB84(s__Corel_Binary_Meta_File__18006cca8._0_8_,4);
    cStack_48 = (char)s__Corel_Binary_Meta_File__18006cca8._8_8_;
    cStack_47 = SUB81(s__Corel_Binary_Meta_File__18006cca8._8_8_,1);
    uStack_46 = SUB84(s__Corel_Binary_Meta_File__18006cca8._8_8_,2);
    cStack_42 = SUB81(s__Corel_Binary_Meta_File__18006cca8._8_8_,6);
    uStack_41._0_1_ = SUB81(s__Corel_Binary_Meta_File__18006cca8._8_8_,7);
    uStack_41._1_3_ = (undefined3)s__Corel_Binary_Meta_File__18006cca8._16_8_;
    cStack_3d = SUB81(s__Corel_Binary_Meta_File__18006cca8._16_8_,3);
    uStack_3c = SUB84(s__Corel_Binary_Meta_File__18006cca8._16_8_,4);
    iVar1 = strncmp(_Str1,(char *)&local_60,4);
    if (iVar1 == 0) {
      iVar1 = strncmp((char *)(param_2 + 0x14),(char *)&local_50,0x18);
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 0x18) = 0x10;
        goto LAB_180053be4;
      }
    }
    local_60 = DAT_18006ccc4;
    local_5c = DAT_18006ccc8;
    _Str1_00 = (char *)(param_2 + 0xc);
    local_68 = DAT_18006cccc;
    local_64 = DAT_18006ccd0;
    iVar1 = _strnicmp(_Str1,(char *)&local_60,4);
    if (iVar1 == 0) {
      iVar1 = _strnicmp(_Str1_00,(char *)&local_68,4);
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 0x18) = 0xf;
        goto LAB_180053be4;
      }
    }
    local_60 = DAT_18006cc7c;
    local_5c = DAT_18006cc80;
    local_68 = DAT_18006cccc;
    local_64 = DAT_18006ccd0;
    iVar1 = _strnicmp(_Str1,(char *)&local_60,4);
    if (iVar1 == 0) {
      iVar1 = _strnicmp(_Str1_00,(char *)&local_68,4);
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 0x18) = 0x13;
        goto LAB_180053be4;
      }
    }
    iVar1 = 0;
    local_50 = DAT_18006cc8c;
    uStack_4c = CONCAT31((int3)DAT_18006cc94,DAT_18006cc90);
    cStack_48 = (char)((uint)DAT_18006cc94 >> 0x18);
    cStack_47 = DAT_18006cc98;
    uStack_46 = DAT_18006ccdc;
    cStack_42 = DAT_18006cce0;
    uStack_41 = DAT_18006cce4;
    cStack_3d = DAT_18006cce8;
    uStack_3c = DAT_18006ccec;
    local_38 = DAT_18006ccf0;
    local_37 = DAT_18006ccf4;
    local_33 = DAT_18006ccf8;
    local_32 = DAT_18006ccd4;
    local_2e = DAT_18006ccd8;
    local_60 = DAT_18006cccc;
    local_5c = DAT_18006ccd0;
    do {
      iVar2 = _strnicmp(_Str1,(char *)((longlong)&local_50 + (longlong)iVar1 * 5),4);
      if (iVar2 == 0) {
        iVar2 = _strnicmp(_Str1_00,(char *)&local_60,4);
        if (iVar2 == 0) {
          *(undefined4 *)(param_3 + 0x18) = 0xd;
          goto LAB_180053be4;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 7);
    *(undefined4 *)(param_3 + 0x18) = 0x3b;
  }
LAB_180053be4:
  *(undefined8 *)(param_3 + 0x10) = 0;
  __security_check_cookie(local_28 ^ (ulonglong)auStack_88);
  return;
}

