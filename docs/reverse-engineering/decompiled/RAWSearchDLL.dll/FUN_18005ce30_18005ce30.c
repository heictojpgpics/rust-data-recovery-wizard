// Function: FUN_18005ce30
// Address: 18005ce30
// Size: 635 bytes


byte * FUN_18005ce30(longlong param_1,char *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  uint local_res10 [2];
  uint local_res20 [2];
  
  iVar7 = 0;
  pbVar1 = (byte *)(param_2 + 1);
  if (*param_2 != '\"') {
    *param_3 = param_2;
    return (byte *)0x0;
  }
  bVar2 = *pbVar1;
  pbVar4 = pbVar1;
  while (((bVar2 != 0x22 && (bVar2 != 0)) && (iVar7 = iVar7 + 1, iVar7 != 0))) {
    pbVar3 = pbVar4 + 1;
    if (bVar2 == 0x5c) {
      pbVar3 = pbVar4 + 2;
    }
    bVar2 = *pbVar3;
    pbVar4 = pbVar3;
  }
  pbVar4 = (byte *)(*DAT_180117f28)((longlong)(iVar7 + 1));
  if (pbVar4 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar2 = *pbVar1;
  pbVar3 = pbVar4;
  do {
    if ((bVar2 == 0x22) || (bVar2 == 0)) {
      *pbVar3 = 0;
      bVar2 = *pbVar1;
      *(byte **)(param_1 + 0x20) = pbVar4;
      pbVar4 = pbVar1 + 1;
      if (bVar2 != 0x22) {
        pbVar4 = pbVar1;
      }
      *(undefined4 *)(param_1 + 0x18) = 5;
      return pbVar4;
    }
    pbVar5 = pbVar1 + 1;
    if (bVar2 == 0x5c) {
      switch(*pbVar5) {
      case 0x62:
        *pbVar3 = 8;
        break;
      default:
        *pbVar3 = *pbVar5;
        break;
      case 0x66:
        *pbVar3 = 0xc;
        break;
      case 0x6e:
        *pbVar3 = 10;
        break;
      case 0x72:
        *pbVar3 = 0xd;
        break;
      case 0x74:
        *pbVar3 = 9;
        break;
      case 0x75:
        sscanf((char *)(pbVar1 + 2),"%4x",local_res10);
        pbVar5 = pbVar1 + 5;
        if ((local_res10[0] - 1 < 0xdbff) || (0xdfff < local_res10[0])) {
          if (local_res10[0] - 0xd800 < 0x400) {
            if ((pbVar1[6] == 0x5c) && (pbVar1[7] == 0x75)) {
              sscanf((char *)(pbVar1 + 8),"%4x",local_res20);
              pbVar5 = pbVar1 + 0xb;
              if (local_res20[0] - 0xdc00 < 0x400) {
                local_res10[0] = (local_res10[0] & 0x3bf | 0x40) << 10 | local_res20[0] & 0x3ff;
                goto LAB_18005cfbd;
              }
            }
          }
          else {
LAB_18005cfbd:
            lVar6 = 4;
            if (local_res10[0] < 0x80) {
              lVar6 = 1;
            }
            else if (local_res10[0] < 0x800) {
              lVar6 = 2;
            }
            else if (local_res10[0] < 0x10000) {
              lVar6 = 3;
            }
            pbVar3 = pbVar3 + lVar6;
            iVar7 = (int)lVar6;
            if (iVar7 == 1) {
LAB_18005d051:
              pbVar3 = pbVar3 + -1;
              *pbVar3 = (&UNK_180068254)[lVar6] | (byte)local_res10[0];
            }
            else {
              if (iVar7 == 2) {
LAB_18005d03b:
                pbVar3 = pbVar3 + -1;
                *pbVar3 = (byte)local_res10[0] & 0x3f | 0x80;
                local_res10[0] = local_res10[0] >> 6;
                goto LAB_18005d051;
              }
              if (iVar7 == 3) {
LAB_18005d025:
                pbVar3 = pbVar3 + -1;
                *pbVar3 = (byte)local_res10[0] & 0x3f | 0x80;
                local_res10[0] = local_res10[0] >> 6;
                goto LAB_18005d03b;
              }
              if (iVar7 == 4) {
                pbVar3 = pbVar3 + -1;
                *pbVar3 = (byte)local_res10[0] & 0x3f | 0x80;
                local_res10[0] = local_res10[0] >> 6;
                goto LAB_18005d025;
              }
            }
            pbVar3 = pbVar3 + lVar6;
          }
        }
        goto LAB_18005d06e;
      }
      pbVar3 = pbVar3 + 1;
LAB_18005d06e:
      pbVar5 = pbVar5 + 1;
    }
    else {
      *pbVar3 = bVar2;
      pbVar3 = pbVar3 + 1;
    }
    bVar2 = *pbVar5;
    pbVar1 = pbVar5;
  } while( true );
}

