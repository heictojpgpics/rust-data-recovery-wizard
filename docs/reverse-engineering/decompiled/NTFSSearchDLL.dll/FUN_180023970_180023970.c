// Function: FUN_180023970
// Address: 180023970
// Size: 389 bytes


ulonglong FUN_180023970(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar5 = 0;
  plVar3 = (longlong *)
           __RTDynamicCast(*(undefined8 *)(param_2 + 0x30),0,&IFileProperties::RTTI_Type_Descriptor,
                           &CNTFSFileProperties::RTTI_Type_Descriptor,0);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
    uVar7 = (ulonglong)(*(byte *)((longlong)plVar3 + 0x72) >> 4 & 1);
  }
  else {
    uVar7 = (*(code *)((undefined **)*plVar3)[0x1d])(plVar3);
  }
  if ((char)uVar7 == '\0') {
    if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
      uVar7 = (ulonglong)*(ushort *)((longlong)plVar3 + 0x23);
    }
    else {
      uVar7 = (*(code *)((undefined **)*plVar3)[7])(plVar3);
    }
    bVar2 = (byte)uVar7 >> 4;
    uVar4 = CONCAT71((int7)(uVar7 >> 8),bVar2);
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulonglong)*(ushort *)(plVar3 + 0xe);
      uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
      if ((uint)*(ushort *)(plVar3 + 0xe) != *(uint *)(param_3 + 0xc)) {
        plVar1 = *(longlong **)(param_2 + 0x30);
        iVar8 = 0x200;
        if (*(int *)(param_3 + 0x58) != 0) {
          iVar8 = *(int *)(param_3 + 0x58);
        }
        if (plVar1 != (longlong *)0x0) {
          if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
            lVar5 = *(longlong *)((longlong)plVar1 + 0x1b);
          }
          else {
            lVar5 = (*(code *)((undefined **)*plVar1)[3])();
            uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
          }
        }
        uVar4 = (ulonglong)(uint)((int)uVar7 * iVar8);
        lVar5 = lVar5 + -1 + uVar4;
        lVar6 = lVar5 / (longlong)uVar4;
        if ((longlong)uVar7 <= lVar6) {
          lVar6 = lVar6 * uVar7;
          if ((undefined **)*plVar3 == CNTFSFileProperties::vftable) {
            lVar5 = (longlong)(int)plVar3[0xc];
          }
          else {
            lVar5 = (*(code *)((undefined **)*plVar3)[4])(plVar3,lVar5 % (longlong)uVar4);
            uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
          }
          return CONCAT71((int7)(uVar7 * lVar5 >> 8),lVar6 - uVar7 * lVar5 == 0);
        }
        goto LAB_180023aa0;
      }
    }
    uVar7 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
LAB_180023aa0:
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  return uVar7;
}

