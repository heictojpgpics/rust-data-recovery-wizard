// Function: FUN_18005b9a0
// Address: 18005b9a0
// Size: 199 bytes


void FUN_18005b9a0(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)param_1[0x13];
  plVar1 = param_1 + 0x14;
  *(int *)plVar1 = 1;
  *(undefined4 *)(param_1 + 6) = 1;
  while (((uint)(int)(char)*pbVar4 >> 7 & 1) == 0) {
    iVar3 = isspace((uint)*pbVar4);
    if (iVar3 == 0) break;
    if ((plVar1 != (longlong *)0x0) && (*pbVar4 == 10)) {
      *(int *)plVar1 = (int)*plVar1 + 1;
    }
    pbVar4 = pbVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  bVar2 = *pbVar4;
  if (((bVar2 == 0xef) && (pbVar4[1] == 0xbb)) && (pbVar4[2] == 0xbf)) {
    pbVar4 = pbVar4 + 3;
    *(undefined1 *)(param_1 + 0xd) = 1;
    bVar2 = *pbVar4;
  }
  if (bVar2 == 0) {
    FUN_18005b870((longlong)param_1,0xd,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018005ba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1,pbVar4,0,plVar1);
  return;
}

