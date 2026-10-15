// Function: FUN_18003ad10
// Address: 18003ad10
// Size: 377 bytes


bool FUN_18003ad10(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int param_5)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (param_2 == (longlong *)0x0) {
    return false;
  }
  if (param_5 < 1) {
    return false;
  }
  if (param_4 < 0) {
    return false;
  }
  plVar2 = (longlong *)param_2[6];
  if (plVar2 != (longlong *)0x0) {
    if (param_2[0xb] < param_3) {
      return false;
    }
    lVar8 = param_3 + param_4;
    if (param_2[0xb] <= lVar8) {
      iVar6 = (**(code **)(*param_2 + 8))(param_2);
      if ((iVar6 == 0) && ((*(byte *)((longlong)param_2 + 0x72) & 4) == 0)) {
        plVar3 = (longlong *)param_2[6];
        if (plVar3 != (longlong *)0x0) {
          if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
            bVar5 = (byte)*(undefined2 *)((longlong)plVar3 + 0x23);
          }
          else {
            bVar5 = (*(code *)((undefined **)*plVar3)[7])();
          }
          if ((bVar5 >> 4 & 1) != 0) {
            return true;
          }
        }
        cVar4 = (**(code **)(*plVar2 + 0xe8))(plVar2);
        if (cVar4 == '\0') {
          lVar7 = (**(code **)(*plVar2 + 0x30))(plVar2);
          lVar7 = lVar7 * (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 0xc);
          if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
            lVar9 = *(longlong *)((longlong)plVar2 + 0x1b);
          }
          else {
            lVar9 = (*(code *)((undefined **)*plVar2)[3])(plVar2);
          }
          if ((lVar7 - lVar8 != 0 && lVar8 <= lVar7) &&
             (*(char *)(*(longlong *)(param_1 + 0x28) + 0xf4) == '\0')) {
            return false;
          }
          lVar8 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if (lVar8 != 0) {
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0xc);
            uVar10 = (ulonglong)(uVar1 * param_5);
            lVar8 = (**(code **)(*plVar2 + 0x20))(plVar2);
            return ((longlong)((uVar10 - 1) + lVar9) / (longlong)uVar10) * (ulonglong)uVar1 -
                   lVar8 * (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + 0xc) == 0;
          }
        }
      }
      return true;
    }
    return false;
  }
  return false;
}

