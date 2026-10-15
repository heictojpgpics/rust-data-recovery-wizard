// Function: FUN_18005d100
// Address: 18005d100
// Size: 318 bytes


undefined1 * FUN_18005d100(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar8;
  int iVar7;
  
  puVar5 = (undefined1 *)0x0;
  uVar6 = 0;
  if (param_1 == (byte *)0x0) {
    puVar3 = (undefined1 *)(*DAT_180117f28)(1);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = DAT_180066bb1;
      puVar5 = puVar3;
    }
    return puVar5;
  }
  bVar2 = *param_1;
  pbVar8 = param_1;
  while (bVar2 != 0) {
    iVar7 = (int)puVar5;
    uVar6 = iVar7 + 1;
    puVar5 = (undefined1 *)(ulonglong)uVar6;
    if (uVar6 == 0) break;
    pcVar4 = strchr("\"\\\b\f\n\r\t",(uint)bVar2);
    if (pcVar4 == (char *)0x0) {
      if (bVar2 < 0x20) {
        puVar5 = (undefined1 *)(ulonglong)(iVar7 + 6);
      }
    }
    else {
      puVar5 = (undefined1 *)(ulonglong)(iVar7 + 2);
    }
    uVar6 = (uint)puVar5;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    bVar2 = *pbVar1;
  }
  puVar5 = (undefined1 *)(*DAT_180117f28)((longlong)(int)uVar6 + 3);
  if (puVar5 != (undefined1 *)0x0) {
    *puVar5 = 0x22;
    pbVar8 = puVar5 + 1;
    bVar2 = *param_1;
    while (bVar2 != 0) {
      if (((bVar2 < 0x20) || (bVar2 == 0x22)) || (bVar2 == 0x5c)) {
        *pbVar8 = 0x5c;
        switch(*param_1) {
        case 8:
          pbVar8[1] = 0x62;
          pbVar8 = pbVar8 + 2;
          break;
        case 9:
          pbVar8[1] = 0x74;
          pbVar8 = pbVar8 + 2;
          break;
        case 10:
          pbVar8[1] = 0x6e;
          pbVar8 = pbVar8 + 2;
          break;
        default:
          FUN_18000b460(pbVar8 + 1,"u%04x",(ulonglong)*param_1,param_4);
          pbVar8 = pbVar8 + 6;
          break;
        case 0xc:
          pbVar8[1] = 0x66;
          pbVar8 = pbVar8 + 2;
          break;
        case 0xd:
          pbVar8[1] = 0x72;
          pbVar8 = pbVar8 + 2;
          break;
        case 0x22:
          pbVar8[1] = 0x22;
          pbVar8 = pbVar8 + 2;
          break;
        case 0x5c:
          pbVar8[1] = 0x5c;
          pbVar8 = pbVar8 + 2;
        }
      }
      else {
        *pbVar8 = bVar2;
        pbVar8 = pbVar8 + 1;
      }
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    }
    pbVar8[0] = 0x22;
    pbVar8[1] = 0;
  }
  return puVar5;
}

