// Function: FUN_180024ea0
// Address: 180024ea0
// Size: 189 bytes


longlong FUN_180024ea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  lVar2 = FUN_180025940(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  local_res20 = lVar2;
  puVar3 = (undefined8 *)FUN_180001100(param_1,lVar2 + 0x20);
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[4] = param_2[4];
  puVar3 = puVar3 + 5;
  FUN_1800026a0((longlong)puVar3);
  puVar4 = (undefined8 *)FUN_180002680(param_2 + 5);
  puVar3 = (undefined8 *)FUN_180002680(puVar3);
  uVar1 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = uVar1;
  uVar1 = puVar4[3];
  puVar3[2] = puVar4[2];
  puVar3[3] = uVar1;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  local_res18[0] = 0;
  FUN_180001150((undefined1 *)puVar4,local_res18);
  return lVar2;
}

