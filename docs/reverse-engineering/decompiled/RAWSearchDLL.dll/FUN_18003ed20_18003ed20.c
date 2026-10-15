// Function: FUN_18003ed20
// Address: 18003ed20
// Size: 227 bytes


undefined8 * FUN_18003ed20(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x168);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = Brance::MXFAnalyser::MXFRawFileInfo::vftable;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    lVar2 = FUN_180007710();
    puVar1[0x28] = lVar2;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x23) = 0;
    puVar1[0x24] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0x100000000;
    *(undefined4 *)(puVar1 + 0x2c) = 0x200;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    puVar1[0x26] = 0;
    *(undefined4 *)(puVar1 + 3) = 0x78;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

