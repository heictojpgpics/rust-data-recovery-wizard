// Function: FUN_180029b20
// Address: 180029b20
// Size: 365 bytes


/* WARNING: Removing unreachable block (ram,0x000180029b79) */

void FUN_180029b20(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulonglong _Size;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 auStack_288 [32];
  undefined1 local_268 [8];
  undefined8 local_260;
  undefined1 *local_258;
  undefined1 local_250 [32];
  longlong *local_230;
  char local_228 [528];
  ulonglong local_18;
  ulonglong uVar6;
  
  local_260 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_288;
  iVar1 = *(int *)(param_1 + 0x18);
  local_230 = param_2;
  if (iVar1 == 0x17) {
    uVar5 = 3;
  }
  else if (iVar1 == 0x34) {
    uVar5 = 5;
  }
  else {
    if (iVar1 != 0x47) goto LAB_180029c60;
    uVar5 = 4;
  }
  local_258 = local_250;
  plVar3 = (longlong *)FUN_180007060((longlong)local_250,param_2);
  FUN_180017550(param_1,uVar5,plVar3);
  memset(local_228,0,0x208);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x20);
    puVar4 = puVar7;
    if (0xf < *(ulonglong *)(param_1 + 0x38)) {
      puVar4 = (undefined8 *)*puVar7;
    }
    uVar8 = 0x94;
    snprintf(local_228,0x208,&DAT_18006b794,puVar4);
    uVar6 = 0xffffffffffffffff;
    do {
      _Size = uVar6 + 1;
      lVar2 = uVar6 + 1;
      uVar6 = _Size;
    } while (local_228[lVar2] != '\0');
    puVar4 = (undefined8 *)FUN_1800016b0(puVar7);
    if ((ulonglong)puVar4[3] < _Size) {
      FUN_1800086f0((longlong)puVar7,_Size,uVar8,local_228);
    }
    else {
      puVar7 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar7 = (undefined8 *)*puVar4;
      }
      puVar4[2] = _Size;
      memmove(puVar7,local_228,_Size);
      local_268[0] = 0;
      FUN_180001300((undefined1 *)((longlong)puVar7 + _Size),local_268);
    }
  }
LAB_180029c60:
  FUN_180001630(param_2);
  __security_check_cookie(local_18 ^ (ulonglong)auStack_288);
  return;
}

