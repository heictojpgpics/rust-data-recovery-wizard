// Function: FUN_180031200
// Address: 180031200
// Size: 150 bytes


ulonglong FUN_180031200(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  plVar5 = param_1;
  if (param_1 != (longlong *)0x0) {
    do {
      iVar2 = (**(code **)(*plVar5 + 8))(plVar5);
      if (iVar2 != 0) {
        if (((ulonglong)*(ushort *)(param_1 + 0xd) < (ulonglong)(plVar5[0x43] - plVar5[0x42] >> 3))
           && (plVar1 = *(longlong **)(plVar5[0x42] + (ulonglong)*(ushort *)(param_1 + 0xd) * 8),
              plVar1 != (longlong *)0x0)) {
          ppuVar3 = (undefined **)*plVar1;
          plVar5 = plVar1;
          if (ppuVar3 == CFileSystemNode::vftable) {
            return (ulonglong)*(uint *)((longlong)plVar1 + 0x1d4);
          }
        }
        else {
          ppuVar3 = (undefined **)*plVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x000180031292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)ppuVar3[3])(plVar5);
        return uVar4;
      }
      plVar5 = (longlong *)plVar5[1];
    } while (plVar5 != (longlong *)0x0);
  }
  return 0xe;
}

