// Function: FUN_180051030
// Address: 180051030
// Size: 72 bytes


undefined8 FUN_180051030(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 1:
  case 2:
  case 6:
  case 7:
    return 1;
  case 3:
  case 8:
    return 2;
  case 4:
  case 9:
  case 0xb:
    return 4;
  case 5:
  case 10:
  case 0xc:
    uVar1 = 8;
  }
  return uVar1;
}

