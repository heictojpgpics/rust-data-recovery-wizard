// Function: FUN_1800069e0
// Address: 1800069e0
// Size: 961 bytes


undefined8
FUN_1800069e0(longlong *param_1,longlong param_2,longlong param_3,int param_4,longlong param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined7 extraout_var;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined7 extraout_var_00;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  void *pvVar13;
  uint uVar14;
  longlong *plVar15;
  int local_res10 [2];
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  local_48 = 0xfffffffffffffffe;
  plVar15 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x37) = 0;
  uVar8 = 0;
  local_res10[0] = 0;
  local_60 = 0;
  puVar9 = (undefined4 *)FUN_1800430b0(param_1,0x80,0,local_res10,&local_60);
  FUN_180040cb0(local_38);
  plVar11 = plVar15;
  do {
    if (puVar9 == (undefined4 *)0x0) {
      FUN_180040b10(local_38);
      local_58 = 0;
      plVar11 = FUN_1800068d0(local_38,&local_58);
      plVar10 = *(longlong **)(param_2 + 10);
      if ((longlong)*(longlong **)(param_2 + 10) < 1) {
        plVar10 = plVar15;
      }
      *(longlong **)(param_2 + 10) = plVar10;
      if ((param_3 != 0) &&
         (uVar14 = (uint)(param_3 >> 0x3f) & 0x1ff, ((int)param_3 + uVar14 & 0x1ff) == uVar14)) {
        plVar12 = (longlong *)(local_58 * param_3);
        if ((longlong)plVar12 <= (longlong)plVar10) {
          plVar10 = plVar12;
        }
        *(longlong **)(param_2 + 10) = plVar10;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
          if (plVar12 != (longlong *)0x0) {
            plVar10 = plVar12;
          }
          *(longlong **)(param_2 + 10) = plVar10;
        }
      }
LAB_180006c07:
      if (plVar11 == (longlong *)0x0) {
        *(undefined2 *)(param_2 + 0x5f) = 0;
      }
      else {
        local_58 = 0;
        local_50 = (longlong *)0x0;
        local_40 = (longlong *)FUN_18002be40(0x10);
        plVar10 = plVar15;
        if (local_40 != (longlong *)0x0) {
          *(undefined2 *)local_40 = 0;
          local_40[1] = 0;
          plVar10 = local_40;
        }
        plVar12 = plVar15;
        if (plVar10 != (longlong *)0x0) {
          iVar7 = (**(code **)(*plVar11 + 0x28))(plVar11);
          if ((iVar7 == 1) || (iVar7 = (**(code **)(*plVar11 + 0x28))(plVar11), iVar7 == 0xe)) {
            uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11);
            *(undefined2 *)plVar10 = uVar6;
          }
          pvVar13 = FUN_1800336f0((longlong)plVar11,&local_58,(longlong *)&local_50);
          plVar10[1] = (longlong)pvVar13;
          if (pvVar13 == (void *)0x0) {
            FUN_180002ed0(plVar10);
            plVar10 = plVar15;
          }
          uVar8 = (undefined4)local_58;
          plVar15 = plVar10;
          plVar12 = local_50;
        }
        *(longlong **)(param_2 + 0x37) = plVar15;
        *(undefined4 *)(param_2 + 0x53) = uVar8;
        *(int *)(param_2 + 0x4f) = (int)plVar12;
        cVar3 = (**(code **)(*plVar11 + 8))(plVar11);
        bVar4 = (cVar3 << 4 ^ *(byte *)(param_2 + 0x61)) & 0x10 ^ *(byte *)(param_2 + 0x61);
        *(byte *)(param_2 + 0x61) = bVar4;
        if (*(code **)(*plVar11 + 0x40) == FUN_1800335c0) {
          uVar8 = (undefined4)plVar11[5];
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0x40))(plVar11);
          bVar4 = *(byte *)(param_2 + 0x61);
        }
        *(undefined4 *)(param_2 + 0x5b) = uVar8;
        if (((((bVar4 & 0x10) == 0) && (0 < (longlong)plVar12)) && (0 < param_5)) && (0 < param_4))
        {
          if (param_5 < *(longlong *)(param_2 + 10)) {
            param_5 = *(longlong *)(param_2 + 10);
          }
          uVar14 = FUN_1800067e0((uint)((param_5 / (longlong)param_4) / (longlong)plVar12));
          *(short *)(param_2 + 0x5f) = (short)uVar14;
          (**(code **)*plVar11)(plVar11,1);
        }
        else {
          *(undefined2 *)(param_2 + 0x5f) = 0;
          (**(code **)*plVar11)(plVar11,1);
        }
      }
      if ((*(ushort *)(param_2 + 0x12) & 0x840) == 0x840) {
        *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) & 0xf7ff | 0x40;
      }
      ~_String_alloc<>(local_38);
      return 1;
    }
    bVar2 = FUN_180045440((longlong)puVar9);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      uVar5 = FUN_1800453b0((longlong)puVar9);
      if ((int)CONCAT62(extraout_var_01,uVar5) != 0) {
        *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) | 0x800;
      }
      uVar5 = FUN_180045380((longlong)puVar9);
      if ((int)CONCAT62(extraout_var_02,uVar5) != 0) {
        *(ushort *)(param_2 + 0x12) = *(ushort *)(param_2 + 0x12) | 0x40;
      }
      local_68 = 0;
      bVar2 = FUN_180045400((longlong)puVar9);
      lVar1 = local_60;
      iVar7 = local_res10[0];
      if ((int)CONCAT71(extraout_var_00,bVar2) != 0) {
        uVar5 = FUN_180045350((longlong)puVar9);
        uVar14 = FUN_180045320((longlong)puVar9);
        plVar10 = (longlong *)FUN_18002be40(0x50);
        plVar11 = plVar15;
        local_50 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          FUN_180033ee0(plVar10);
          *plVar10 = (longlong)CResidentNTFSDataRunList::vftable;
          *(undefined4 *)(plVar10 + 9) = 0;
          plVar11 = plVar10;
        }
        plVar10 = (longlong *)FUN_18002be40(0x10);
        local_50 = plVar15;
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = 0;
          plVar10[1] = 0;
          local_50 = plVar10;
        }
        *local_50 = lVar1;
        local_50[1] = 1;
        FUN_180034450((longlong)(plVar11 + 1),&local_50);
        *(uint *)(plVar11 + 9) = (uint)uVar5 + iVar7;
        *(ulonglong *)(param_2 + 10) = (ulonglong)uVar14;
        local_68 = (ulonglong)uVar14;
        goto LAB_180006c07;
      }
      local_58 = 0;
      FUN_180044e60(puVar9,&local_68,&local_58,(longlong)local_38,0);
      if (local_58 == 0) {
        if (*(longlong *)(param_2 + 10) < 1) {
          *(ulonglong *)(param_2 + 10) = local_68;
        }
        else if (*(longlong *)(param_2 + 10) < (longlong)local_68) {
          *(ulonglong *)(param_2 + 10) = local_68;
        }
      }
    }
    uVar14 = (int)plVar11 + 1;
    plVar11 = (longlong *)(ulonglong)uVar14;
    puVar9 = (undefined4 *)FUN_1800430b0(param_1,0x80,uVar14,local_res10,&local_60);
  } while( true );
}

