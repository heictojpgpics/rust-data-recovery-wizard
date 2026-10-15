// Function: FUN_180059fe0
// Address: 180059fe0
// Size: 139 bytes


void FUN_180059fe0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_1 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x38))();
    if (lVar4 == 0) {
      lVar4 = param_1[1];
      uVar5 = 0;
      iVar1 = *(int *)(lVar4 + 0x104);
      if (0 < iVar1) {
        lVar2 = *(longlong *)(lVar4 + 0xa8);
        uVar6 = uVar5;
        do {
          if (param_1 == *(longlong **)(lVar2 + uVar5 * 8)) {
            *(undefined8 *)(lVar2 + (longlong)(int)uVar6 * 8) =
                 *(undefined8 *)(lVar2 + -8 + (longlong)iVar1 * 8);
            *(int *)(lVar4 + 0x104) = *(int *)(lVar4 + 0x104) + -1;
            break;
          }
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar5 = uVar5 + 1;
        } while ((longlong)uVar5 < (longlong)iVar1);
      }
    }
    plVar3 = (longlong *)param_1[0xc];
    (**(code **)(*param_1 + 0x78))(param_1,0);
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  }
  return;
}

