// Function: FUN_180020fd0
// Address: 180020fd0
// Size: 161 bytes


longlong FUN_180020fd0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong local_res20;
  
  local_res20 = param_4;
  lVar1 = FUN_180021590(param_1);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  lVar2 = FUN_180001100(param_1,lVar1 + 0x20);
  uVar5 = *param_3;
  FUN_1800026a0(lVar2);
  puVar3 = (undefined8 *)FUN_180002680(uVar5);
  puVar4 = (undefined8 *)FUN_180002680(lVar2);
  uVar5 = puVar3[1];
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  uVar5 = puVar3[3];
  puVar4[2] = puVar3[2];
  puVar4[3] = uVar5;
  uVar5 = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  local_res20 = local_res20 & 0xffffffffffffff00;
  FUN_180001150((undefined1 *)puVar3,(undefined1 *)&local_res20);
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  return lVar1;
}

