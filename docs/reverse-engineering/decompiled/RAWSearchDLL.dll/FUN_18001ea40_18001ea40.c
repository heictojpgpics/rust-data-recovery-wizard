// Function: FUN_18001ea40
// Address: 18001ea40
// Size: 2585 bytes


void FUN_18001ea40(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  char *_Dst;
  longlong lVar13;
  byte *****pppppbVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong _Size;
  undefined8 *_Dst_00;
  undefined1 auStackY_438 [32];
  undefined1 local_408 [4];
  undefined4 local_404;
  longlong *local_3f8;
  longlong lStack_3f0;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined8 *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  longlong local_390;
  longlong local_388;
  longlong local_378;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  longlong local_368;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  longlong local_358;
  longlong local_350;
  undefined8 local_348;
  longlong *local_340;
  longlong local_338 [3];
  longlong local_320 [3];
  undefined8 local_308 [2];
  undefined8 local_2f8 [2];
  basic_istream<char,struct_std::char_traits<char>_> local_2e8 [144];
  longlong local_258;
  byte ****local_1d8 [3];
  ulonglong local_1c0;
  longlong local_1b8 [4];
  byte ****local_198 [3];
  ulonglong local_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_38;
  
  local_348 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_438;
  local_404 = 0;
  local_340 = param_1;
  FUN_180057320(&local_178);
  FUN_1800098d0(local_2e8,"raw_signs.json");
  local_3c8 = (undefined1  [16])0x0;
  lVar4 = FUN_180021460();
  local_3c8._0_8_ = lVar4;
  local_3d8 = (undefined1  [16])0x0;
  lVar4 = FUN_180021460();
  local_3d8._0_8_ = lVar4;
  local_3e8 = (undefined1  [16])0x0;
  lVar4 = FUN_180021380();
  local_3e8._0_8_ = lVar4;
  if (local_258 != 0) {
    std::basic_istream<char,struct_std::char_traits<char>_>::seekg(local_2e8,0,2);
    std::basic_istream<char,struct_std::char_traits<char>_>::tellg(local_2e8);
    uVar16 = 0;
    std::basic_istream<char,struct_std::char_traits<char>_>::seekg(local_2e8,0,0);
    _Size = local_388 + local_390;
    FUN_180001780((longlong)local_1d8);
    pcVar5 = (char *)FUN_1800016b0(local_1d8);
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    pcVar5[0x18] = '\x0f';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    local_408[0] = 0;
    _Dst = pcVar5;
    FUN_180001300(pcVar5,local_408);
    if (*(ulonglong *)(_Dst + 0x18) < _Size) {
      FUN_180021fd0((longlong)local_1d8,_Size,uVar16,(char)param_4);
    }
    else {
      if (0xf < *(ulonglong *)(_Dst + 0x18)) {
        _Dst = *(char **)_Dst;
      }
      *(ulonglong *)(pcVar5 + 0x10) = _Size;
      memset(_Dst,0,_Size);
      local_408[0] = 0;
      FUN_180001300(_Dst + _Size,local_408);
    }
    param_3 = (longlong *)(local_388 + local_390);
    if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
      pcVar5 = *(char **)pcVar5;
    }
    std::basic_istream<char,struct_std::char_traits<char>_>::read(local_2e8,pcVar5,(__int64)param_3)
    ;
    cVar3 = FUN_180057b80((longlong)&local_178,local_1d8,param_3,param_4);
    FUN_180001630((longlong *)local_1d8);
    FUN_180001690((undefined1 *)local_1b8);
    local_3b8 = ZEXT816(0);
    local_3a8 = (undefined8 *)0x0;
    puVar6 = FUN_180010a40();
    if (cVar3 != '\0') {
LAB_18001ec20:
      lVar4 = 0;
      puVar8 = local_170;
      if ((((local_170 == (undefined8 *)0x0) && (puVar8 = local_168, local_168 == (undefined8 *)0x0)
           ) || (puVar8 == (undefined8 *)0x0)) || (*(int *)(puVar8 + 3) != 6)) {
        if (local_160 == (undefined8 *)0x0) {
          if (local_170 == (undefined8 *)0x0) {
            if (local_168 != (undefined8 *)0x0) {
              local_160 = local_168;
            }
          }
          else {
            local_160 = local_170;
          }
          goto LAB_18001ec6b;
        }
        if ((local_160 == local_170) || (local_160 == local_168)) {
          puVar8 = (undefined8 *)local_160[2];
          if (puVar8 == (undefined8 *)0x0) goto LAB_18001ec6b;
          param_4 = (longlong *)puVar8[8];
          plVar10 = (longlong *)0xffffffffffffffff;
          do {
            plVar10 = (longlong *)((longlong)plVar10 + 1);
          } while (*(char *)((longlong)param_4 + (longlong)plVar10) != '\0');
          puVar9 = (undefined8 *)FUN_1800016b0(local_1b8);
          if ((longlong *)puVar9[3] < plVar10) {
            FUN_1800086f0((longlong)local_1b8,(ulonglong)plVar10,(char)param_3,param_4);
            local_160 = (undefined8 *)*puVar8;
            bVar1 = true;
          }
          else {
            _Dst_00 = puVar9;
            if ((longlong *)0xf < (longlong *)puVar9[3]) {
              _Dst_00 = (undefined8 *)*puVar9;
            }
            puVar9[2] = plVar10;
            param_3 = plVar10;
            memmove(_Dst_00,param_4,(size_t)plVar10);
            local_408[0] = 0;
            FUN_180001300((undefined1 *)((longlong)_Dst_00 + (longlong)plVar10),local_408);
            local_160 = (undefined8 *)*puVar8;
            bVar1 = true;
          }
        }
        else {
          param_4 = (longlong *)local_160[8];
          plVar10 = (longlong *)0xffffffffffffffff;
          do {
            plVar10 = (longlong *)((longlong)plVar10 + 1);
          } while (*(char *)((longlong)param_4 + (longlong)plVar10) != '\0');
          puVar8 = (undefined8 *)FUN_1800016b0(local_1b8);
          if ((longlong *)puVar8[3] < plVar10) {
            FUN_1800086f0((longlong)local_1b8,(ulonglong)plVar10,(char)param_3,param_4);
            local_160 = (undefined8 *)*local_160;
            bVar1 = true;
          }
          else {
            puVar9 = puVar8;
            if ((longlong *)0xf < (longlong *)puVar8[3]) {
              puVar9 = (undefined8 *)*puVar8;
            }
            puVar8[2] = plVar10;
            param_3 = plVar10;
            memmove(puVar9,param_4,(size_t)plVar10);
            local_408[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar9 + (longlong)plVar10),local_408);
            local_160 = (undefined8 *)*local_160;
            bVar1 = true;
          }
        }
      }
      else {
LAB_18001ec6b:
        bVar1 = false;
      }
      if (bVar1) {
        cVar3 = FUN_1800110d0((longlong)puVar6,local_1b8);
        if (cVar3 == '\0') {
          lVar7 = FUN_180057710((longlong)&local_178,local_1b8);
          FUN_180057470(&local_d8,lVar7,param_3,param_4);
          local_3a0 = &local_d8;
          local_398 = local_1b8;
          FUN_180001780((longlong)local_198);
          puVar8 = (undefined8 *)FUN_1800016b0(local_198);
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          local_408[0] = 0;
          FUN_180001300((undefined1 *)puVar8,local_408);
          if ((ulonglong)puVar8[3] < 3) {
            FUN_1800086f0((longlong)local_198,3,(char)param_3,&DAT_18006b04c);
          }
          else {
            puVar9 = puVar8;
            if (0xf < (ulonglong)puVar8[3]) {
              puVar9 = (undefined8 *)*puVar8;
            }
            puVar8[2] = 3;
            param_3 = (longlong *)0x3;
            memmove(puVar9,&DAT_18006b04c,3);
            local_408[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_408);
          }
          lVar7 = local_d0;
          if (((local_d0 == 0) && (lVar7 = local_c8, local_c8 == 0)) ||
             (*(int *)(lVar7 + 0x18) != 7)) {
LAB_18001ef28:
            bVar1 = false;
          }
          else {
            pppppbVar14 = local_198;
            if (0xf < local_180) {
              pppppbVar14 = (byte *****)local_198[0];
            }
            plVar10 = FUN_18005e140(lVar7,(byte *)pppppbVar14);
            if (plVar10 == (longlong *)0x0) goto LAB_18001ef28;
            if ((int)plVar10[3] == 3) {
              lVar4 = plVar10[5];
              bVar1 = true;
            }
            else {
              if ((int)plVar10[3] != 4) goto LAB_18001ef28;
              lVar4 = (longlong)(double)plVar10[6];
              bVar1 = true;
            }
          }
          FUN_180001630((longlong *)local_198);
          lVar7 = 0;
          if (bVar1) {
            uStack_370 = 1;
            lStack_3f0 = CONCAT71(uStack_36f,1);
            lVar7 = lVar4;
            local_3f8 = (longlong *)lVar4;
            local_378 = lVar4;
          }
          lVar4 = 0;
          FUN_180001780((longlong)local_1d8);
          puVar8 = (undefined8 *)FUN_1800016b0(local_1d8);
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          local_408[0] = 0;
          FUN_180001300((undefined1 *)puVar8,local_408);
          if ((ulonglong)puVar8[3] < 3) {
            FUN_1800086f0((longlong)local_1d8,3,(char)param_3,&DAT_18006b048);
          }
          else {
            puVar9 = puVar8;
            if (0xf < (ulonglong)puVar8[3]) {
              puVar9 = (undefined8 *)*puVar8;
            }
            puVar8[2] = 3;
            param_3 = (longlong *)0x0;
            memmove(puVar9,&DAT_18006b048,3);
            local_408[0] = 0;
            FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_408);
          }
          lVar13 = local_d0;
          if (((local_d0 == 0) && (lVar13 = local_c8, local_c8 == 0)) ||
             (*(int *)(lVar13 + 0x18) != 7)) {
LAB_18001f053:
            bVar2 = false;
          }
          else {
            pppppbVar14 = local_1d8;
            if (0xf < local_1c0) {
              pppppbVar14 = (byte *****)local_1d8[0];
            }
            plVar10 = FUN_18005e140(lVar13,(byte *)pppppbVar14);
            if (plVar10 == (longlong *)0x0) goto LAB_18001f053;
            if ((int)plVar10[3] == 3) {
              lVar4 = plVar10[5];
              bVar2 = true;
            }
            else {
              if ((int)plVar10[3] != 4) goto LAB_18001f053;
              lVar4 = (longlong)(double)plVar10[6];
              bVar2 = true;
            }
          }
          FUN_180001630((longlong *)local_1d8);
          lVar13 = 0;
          if (bVar2) {
            uStack_360 = 1;
            lStack_3f0 = CONCAT71(uStack_35f,1);
            cVar3 = '\x01';
            lVar13 = lVar4;
            lVar15 = lStack_3f0;
            local_3f8 = (longlong *)lVar4;
            local_368 = lVar4;
            if (bVar1) {
LAB_18001f098:
              cVar3 = (char)lVar15;
            }
            else {
              lVar7 = 0;
            }
            local_350 = 0;
            if (cVar3 != '\0') {
              local_350 = lVar13;
            }
            param_3 = &local_358;
            local_358 = lVar7;
            plVar10 = (longlong *)FUN_180022590((undefined8 *)local_3e8,local_1b8,param_3);
            FUN_180022610((longlong *)local_3e8,local_308,param_3,plVar10 + 4,plVar10);
          }
          else {
            lVar15 = lVar13;
            if (bVar1) goto LAB_18001f098;
          }
          FUN_18001f460((longlong *)&local_3a0,local_320,
                        (longlong *)CONCAT71((int7)((ulonglong)param_3 >> 8),1));
          FUN_18001f460((longlong *)&local_3a0,local_338,(longlong *)0x0);
          plVar10 = local_320;
          plVar11 = (longlong *)FUN_180022880((undefined8 *)local_3c8,local_1b8,plVar10);
          FUN_180022920((longlong *)local_3c8,local_2f8,plVar10,plVar11 + 4,plVar11);
          plVar11 = local_338;
          plVar12 = (longlong *)FUN_180022880((undefined8 *)local_3d8,local_1b8,local_338);
          param_4 = plVar12 + 4;
          plVar10 = (longlong *)local_3d8;
          FUN_180022920(plVar10,&local_390,plVar11,param_4,plVar12);
          if (local_3a8 == (undefined8 *)local_3b8._8_8_) {
            param_3 = local_1b8;
            puVar8 = (undefined8 *)local_3b8._8_8_;
            FUN_180021970((longlong *)local_3b8,(undefined8 *)local_3b8._8_8_,param_3);
          }
          else {
            lVar4 = FUN_1800012e0(plVar10,local_3b8._8_8_);
            FUN_180001780(lVar4);
            param_3 = (longlong *)FUN_1800016b0(local_1b8);
            plVar10 = (longlong *)FUN_1800016b0(lVar4);
            lVar4 = param_3[1];
            lVar7 = param_3[2];
            lVar13 = param_3[3];
            *plVar10 = *param_3;
            plVar10[1] = lVar4;
            plVar10[2] = lVar7;
            plVar10[3] = lVar13;
            param_3[2] = 0;
            param_3[3] = 0xf;
            local_408[0] = 0;
            puVar8 = (undefined8 *)local_408;
            FUN_180001300((undefined1 *)param_3,(undefined1 *)puVar8);
            local_3b8._8_8_ = local_3b8._8_8_ + 0x20;
          }
          FUN_1800211b0(local_338);
          FUN_1800211b0(local_320);
          FUN_180057610(&local_d8,puVar8,param_3,param_4);
        }
        goto LAB_18001ec20;
      }
    }
    if ((longlong *)local_3b8._0_8_ != (longlong *)0x0) {
      uVar16 = local_3b8._8_8_;
      plVar10 = (longlong *)local_3b8._0_8_;
      if (local_3b8._0_8_ != local_3b8._8_8_) {
        do {
          FUN_180001630(plVar10);
          plVar10 = plVar10 + 4;
        } while (plVar10 != (longlong *)uVar16);
      }
      plVar10 = (longlong *)local_3b8._0_8_;
      if ((0xfff < ((longlong)local_3a8 - local_3b8._0_8_ & 0xffffffffffffffe0U)) &&
         (plVar10 = *(longlong **)(local_3b8._0_8_ + -8),
         0x1f < (ulonglong)(local_3b8._0_8_ + (-8 - (longlong)plVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(plVar10);
      local_3b8 = (undefined1  [16])0x0;
      local_3a8 = (undefined8 *)0x0;
    }
    FUN_180001630(local_1b8);
  }
  local_3f8 = param_1;
  local_3a0 = param_1;
  FUN_180025710(param_1,(longlong *)local_3e8);
  local_3f8 = param_1 + 2;
  local_3a0 = local_3f8;
  FUN_1800255c0(local_3f8,(longlong *)local_3d8);
  local_3f8 = param_1 + 4;
  local_3a0 = local_3f8;
  FUN_1800255c0(local_3f8,(longlong *)local_3c8);
  local_404 = 1;
  uVar16 = local_3e8._0_8_;
  cVar3 = *(char *)((longlong)*(longlong **)(local_3e8._0_8_ + 8) + 0x19);
  plVar10 = *(longlong **)(local_3e8._0_8_ + 8);
  while (cVar3 == '\0') {
    FUN_1800213e0(local_3e8,(longlong *)plVar10[2],param_3,param_4);
    plVar11 = (longlong *)*plVar10;
    local_3f8 = plVar10 + 4;
    FUN_180001630(local_3f8);
    free(plVar10);
    plVar10 = plVar11;
    cVar3 = *(char *)((longlong)plVar11 + 0x19);
  }
  *(undefined8 *)(local_3e8._0_8_ + 8) = uVar16;
  *(undefined8 *)local_3e8._0_8_ = uVar16;
  *(undefined8 *)(local_3e8._0_8_ + 0x10) = uVar16;
  local_3e8._8_8_ = 0;
  free((void *)local_3e8._0_8_);
  uVar16 = local_3d8._0_8_;
  cVar3 = *(char *)((longlong)*(longlong **)(local_3d8._0_8_ + 8) + 0x19);
  plVar10 = *(longlong **)(local_3d8._0_8_ + 8);
  while (cVar3 == '\0') {
    FUN_1800214c0(local_3d8,(longlong *)plVar10[2],param_3,param_4);
    plVar11 = (longlong *)*plVar10;
    local_3f8 = plVar10 + 4;
    FUN_1800211b0(plVar10 + 8);
    FUN_180001630(plVar10 + 4);
    free(plVar10);
    plVar10 = plVar11;
    cVar3 = *(char *)((longlong)plVar11 + 0x19);
  }
  *(undefined8 *)(local_3d8._0_8_ + 8) = uVar16;
  *(undefined8 *)local_3d8._0_8_ = uVar16;
  *(undefined8 *)(local_3d8._0_8_ + 0x10) = uVar16;
  local_3d8._8_8_ = 0;
  free((void *)local_3d8._0_8_);
  uVar16 = local_3c8._0_8_;
  FUN_1800214c0(local_3c8,*(longlong **)(local_3c8._0_8_ + 8),param_3,param_4);
  *(undefined8 *)(local_3c8._0_8_ + 8) = uVar16;
  *(undefined8 *)local_3c8._0_8_ = uVar16;
  *(undefined8 *)(local_3c8._0_8_ + 0x10) = uVar16;
  local_3c8._8_8_ = 0;
  uVar16 = 0x58;
  free((void *)local_3c8._0_8_);
  FUN_180008b30((longlong *)local_2e8);
  FUN_180057610(&local_178,uVar16,param_3,param_4);
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_438);
  return;
}

