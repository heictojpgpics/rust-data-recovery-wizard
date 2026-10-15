// Function: FUN_180004fb0
// Address: 180004fb0
// Size: 6002 bytes


void FUN_180004fb0(longlong *param_1,int param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *puVar12;
  byte *pbVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  longlong *plVar16;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  undefined8 local_98;
  byte local_90 [32];
  longlong local_70 [4];
  byte local_50 [32];
  ulonglong local_30;
  
  local_98 = 0xfffffffffffffffe;
  local_30 = DAT_18008f028 ^ (ulonglong)auStack_d8;
  pbVar13 = (byte *)0x0;
  if (param_2 == 0) {
    local_b0 = (byte *)((ulonglong)local_b0 & 0xffffffff00000000);
    FUN_180001780((longlong)local_90);
    puVar6 = (undefined8 *)FUN_1800016b0(local_90);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_b8);
    if ((ulonglong)puVar6[3] < 0xb) {
      FUN_1800086f0((longlong)local_90,0xb,param_3,"only_common");
    }
    else {
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = 0xb;
      param_3 = 0xb;
      memmove(puVar9,"only_common",0xb);
      local_b8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + 0xb),local_b8);
    }
    FUN_180001780((longlong)local_50);
    puVar6 = (undefined8 *)FUN_1800016b0(local_50);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_b8);
    if ((ulonglong)puVar6[3] < 4) {
      FUN_1800086f0((longlong)local_50,4,param_3,&DAT_180066bcc);
    }
    else {
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = 4;
      param_3 = 4;
      memmove(puVar9,&DAT_180066bcc,4);
      local_b8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + 4),local_b8);
    }
    FUN_180001780((longlong)local_70);
    puVar6 = (undefined8 *)FUN_1800016b0(local_70);
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)puVar6,local_b8);
    if ((ulonglong)puVar6[3] < 0x11) {
      FUN_1800086f0((longlong)local_70,0x11,param_3,"config/config.ini");
    }
    else {
      puVar9 = puVar6;
      if (0xf < (ulonglong)puVar6[3]) {
        puVar9 = (undefined8 *)*puVar6;
      }
      puVar6[2] = 0x11;
      memmove(puVar9,"config/config.ini",0x11);
      local_b8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar9 + 0x11),local_b8);
    }
    iVar5 = FUN_180007890((char *)local_70,local_50,local_90,(uint *)&local_b0);
    FUN_180001630(local_70);
    FUN_180001630((longlong *)local_50);
    FUN_180001630((longlong *)local_90);
    if (iVar5 != 0) {
      ppuVar14 = (undefined **)0x18;
      local_a0 = (byte *)FUN_1800020c0(0x18);
      if (local_a0 != (byte *)0x0) {
        *(undefined ***)local_a0 = IRawFileAnalyser::vftable;
        local_a0[8] = 0xff;
        local_a0[9] = 0xff;
        local_a0[10] = 0xff;
        local_a0[0xb] = 0xff;
        ppuVar14 = RawFormat_xjq::CommonRawAnalyser::vftable;
        *(undefined ***)local_a0 = RawFormat_xjq::CommonRawAnalyser::vftable;
        local_a0[0x10] = 0;
        local_a0[0x11] = 0;
        local_a0[0x12] = 0;
        local_a0[0x13] = 0;
        local_a0[0x14] = 0;
        local_a0[0x15] = 0;
        local_a0[0x16] = 0;
        local_a0[0x17] = 0;
        local_a0[8] = 0xa8;
        local_a0[9] = 0;
        local_a0[10] = 0;
        local_a0[0xb] = 0;
        pbVar13 = local_a0;
      }
      lVar1 = *param_1;
      plVar2 = *(longlong **)(lVar1 + 8);
      local_b0 = pbVar13;
      lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
      if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
        std::_Xlength_error("list<T> too long");
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1[1] = param_1[1] + 1;
      *(longlong *)(lVar1 + 8) = lVar7;
      *plVar2 = lVar7;
      goto LAB_1800066f5;
    }
  }
  ppuVar14 = (undefined **)0x10;
  local_a0 = (byte *)FUN_1800020c0(0x10);
  local_b0 = pbVar13;
  if (local_a0 != (byte *)0x0) {
    *(undefined ***)local_a0 = IRawFileAnalyser::vftable;
    local_a0[8] = 0xff;
    local_a0[9] = 0xff;
    local_a0[10] = 0xff;
    local_a0[0xb] = 0xff;
    ppuVar14 = FileSWFAnalyser::vftable;
    *(undefined ***)local_a0 = FileSWFAnalyser::vftable;
    local_a0[8] = 0x3e;
    local_a0[9] = 0;
    local_a0[10] = 0;
    local_a0[0xb] = 0;
    local_b0 = local_a0;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  ppuVar14 = (undefined **)0x18;
  pbVar8 = (byte *)FUN_1800020c0(0x18);
  pbVar10 = pbVar13;
  local_a0 = pbVar8;
  if (pbVar8 != (byte *)0x0) {
    *(undefined ***)pbVar8 = IRawFileAnalyser::vftable;
    pbVar8[8] = 0xff;
    pbVar8[9] = 0xff;
    pbVar8[10] = 0xff;
    pbVar8[0xb] = 0xff;
    *(undefined ***)pbVar8 = Brance::LZHAnalyser::vftable;
    pbVar8[8] = 0x24;
    pbVar8[9] = 0;
    pbVar8[10] = 0;
    pbVar8[0xb] = 0;
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = FileLZHAnalyser::vftable;
      *(undefined ***)local_a8 = FileLZHAnalyser::vftable;
      local_a8[8] = 0x24;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      pbVar10 = local_a8;
    }
    *(byte **)(pbVar8 + 0x10) = pbVar10;
    pbVar10 = pbVar8;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  local_b0 = pbVar10;
  lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  ppuVar14 = (undefined **)0x18;
  local_a8 = (byte *)FUN_1800020c0(0x18);
  local_b0 = pbVar13;
  if (local_a8 != (byte *)0x0) {
    *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
    local_a8[8] = 0xff;
    local_a8[9] = 0xff;
    local_a8[10] = 0xff;
    local_a8[0xb] = 0xff;
    *(undefined ***)local_a8 = BruteForce::CMTSAnalyser::vftable;
    ppuVar14 = BruteForce::CMTSAnalyser::vftable;
    *(undefined ***)(local_a8 + 0x10) = BruteForce::CMTSAnalyser::vftable;
    local_a8[8] = 0x76;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_b0 = local_a8;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  ppuVar14 = (undefined **)0x18;
  local_a8 = (byte *)FUN_1800020c0(0x18);
  local_b0 = pbVar13;
  if (local_a8 != (byte *)0x0) {
    *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
    local_a8[8] = 0xff;
    local_a8[9] = 0xff;
    local_a8[10] = 0xff;
    local_a8[0xb] = 0xff;
    *(undefined ***)local_a8 = BruteForce::CM2TSAnalyser::vftable;
    ppuVar14 = BruteForce::CM2TSAnalyser::vftable;
    *(undefined ***)(local_a8 + 0x10) = BruteForce::CM2TSAnalyser::vftable;
    local_a8[8] = 0x74;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_b0 = local_a8;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  ppuVar14 = (undefined **)0x10;
  local_a8 = (byte *)FUN_1800020c0(0x10);
  local_b0 = pbVar13;
  if (local_a8 != (byte *)0x0) {
    *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
    local_a8[8] = 0xff;
    local_a8[9] = 0xff;
    local_a8[10] = 0xff;
    local_a8[0xb] = 0xff;
    ppuVar14 = FileEMFAnalyser::vftable;
    *(undefined ***)local_a8 = FileEMFAnalyser::vftable;
    local_a8[8] = 0x1a;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_b0 = local_a8;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  puVar6 = (undefined8 *)0x18;
  puVar9 = (undefined8 *)FUN_1800020c0(0x18);
  pbVar10 = pbVar13;
  local_a8 = (byte *)puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    pbVar10 = (byte *)FUN_1800126c0(puVar9);
    puVar6 = puVar9;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  local_b0 = pbVar10;
  lVar7 = FUN_180009f00(puVar6,lVar1,(longlong)plVar2,&local_b0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  ppuVar14 = (undefined **)0x20;
  pbVar8 = (byte *)FUN_1800020c0(0x20);
  pbVar10 = pbVar13;
  local_a8 = pbVar8;
  if (pbVar8 != (byte *)0x0) {
    *(undefined ***)pbVar8 = IRawFileAnalyser::vftable;
    pbVar8[8] = 0xff;
    pbVar8[9] = 0xff;
    pbVar8[10] = 0xff;
    pbVar8[0xb] = 0xff;
    *(undefined ***)pbVar8 = RawSpeed::TARAnalyser::vftable;
    *(undefined ***)(pbVar8 + 0x10) = RawSpeed::TARAnalyser::vftable;
    pbVar8[8] = 0x3f;
    pbVar8[9] = 0;
    pbVar8[10] = 0;
    pbVar8[0xb] = 0;
    ppuVar14 = (undefined **)0x10;
    local_a0 = (byte *)FUN_1800020c0(0x10);
    if (local_a0 != (byte *)0x0) {
      *(undefined ***)local_a0 = IRawFileAnalyser::vftable;
      local_a0[8] = 0xff;
      local_a0[9] = 0xff;
      local_a0[10] = 0xff;
      local_a0[0xb] = 0xff;
      ppuVar14 = FileTARAnalyser::vftable;
      *(undefined ***)local_a0 = FileTARAnalyser::vftable;
      local_a0[8] = 0x3f;
      local_a0[9] = 0;
      local_a0[10] = 0;
      local_a0[0xb] = 0;
      pbVar10 = local_a0;
    }
    *(byte **)(pbVar8 + 0x18) = pbVar10;
    pbVar10 = pbVar8;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  local_b0 = pbVar10;
  lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  pbVar10 = (byte *)0x38;
  pbVar11 = (byte *)FUN_1800020c0(0x38);
  pbVar8 = pbVar13;
  local_a8 = pbVar11;
  if (pbVar11 != (byte *)0x0) {
    *(undefined ***)pbVar11 = IRawFileAnalyser::vftable;
    pbVar11[8] = 0xff;
    pbVar11[9] = 0xff;
    pbVar11[10] = 0xff;
    pbVar11[0xb] = 0xff;
    *(undefined ***)pbVar11 = BruteForce::MovAnalyzer::vftable;
    pbVar10 = pbVar11 + 0x18;
    FUN_180001690(pbVar10);
    pbVar11[8] = 0x2a;
    pbVar11[9] = 0;
    pbVar11[10] = 0;
    pbVar11[0xb] = 0;
    pbVar11[0x10] = 0;
    pbVar11[0x11] = 0;
    pbVar11[0x12] = 0;
    pbVar11[0x13] = 0;
    pbVar11[0x14] = 0;
    pbVar11[0x15] = 0;
    pbVar11[0x16] = 0;
    pbVar11[0x17] = 0;
    pbVar8 = pbVar11;
  }
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 8);
  plVar16 = plVar2;
  local_b0 = pbVar8;
  lVar7 = FUN_180009f00(pbVar10,lVar1,(longlong)plVar2,&local_b0);
  uVar15 = SUB81(plVar16,0);
  if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
    std::_Xlength_error("list<T> too long");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar7;
  *plVar2 = lVar7;
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 4) {
    FUN_1800086f0((longlong)local_90,4,uVar15,&DAT_180066bec);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 4;
    uVar15 = 4;
    memmove(puVar9,&DAT_180066bec,4);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 4),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = RawFormat_xjq::HEICAnalyser::vftable;
      *(undefined ***)local_a8 = RawFormat_xjq::HEICAnalyser::vftable;
      local_a8[8] = 0x7c;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066bf4);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066bf4,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x18;
    local_a8 = (byte *)FUN_1800020c0(0x18);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = CVCFAnalyser::vftable;
      *(undefined ***)local_a8 = CVCFAnalyser::vftable;
      local_a8[8] = 0x88;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066bf8);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066bf8,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x20;
    local_a8 = (byte *)FUN_1800020c0(0x20);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = RawFormat_xjq::M1VAnalyser::vftable;
      *(undefined ***)local_a8 = RawFormat_xjq::M1VAnalyser::vftable;
      local_a8[8] = 0x7f;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x18] = 0;
      local_a8[0x19] = 0;
      local_a8[0x1a] = 0;
      local_a8[0x1b] = 0;
      local_a8[0x1c] = 0;
      local_a8[0x1d] = 0;
      local_a8[0x1e] = 0;
      local_a8[0x1f] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066bfc);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066bfc,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = RawFormat_xjq::JP2Analyser::vftable;
      *(undefined ***)local_a8 = RawFormat_xjq::JP2Analyser::vftable;
      local_a8[8] = 0x80;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 4) {
    FUN_1800086f0((longlong)local_90,4,uVar15,&DAT_180066c00);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 4;
    uVar15 = 4;
    memmove(puVar9,&DAT_180066c00,4);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 4),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = RawFormat_xjq::MOBIAnalyser::vftable;
      *(undefined ***)local_a8 = RawFormat_xjq::MOBIAnalyser::vftable;
      local_a8[8] = 0x85;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066c08);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066c08,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x18;
    local_a8 = (byte *)FUN_1800020c0(0x18);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = CPOSAnalyser::vftable;
      *(undefined ***)local_a8 = CPOSAnalyser::vftable;
      local_a8[8] = 0x8b;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066c0c);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066c0c,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x18;
    local_a8 = (byte *)FUN_1800020c0(0x18);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = COSPAnalyser::vftable;
      *(undefined ***)local_a8 = COSPAnalyser::vftable;
      local_a8[8] = 0x8f;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066c10);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066c10,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x18;
    local_a8 = (byte *)FUN_1800020c0(0x18);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = CHFPAnalyser::vftable;
      *(undefined ***)local_a8 = CHFPAnalyser::vftable;
      local_a8[8] = 0x90;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066c14);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066c14,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x20;
    local_a8 = (byte *)FUN_1800020c0(0x20);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = CHIKAnalyser::vftable;
      *(undefined ***)local_a8 = CHIKAnalyser::vftable;
      local_a8[8] = 0x92;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_a8[0x18] = 0;
      local_a8[0x19] = 0;
      local_a8[0x1a] = 0;
      local_a8[0x1b] = 0;
      local_a8[0x1c] = 0;
      local_a8[0x1d] = 0;
      local_a8[0x1e] = 0;
      local_a8[0x1f] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 2) {
    FUN_1800086f0((longlong)local_90,2,uVar15,&DAT_180066c18);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 2;
    uVar15 = 2;
    memmove(puVar9,&DAT_180066c18,2);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 2),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = C7ZIPAnalyser::vftable;
      *(undefined ***)local_a8 = C7ZIPAnalyser::vftable;
      local_a8[8] = 0x96;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066c1c);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    uVar15 = 3;
    memmove(puVar9,&DAT_180066c1c,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x18;
    local_a8 = (byte *)FUN_1800020c0(0x18);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = CGPXAnalyser::vftable;
      *(undefined ***)local_a8 = CGPXAnalyser::vftable;
      local_a8[8] = 0x97;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    plVar16 = plVar2;
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    uVar15 = SUB81(plVar16,0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  puVar12 = FUN_180010a40();
  local_a8 = local_90;
  FUN_180001780((longlong)local_90);
  puVar6 = (undefined8 *)FUN_1800016b0(local_90);
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_b8[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_b8);
  if ((ulonglong)puVar6[3] < 3) {
    FUN_1800086f0((longlong)local_90,3,uVar15,&DAT_180066c20);
  }
  else {
    puVar9 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar9 = (undefined8 *)*puVar6;
    }
    puVar6[2] = 3;
    memmove(puVar9,&DAT_180066c20,3);
    local_b8[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar9 + 3),local_b8);
  }
  cVar4 = FUN_180010f50((longlong)puVar12,(longlong *)local_90);
  if (cVar4 != '\0') {
    ppuVar14 = (undefined **)0x18;
    local_a8 = (byte *)FUN_1800020c0(0x18);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = AEPAnalyser::vftable;
      *(undefined ***)local_a8 = AEPAnalyser::vftable;
      local_a8[8] = 0x9c;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
  }
  if (param_2 == 0) {
    local_a8 = (byte *)FUN_1800020c0(0x18);
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      *(undefined ***)local_a8 = RawFormat_xjq::CommonRawAnalyser::vftable;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_a8[8] = 0xa8;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      pbVar13 = local_a8;
    }
  }
  else {
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = File3GPAnalyser::vftable;
      *(undefined ***)local_a8 = File3GPAnalyser::vftable;
      local_a8[8] = 2;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = CFileAIFAnalyzer::vftable;
      *(undefined ***)local_a8 = CFileAIFAnalyzer::vftable;
      local_a8[8] = 0x50;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
    ppuVar14 = (undefined **)0x10;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    local_b0 = pbVar13;
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      ppuVar14 = CFileAACAnalyzer::vftable;
      *(undefined ***)local_a8 = CFileAACAnalyzer::vftable;
      local_a8[8] = 0x4f;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_b0 = local_a8;
    }
    lVar1 = *param_1;
    plVar2 = *(longlong **)(lVar1 + 8);
    lVar7 = FUN_180009f00(ppuVar14,lVar1,(longlong)plVar2,&local_b0);
    if (param_1[1] == 0xaaaaaaaaaaaaaa9) {
      std::_Xlength_error("list<T> too long");
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_1[1] = param_1[1] + 1;
    *(longlong *)(lVar1 + 8) = lVar7;
    *plVar2 = lVar7;
    local_a8 = (byte *)FUN_1800020c0(0x10);
    if (local_a8 != (byte *)0x0) {
      *(undefined ***)local_a8 = IRawFileAnalyser::vftable;
      local_a8[8] = 0xff;
      local_a8[9] = 0xff;
      local_a8[10] = 0xff;
      local_a8[0xb] = 0xff;
      *(undefined ***)local_a8 = FileFCPEVENTAnalyser::vftable;
      local_a8[8] = 0x73;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      pbVar13 = local_a8;
    }
  }
  local_b0 = pbVar13;
  FUN_180006d90(param_1,&local_b0);
LAB_1800066f5:
  __security_check_cookie(local_30 ^ (ulonglong)auStack_d8);
  return;
}

