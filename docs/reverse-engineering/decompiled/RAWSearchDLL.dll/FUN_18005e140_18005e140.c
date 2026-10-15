// Function: FUN_18005e140
// Address: 18005e140
// Size: 213 bytes


longlong * FUN_18005e140(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    pbVar5 = (byte *)plVar7[8];
    if (pbVar5 == (byte *)0x0) {
      uVar4 = (uint)(param_2 != (byte *)0x0);
LAB_18005e1dc:
      if (uVar4 == 0) {
        return plVar7;
      }
    }
    else if (param_2 != (byte *)0x0) {
      iVar2 = tolower((int)(char)*pbVar5);
      iVar3 = tolower((int)(char)*param_2);
      pbVar6 = param_2;
      if (iVar2 == iVar3) {
        do {
          if (*pbVar5 == 0) {
            return plVar7;
          }
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
          iVar2 = tolower((int)(char)*pbVar1);
          iVar3 = tolower((int)(char)*pbVar6);
        } while (iVar2 == iVar3);
      }
      iVar2 = tolower((uint)*pbVar5);
      iVar3 = tolower((uint)*pbVar6);
      uVar4 = iVar2 - iVar3;
      goto LAB_18005e1dc;
    }
    plVar7 = (longlong *)*plVar7;
    if (plVar7 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}

