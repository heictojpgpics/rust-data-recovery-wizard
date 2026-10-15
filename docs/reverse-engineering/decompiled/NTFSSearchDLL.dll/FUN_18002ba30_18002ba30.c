// Function: FUN_18002ba30
// Address: 18002ba30
// Size: 79 bytes


longlong FUN_18002ba30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_180021590(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  puVar3 = (undefined8 *)FUN_180001100(lVar2,lVar2 + 0x20);
  uVar1 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar1;
  uVar1 = param_2[3];
  puVar3[2] = param_2[2];
  puVar3[3] = uVar1;
  puVar3[4] = param_2[4];
  return lVar2;
}

