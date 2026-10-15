// Function: FUN_18003bd80
// Address: 18003bd80
// Size: 535 bytes


void FUN_18003bd80(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x28) + 0x58) != 0)) {
    plVar4 = *(longlong **)(param_2 + 0x30);
    plVar6 = (longlong *)0x0;
    if (plVar4 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
      lVar7 = *(longlong *)((longlong)plVar4 + 0x1b);
    }
    else {
      lVar7 = (*(code *)((undefined **)*plVar4)[3])();
    }
    plVar4 = *(longlong **)(param_3 + 0x30);
    if (plVar4 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
      lVar8 = *(longlong *)((longlong)plVar4 + 0x1b);
    }
    else {
      lVar8 = (*(code *)((undefined **)*plVar4)[3])();
    }
    lVar3 = __RTDynamicCast(*(undefined8 *)(param_2 + 0x30),0,&IFileProperties::RTTI_Type_Descriptor
                            ,&CNTFSFileProperties::RTTI_Type_Descriptor,0);
    plVar4 = (longlong *)
             __RTDynamicCast(*(undefined8 *)(param_3 + 0x30),0,
                             &IFileProperties::RTTI_Type_Descriptor,
                             &CNTFSFileProperties::RTTI_Type_Descriptor,0);
    if ((lVar3 != 0) && (plVar4 != (longlong *)0x0)) {
      if (((*(byte *)(lVar3 + 0x72) & 4) == 0) || ((*(byte *)((longlong)plVar4 + 0x72) & 4) != 0)) {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x58);
        uVar1 = uVar2 * 8;
        uVar9 = (ulonglong)uVar1;
        if ((0 < lVar8) && (uVar1 != 0)) {
          if (((longlong)uVar9 < lVar7) || ((longlong)uVar9 < lVar8)) {
            if (lVar7 % (longlong)uVar9 != 0) {
              return;
            }
            if (lVar8 % (longlong)uVar9 == 0) {
              if (lVar8 <= lVar7) {
                return;
              }
            }
            else if ((longlong)uVar9 <= lVar8 - lVar7) {
              return;
            }
          }
          else {
            if (lVar8 <= lVar7) {
              return;
            }
            if (lVar8 % (longlong)(ulonglong)uVar2 == 0) {
              return;
            }
          }
          *(longlong *)(lVar3 + 0x1b) = lVar8;
        }
      }
      else {
        *(longlong *)(lVar3 + 0x1b) = lVar8;
        if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
          plVar5 = plVar6;
          if ((ushort *)plVar4[9] != (ushort *)0x0) {
            plVar5 = FUN_180033aa0((ushort *)plVar4[9]);
          }
        }
        else {
          plVar5 = (longlong *)(*(code *)((undefined **)*plVar4)[0xf])(plVar4);
        }
        if (plVar5 != (longlong *)0x0) {
          if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
            if ((ushort *)plVar4[9] != (ushort *)0x0) {
              plVar6 = FUN_180033aa0((ushort *)plVar4[9]);
            }
          }
          else {
            plVar6 = (longlong *)(*(code *)((undefined **)*plVar4)[0xf])(plVar4);
          }
          FUN_180003250(lVar3,plVar6);
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
  }
  return;
}

