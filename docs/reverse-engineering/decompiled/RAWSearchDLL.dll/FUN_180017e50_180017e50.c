// Function: FUN_180017e50
// Address: 180017e50
// Size: 233 bytes


undefined8 * FUN_180017e50(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x266);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18000b520(puVar1);
    *puVar1 = FileZIPAnalyser::ZIPRawFileInfo::vftable;
    *(undefined2 *)(puVar1 + 0x22) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x112) = 1;
    uVar2 = 0;
    *(undefined8 *)((longlong)puVar1 + 0x113) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x11b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x123) = 0;
    *(undefined8 *)((longlong)puVar1 + 299) = 200000000;
    FUN_180017fa0((undefined1 *)((longlong)puVar1 + 0x151));
    *(int *)((longlong)puVar1 + 0x252) = (int)uVar2;
    *(undefined4 *)((longlong)puVar1 + 0x262) = 1;
    *(undefined8 *)((longlong)puVar1 + 0x133) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x13b) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x143) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x14f) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x256) = 0x48;
    *(undefined4 *)(puVar1 + 3) = 0x48;
    *(undefined8 *)((longlong)puVar1 + 0x25a) = uVar2;
    *(undefined1 *)((longlong)puVar1 + 0x251) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}

