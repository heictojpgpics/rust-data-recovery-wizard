// Function: FUN_18001cdd0
// Address: 18001cdd0
// Size: 328 bytes


undefined1 * FUN_18001cdd0(undefined1 *param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined **ppuVar2;
  ushort *puVar3;
  bool bVar4;
  int iVar5;
  undefined7 extraout_var;
  longlong *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulonglong local_res10;
  longlong local_58 [10];
  
  if (param_2 == (int *)0x0) {
    return &stack0x00000000;
  }
  if (param_4 == (longlong *)0x0) {
    return &stack0x00000000;
  }
  plVar6 = (longlong *)0x0;
  FUN_1800431d0(local_58,param_2,0x400,0,param_4,(undefined8 *)0x0);
  iVar5 = (**(code **)(*param_4 + 0x28))(param_4);
  iVar1 = *(int *)(param_1 + 0x18);
  bVar4 = FUN_180043030(local_58);
  if ((int)CONCAT71(extraout_var,bVar4) != 0) {
    plVar6 = FUN_180006db0(0,local_58,(ulonglong)(uint)(iVar5 * iVar1),&local_res10,0x200);
  }
  *(longlong **)(param_1 + 0x20) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    if ((undefined **)*plVar6 == CNTFSFileProperties::vftable) {
      pcVar7 = *(char **)((longlong)plVar6 + 0x11);
    }
    else {
      pcVar7 = (char *)(*(code *)((undefined **)*plVar6)[2])(plVar6);
    }
    if ((pcVar7 != (char *)0x0) && (pcVar7 = strstr(pcVar7,"$LogFile"), pcVar7 != (char *)0x0)) {
      ppuVar2 = (undefined **)**(longlong **)(param_1 + 0x20);
      if (ppuVar2 == CNTFSFileProperties::vftable) {
        puVar3 = (ushort *)(*(longlong **)(param_1 + 0x20))[9];
        if (puVar3 == (ushort *)0x0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          *param_1 = 1;
          puVar10 = (undefined1 *)0x1;
        }
        else {
          puVar8 = FUN_180033aa0(puVar3);
          *(undefined8 **)(param_1 + 0x10) = puVar8;
          *param_1 = 1;
          puVar10 = (undefined1 *)0x1;
        }
      }
      else {
        uVar9 = (*(code *)ppuVar2[0xf])();
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        *param_1 = 1;
        puVar10 = (undefined1 *)0x1;
      }
      goto LAB_18001ced7;
    }
  }
  puVar10 = (undefined1 *)0x0;
LAB_18001ced7:
  FUN_180043170(local_58);
  return puVar10;
}

