// Function: FUN_18002e1e0
// Address: 18002e1e0
// Size: 143 bytes


longlong FUN_18002e1e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_18002ddd0(param_1,param_2,param_3);
  uVar2 = FUN_18002d050(param_1);
  uVar3 = FUN_18002d070(param_4);
  uVar4 = FUN_18002d070(lVar1 + 0x10);
  construct<>(uVar2,uVar4,uVar3);
  return lVar1;
}

