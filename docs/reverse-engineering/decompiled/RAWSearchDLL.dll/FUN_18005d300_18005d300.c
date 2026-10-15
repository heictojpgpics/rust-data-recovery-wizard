// Function: FUN_18005d300
// Address: 18005d300
// Size: 177 bytes


longlong * FUN_18005d300(byte *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  
  plVar1 = (longlong *)(*DAT_180117f28)(0x48);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
  }
  *param_2 = 0;
  if (plVar1 != (longlong *)0x0) {
    if (param_1 != (byte *)0x0) {
      do {
        if ((*param_1 == 0) || (0x20 < *param_1)) break;
        param_1 = param_1 + 1;
      } while (param_1 != (byte *)0x0);
    }
    pbVar2 = FUN_18005d3c0((longlong)plVar1,(char *)param_1,param_2);
    if (pbVar2 != (byte *)0x0) {
      return plVar1;
    }
    FUN_18005cc00(plVar1);
  }
  return (longlong *)0x0;
}

