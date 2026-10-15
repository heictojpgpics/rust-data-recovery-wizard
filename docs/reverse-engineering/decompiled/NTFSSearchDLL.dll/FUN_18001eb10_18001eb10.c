// Function: FUN_18001eb10
// Address: 18001eb10
// Size: 340 bytes


void FUN_18001eb10(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_158 [32];
  char local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_180086010 ^ (ulonglong)auStack_158;
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  plVar8 = *(longlong **)(param_2 + 0x20);
  cVar2 = *(char *)((longlong)puVar4[1] + 0x19);
  puVar10 = puVar4;
  puVar9 = (undefined8 *)puVar4[1];
  while (cVar2 == '\0') {
    if ((longlong)puVar9[4] < plVar8[0xb]) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar6;
    cVar2 = *(char *)((longlong)puVar6 + 0x19);
  }
  if ((puVar10 == puVar4) || (plVar8[0xb] < (longlong)puVar10[4])) {
    puVar10 = puVar4;
  }
  if (puVar10 != puVar4) {
    memset(local_138,0,0x104);
    if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
      uVar3 = (uint)*(ushort *)((longlong)plVar8 + 0x19);
    }
    else {
      uVar3 = (**(code **)*plVar8)(plVar8);
      plVar8 = *(longlong **)(param_2 + 0x20);
    }
    if (0x103 < (int)uVar3) {
      uVar3 = 0x103;
    }
    if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
      pcVar7 = *(char **)((longlong)plVar8 + 0x11);
    }
    else {
      pcVar7 = (char *)(*(code *)((undefined **)*plVar8)[2])(plVar8);
    }
    strncpy(local_138,pcVar7,(longlong)(int)uVar3);
    puVar4 = FUN_1800025e0(puVar10 + 5);
    pcVar7 = local_138;
    lVar5 = (longlong)puVar4 - (longlong)pcVar7;
    do {
      pcVar1 = pcVar7 + lVar5;
      if (*pcVar7 != *pcVar1) break;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
  }
  __security_check_cookie(local_28 ^ (ulonglong)auStack_158);
  return;
}

