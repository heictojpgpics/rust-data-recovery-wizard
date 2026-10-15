// Function: FUN_18002f830
// Address: 18002f830
// Size: 141 bytes


longlong FUN_18002f830(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_18002fdb0(param_1);
  *(undefined1 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x19) = 0;
  lVar2 = FUN_180002680(param_2);
  uVar3 = FUN_180002680(lVar1 + 0x20);
  uVar4 = FUN_180002680(param_1);
  FUN_180014ec0(uVar4,uVar3,lVar2);
  return lVar1;
}

