// Function: FUN_180032c50
// Address: 180032c50
// Size: 200 bytes


undefined8 * FUN_180032c50(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    puVar3 = (undefined8 *)FUN_1800020c0(0x110);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3 = FUN_18000b520(puVar3);
    }
    return puVar3;
  }
  puVar2 = FUN_180001350();
  lVar1 = *(longlong *)(puVar2 + 0x70);
  puVar3 = (undefined8 *)FUN_1800020c0(0x180);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_18000b520(puVar3);
    *puVar3 = CZeroEndRawFileInfo::vftable;
    puVar3[0x22] = lVar1 * 100;
    *(undefined4 *)(puVar3 + 0x23) = 1;
    puVar3[0x24] = 0;
    *(undefined2 *)(puVar3 + 0x2f) = 0;
    memset(puVar3 + 0x25,0,0x50);
  }
  *(undefined4 *)(puVar3 + 3) = 0x1b;
  return puVar3;
}

