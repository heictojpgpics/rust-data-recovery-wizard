// Function: FUN_18002b540
// Address: 18002b540
// Size: 521 bytes


void FUN_18002b540(undefined8 param_1,longlong param_2,__time64_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  tm *ptVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong _Size;
  undefined1 uVar15;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  int local_108;
  int local_100;
  undefined1 local_f8 [4];
  undefined4 local_f4;
  __time64_t local_f0 [2];
  longlong local_e0;
  longlong local_d8 [4];
  char local_b8 [112];
  ulonglong local_48;
  ulonglong uVar14;
  
  local_f0[1] = 0xfffffffffffffffe;
  local_48 = DAT_18008f028 ^ (ulonglong)auStack_138;
  local_f4 = 0;
  local_f0[0] = param_3;
  local_e0 = param_2;
  ptVar11 = _localtime64(local_f0);
  if (ptVar11 == (tm *)0x0) {
    FUN_180001780(param_2);
    puVar12 = (undefined8 *)FUN_1800016b0(param_2);
    puVar12[3] = 0xf;
    local_f8[0] = 0;
    FUN_180001300((undefined1 *)puVar12,local_f8);
    puVar13 = puVar12;
    if (0xf < (ulonglong)puVar12[3]) {
      puVar13 = (undefined8 *)*puVar12;
    }
    puVar12[2] = 0;
    local_f8[0] = 0;
    FUN_180001300((undefined1 *)puVar13,local_f8);
    local_f4 = 1;
  }
  else {
    iVar1 = ptVar11->tm_year;
    iVar2 = ptVar11->tm_mon;
    iVar3 = ptVar11->tm_mday;
    iVar4 = ptVar11->tm_hour;
    iVar5 = ptVar11->tm_min;
    iVar6 = ptVar11->tm_sec;
    memset(local_b8,0,100);
    uVar14 = (ulonglong)(iVar1 + 0x72a);
    local_118 = iVar3;
    local_110 = iVar4;
    local_108 = iVar5;
    local_100 = iVar6;
    FUN_18000b460(local_b8,"%04d:%02d:%02d %02d:%02d:%02d",uVar14,(ulonglong)(iVar2 + 1));
    uVar15 = (undefined1)uVar14;
    FUN_180001780((longlong)local_d8);
    puVar13 = (undefined8 *)FUN_1800016b0(local_d8);
    puVar13[2] = 0;
    puVar13[3] = 0xf;
    local_f8[0] = 0;
    FUN_180001300((undefined1 *)puVar13,local_f8);
    uVar14 = 0xffffffffffffffff;
    do {
      _Size = uVar14 + 1;
      lVar10 = uVar14 + 1;
      uVar14 = _Size;
    } while (local_b8[lVar10] != '\0');
    if ((ulonglong)puVar13[3] < _Size) {
      FUN_1800086f0((longlong)local_d8,_Size,uVar15,local_b8);
    }
    else {
      puVar12 = puVar13;
      if (0xf < (ulonglong)puVar13[3]) {
        puVar12 = (undefined8 *)*puVar13;
      }
      puVar13[2] = _Size;
      memmove(puVar12,local_b8,_Size);
      local_f8[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar12 + _Size),local_f8);
    }
    FUN_180001780(param_2);
    puVar12 = (undefined8 *)FUN_1800016b0(param_2);
    uVar7 = puVar13[1];
    uVar8 = puVar13[2];
    uVar9 = puVar13[3];
    *puVar12 = *puVar13;
    puVar12[1] = uVar7;
    puVar12[2] = uVar8;
    puVar12[3] = uVar9;
    puVar13[2] = 0;
    puVar13[3] = 0xf;
    local_f8[0] = 0;
    FUN_180001300((undefined1 *)puVar13,local_f8);
    local_f4 = 1;
    FUN_180001630(local_d8);
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_138);
  return;
}

