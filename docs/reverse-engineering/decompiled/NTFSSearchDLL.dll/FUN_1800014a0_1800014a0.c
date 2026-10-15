// Function: FUN_1800014a0
// Address: 1800014a0
// Size: 418 bytes


undefined8 * FUN_1800014a0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_18002be40(0x4e0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0xe;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0xd] = 0;
    *puVar1 = IQuickFileSystemSearchController::vftable;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    puVar3 = puVar1 + 0x11;
    FUN_180015eb0(puVar3);
    *puVar1 = CNTFSQuickSearch::vftable;
    puVar1[0x11] = CNTFSQuickSearch::vftable;
    puVar1[0x82] = 0;
    puVar1[0x83] = 0;
    puVar1[0x84] = 0;
    *(undefined4 *)(puVar1 + 0x85) = 0xe;
    puVar1[0x86] = 0;
    puVar1[0x87] = 0;
    puVar1[0x8a] = 0;
    puVar1[0x8b] = 0xf;
    *(undefined1 *)(puVar1 + 0x88) = 0;
    puVar1[0x8c] = 0;
    puVar1[0x8d] = 0;
    puVar1[0x8e] = 0;
    puVar1[0x8f] = 0xffffffffffffffff;
    *(undefined2 *)(puVar1 + 0x90) = 0x2a;
    *(undefined4 *)((longlong)puVar1 + 0x484) = 0;
    *(undefined1 *)(puVar1 + 0x91) = 0;
    puVar1[0x94] = 0;
    puVar1[0x95] = 0xf;
    *(undefined1 *)(puVar1 + 0x92) = 0;
    puVar1[0x96] = 0;
    puVar1[0x97] = 0;
    *(undefined1 *)(puVar1 + 0x98) = 0;
    puVar1[0x99] = 0;
    puVar1[0x9a] = 0;
    puVar1[0x9b] = 0;
    uVar2 = FUN_180002900(puVar3,(longlong *)0x0,(longlong *)0x0);
    puVar1[0x9a] = uVar2;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2e1) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

