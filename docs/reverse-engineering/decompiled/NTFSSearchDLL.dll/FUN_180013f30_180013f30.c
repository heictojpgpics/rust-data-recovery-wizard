// Function: FUN_180013f30
// Address: 180013f30
// Size: 255 bytes


longlong FUN_180013f30(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  lVar1 = FUN_180002900(param_1,param_2,param_3);
  lVar4 = lVar1 + 0x10;
  uVar2 = FUN_180002680(lVar4);
  puVar3 = (undefined4 *)FUN_180001100(lVar4,uVar2);
  *puVar3 = *param_4;
  *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_4 + 4);
  FUN_180011a30((longlong)(puVar3 + 6),param_4 + 6);
  puVar3[0xe] = param_4[0xe];
  puVar3[0xf] = param_4[0xf];
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)(param_4 + 0x12);
  *(undefined8 *)(puVar3 + 0x14) = *(undefined8 *)(param_4 + 0x14);
  *(undefined1 *)(puVar3 + 0x16) = *(undefined1 *)(param_4 + 0x16);
  *(undefined1 *)((longlong)puVar3 + 0x59) = *(undefined1 *)((longlong)param_4 + 0x59);
  puVar3[0x17] = param_4[0x17];
  *(undefined1 *)(puVar3 + 0x18) = *(undefined1 *)(param_4 + 0x18);
  FUN_180011a30((longlong)(puVar3 + 0x1a),param_4 + 0x1a);
  *(undefined8 *)(puVar3 + 0x22) = *(undefined8 *)(param_4 + 0x22);
  *(undefined8 *)(puVar3 + 0x24) = *(undefined8 *)(param_4 + 0x24);
  *(undefined1 *)(puVar3 + 0x26) = *(undefined1 *)(param_4 + 0x26);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(param_4 + 0x28);
  return lVar1;
}

