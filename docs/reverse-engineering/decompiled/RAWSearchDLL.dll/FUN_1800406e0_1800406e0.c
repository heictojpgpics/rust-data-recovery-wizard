// Function: FUN_1800406e0
// Address: 1800406e0
// Size: 1486 bytes


void FUN_1800406e0(undefined8 param_1,byte *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char *_Str2;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ushort *puVar8;
  byte *_Str1;
  byte *_Str1_00;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  char cStack_40;
  char cStack_3f;
  undefined4 uStack_3e;
  char cStack_3a;
  undefined4 uStack_39;
  char cStack_35;
  undefined4 uStack_34;
  char local_30;
  undefined4 local_2f;
  undefined1 local_2b;
  undefined4 local_2a;
  undefined1 local_26;
  ulonglong local_20;
  
  local_68 = 0xfffffffffffffffe;
  local_20 = DAT_18008f028 ^ (ulonglong)auStack_88;
  if (param_2 == (byte *)0x0) goto LAB_1800407c1;
  local_58 = DAT_18006cc6c;
  local_54 = DAT_18006cc70;
  local_60 = DAT_18006cc74;
  local_5c = DAT_18006cc78;
  lVar5 = -1;
  do {
    lVar4 = lVar5 + 1;
    lVar1 = lVar5 + 1;
    lVar5 = lVar4;
  } while (*(char *)((longlong)&local_58 + lVar1) != '\0');
  if (lVar4 == 4) {
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lVar4;
    } while (*(char *)((longlong)&local_60 + lVar1) != '\0');
    if (((lVar4 != 4) || (iVar2 = _strnicmp((char *)(param_2 + 8),(char *)&local_58,4), iVar2 != 0))
       || (iVar2 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_60,4), iVar2 != 0))
    goto LAB_1800407e6;
LAB_1800407ad:
    *(undefined4 *)(param_3 + 0x18) = 0x43;
  }
  else {
LAB_1800407e6:
    _Str1_00 = param_2 + 8;
    local_60 = DAT_18006cc40;
    local_5c = DAT_18006cc44;
    local_58 = DAT_18006cc48;
    local_54 = DAT_18006cc4c;
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lVar4;
    } while (*(char *)((longlong)&local_60 + lVar1) != '\0');
    if (lVar4 == 4) {
      lVar5 = -1;
      do {
        lVar4 = lVar5 + 1;
        lVar1 = lVar5 + 1;
        lVar5 = lVar4;
      } while (*(char *)((longlong)&local_58 + lVar1) != '\0');
      if (((lVar4 != 4) || (iVar2 = _strnicmp((char *)_Str1_00,(char *)&local_60,4), iVar2 != 0)) ||
         (iVar2 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_58,4), iVar2 != 0))
      goto LAB_180040893;
      *(undefined4 *)(param_3 + 0x18) = 10;
    }
    else {
LAB_180040893:
      local_58 = DAT_18006cc50;
      local_54 = DAT_18006cc54;
      local_60 = DAT_18006cc48;
      local_5c = DAT_18006cc4c;
      local_50._0_5_ = CONCAT14(DAT_18006cc5c,DAT_18006cc58);
      lVar5 = -1;
      do {
        lVar4 = lVar5 + 1;
        lVar1 = lVar5 + 1;
        lVar5 = lVar4;
      } while (*(char *)((longlong)&local_58 + lVar1) != '\0');
      if (lVar4 == 4) {
        lVar5 = -1;
        do {
          lVar4 = lVar5 + 1;
          lVar1 = lVar5 + 1;
          lVar5 = lVar4;
        } while (*(char *)((longlong)&local_60 + lVar1) != '\0');
        if (((lVar4 != 4) || (iVar2 = _strnicmp((char *)_Str1_00,(char *)&local_58,4), iVar2 != 0))
           || (iVar2 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_60,4), iVar2 != 0))
        goto LAB_180040929;
LAB_180040989:
        *(undefined4 *)(param_3 + 0x18) = 4;
      }
      else {
LAB_180040929:
        lVar5 = -1;
        do {
          lVar4 = lVar5 + 1;
          lVar1 = lVar5 + 1;
          lVar5 = lVar4;
        } while (*(char *)((longlong)&local_58 + lVar1) != '\0');
        if (lVar4 == 4) {
          lVar5 = -1;
          do {
            lVar4 = lVar5 + 1;
            lVar1 = lVar5 + 1;
            lVar5 = lVar4;
          } while (*(char *)((longlong)&local_50 + lVar1) != '\0');
          if (((lVar4 == 4) && (iVar2 = _strnicmp((char *)_Str1_00,(char *)&local_58,4), iVar2 == 0)
              ) && (iVar2 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_50,4), iVar2 == 0))
          goto LAB_180040989;
        }
        local_50._0_5_ = CONCAT14(DAT_18006cca0,DAT_18006cc9c);
        local_48 = (undefined4)s__Corel_Binary_Meta_File__18006cca8._0_8_;
        uStack_44 = SUB84(s__Corel_Binary_Meta_File__18006cca8._0_8_,4);
        cStack_40 = (char)s__Corel_Binary_Meta_File__18006cca8._8_8_;
        cStack_3f = SUB81(s__Corel_Binary_Meta_File__18006cca8._8_8_,1);
        uStack_3e = SUB84(s__Corel_Binary_Meta_File__18006cca8._8_8_,2);
        cStack_3a = SUB81(s__Corel_Binary_Meta_File__18006cca8._8_8_,6);
        uStack_39._0_1_ = SUB81(s__Corel_Binary_Meta_File__18006cca8._8_8_,7);
        uStack_39._1_3_ = (undefined3)s__Corel_Binary_Meta_File__18006cca8._16_8_;
        cStack_35 = SUB81(s__Corel_Binary_Meta_File__18006cca8._16_8_,3);
        uStack_34 = SUB84(s__Corel_Binary_Meta_File__18006cca8._16_8_,4);
        local_30 = s__Corel_Binary_Meta_File__18006cca8[0x18];
        iVar2 = strncmp((char *)_Str1_00,(char *)&local_50,4);
        if ((iVar2 == 0) &&
           (iVar2 = strncmp((char *)(param_2 + 0x14),(char *)&local_48,0x18), iVar2 == 0)) {
          *(undefined4 *)(param_3 + 0x18) = 0x10;
        }
        else {
          local_50._0_5_ = CONCAT14(DAT_18006ccc8,DAT_18006ccc4);
          local_60 = DAT_18006cccc;
          local_5c = DAT_18006ccd0;
          lVar5 = -1;
          do {
            lVar4 = lVar5 + 1;
            lVar1 = lVar5 + 1;
            lVar5 = lVar4;
          } while (*(char *)((longlong)&local_50 + lVar1) != '\0');
          if (lVar4 == 4) {
            lVar5 = -1;
            do {
              lVar4 = lVar5 + 1;
              lVar1 = lVar5 + 1;
              lVar5 = lVar4;
            } while (*(char *)((longlong)&local_60 + lVar1) != '\0');
            if (((lVar4 == 4) &&
                (iVar2 = _strnicmp((char *)_Str1_00,(char *)&local_50,4), iVar2 == 0)) &&
               (iVar2 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_60,4), iVar2 == 0)) {
              *(undefined4 *)(param_3 + 0x18) = 0xf;
              goto LAB_1800407b4;
            }
          }
          local_50._0_5_ = CONCAT14(DAT_18006cc80,DAT_18006cc7c);
          local_60 = DAT_18006cccc;
          local_5c = DAT_18006ccd0;
          lVar5 = -1;
          do {
            lVar4 = lVar5 + 1;
            lVar1 = lVar5 + 1;
            lVar5 = lVar4;
          } while (*(char *)((longlong)&local_50 + lVar1) != '\0');
          if (lVar4 == 4) {
            lVar5 = -1;
            do {
              lVar4 = lVar5 + 1;
              lVar1 = lVar5 + 1;
              lVar5 = lVar4;
            } while (*(char *)((longlong)&local_60 + lVar1) != '\0');
            if (((lVar4 == 4) &&
                (iVar2 = _strnicmp((char *)_Str1_00,(char *)&local_50,4), iVar2 == 0)) &&
               (iVar2 = _strnicmp((char *)(param_2 + 0xc),(char *)&local_60,4), iVar2 == 0)) {
              *(undefined4 *)(param_3 + 0x18) = 0x13;
              goto LAB_1800407b4;
            }
          }
          local_48 = DAT_18006cc8c;
          uStack_44 = CONCAT31((int3)DAT_18006cc94,DAT_18006cc90);
          cStack_40 = (char)((uint)DAT_18006cc94 >> 0x18);
          cStack_3f = DAT_18006cc98;
          uStack_3e = DAT_18006ccdc;
          cStack_3a = DAT_18006cce0;
          uStack_39 = DAT_18006cce4;
          cStack_35 = DAT_18006cce8;
          uStack_34 = DAT_18006ccec;
          local_30 = DAT_18006ccf0;
          local_2f = DAT_18006ccf4;
          local_2b = DAT_18006ccf8;
          local_2a = DAT_18006ccd4;
          local_26 = DAT_18006ccd8;
          local_50._0_5_ = CONCAT14(DAT_18006ccd0,DAT_18006cccc);
          iVar2 = 0;
          do {
            _Str1 = (byte *)(longlong)iVar2;
            _Str2 = (char *)((longlong)&local_48 + (longlong)_Str1 * 5);
            if (_Str2 != (char *)0x0) {
              lVar5 = -1;
              do {
                lVar5 = lVar5 + 1;
              } while (_Str2[lVar5] != '\0');
              if (lVar5 == 4) {
                _Str1 = (byte *)&local_50;
                lVar5 = -1;
                do {
                  lVar5 = lVar5 + 1;
                } while (_Str1[lVar5] != 0);
                if ((lVar5 == 4) &&
                   (_Str1 = _Str1_00, iVar3 = _strnicmp((char *)_Str1_00,_Str2,4), iVar3 == 0)) {
                  _Str1 = param_2 + 0xc;
                  iVar3 = _strnicmp((char *)_Str1,(char *)&local_50,4);
                  if (iVar3 == 0) {
                    *(undefined4 *)(param_3 + 0x18) = 0xd;
                    goto LAB_1800407b4;
                  }
                }
              }
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 7);
          uVar6 = FUN_180040f10((ulonglong)_Str1,param_2,param_3);
          if ((int)uVar6 == 0) goto LAB_1800407ad;
          *(undefined4 *)(param_3 + 0x18) = 0x7e;
          puVar7 = FUN_180001350();
          local_50 = &local_48;
          puVar8 = (ushort *)FUN_18000f4b0((longlong)&local_48,L"WEBP");
          FUN_18000ed00((longlong)(puVar7 + 0x60),puVar8);
          if (*(int *)(param_3 + 0x18) == 0x7e) goto LAB_1800407c1;
        }
      }
    }
  }
LAB_1800407b4:
  *(undefined8 *)(param_3 + 0x10) = 0;
LAB_1800407c1:
  __security_check_cookie(local_20 ^ (ulonglong)auStack_88);
  return;
}

