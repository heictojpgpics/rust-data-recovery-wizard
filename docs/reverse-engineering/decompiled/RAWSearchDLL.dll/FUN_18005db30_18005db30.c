// Function: FUN_18005db30
// Address: 18005db30
// Size: 671 bytes


byte * FUN_18005db30(longlong param_1,char *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  if (*param_2 != '{') {
    *param_3 = param_2;
    return (byte *)0x0;
  }
  *(undefined4 *)(param_1 + 0x18) = 7;
  for (pbVar4 = (byte *)(param_2 + 1);
      ((pbVar4 != (byte *)0x0 && (*pbVar4 != 0)) && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
  }
  if (*pbVar4 == 0x7d) {
    return pbVar4 + 1;
  }
  puVar2 = (undefined8 *)(*DAT_180117f28)(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    return (byte *)0x0;
  }
  do {
    if ((*pbVar4 == 0) || (0x20 < *pbVar4)) break;
    pbVar4 = pbVar4 + 1;
  } while (pbVar4 != (byte *)0x0);
  pbVar4 = FUN_18005ce30((longlong)puVar2,(char *)pbVar4,param_3);
  while( true ) {
    if (pbVar4 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if ((*pbVar4 == 0) || (0x20 < *pbVar4)) break;
    pbVar4 = pbVar4 + 1;
  }
  if (pbVar4 == (byte *)0x0) {
    return (byte *)0x0;
  }
  puVar2[8] = puVar2[4];
  puVar2[4] = 0;
  if (*pbVar4 == 0x3a) {
    do {
      pbVar4 = pbVar4 + 1;
      if ((pbVar4 == (byte *)0x0) || (*pbVar4 == 0)) break;
    } while (*pbVar4 < 0x21);
    for (pbVar4 = FUN_18005d3c0((longlong)puVar2,(char *)pbVar4,param_3);
        ((pbVar4 != (byte *)0x0 && (*pbVar4 != 0)) && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
    }
    if (pbVar4 != (byte *)0x0) {
      bVar1 = *pbVar4;
      while (bVar1 == 0x2c) {
        puVar3 = (undefined8 *)(*DAT_180117f28)(0x48);
        if (puVar3 == (undefined8 *)0x0) {
          return (byte *)0x0;
        }
        *puVar3 = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        *puVar2 = puVar3;
        puVar3[1] = puVar2;
        do {
          pbVar4 = pbVar4 + 1;
          if ((pbVar4 == (byte *)0x0) || (*pbVar4 == 0)) break;
        } while (*pbVar4 < 0x21);
        pbVar4 = FUN_18005ce30((longlong)puVar3,(char *)pbVar4,param_3);
        while( true ) {
          if (pbVar4 == (byte *)0x0) {
            return (byte *)0x0;
          }
          if ((*pbVar4 == 0) || (0x20 < *pbVar4)) break;
          pbVar4 = pbVar4 + 1;
        }
        if (pbVar4 == (byte *)0x0) {
          return (byte *)0x0;
        }
        puVar3[8] = puVar3[4];
        puVar3[4] = 0;
        if (*pbVar4 != 0x3a) goto LAB_18005dc52;
        do {
          pbVar4 = pbVar4 + 1;
          if ((pbVar4 == (byte *)0x0) || (*pbVar4 == 0)) break;
        } while (*pbVar4 < 0x21);
        for (pbVar4 = FUN_18005d3c0((longlong)puVar3,(char *)pbVar4,param_3);
            ((pbVar4 != (byte *)0x0 && (*pbVar4 != 0)) && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        if (pbVar4 == (byte *)0x0) {
          return (byte *)0x0;
        }
        puVar2 = puVar3;
        bVar1 = *pbVar4;
      }
      if (bVar1 == 0x7d) {
        return pbVar4 + 1;
      }
      *param_3 = pbVar4;
    }
    return (byte *)0x0;
  }
LAB_18005dc52:
  *param_3 = pbVar4;
  return (byte *)0x0;
}

