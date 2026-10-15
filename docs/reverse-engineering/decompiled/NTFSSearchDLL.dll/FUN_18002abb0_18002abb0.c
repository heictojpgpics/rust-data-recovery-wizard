// Function: FUN_18002abb0
// Address: 18002abb0
// Size: 61 bytes


ulonglong FUN_18002abb0(undefined8 param_1,ushort param_2)

{
  byte bVar1;
  
  if (0x22 < param_2) {
    return CONCAT71((uint7)(byte)(param_2 >> 8),1);
  }
  bVar1 = 0;
  switch(param_2) {
  case 1:
  case 0x10:
  case 0x11:
  case 0x14:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
    bVar1 = 1;
  }
  return (ulonglong)bVar1;
}

