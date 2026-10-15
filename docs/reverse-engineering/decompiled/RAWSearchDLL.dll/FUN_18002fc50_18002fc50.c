// Function: FUN_18002fc50
// Address: 18002fc50
// Size: 398 bytes


void FUN_18002fc50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *_Memory;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_558 [32];
  int local_538;
  int local_534;
  int local_530;
  undefined1 *local_528;
  undefined1 *local_520;
  undefined1 *local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_3f8 [992];
  ulonglong local_18;
  
  local_510 = 0xfffffffffffffffe;
  local_18 = DAT_18008f028 ^ (ulonglong)auStack_558;
  local_538 = 0;
  while( true ) {
    if (0x3d7 < local_538) break;
    local_3f8[local_538] = *(undefined1 *)((longlong)local_538 + 0x128 + param_1);
    local_538 = local_538 + 1;
  }
  local_528 = local_3f8;
  puVar10 = local_3f8;
  local_518 = puVar10;
  _Memory = (undefined1 *)malloc(0x2cd);
  puVar7 = _Memory;
  local_520 = _Memory;
  for (local_530 = 0; local_530 < 3; local_530 = local_530 + 1) {
    puVar9 = puVar10;
    for (local_534 = 0; local_534 < 0xef; local_534 = local_534 + 1) {
      *puVar7 = *puVar9;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 3;
      local_520 = puVar7;
    }
    puVar10 = puVar10 + 1;
    local_528 = puVar10;
    local_518 = puVar10;
  }
  if (*(int *)(_Memory + 0x18) < 1) {
    lVar11 = 2;
    puVar4 = (undefined8 *)(_Memory + 0x20);
    puVar5 = &local_508;
    do {
      puVar8 = puVar5;
      puVar6 = puVar4;
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar8 = *puVar6;
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      uVar1 = puVar6[5];
      uVar2 = puVar6[6];
      uVar3 = puVar6[7];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar1;
      puVar8[6] = uVar2;
      puVar8[7] = uVar3;
      uVar1 = puVar6[9];
      uVar2 = puVar6[10];
      uVar3 = puVar6[0xb];
      puVar8[8] = puVar6[8];
      puVar8[9] = uVar1;
      puVar8[10] = uVar2;
      puVar8[0xb] = uVar3;
      uVar1 = puVar6[0xd];
      puVar8[0xc] = puVar6[0xc];
      puVar8[0xd] = uVar1;
      uVar1 = puVar6[0xf];
      puVar8[0xe] = puVar6[0xe];
      puVar8[0xf] = uVar1;
      lVar11 = lVar11 + -1;
      puVar4 = puVar6 + 0x10;
      puVar5 = puVar8 + 0x10;
    } while (lVar11 != 0);
    uVar1 = puVar6[0x11];
    puVar8[0x10] = puVar6[0x10];
    puVar8[0x11] = uVar1;
  }
  else {
    FUN_18002ef50(&local_508,puVar7,_Memory + 0x20);
  }
  free(_Memory);
  *(undefined8 *)(param_1 + 0x10) = uStack_500;
  __security_check_cookie(local_18 ^ (ulonglong)auStack_558);
  return;
}

