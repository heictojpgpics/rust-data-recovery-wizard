// Function: FUN_18003c130
// Address: 18003c130
// Size: 393 bytes


void FUN_18003c130(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    lVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
    lVar3 = (**(code **)(*param_3 + 0xf0))(param_3);
    if (lVar2 == lVar3) {
      uVar5 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x58) *
              *(int *)(*(longlong *)(param_1 + 0x28) + 0xc);
      uVar7 = (ulonglong)uVar5;
      if (uVar5 != 0) {
        if ((undefined **)*param_2 == CNTFSFileProperties::vftable) {
          lVar2 = *(longlong *)((longlong)param_2 + 0x1b);
        }
        else {
          lVar2 = (*(code *)((undefined **)*param_2)[3])(param_2);
        }
        if ((undefined **)*param_3 == CNTFSFileProperties::vftable) {
          lVar3 = *(longlong *)((longlong)param_3 + 0x1b);
        }
        else {
          lVar3 = (*(code *)((undefined **)*param_3)[3])(param_3);
        }
        if ((0 < lVar2) && (0 < lVar3)) {
          if (((longlong)uVar7 < lVar2) || ((longlong)uVar7 < lVar3)) {
            if (lVar2 % (longlong)(int)uVar5 != 0) {
              return;
            }
            if (lVar3 % (longlong)(int)uVar5 == 0) {
              return;
            }
          }
          else if (lVar3 <= lVar2) {
            return;
          }
          uVar6 = lVar2 - lVar3 >> 0x3f;
          if (((longlong)((lVar2 - lVar3 ^ uVar6) - uVar6) < (longlong)uVar7) &&
             (plVar4 = (longlong *)
                       __RTDynamicCast(param_2,0,&IFileProperties::RTTI_Type_Descriptor,
                                       &CNTFSFileProperties::RTTI_Type_Descriptor,0),
             plVar4 != (longlong *)0x0)) {
            if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
              bVar1 = *(byte *)((longlong)plVar4 + 0x72) & 1;
            }
            else {
              bVar1 = (*(code *)((undefined **)*plVar4)[0x1b])(plVar4);
            }
            if ((bVar1 != 0) ||
               (uVar5 = (uint)(lVar2 >> 0x3f) & 0x1ff, ((int)lVar2 + uVar5 & 0x1ff) == uVar5)) {
              *(longlong *)((longlong)plVar4 + 0x1b) = lVar3;
            }
          }
        }
      }
    }
  }
  return;
}

