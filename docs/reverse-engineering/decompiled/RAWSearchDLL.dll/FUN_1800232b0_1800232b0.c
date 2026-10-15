// Function: FUN_1800232b0
// Address: 1800232b0
// Size: 221 bytes


undefined8 FUN_1800232b0(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 local_28 [2];
  longlong *local_18;
  
  puVar3 = local_28;
  FUN_18001fae0(puVar3);
  puVar1 = (undefined8 *)*local_18;
  puVar4 = (undefined8 *)*puVar1;
  do {
    while( true ) {
      if (puVar4 == puVar1) {
        FUN_180023080(DAT_180118390,DAT_180118398,
                      ((longlong)DAT_180118398 - (longlong)DAT_180118390) / 0x48,param_2);
        return 1;
      }
      FUN_180022cf0(puVar3,DAT_180118398,(undefined8 *)puVar4[8],(undefined8 *)puVar4[9]);
      puVar2 = (undefined8 *)puVar4[2];
      puVar5 = puVar4;
      if (*(char *)((longlong)puVar4[2] + 0x19) != '\0') break;
      do {
        puVar4 = puVar2;
        puVar2 = (undefined8 *)*puVar4;
      } while (*(char *)((longlong)*puVar4 + 0x19) == '\0');
    }
    do {
      puVar4 = (undefined8 *)puVar5[1];
      if (*(char *)((longlong)puVar4 + 0x19) != '\0') break;
      bVar6 = puVar5 == (undefined8 *)puVar4[2];
      puVar5 = puVar4;
    } while (bVar6);
  } while( true );
}

