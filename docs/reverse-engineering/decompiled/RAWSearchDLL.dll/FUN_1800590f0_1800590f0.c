// Function: FUN_1800590f0
// Address: 1800590f0
// Size: 225 bytes


byte * FUN_1800590f0(uint *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  if (((param_2 != (byte *)0x0) && (bVar2 = *param_2, bVar2 != 0)) &&
     ((0x7f < bVar2 ||
      (((iVar3 = isalpha((uint)bVar2), iVar3 != 0 || (bVar2 == 0x3a)) || (bVar2 == 0x5f)))))) {
    pbVar4 = param_2 + 1;
    bVar2 = param_2[1];
    while ((bVar2 != 0 &&
           (((0x7f < bVar2 || (iVar3 = isalpha((uint)bVar2), iVar3 != 0)) ||
            (((bVar2 == 0x3a || ((bVar2 == 0x5f || (iVar3 = isdigit((uint)bVar2), iVar3 != 0)))) ||
             ((byte)(bVar2 - 0x2d) < 2))))))) {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar1;
    }
    FUN_180058e50(param_1,param_2,pbVar4,0);
    return pbVar4;
  }
  return (byte *)0x0;
}

