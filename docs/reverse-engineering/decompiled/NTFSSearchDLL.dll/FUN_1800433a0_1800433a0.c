// Function: FUN_1800433a0
// Address: 1800433a0
// Size: 150 bytes


undefined8 FUN_1800433a0(short *param_1,int param_2)

{
  int local_14;
  short *local_10;
  
  local_14 = 0;
  local_10 = param_1;
  while ((*local_10 != 0 && (local_14 < param_2))) {
    switch(*local_10) {
    case 0x22:
    case 0x2a:
    case 0x2f:
    case 0x3a:
    case 0x3c:
    case 0x3e:
    case 0x3f:
    case 0x5c:
    case 0x7c:
      return 0;
    default:
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
    }
  }
  return 1;
}

