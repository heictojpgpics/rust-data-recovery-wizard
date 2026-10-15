// Function: FUN_18003ff50
// Address: 18003ff50
// Size: 194 bytes


undefined8 FUN_18003ff50(char *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int local_14;
  char *local_10;
  
  local_14 = 0;
  local_10 = param_1;
  while( true ) {
    if (*local_10 == '\0') {
      return 1;
    }
    uVar2 = (int)((int)*local_10 + ((int)*local_10 >> 0x1f & 0xfU)) >> 4;
    bVar1 = *local_10 >> 0x1f & 0xf;
    bVar1 = (*local_10 + bVar1 & 0xf) - bVar1;
    if ((4 < (byte)uVar2) || (4 < bVar1)) break;
    local_14 = (uVar2 & 0xff) + local_14 + 1 + (uint)bVar1;
    if (param_2 <= local_14) {
      return 0;
    }
    local_10 = local_10 + (int)(bVar1 + 1 + (uVar2 & 0xff));
  }
  return 0;
}

