// Function: FUN_18001f540
// Address: 18001f540
// Size: 614 bytes


ulonglong FUN_18001f540(longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined **ppuVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_res18 [8];
  undefined1 local_38 [16];
  
  uVar9 = 0;
  plVar1 = (longlong *)param_3[4];
  if (plVar1 != (longlong *)0x0) {
    if ((*(int *)((longlong)param_3 + 0x14) == 0) && (*(int *)(param_2 + 0x14) == 1)) {
      uVar9 = 1;
    }
    if ((undefined **)*plVar1 == CNTFSFileProperties::vftable) {
      lVar8 = *(longlong *)((longlong)plVar1 + 0x1b);
    }
    else {
      lVar8 = (*(code *)((undefined **)*plVar1)[3])();
    }
    lVar8 = lVar8 - param_4;
    if (((param_4 != 0) && (0 < lVar8)) &&
       (iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(),
       lVar8 < (longlong)(ulonglong)(uint)(iVar3 * *(int *)(param_1 + 0x18)))) {
      *(longlong *)(param_3[4] + 0x1b) = param_4;
    }
    if ((lVar8 < 0) &&
       (uVar7 = (int)(uint)lVar8 >> 0x1f, 0x100000 < (int)(((uint)lVar8 ^ uVar7) - uVar7))) {
      FUN_18001f230(param_1,param_3,param_4);
    }
    if ((char)uVar9 != '\0') {
      lVar8 = *(longlong *)(param_2 + 0x20);
      ppuVar2 = *(undefined ***)param_3[4];
      if (ppuVar2 == CNTFSFileProperties::vftable) {
        uVar4 = *(undefined8 *)((longlong)param_3[4] + 0x1b);
      }
      else {
        uVar4 = (*(code *)ppuVar2[3])();
      }
      *(undefined8 *)(lVar8 + 0x1b) = uVar4;
    }
    uVar4 = FUN_18001c1a0(param_1,(longlong *)param_3[4],*(longlong **)(param_2 + 0x20));
    if ((char)uVar4 == '\0') {
      puVar5 = (undefined8 *)
               (**(code **)(**(longlong **)(param_2 + 0x20) + 0x50))
                         (*(longlong **)(param_2 + 0x20),local_res18);
      uVar4 = *puVar5;
      puVar5 = (undefined8 *)
               (**(code **)(*(longlong *)param_3[4] + 0x50))((longlong *)param_3[4],local_38);
      if (((int)((ulonglong)*puVar5 >> 0x20) == (int)((ulonglong)uVar4 >> 0x20)) &&
         ((int)*puVar5 == (int)uVar4)) {
        puVar5 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_2 + 0x20) + 0x58))
                           (*(longlong **)(param_2 + 0x20),local_res18);
        uVar4 = *puVar5;
        puVar5 = (undefined8 *)
                 (**(code **)(*(longlong *)param_3[4] + 0x58))((longlong *)param_3[4],local_38);
        iVar3 = 0;
        uVar11 = (uint)((ulonglong)uVar4 >> 0x20);
        uVar7 = (uint)((ulonglong)*puVar5 >> 0x20);
        uVar6 = (uint)*puVar5;
        uVar12 = (uint)uVar4;
        if ((uVar7 == uVar11) && (uVar6 == uVar12)) {
          iVar10 = 0;
        }
        else {
          iVar10 = 1;
          if ((uVar7 <= uVar11) && ((uVar7 != uVar11 || (iVar10 = 1, uVar6 <= uVar12)))) {
            iVar10 = -1;
          }
        }
        puVar5 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_2 + 0x20) + 0x58))
                           (*(longlong **)(param_2 + 0x20),local_res18);
        uVar4 = *puVar5;
        puVar5 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_2 + 0x20) + 0x50))
                           (*(longlong **)(param_2 + 0x20),local_38);
        uVar12 = (uint)((ulonglong)uVar4 >> 0x20);
        uVar7 = (uint)((ulonglong)*puVar5 >> 0x20);
        uVar6 = (uint)*puVar5;
        uVar11 = (uint)uVar4;
        if ((uVar7 != uVar12) || (uVar6 != uVar11)) {
          if (uVar12 < uVar7) {
            iVar3 = 1;
          }
          else if ((uVar7 != uVar12) || (iVar3 = 1, uVar6 <= uVar11)) {
            iVar3 = -1;
          }
        }
        if (0 < iVar10) {
          if (iVar3 < 1) {
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
            FUN_18001c710(param_1,(longlong *)param_3[4],*(longlong **)(param_2 + 0x20),
                          (int *)(param_3 + 6),(int *)(param_2 + 0x30));
          }
        }
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 1;
    }
    return uVar9;
  }
  return in_RAX & 0xffffffffffffff00;
}

