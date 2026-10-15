// Function: FUN_18000be00
// Address: 18000be00
// Size: 1418 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000be00(longlong param_1,longlong param_2,longlong *param_3,int *param_4,uint param_5)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined7 extraout_var;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined7 extraout_var_00;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined7 extraout_var_01;
  undefined8 *puVar14;
  ulonglong *puVar15;
  longlong lVar16;
  char *pcVar17;
  int *piVar18;
  longlong *plVar19;
  longlong *plVar20;
  char *_Str1;
  ulonglong uVar21;
  short local_88 [4];
  longlong *local_80 [2];
  longlong *local_70;
  longlong **local_68;
  longlong local_60 [2];
  byte local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  iVar5 = FUN_1800419b0(param_3);
  if (((iVar5 != 0) ||
      ((lVar11 = *(longlong *)(param_1 + 0xe0), lVar11 != 0 &&
       (((iVar5 = FUN_180041050(param_3), iVar5 != 0 &&
         (499999 < *(ulonglong *)(*(longlong *)(lVar11 + 0x28) + 8))) ||
        ((iVar5 = FUN_180041020(param_3), iVar5 != 0 &&
         (499999 < *(ulonglong *)(*(longlong *)(lVar11 + 0x30) + 8))))))))) ||
     ((*(longlong *)(param_1 + 0xf8) != 0 &&
      (499999 < *(ulonglong *)(*(longlong *)(param_1 + 0xf8) + 8))))) goto LAB_18000c1fe;
  local_88[0] = 0;
  FUN_180044da0(param_3,local_88);
  if (*(short *)(param_1 + 0x79c) < local_88[0]) {
    *(short *)(param_1 + 0x79c) = local_88[0];
  }
  if (*(int *)(param_1 + 0x118) == 0) goto LAB_18000c1fe;
  uVar21 = 0;
  plVar7 = FUN_18000d1d0(param_1,param_4,param_5,param_2,0,0,'\x01');
  if (plVar7 == (longlong *)0x0) goto LAB_18000c1fe;
  bVar3 = FUN_1800419e0((longlong)param_4);
  bVar3 = (int)CONCAT71(extraout_var,bVar3) == 0;
  plVar9 = (longlong *)(uVar21 & 0xffffffff00000000);
  plVar8 = (longlong *)
           __RTDynamicCast(plVar7[6],0,&IFileProperties::RTTI_Type_Descriptor,
                           &CNTFSFileProperties::RTTI_Type_Descriptor,plVar9);
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,1);
    goto LAB_18000c1fe;
  }
  if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
    lVar11 = *(longlong *)((longlong)plVar8 + 0x1b);
  }
  else {
    lVar11 = (*(code *)((undefined **)*plVar8)[3])(plVar8);
  }
  if (lVar11 == 0) {
    if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
      bVar4 = (byte)*(undefined2 *)((longlong)plVar8 + 0x23);
    }
    else {
      bVar4 = (*(code *)((undefined **)*plVar8)[7])(plVar8);
    }
    if ((bVar4 >> 4 & 1) == 0) {
      bVar3 = false;
    }
  }
  _Str1 = (char *)plVar7[8];
  if (_Str1 == (char *)0x0) {
    plVar8 = (longlong *)plVar7[6];
    if (plVar8 == (longlong *)0x0) {
      pcVar17 = "";
    }
    else if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
      pcVar17 = *(char **)((longlong)plVar8 + 0x11);
    }
    else {
      pcVar17 = (char *)(*(code *)((undefined **)*plVar8)[2])();
    }
    _Str1 = "";
    if (pcVar17 != (char *)0x0) {
      _Str1 = pcVar17;
    }
    if (_Str1 != (char *)0x0) goto LAB_18000bfdd;
  }
  else {
LAB_18000bfdd:
    if ((*_Str1 == '$') && (iVar5 = strcmp(_Str1,"$UsnJrnl"), iVar5 == 0)) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x890) + 0x28))();
      local_70 = (longlong *)FUN_180021ef0((longlong)plVar7,uVar6);
      lVar11 = plVar7[0xb];
      plVar8 = *(longlong **)(param_1 + 0x8f0);
      cVar1 = *(char *)(plVar8[1] + 0x19);
      plVar10 = plVar8;
      plVar20 = (longlong *)plVar8[1];
      while (cVar1 == '\0') {
        if (plVar20[4] < (longlong)local_70) {
          plVar19 = (longlong *)plVar20[2];
          plVar20 = plVar10;
        }
        else {
          plVar19 = (longlong *)*plVar20;
        }
        plVar10 = plVar20;
        plVar20 = plVar19;
        cVar1 = *(char *)((longlong)plVar19 + 0x19);
      }
      if ((plVar10 == plVar8) || ((longlong)local_70 < plVar10[4])) {
        local_68 = &local_70;
        plVar9 = (longlong *)FUN_1800252c0((undefined8 *)(param_1 + 0x8f0),plVar20,&local_68);
        FUN_1800155d0((longlong *)(param_1 + 0x8f0),local_80,plVar10,plVar9 + 4,plVar9);
        plVar10 = local_80[0];
      }
      plVar10[5] = lVar11;
    }
  }
  uVar21 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
  uVar13 = FUN_18000f2b0(param_1,plVar7,bVar3,'\x01','\x01');
  if (((char)uVar13 != '\0') && (bVar3 == false)) {
    plVar8 = (longlong *)
             __RTDynamicCast(plVar7[6],0,&IFileProperties::RTTI_Type_Descriptor,
                             &CNTFSFileProperties::RTTI_Type_Descriptor,uVar21 & 0xffffffff00000000)
    ;
    if (plVar8 != (longlong *)0x0) {
      local_60[1] = 1;
      local_60[0] = param_2;
      if ((undefined **)*plVar8 == CNTFSFileProperties::vftable) {
        local_50 = *(byte *)((longlong)plVar8 + 0x72) & 1;
      }
      else {
        local_50 = (*(code *)((undefined **)*plVar8)[0x1b])(plVar8);
      }
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x890) + 0x28))();
      local_80[0] = (longlong *)FUN_180021ef0((longlong)plVar7,uVar6);
      plVar8 = *(longlong **)(param_1 + 0x900);
      cVar1 = *(char *)(plVar8[1] + 0x19);
      plVar9 = plVar8;
      plVar10 = (longlong *)plVar8[1];
      while (cVar1 == '\0') {
        if (plVar10[4] < (longlong)local_80[0]) {
          plVar20 = (longlong *)plVar10[2];
          plVar10 = plVar9;
        }
        else {
          plVar20 = (longlong *)*plVar10;
        }
        plVar9 = plVar10;
        plVar10 = plVar20;
        cVar1 = *(char *)((longlong)plVar20 + 0x19);
      }
      if ((plVar9 == plVar8) || ((longlong)local_80[0] < plVar9[4])) {
        local_68 = local_80;
        plVar10 = (longlong *)FUN_180024fe0((undefined8 *)(param_1 + 0x900),plVar10,&local_68);
        plVar8 = (longlong *)(param_1 + 0x900);
        FUN_180025060(plVar8,&local_70,plVar9,plVar10 + 4,plVar10);
        plVar9 = local_70;
      }
      lVar11 = plVar9[5];
      plVar10 = *(longlong **)(lVar11 + 8);
      lVar12 = FUN_180014360(plVar8,lVar11,(longlong)plVar10,local_60);
      if (plVar9[6] == 0x666666666666665) {
        std::_Xlength_error("list<T> too long");
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar9[6] = plVar9[6] + 1;
      *(longlong *)(lVar11 + 8) = lVar12;
      *plVar10 = lVar12;
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,1);
  }
LAB_18000c1fe:
  local_48[0] = 0;
  local_40 = _DAT_180073290;
  uStack_38 = _UNK_180073298;
  bVar3 = FUN_180041c50(param_3);
  if (((((int)CONCAT71(extraout_var_00,bVar3) != 0) &&
       (lVar11 = FUN_180041b70(param_3,0x30,0), lVar11 != 0)) &&
      (lVar12 = FUN_180043870(lVar11), lVar12 != 0)) && (bVar4 = FUN_180043830(lVar11), bVar4 != 0))
  {
    FUN_180040cb0((longlong *)local_80);
    uVar13 = FUN_180044bd0(param_3,(longlong)local_80,1,(undefined8 *)0x0);
    if ((((int)uVar13 == 0) ||
        (bVar3 = FUN_180040b50((longlong)local_80), (int)CONCAT71(extraout_var_01,bVar3) != 0)) ||
       (lVar11 = FUN_180040570(local_80,0), lVar11 == -1)) {
      ~_String_alloc<>((longlong *)local_80);
    }
    else {
      iVar5 = FUN_1800383c0(local_48,lVar12,(ulonglong)bVar4,lVar11,param_2);
      ~_String_alloc<>((longlong *)local_80);
      if (iVar5 != 0) {
        plVar7 = (longlong *)FUN_180002680(param_1 + 0x1a0);
        lVar11 = *plVar7;
        plVar7 = *(longlong **)(lVar11 + 8);
        piVar18 = local_48;
        puVar14 = (undefined8 *)FUN_180002680(piVar18);
        lVar12 = FUN_180038620(piVar18,lVar11,plVar7,puVar14);
        puVar15 = (ulonglong *)FUN_180002670(param_1 + 0x1a0);
        uVar21 = *puVar15;
        lVar16 = FUN_180038610();
        if (lVar16 + ~uVar21 == 0) {
          std::_Xlength_error("list<T> too long");
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *puVar15 = uVar21 + 1;
        *(longlong *)(lVar11 + 8) = lVar12;
        *plVar7 = lVar12;
      }
    }
  }
  return;
}

