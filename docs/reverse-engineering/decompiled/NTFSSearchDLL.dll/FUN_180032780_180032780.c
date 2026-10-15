// Function: FUN_180032780
// Address: 180032780
// Size: 552 bytes


undefined8 *
FUN_180032780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  
  puVar6 = (undefined8 *)FUN_18002be40(0x290);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6 = FUN_180031b10(puVar6);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[0xb] = *(undefined8 *)(param_1 + 0x58);
      plVar7 = FUN_1800329b0(param_1);
      puVar6[6] = plVar7;
      lVar11 = 2;
      puVar6[10] = *(undefined8 *)(param_1 + 0x50);
      puVar6[9] = *(undefined8 *)(param_1 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      puVar6[0x13] = *(undefined8 *)(param_1 + 0x98);
      puVar6[0x14] = uVar5;
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      puVar6[0x15] = *(undefined8 *)(param_1 + 0xa8);
      puVar6[0x16] = uVar5;
      puVar6[0x17] = *(undefined8 *)(param_1 + 0xb8);
      puVar8 = (undefined8 *)(param_1 + 0xc0);
      puVar10 = puVar6 + 0x18;
      do {
        puVar1 = puVar10 + 0x10;
        uVar5 = puVar8[1];
        puVar2 = puVar8 + 0x10;
        *puVar10 = *puVar8;
        puVar10[1] = uVar5;
        uVar5 = puVar8[3];
        puVar10[2] = puVar8[2];
        puVar10[3] = uVar5;
        uVar5 = puVar8[5];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar5;
        uVar5 = puVar8[7];
        puVar10[6] = puVar8[6];
        puVar10[7] = uVar5;
        uVar5 = puVar8[9];
        puVar10[8] = puVar8[8];
        puVar10[9] = uVar5;
        uVar5 = puVar8[0xb];
        puVar10[10] = puVar8[10];
        puVar10[0xb] = uVar5;
        uVar5 = puVar8[0xd];
        puVar10[0xc] = puVar8[0xc];
        puVar10[0xd] = uVar5;
        uVar5 = puVar8[0xf];
        puVar10[0xe] = puVar8[0xe];
        puVar10[0xf] = uVar5;
        lVar11 = lVar11 + -1;
        puVar8 = puVar2;
        puVar10 = puVar1;
      } while (lVar11 != 0);
      *puVar1 = *puVar2;
      puVar6[0x39] = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined4 *)(puVar6 + 0x3a) = *(undefined4 *)(param_1 + 0x1d0);
      *(undefined4 *)((longlong)puVar6 + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
      iVar4 = *(int *)(param_1 + 0x1e0);
      *(int *)(puVar6 + 0x3c) = iVar4;
      if (iVar4 != 0) {
        pcVar9 = (char *)FUN_18002be40((ulonglong)(*(int *)(param_1 + 0x1e0) + 1));
        puVar6[0x3b] = pcVar9;
        pcVar12 = *(char **)(param_1 + 0x1d8);
        do {
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar9 = cVar3;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
      }
      if (puVar6 + 0x42 != (ulonglong *)(param_1 + 0x210)) {
        FUN_1800333f0(puVar6 + 0x42,*(void **)(param_1 + 0x210),*(longlong *)(param_1 + 0x218),
                      param_4);
      }
      *(undefined4 *)(puVar6 + 0x3f) = *(undefined4 *)(param_1 + 0x1f8);
      *(undefined4 *)((longlong)puVar6 + 500) = *(undefined4 *)(param_1 + 500);
      *(undefined4 *)(puVar6 + 0x3e) = *(undefined4 *)(param_1 + 0x1f0);
      *(undefined4 *)((longlong)puVar6 + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
      *(undefined4 *)(puVar6 + 0x3d) = *(undefined4 *)(param_1 + 0x1e8);
      *(undefined4 *)((longlong)puVar6 + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
      puVar6[0x40] = *(undefined8 *)(param_1 + 0x200);
      puVar6[0x41] = *(undefined8 *)(param_1 + 0x208);
      puVar6[0x50] = param_1;
      *(undefined1 *)(puVar6 + 0x51) = *(undefined1 *)(param_1 + 0x288);
      *(byte *)((longlong)puVar6 + 0x72) =
           (*(byte *)(param_1 + 0x72) ^ *(byte *)((longlong)puVar6 + 0x72)) & 0x7f ^
           *(byte *)(param_1 + 0x72);
      *(undefined1 *)((longlong)puVar6 + 0x289) = *(undefined1 *)(param_1 + 0x289);
    }
    return puVar6;
  }
  return (undefined8 *)0x0;
}

