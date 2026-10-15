// Function: FUN_180045110
// Address: 180045110
// Size: 1405 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180045110(longlong param_1,longlong param_2,longlong *param_3,void *param_4,
                  longlong param_5)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong *_Buf1;
  undefined8 ****ppppuVar13;
  undefined1 auVar14 [8];
  ulonglong uVar15;
  undefined1 uVar16;
  char ****ppppcVar17;
  ulonglong uVar18;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90 [4];
  undefined8 ***local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  char ***local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_98 = 0xfffffffffffffffe;
  local_30 = DAT_18008f028 ^ (ulonglong)auStackY_e8;
  uVar15 = 0;
  if ((((param_2 != 0) && (param_4 != (void *)0x0)) && (param_5 != 0)) && ((int)*param_3 != 0x86)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4
                 ) < DAT_1801183f0) && (_Init_thread_header(&DAT_1801183f0), DAT_1801183f0 == -1)) {
      _DAT_1801183d8 = (undefined1  [16])0x0;
      DAT_1801183e8 = (undefined8 *)0x0;
      atexit(FUN_180064f40);
      _Init_thread_footer(&DAT_1801183f0);
    }
    uVar16 = SUB81(param_3,0);
    if (DAT_1801183d8 == DAT_1801183e0) {
      local_b0 = (undefined1  [8])0x0;
      puStack_a8 = (undefined8 *)0x0;
      local_a0 = (undefined8 *)0x0;
      FUN_180001780((longlong)local_90);
      puVar7 = (undefined8 *)FUN_1800016b0(local_90);
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      local_b8[0] = 0;
      puVar9 = puVar7;
      FUN_180001300((undefined1 *)puVar7,local_b8);
      if ((ulonglong)puVar9[3] < 0xb) {
        plVar12 = local_90;
        FUN_1800086f0((longlong)plVar12,0xb,(char)param_3,"content.xml");
      }
      else {
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        puVar7[2] = 0xb;
        param_3 = (longlong *)0xb;
        memmove(puVar9,"content.xml",0xb);
        local_b8[0] = 0;
        plVar12 = (longlong *)((longlong)puVar9 + 0xb);
        FUN_180001300((undefined1 *)plVar12,local_b8);
      }
      if (local_a0 == puStack_a8) {
        param_3 = local_90;
        FUN_180021970((longlong *)local_b0,puStack_a8,param_3);
      }
      else {
        lVar8 = FUN_1800012e0(plVar12,puStack_a8);
        FUN_180001780(lVar8);
        puVar9 = (undefined8 *)FUN_1800016b0(lVar8);
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar9 = *puVar7;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar7[2] = 0;
        puVar7[3] = 0xf;
        local_b8[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_b8);
        puStack_a8 = puStack_a8 + 4;
      }
      FUN_180001630(local_90);
      FUN_180001780((longlong)local_90);
      puVar7 = (undefined8 *)FUN_1800016b0(local_90);
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      local_b8[0] = 0;
      puVar9 = puVar7;
      FUN_180001300((undefined1 *)puVar7,local_b8);
      if ((ulonglong)puVar9[3] < 8) {
        plVar12 = local_90;
        FUN_1800086f0((longlong)plVar12,8,(char)param_3,"meta.xml");
      }
      else {
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        puVar7[2] = 8;
        param_3 = (longlong *)&DAT_00000008;
        memmove(puVar9,"meta.xml",8);
        local_b8[0] = 0;
        plVar12 = puVar9 + 1;
        FUN_180001300((undefined1 *)plVar12,local_b8);
      }
      if (local_a0 == puStack_a8) {
        param_3 = local_90;
        FUN_180021970((longlong *)local_b0,puStack_a8,param_3);
      }
      else {
        lVar8 = FUN_1800012e0(plVar12,puStack_a8);
        FUN_180001780(lVar8);
        puVar9 = (undefined8 *)FUN_1800016b0(lVar8);
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar9 = *puVar7;
        puVar9[1] = uVar1;
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        puVar7[2] = 0;
        puVar7[3] = 0xf;
        local_b8[0] = 0;
        FUN_180001300((undefined1 *)puVar7,local_b8);
        puStack_a8 = puStack_a8 + 4;
      }
      FUN_180001630(local_90);
      puVar9 = DAT_1801183e8;
      auVar5 = _DAT_1801183d8;
      uVar16 = SUB81(param_3,0);
      auVar14 = (undefined1  [8])DAT_1801183d8;
      plVar12 = DAT_1801183e0;
      DAT_1801183e0 = puStack_a8;
      DAT_1801183d8 = (longlong *)local_b0;
      _local_b0 = auVar5;
      DAT_1801183e8 = local_a0;
      local_a0 = puVar9;
      if (auVar14 != (undefined1  [8])0x0) {
        if (auVar14 != (undefined1  [8])plVar12) {
          do {
            FUN_180001630((longlong *)auVar14);
            uVar16 = SUB81(param_3,0);
            auVar14 = (undefined1  [8])((longlong)auVar14 + 0x20);
          } while (auVar14 != (undefined1  [8])plVar12);
          auVar14 = local_b0;
        }
        plVar12 = (longlong *)auVar14;
        if ((0xfff < ((longlong)local_a0 - (longlong)auVar14 & 0xffffffffffffffe0U)) &&
           (plVar12 = *(longlong **)((longlong)auVar14 + -8),
           0x1f < (ulonglong)((longlong)auVar14 + (-8 - (longlong)plVar12)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(plVar12);
        _local_b0 = (undefined1  [16])0x0;
        local_a0 = (undefined8 *)0x0;
      }
    }
    FUN_180001780((longlong)local_50);
    puVar9 = (undefined8 *)FUN_1800016b0(local_50);
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)puVar9,local_b8);
    if ((ulonglong)puVar9[3] < 0x10) {
      FUN_1800086f0((longlong)local_50,0x10,uVar16,"xmlns=\"urn:xmind");
    }
    else {
      _Dst = (void *)*puVar9;
      puVar9[2] = 0x10;
      memmove(_Dst,"xmlns=\"urn:xmind",0x10);
      local_b8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)_Dst + 0x10),local_b8);
    }
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)((longlong)param_4 + lVar8) != '\0');
    lVar8 = param_1 + lVar8;
    FUN_180001780((longlong)local_70);
    puVar10 = (undefined1 *)FUN_1800016b0(local_70);
    *(undefined8 *)(puVar10 + 0x10) = 0;
    *(undefined8 *)(puVar10 + 0x18) = 0xf;
    local_b8[0] = 0;
    FUN_180001300(puVar10,local_b8);
    FUN_180011560((longlong)local_70,300);
    FUN_1800262c0((longlong)local_70,(undefined1 *)(lVar8 + 0x1e),(undefined1 *)(lVar8 + 0x14a));
    uVar18 = (longlong)DAT_1801183e0 - (longlong)DAT_1801183d8 >> 5;
    plVar12 = DAT_1801183d8;
    if (uVar18 != 0) {
      do {
        sVar11 = 0xffffffffffffffff;
        do {
          sVar11 = sVar11 + 1;
        } while (*(char *)((longlong)param_4 + sVar11) != '\0');
        _Buf1 = plVar12;
        if (0xf < (ulonglong)plVar12[3]) {
          _Buf1 = (longlong *)*plVar12;
        }
        if ((plVar12[2] == sVar11) && (iVar6 = memcmp(_Buf1,param_4,plVar12[2]), iVar6 == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          ppppcVar17 = local_50;
          if (0xf < local_38) {
            ppppcVar17 = (char ****)local_50[0];
          }
          ppppuVar13 = local_70;
          if (0xf < local_58) {
            ppppuVar13 = (undefined8 ****)local_70[0];
          }
          uVar15 = FUN_18000f820((longlong)ppppuVar13,local_60,0,(char *)ppppcVar17,local_40);
          if (uVar15 == 0xffffffffffffffff) {
            FUN_180016fc0((char *)(lVar8 + 0x1e),300,&DAT_180093980,0xe);
          }
          break;
        }
        uVar15 = uVar15 + 1;
        plVar12 = plVar12 + 4;
      } while (uVar15 < uVar18);
    }
    FUN_180001630((longlong *)local_70);
    FUN_180001630((longlong *)local_50);
  }
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_e8);
  return;
}

