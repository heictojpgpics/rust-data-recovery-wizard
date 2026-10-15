// Function: FUN_1800190d0
// Address: 1800190d0
// Size: 750 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1800190d0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *_Dst;
  longlong *plVar4;
  undefined7 extraout_var;
  undefined4 *puVar5;
  undefined7 extraout_var_00;
  short *psVar6;
  longlong *plVar7;
  char *_Str1;
  longlong lVar8;
  uint uVar9;
  ulonglong local_res8;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff48;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78 [10];
  
  local_90 = 0xfffffffffffffffe;
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
  _Dst = (int *)FUN_18002be40(0x2000);
  memset(_Dst,0,0x2000);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),_Dst,param_3,2,
             in_stack_ffffffffffffff48 & 0xffffffffffffff00);
  plVar7 = (longlong *)0x0;
  plVar4 = FUN_180042ef0(_Dst,0x400,param_3,*(int *)(param_1 + 0x10),0,*(longlong **)(param_1 + 8),
                         param_2,(byte)((iVar2 + 0x3ff) / iVar3));
  FUN_1800431d0(local_78,_Dst,0x400,param_3,*(longlong **)(param_1 + 8),plVar4);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar2 = *(int *)(param_1 + 0x10);
  bVar1 = FUN_180043030(local_78);
  plVar4 = plVar7;
  if (((int)CONCAT71(extraout_var,bVar1) != 0) &&
     (plVar4 = FUN_180006db0(param_3,local_78,(ulonglong)(uint)(iVar3 * iVar2),&local_res8,0x200),
     plVar4 != (longlong *)0x0)) {
    if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
      lVar8 = *(longlong *)((longlong)plVar4 + 0x11);
    }
    else {
      lVar8 = (*(code *)((undefined **)*plVar4)[2])(plVar4);
    }
    if (lVar8 != 0) {
      if ((undefined **)*plVar4 == CNTFSFileProperties::vftable) {
        _Str1 = *(char **)((longlong)plVar4 + 0x11);
      }
      else {
        _Str1 = (char *)(*(code *)((undefined **)*plVar4)[2])(plVar4);
      }
      iVar2 = strcmp(_Str1,"$UsnJrnl");
      if (iVar2 != 0) goto LAB_18001935b;
    }
    FUN_180040cb0(local_88);
    do {
      puVar5 = (undefined4 *)FUN_1800430b0(local_78,0x80,(uint)plVar7,(int *)0x0,(longlong *)0x0);
      if (puVar5 == (undefined4 *)0x0) break;
      bVar1 = FUN_180045400((longlong)puVar5);
      if ((int)CONCAT71(extraout_var_00,bVar1) == 0) {
        local_res8._0_4_ = 0;
        psVar6 = (short *)FUN_1800452b0((longlong)puVar5,(undefined4 *)&local_res8);
        if ((((psVar6 != (short *)0x0) && ((uint)local_res8 < 3)) && (*psVar6 == 0x24)) &&
           (psVar6[1] == 0x4a)) {
          local_res20 = 0;
          local_98 = 0;
          FUN_180044e60(puVar5,&local_98,&local_res20,(longlong)local_88,1);
        }
      }
      uVar9 = (uint)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar9;
    } while ((int)uVar9 < 10);
    FUN_180040b10(local_88);
    plVar7 = FUN_1800068d0(local_88,(longlong *)&local_res8);
    FUN_180003250((longlong)plVar4,plVar7);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)*plVar7)(plVar7,1);
    }
    *(longlong **)(param_1 + 0x18) = plVar4;
    ~_String_alloc<>(local_88);
  }
LAB_18001935b:
  FUN_180043170(local_78);
  free(_Dst);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x138))(plVar4,1);
    }
    return 0;
  }
  return 1;
}

