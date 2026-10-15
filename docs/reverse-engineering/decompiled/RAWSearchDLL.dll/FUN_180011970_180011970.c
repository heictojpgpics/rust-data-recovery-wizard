// Function: FUN_180011970
// Address: 180011970
// Size: 145 bytes


longlong FUN_180011970(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  lVar4 = FUN_180011ce0(param_1);
  *(undefined2 *)(lVar4 + 0x18) = 0;
  local_res20 = lVar4;
  lVar5 = FUN_1800012e0(param_1,lVar4 + 0x20);
  FUN_180001780(lVar5);
  puVar6 = (undefined8 *)FUN_1800016b0(param_2);
  puVar7 = (undefined8 *)FUN_1800016b0(lVar5);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *puVar7 = *puVar6;
  puVar7[1] = uVar1;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_res18[0] = 0;
  FUN_180001300((undefined1 *)puVar6,local_res18);
  *(undefined1 *)(lVar5 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return lVar4;
}

