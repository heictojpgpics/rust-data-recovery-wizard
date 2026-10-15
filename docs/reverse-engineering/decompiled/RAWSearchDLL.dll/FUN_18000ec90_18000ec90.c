// Function: FUN_18000ec90
// Address: 18000ec90
// Size: 54 bytes


undefined8 * FUN_18000ec90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800020c0(0x110);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = FUN_18000b520(puVar1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}

