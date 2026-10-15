// Function: FUN_180035ef0
// Address: 180035ef0
// Size: 405 bytes


void FUN_180035ef0(undefined8 param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  longlong lVar9;
  size_t _MaxCount;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined1 local_263;
  undefined4 local_260;
  undefined2 local_25c;
  undefined1 local_25a;
  undefined8 local_258;
  undefined2 local_250;
  undefined1 local_24e;
  char local_248 [8];
  char acStack_240 [8];
  char local_238 [16];
  char local_228 [512];
  undefined1 local_28;
  ulonglong local_18;
  size_t sVar10;
  
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_288;
  local_28 = 0;
  lVar9 = 4;
  piVar7 = param_2;
  pcVar8 = local_228;
  do {
    uVar3 = *(undefined8 *)(piVar7 + 2);
    uVar4 = *(undefined8 *)(piVar7 + 4);
    uVar5 = *(undefined8 *)(piVar7 + 6);
    uVar1 = *(undefined8 *)(piVar7 + 0x1c);
    uVar2 = *(undefined8 *)(piVar7 + 0x1e);
    *(undefined8 *)pcVar8 = *(undefined8 *)piVar7;
    *(undefined8 *)(pcVar8 + 8) = uVar3;
    *(undefined8 *)(pcVar8 + 0x10) = uVar4;
    *(undefined8 *)(pcVar8 + 0x18) = uVar5;
    uVar3 = *(undefined8 *)(piVar7 + 10);
    uVar4 = *(undefined8 *)(piVar7 + 0xc);
    uVar5 = *(undefined8 *)(piVar7 + 0xe);
    *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)(piVar7 + 8);
    *(undefined8 *)(pcVar8 + 0x28) = uVar3;
    *(undefined8 *)(pcVar8 + 0x30) = uVar4;
    *(undefined8 *)(pcVar8 + 0x38) = uVar5;
    uVar3 = *(undefined8 *)(piVar7 + 0x12);
    uVar4 = *(undefined8 *)(piVar7 + 0x14);
    uVar5 = *(undefined8 *)(piVar7 + 0x16);
    *(undefined8 *)(pcVar8 + 0x40) = *(undefined8 *)(piVar7 + 0x10);
    *(undefined8 *)(pcVar8 + 0x48) = uVar3;
    *(undefined8 *)(pcVar8 + 0x50) = uVar4;
    *(undefined8 *)(pcVar8 + 0x58) = uVar5;
    uVar3 = *(undefined8 *)(piVar7 + 0x1a);
    *(undefined8 *)(pcVar8 + 0x60) = *(undefined8 *)(piVar7 + 0x18);
    *(undefined8 *)(pcVar8 + 0x68) = uVar3;
    *(undefined8 *)(pcVar8 + 0x70) = uVar1;
    *(undefined8 *)(pcVar8 + 0x78) = uVar2;
    lVar9 = lVar9 + -1;
    piVar7 = piVar7 + 0x20;
    pcVar8 = pcVar8 + 0x80;
  } while (lVar9 != 0);
  local_250 = DAT_18006c138;
  local_24e = DAT_18006c13a;
  local_238._0_2_ = s_Adobe_Illustrator_18006c158._16_2_;
  local_260 = DAT_18006c150;
  local_25c = DAT_18006c154;
  local_25a = DAT_18006c156;
  local_258 = DAT_18006c130;
  local_268 = 0x46445025;
  local_263 = 0;
  local_248 = (char  [8])s_Adobe_Illustrator_18006c158._0_8_;
  acStack_240 = (char  [8])s_Adobe_Illustrator_18006c158._8_8_;
  if ((*param_2 == 0x46445025) && ((char)param_2[1] == '-')) {
    *(undefined4 *)(param_3 + 0x18) = 0x32;
  }
  else {
    sVar10 = 0xffffffffffffffff;
    do {
      _MaxCount = sVar10 + 1;
      lVar9 = sVar10 + 1;
      sVar10 = _MaxCount;
    } while (*(char *)((longlong)&local_258 + lVar9) != '\0');
    iVar6 = strncmp((char *)param_2,(char *)&local_258,_MaxCount);
    if (((iVar6 == 0) && (pcVar8 = strstr(local_228,(char *)&local_260), pcVar8 == (char *)0x0)) &&
       (pcVar8 = strstr(local_228,local_248), pcVar8 != (char *)0x0)) {
      *(undefined4 *)(param_3 + 0x18) = 5;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_288);
  return;
}

