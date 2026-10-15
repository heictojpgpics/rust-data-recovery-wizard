// Function: FUN_18000aa50
// Address: 18000aa50
// Size: 377 bytes


undefined8 * FUN_18000aa50(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
  lVar5 = FUN_18003f920(param_2);
  if (lVar5 < lVar4 - param_3) {
    lVar4 = FUN_18003f920(param_2);
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
    lVar4 = lVar4 - param_3;
  }
  if ((7 < lVar4) &&
     ((1 < param_4 || (cVar1 = FUN_18000f990(param_1,param_2,param_3), cVar1 != '\0')))) {
    puVar6 = (undefined8 *)FUN_18002be40(0x1a8);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
      puVar6 = FUN_180039390(puVar6,uVar3);
    }
    *(uint *)((longlong)puVar6 + 0x9c) = param_4;
    *(undefined4 *)(puVar6 + 1) = 3;
    uVar2 = FUN_18003f940(param_2);
    *(uint *)((longlong)puVar6 + 0xc) = (uint)uVar2;
    *(int *)((longlong)puVar6 + 0x5c) = (int)puVar6;
    puVar6[2] = param_3;
    puVar6[3] = param_3;
    uVar7 = FUN_18003f8b0(param_2);
    puVar6[0x12] = uVar7;
    uVar2 = FUN_18003f940(param_2);
    lVar5 = FUN_18003f990(param_2);
    puVar6[0x19] = lVar5 * (ulonglong)uVar2;
    uVar3 = *(uint *)((longlong)puVar6 + 0xc);
    if (uVar3 != 0) {
      lVar4 = lVar4 / (longlong)(ulonglong)uVar3;
      puVar6[0xc] = (ulonglong)uVar3 * lVar4;
      puVar6[0x15] = lVar4;
      uVar8 = (longlong)(param_3 - 0x8000U) >> 0x3f;
      if (0x3e < (longlong)((param_3 - 0x8000U ^ uVar8) - uVar8)) {
        return puVar6;
      }
      puVar6[2] = 0x8000;
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}

