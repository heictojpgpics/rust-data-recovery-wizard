// Function: FUN_1800067e0
// Address: 1800067e0
// Size: 238 bytes


uint FUN_1800067e0(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x41) {
    if (param_1 - 0x21 < 0x20) {
      return 0x40;
    }
    if (param_1 - 0x11 < 0x10) {
      return 0x20;
    }
    if (param_1 - 9 < 8) {
      return 0x10;
    }
    if (param_1 - 5 < 4) {
      return 8;
    }
    if (param_1 - 3 < 2) {
      return 4;
    }
    if (param_1 == 2) {
      return 2;
    }
    uVar1 = (uint)(param_1 == 1);
  }
  else {
    uVar1 = 0x1000;
    if (0x1000 < param_1) {
      return 0;
    }
    if (param_1 < 0x801) {
      if (param_1 - 0x401 < 0x400) {
        return 0x800;
      }
      if (param_1 - 0x201 < 0x200) {
        return 0x400;
      }
      if (param_1 - 0x101 < 0x100) {
        return 0x200;
      }
      if (param_1 - 0x81 < 0x80) {
        return 0x100;
      }
      uVar1 = 0;
      if (param_1 - 0x41 < 0x40) {
        uVar1 = 0x80;
      }
      return uVar1;
    }
  }
  return uVar1;
}

