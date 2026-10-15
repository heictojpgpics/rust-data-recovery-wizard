// Function: FUN_18003cbf0
// Address: 18003cbf0
// Size: 171 bytes


undefined8 * FUN_18003cbf0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::CRWAnalyser::CRWRawFileInfo::vftable;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    lVar2 = FUN_18003ab90();
    puVar1[0x25] = lVar2;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    lVar2 = FUN_180007710();
    puVar1[0x27] = lVar2;
    FUN_18003ce20((longlong)puVar1);
    *(undefined4 *)(puVar1 + 3) = 0x12;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

