// Function: FUN_1800110d0
// Address: 1800110d0
// Size: 516 bytes


void FUN_1800110d0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  undefined8 *****_Buf2;
  undefined1 uVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78 [4];
  undefined8 ****local_58 [2];
  size_t local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong uVar8;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_18008f028 ^ (ulonglong)auStackY_b8;
  local_84 = 0;
  puVar5 = param_2;
  puVar4 = FUN_180001690((undefined1 *)local_78);
  local_84 = 1;
  FUN_180011560((longlong)local_78,puVar5[2] + 1);
  puVar5 = (undefined8 *)FUN_1800016b0(local_78);
  uVar1 = puVar5[2];
  uVar8 = puVar5[3];
  if (uVar8 == uVar1) {
    FUN_1800088a0((longlong)local_78,1,(char)uVar8,&DAT_1800670fc,1);
    uVar7 = (undefined1)uVar8;
  }
  else {
    puVar5[2] = uVar1 + 1;
    puVar6 = puVar5;
    if (0xf < uVar8) {
      puVar6 = (undefined8 *)*puVar5;
    }
    uVar7 = 1;
    memmove((void *)((longlong)puVar6 + uVar1),&DAT_1800670fc,1);
    local_88[0] = 0;
    FUN_180001300((undefined1 *)((longlong)((longlong)puVar6 + uVar1) + 1),local_88);
  }
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  lVar2 = puVar5[2];
  if ((ulonglong)(puVar5[3] - lVar2) < uVar1) {
    FUN_1800088a0((longlong)local_78,uVar1,uVar7,param_2,uVar1);
  }
  else {
    puVar5[2] = uVar1 + lVar2;
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    memmove((void *)((longlong)puVar5 + lVar2),param_2,uVar1);
    local_88[0] = 0;
    FUN_180001300((undefined1 *)((longlong)puVar5 + lVar2 + uVar1),local_88);
  }
  FUN_180009c50((longlong)local_58,(longlong)puVar4,&DAT_1800670fc);
  local_84 = 0;
  FUN_180001630(local_78);
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  for (puVar6 = *(undefined8 **)(param_1 + 0x18); puVar6 != puVar5; puVar6 = puVar6 + 4) {
    _Buf2 = local_58;
    if (0xf < local_40) {
      _Buf2 = (undefined8 *****)local_58[0];
    }
    _Buf1 = puVar6;
    if (0xf < (ulonglong)puVar6[3]) {
      _Buf1 = (undefined8 *)*puVar6;
    }
    if ((puVar6[2] == local_48) && (iVar3 = memcmp(_Buf1,_Buf2,puVar6[2]), iVar3 == 0)) break;
  }
  FUN_180001630((longlong *)local_58);
  __security_check_cookie(local_38 ^ (ulonglong)auStackY_b8);
  return;
}

