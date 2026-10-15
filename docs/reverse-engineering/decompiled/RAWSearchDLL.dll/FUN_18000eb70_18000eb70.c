// Function: FUN_18000eb70
// Address: 18000eb70
// Size: 63 bytes


longlong FUN_18000eb70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_18000afb0(param_1);
  *(undefined2 *)(lVar2 + 0x18) = 0;
  puVar3 = (undefined8 *)FUN_1800012e0(lVar2,lVar2 + 0x20);
  uVar1 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar1;
  return lVar2;
}

