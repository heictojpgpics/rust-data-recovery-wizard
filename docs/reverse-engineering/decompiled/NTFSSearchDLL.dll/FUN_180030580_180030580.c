// Function: FUN_180030580
// Address: 180030580
// Size: 206 bytes


undefined8 FUN_180030580(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar1 = FUN_18002d070(param_2);
  puVar2 = (undefined8 *)FUN_180002670(param_1);
  uVar3 = FUN_18002d070(*puVar2);
  uVar4 = FUN_180002680(param_1);
  construct<>(uVar4,uVar3,uVar1);
  FUN_180002670(param_1);
  FUN_180002670(param_1);
  FUN_180030670();
  puVar2 = (undefined8 *)FUN_180002670(param_1);
  uVar1 = *puVar2;
  plVar5 = (longlong *)FUN_180002670(param_1);
  *plVar5 = *plVar5 + 8;
  return uVar1;
}

