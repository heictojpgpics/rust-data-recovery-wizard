// Function: FUN_180006730
// Address: 180006730
// Size: 340 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_180006730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint **ppuVar2;
  undefined8 uVar3;
  
  _DAT_1801181a0 = 0;
  DAT_1801181a8 = 0;
  _DAT_1801181a0 = FUN_1800077d0(param_1,0,0);
  DAT_1801181b0 = 0;
  DAT_1801181b8 = 0;
  DAT_1801181b0 = FUN_180007710();
  DAT_1801181c0 = 0;
  DAT_1801181c8 = 0;
  DAT_1801181c0 = FUN_180007710();
  DAT_1801181d0 = 0;
  DAT_1801181d8 = 0;
  uVar3 = 0;
  ppuVar2 = (uint **)0x0;
  DAT_1801181d0 = FUN_1800077d0(param_1,0,0);
  DAT_1801181e0 = 0;
  DAT_1801181e8 = 0;
  DAT_1801181e0 = FUN_180007710();
  DAT_1801181f0 = 0;
  DAT_1801181f8 = 0;
  DAT_1801181f0 = FUN_180007710();
  puVar1 = FUN_180010a40();
  FUN_180010b10((longlong)puVar1,ppuVar2,uVar3,param_4);
  FUN_180002a50(&DAT_1801181e0,ppuVar2);
  FUN_180004320(&DAT_1801181f0,ppuVar2,uVar3);
  FUN_180004fb0(&DAT_1801181d0,1,(char)uVar3);
  return &DAT_1801181a0;
}

