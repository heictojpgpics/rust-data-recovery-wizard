// Function: FUN_18002b3d0
// Address: 18002b3d0
// Size: 106 bytes


longlong FUN_18002b3d0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_180021630(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  puVar3 = (undefined8 *)FUN_180001100(param_1,lVar2 + 0x20);
  puVar4 = (undefined8 *)FUN_180002680(param_2);
  *puVar3 = *puVar4;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar3[1] = *(undefined8 *)(param_2 + 8);
  puVar3[2] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puVar3[3] = *(undefined8 *)(param_2 + 0x18);
  puVar3[4] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  puVar3[5] = *(undefined8 *)(param_2 + 0x28);
  puVar3[6] = uVar1;
  puVar3[7] = *(undefined8 *)(param_2 + 0x38);
  return lVar2;
}

