// Function: FUN_18004e4c0
// Address: 18004e4c0
// Size: 306 bytes


void FUN_18004e4c0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  puVar6 = (undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  puVar3 = (undefined8 *)FUN_1800016b0(puVar6);
  puVar5 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    puVar5 = (undefined8 *)*puVar3;
  }
  puVar3[2] = 0;
  local_res8[0] = 0;
  FUN_180001300((undefined1 *)puVar5,local_res8);
  puVar5 = (undefined8 *)(param_1 + 0x78);
  if (puVar5 != puVar6) {
    puVar1 = puVar6 + 2;
    if (0xf < (ulonglong)puVar6[3]) {
      puVar6 = (undefined8 *)*puVar6;
    }
    FUN_1800071e0((longlong)puVar5,puVar6,*puVar1);
  }
  if ((undefined8 *)(param_1 + 0x58) != puVar5) {
    if (0xf < *(ulonglong *)(param_1 + 0x90)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_1800071e0(param_1 + 0x58,puVar5,*(ulonglong *)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  DAT_1800936c0 = 1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  memset((void *)(param_1 + 0xf0),0,0x80);
  puVar4 = FUN_180001350();
  lVar2 = *(longlong *)(puVar4 + 0x70);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(longlong *)(param_1 + 0xe8) = lVar2 * 6;
  return;
}

