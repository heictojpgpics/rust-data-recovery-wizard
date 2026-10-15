// Function: FUN_180018a80
// Address: 180018a80
// Size: 756 bytes


ulonglong FUN_180018a80(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                       int param_5,undefined8 *param_6)

{
  bool bVar1;
  int iVar2;
  int *_Dst;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined7 extraout_var;
  ulonglong *puVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffff58;
  longlong local_80 [2];
  undefined2 local_70 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [5];
  
  uVar9 = 0xffffffffffffffff;
  plVar4 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  _Dst = (int *)FUN_18002be40(0x8000);
  memset(_Dst,0,0x8000);
  if ((param_2 == (int *)0x0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_180018d29;
  uVar3 = FUN_180041850((longlong)param_2,0xa0,0);
  if (uVar3 == 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    if (iVar2 == 0) {
      iVar2 = 0x200;
    }
    bVar8 = (byte)(0x400 / (longlong)iVar2);
    if (bVar8 == 0) {
      bVar8 = 1;
    }
    plVar4 = FUN_180042ef0(param_2,0x400,param_3,param_5,0,*(longlong **)(param_1 + 8),param_6,bVar8
                          );
    if (plVar4 == (longlong *)0x0) goto LAB_180018d29;
    plVar5 = (longlong *)FUN_18002be40(0x48);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = FUN_1800431d0(plVar5,param_2,0x400,param_3,*(longlong **)(param_1 + 8),plVar4);
    }
    in_stack_ffffffffffffff58 = uVar3;
    uVar3 = FUN_1800430b0(plVar5,0xa0,0,(int *)0x0,(longlong *)0x0);
    if (uVar3 != 0) goto LAB_180018bdc;
  }
  else {
LAB_180018bdc:
    FUN_180040cb0(local_80);
    FUN_180045480(uVar3);
    pcVar6 = (char *)FUN_180043b40(uVar3);
    iVar2 = FUN_180043b00(uVar3);
    FUN_180040b80((longlong)local_80,pcVar6,iVar2,0);
    bVar1 = FUN_180040b50((longlong)local_80);
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_180040b10(local_80);
      FUN_180040ad0(local_80,&local_res10);
      (**(code **)(**(longlong **)(param_1 + 8) + 8))
                (*(longlong **)(param_1 + 8),_Dst,
                 **(longlong **)(local_res10 + 0x10) * (longlong)param_5 +
                 *(longlong *)(param_1 + 0x78),8,in_stack_ffffffffffffff58 & 0xffffffffffffff00);
      FUN_180046760(local_50);
      FUN_180046530(local_50,_Dst,0x8000);
      local_60 = 0;
      local_58 = 7;
      local_70[0] = 0;
      FUN_180019ee0((longlong *)local_70,L"$Extend",7);
      puVar7 = (ulonglong *)FUN_180046320((longlong)local_50,(longlong *)local_70);
      if (puVar7 != (ulonglong *)0x0) {
        uVar9 = *puVar7 & 0xffffffffffff;
      }
      FUN_180046710(local_50);
    }
    ~_String_alloc<>(local_80);
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_180003c80(plVar4);
    FUN_180002f00(plVar4,1);
  }
LAB_180018d29:
  if (_Dst != (int *)0x0) {
    free(_Dst);
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_180043170(plVar5);
    free(plVar5);
  }
  return uVar9;
}

