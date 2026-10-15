// Function: FUN_18005aa60
// Address: 18005aa60
// Size: 376 bytes


byte * FUN_18005aa60(longlong param_1,byte *param_2,byte param_3,int *param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  size_t _MaxCount;
  byte local_res8 [8];
  size_t sVar7;
  
  pbVar4 = FUN_1800590f0((uint *)(param_1 + 8),param_2);
  if ((pbVar4 != (byte *)0x0) && (bVar5 = *pbVar4, bVar5 != 0)) {
    while ((((uint)(int)(char)bVar5 >> 7 & 1) == 0 && (iVar3 = isspace((uint)bVar5), iVar3 != 0))) {
      if ((param_4 != (int *)0x0) && (*pbVar4 == 10)) {
        *param_4 = *param_4 + 1;
      }
      bVar5 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
    if (*pbVar4 == 0x3d) {
      while( true ) {
        pbVar6 = pbVar4 + 1;
        bVar5 = *pbVar6;
        if (((uint)(int)(char)bVar5 >> 7 & 1) != 0) break;
        iVar3 = isspace((uint)bVar5);
        if (iVar3 == 0) {
          bVar5 = *pbVar6;
          break;
        }
        pbVar4 = pbVar6;
        if ((param_4 != (int *)0x0) && (*pbVar6 == 10)) {
          *param_4 = *param_4 + 1;
        }
      }
      if ((bVar5 == 0x22) || (bVar5 == 0x27)) {
        pbVar4 = pbVar4 + 2;
        local_res8[0] = bVar5;
        local_res8[1] = 0;
        sVar7 = 0xffffffffffffffff;
        do {
          _MaxCount = sVar7 + 1;
          lVar2 = sVar7 + 1;
          sVar7 = _MaxCount;
        } while (local_res8[lVar2] != 0);
        bVar1 = *pbVar4;
        pbVar6 = pbVar4;
        while( true ) {
          if (bVar1 == 0) {
            return (byte *)0x0;
          }
          if ((bVar1 == bVar5) &&
             (iVar3 = strncmp((char *)pbVar6,(char *)local_res8,_MaxCount), iVar3 == 0)) break;
          if (*pbVar6 == 10) {
            *param_4 = *param_4 + 1;
          }
          bVar1 = pbVar6[1];
          pbVar6 = pbVar6 + 1;
        }
        if ((*(uint *)(param_1 + 0x20) & 0x200) != 0) {
          free(*(void **)(param_1 + 0x28));
        }
        *(byte **)(param_1 + 0x28) = pbVar4;
        *(byte **)(param_1 + 0x30) = pbVar6;
        *(uint *)(param_1 + 0x20) = param_3 + 2 | 0x100;
        return pbVar6 + _MaxCount;
      }
    }
  }
  return (byte *)0x0;
}

