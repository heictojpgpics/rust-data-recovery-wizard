// Function: FUN_180002a50
// Address: 180002a50
// Size: 6341 bytes


void FUN_180002a50(longlong *param_1,uint **param_2)

{
  char cVar1;
  uint *puVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *local_res8;
  uint local_res10 [2];
  uint *local_res18 [2];
  
  local_res10[0] = (uint)param_2;
  local_res8 = (uint *)FUN_1800020c0(0x20);
  puVar8 = (uint *)0x0;
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180033620((undefined8 *)local_res8);
  }
  local_res10[0] = 0xe0ffd8ff;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0xe0ffd8ff) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0xe0ffd8ff < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x20);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180033620((undefined8 *)local_res8);
  }
  local_res10[0] = 0xe1ffd8ff;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0xe1ffd8ff) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0xe1ffd8ff < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x20);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180033620((undefined8 *)local_res8);
  }
  local_res10[0] = 0xdbffd8ff;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0xdbffd8ff) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0xdbffd8ff < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x20);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180033620((undefined8 *)local_res8);
  }
  local_res10[0] = 0xeeffd8ff;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0xeeffd8ff) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0xeeffd8ff < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180035e00((undefined8 *)local_res8);
  }
  local_res10[0] = 0x46445025;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0x46445025) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0x46445025 < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180037b50((undefined8 *)local_res8);
  }
  local_res10[0] = 0x2a004d4d;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0x2a004d4d) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0x2a004d4d < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180037b50((undefined8 *)local_res8);
  }
  local_res10[0] = 0x2a4949;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0x2a4949) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0x2a4949 < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180037b50((undefined8 *)local_res8);
  }
  local_res10[0] = 0x554949;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0x554949) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0x554949 < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    param_2 = local_res18;
    FUN_18000ad50(param_1,param_2,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180037b50((undefined8 *)local_res8);
  }
  local_res10[0] = 0x4f524949;
  puVar4 = (uint *)*param_1;
  cVar1 = *(char *)((longlong)*(uint **)(puVar4 + 2) + 0x19);
  puVar7 = puVar4;
  puVar6 = *(uint **)(puVar4 + 2);
  while (cVar1 == '\0') {
    if (puVar6[8] < 0x4f524949) {
      puVar5 = *(uint **)(puVar6 + 4);
      puVar6 = puVar7;
    }
    else {
      puVar5 = *(uint **)puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x19);
  }
  if ((puVar7 == puVar4) || (0x4f524949 < puVar7[8])) {
    local_res8 = local_res10;
    plVar3 = (longlong *)FUN_18000acf0(param_1,param_2,&local_res8);
    FUN_18000ad50(param_1,local_res18,(longlong *)puVar7,(uint *)(plVar3 + 4),plVar3);
    puVar7 = local_res18[0];
  }
  *(uint **)(puVar7 + 10) = puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180037b50((undefined8 *)local_res8);
  }
  local_res10[0] = 0x53524949;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180037b50((undefined8 *)local_res8);
  }
  local_res10[0] = 0x494a5546;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180037b50((undefined8 *)local_res8);
  }
  local_res10[0] = 0x524f4d4d;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_18003c9f0((undefined8 *)local_res8);
  }
  local_res10[0] = 0x1a4949;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_18003c9f0((undefined8 *)local_res8);
  }
  local_res10[0] = 0x1a4d4d;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = Brance::DMGAnalyser::vftable;
    puVar4[2] = 0x71;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileDMGAnalyser::vftable;
      local_res18[0][2] = 0x71;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x31685a42;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = Brance::X3FAnalyser::vftable;
    puVar4[2] = 0x6c;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileX3FAnalyser::vftable;
      local_res18[0][2] = 0x6c;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x62564f46;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180041580((undefined8 *)local_res8);
  }
  local_res10[0] = 0x6d783f3c;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180041580((undefined8 *)local_res8);
  }
  local_res10[0] = 0x3cbfbbef;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180041580((undefined8 *)local_res8);
  }
  local_res10[0] = 0x1cd;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_180041580((undefined8 *)local_res8);
  }
  local_res10[0] = 0x6776733c;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x20);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_18003c0c0((undefined8 *)local_res8);
  }
  local_res10[0] = 0xb3010000;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x20);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_18003c0c0((undefined8 *)local_res8);
  }
  local_res10[0] = 0xba010000;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = Brance::OGGAnalyser::vftable;
    puVar4[2] = 0x52;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = CFileOggAnalyser::vftable;
      local_res18[0][2] = 0x52;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x5367674f;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = Brance::RM_RMVBAnalyser::vftable;
    puVar4[2] = 0x5e;
    local_res18[0] = (uint *)FUN_1800020c0(0x18);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileRM_RMVBAnalyser::vftable;
      local_res18[0][2] = 0x5e;
      local_res18[0][4] = 0;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x464d522e;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = Brance::MXFAnalyser::vftable;
    local_res8[2] = 0x78;
    local_res8[4] = 0;
    local_res8[5] = 0;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x342b0e06;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = BruteForce::CAsfAnalyser::vftable;
    local_res8[2] = 6;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x75b22630;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)(local_res8 + 4) = ISpecialRawFileAnalyser::vftable;
    *(undefined ***)local_res8 = BruteForce::CDXFAnalyser::vftable;
    *(undefined ***)(local_res8 + 4) = BruteForce::CDXFAnalyser::vftable;
    local_res8[2] = 0x19;
    puVar2 = local_res8;
  }
  local_res10[0] = 0xd302020;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = BruteForce::CAPEAnalyser::vftable;
    local_res8[2] = 0x51;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x2043414d;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = BruteForce::CFH11Analyser::vftable;
    local_res8[2] = 0x1d;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x11c;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = BruteForce::CFCPEvtAnalyser::vftable;
    local_res8[2] = 0x73;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x694c5153;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = BruteForce::CEPSAnalyser::vftable;
    *(undefined1 *)(local_res8 + 4) = 0;
    local_res8[2] = 0x1b;
    puVar2 = local_res8;
  }
  local_res10[0] = 0xc6d3d0c5;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = BruteForce::CDWGAnalyser::vftable;
    local_res8[2] = 0x18;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x30314341;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = BruteForce::CGifAnalyser::vftable;
    local_res8[2] = 0x1e;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x38464947;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = RawSpeed::MIDAnalyser::vftable;
    puVar4[2] = 0x26;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileMIDAnalyser::vftable;
      local_res18[0][2] = 0x26;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x6468544d;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = RawSpeed::PNGAnalyser::vftable;
    puVar4[2] = 0x33;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FilePNGAnalyser::vftable;
      local_res18[0][2] = 0x33;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x474e5089;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FilePSDAnalyser::vftable;
    local_res8[2] = 0x36;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x53504238;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = RawSpeed::RTFAnalyser::vftable;
    puVar4[2] = 0x3c;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileRTFAnalyser::vftable;
      local_res18[0][2] = 0x3c;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x74725c7b;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = RawSpeed::PSPAnalyser::vftable;
    puVar4[2] = 0x37;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FilePSPAnalyser::vftable;
      local_res18[0][2] = 0x37;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x6e696150;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = RawSpeed::RARAnalyser::vftable;
    puVar4[2] = 0x3a;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileRARAnalyser::vftable;
      local_res18[0][2] = 0x3a;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x21726152;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = RawSpeed::SITAnalyser::vftable;
    puVar4[2] = 0x5d;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileSITAnalyser::vftable;
      local_res18[0][2] = 0x5d;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x66757453;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = RawSpeed::OneAnalyser::vftable;
    puVar4[2] = 0x31;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileONEAnalyser::vftable;
      local_res18[0][2] = 0x31;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x7b5c52e4;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = RawSpeed::WpgAnalyser::vftable;
    local_res8[2] = 0x33;
    local_res8[4] = 0;
    local_res8[5] = 0;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x677077;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = RawSpeed::DbxAnalyser::vftable;
    local_res8[2] = 0x15;
    local_res8[4] = 0;
    local_res8[5] = 0;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x36464d4a;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = RawSpeed::DbxAnalyser::vftable;
    local_res8[2] = 0x15;
    local_res8[4] = 0;
    local_res8[5] = 0;
    puVar2 = local_res8;
  }
  local_res10[0] = 0xfe12adcf;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = RawSpeed::DbxAnalyser::vftable;
    local_res8[2] = 0x15;
    local_res8[4] = 0;
    local_res8[5] = 0;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x2c3489f7;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x20);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)(local_res8 + 4) = ISpecialRawFileAnalyser::vftable;
    *(undefined ***)local_res8 = FileZIPAnalyser::vftable;
    *(undefined ***)(local_res8 + 4) = FileZIPAnalyser::vftable;
    *(undefined2 *)(local_res8 + 6) = 0;
    local_res8[2] = 0x48;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x4034b50;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileWPDAnalyser::vftable;
    local_res8[2] = 0x44;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x435057ff;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileWMFAnalyser::vftable;
    local_res8[2] = 0x46;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x90001;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileWMFAnalyser::vftable;
    local_res8[2] = 0x46;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x9ac6cdd7;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileTTFAnalyser::vftable;
    local_res8[2] = 0x41;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x100;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  puVar4 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  local_res8 = puVar4;
  if (puVar4 != (uint *)0x0) {
    *(undefined ***)puVar4 = IRawFileAnalyser::vftable;
    puVar4[2] = 0xffffffff;
    *(undefined ***)puVar4 = Brance::RIFFAnalyser::vftable;
    puVar4[2] = 0x3b;
    local_res18[0] = (uint *)FUN_1800020c0(0x10);
    if (local_res18[0] != (uint *)0x0) {
      *(undefined ***)local_res18[0] = IRawFileAnalyser::vftable;
      local_res18[0][2] = 0xffffffff;
      *(undefined ***)local_res18[0] = FileRIFFAnalyser::vftable;
      local_res18[0][2] = 0x3b;
      puVar2 = local_res18[0];
    }
    *(uint **)(puVar4 + 4) = puVar2;
    puVar2 = puVar4;
  }
  local_res10[0] = 0x46464952;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FilePSTAnalyser::vftable;
    local_res8[2] = 0x38;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x4e444221;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileOLEAnalyser::vftable;
    local_res8[2] = 0x30;
    local_res8[4] = 1;
    puVar2 = local_res8;
  }
  local_res10[0] = 0xe011cfd0;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileLowDocAnalyser::vftable;
    local_res8[2] = 0x17;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x2da5db;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileLowDocAnalyser::vftable;
    local_res8[2] = 0x17;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x2ea694;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileICOAnalyser::vftable;
    local_res8[2] = 0x22;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x10000;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileICOAnalyser::vftable;
    local_res8[2] = 0x22;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x20000;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileHLPAnalyser::vftable;
    local_res8[2] = 0x20;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x35f3f;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = CFileAIFAnalyzer::vftable;
    local_res8[2] = 0x50;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x4d524f46;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_1800132c0((undefined8 *)local_res8);
  }
  local_res10[0] = 0x37545043;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_1800132c0((undefined8 *)local_res8);
  }
  local_res10[0] = 0x38545043;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x18);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    puVar2 = (uint *)FUN_1800132c0((undefined8 *)local_res8);
  }
  local_res10[0] = 0x39545043;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileCABAnalyser::vftable;
    local_res8[2] = 0xc;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x4643534d;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileCABAnalyser::vftable;
    local_res8[2] = 0xc;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x6663736d;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileAUAnalyser::vftable;
    local_res8[2] = 9;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x646e732e;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileMKVAnalyser::vftable;
    local_res8[2] = 0x60;
    puVar2 = local_res8;
  }
  local_res10[0] = 0xa3df451a;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  puVar2 = puVar8;
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileCHMAnalyser::vftable;
    local_res8[2] = 0xe;
    puVar2 = local_res8;
  }
  local_res10[0] = 0x46535449;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar2;
  local_res8 = (uint *)FUN_1800020c0(0x10);
  if (local_res8 != (uint *)0x0) {
    *(undefined ***)local_res8 = IRawFileAnalyser::vftable;
    local_res8[2] = 0xffffffff;
    *(undefined ***)local_res8 = FileMRWAnalyser::vftable;
    local_res8[2] = 0x66;
    puVar8 = local_res8;
  }
  local_res10[0] = 0x4d524d00;
  plVar3 = FUN_180006c80(param_1,local_res10);
  *plVar3 = (longlong)puVar8;
  return;
}

