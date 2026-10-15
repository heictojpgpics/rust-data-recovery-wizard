// Function: FUN_18002bb00
// Address: 18002bb00
// Size: 452 bytes


ulonglong FUN_18002bb00(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong local_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  iVar4 = 0;
  do {
    if (CONCAT31(CONCAT21(CONCAT11(param_3[4],param_3[5]),param_3[6]),param_3[7]) == 0x75647461) {
      if (CONCAT31(CONCAT21(CONCAT11(param_3[0xc],param_3[0xd]),param_3[0xe]),param_3[0xf]) ==
          0x6d657461) {
        *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 0x14;
        puVar3 = param_3 + 0x14;
        local_28 = *param_2;
        lStack_20 = param_2[1];
        lStack_18 = param_2[2];
        lStack_10 = param_2[3];
        iVar4 = 0;
        while( true ) {
          uVar5 = (ulonglong)CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
          if (CONCAT31(CONCAT21(CONCAT11(puVar3[4],puVar3[5]),puVar3[6]),puVar3[7]) == 0x696c7374) {
            *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 8;
            bVar2 = FUN_18002bcd0(param_1,&local_28,puVar3 + 8,uVar5);
            return (ulonglong)bVar2;
          }
          uVar5 = *(longlong *)(param_1 + 0x118) + uVar5;
          *(ulonglong *)(param_1 + 0x118) = uVar5;
          puVar3 = FUN_180042930(&local_28,uVar5);
          if (puVar3 == (undefined *)0x0) break;
          bVar1 = 2 < iVar4;
          iVar4 = iVar4 + 1;
          if (bVar1) {
            return 0;
          }
        }
        return 0;
      }
    }
    else {
      *(longlong *)(param_1 + 0x118) =
           *(longlong *)(param_1 + 0x118) +
           (ulonglong)CONCAT31(CONCAT21(CONCAT11(*param_3,param_3[1]),param_3[2]),param_3[3]);
      param_3 = FUN_180042930(param_2,*(ulonglong *)(param_1 + 0x118));
      if (param_3 == (undefined *)0x0) break;
    }
    bVar1 = iVar4 < 3;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  return (ulonglong)param_3 & 0xffffffffffffff00;
}

