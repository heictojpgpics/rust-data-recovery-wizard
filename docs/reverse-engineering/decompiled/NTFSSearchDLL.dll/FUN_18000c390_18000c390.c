// Function: FUN_18000c390
// Address: 18000c390
// Size: 1268 bytes


LPCRITICAL_SECTION FUN_18000c390(longlong param_1,ulonglong param_2,int *param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined7 extraout_var;
  LPCRITICAL_SECTION p_Var5;
  ulonglong uVar6;
  undefined7 extraout_var_00;
  longlong *plVar7;
  LPCRITICAL_SECTION p_Var8;
  undefined8 uVar9;
  longlong lVar10;
  LPCRITICAL_SECTION p_Var11;
  longlong lVar12;
  undefined7 extraout_var_01;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  LPCRITICAL_SECTION local_res10;
  LPCRITICAL_SECTION local_res18;
  uint local_res20;
  LPCRITICAL_SECTION local_60 [2];
  longlong local_50 [3];
  
  p_Var11 = (LPCRITICAL_SECTION)0x0;
  uVar16 = 0x400;
  piVar4 = param_3;
  local_res20 = param_4;
  if (DAT_180086d54 == 0) {
    if (((int)param_4 < 0x400) && (uVar6 = FUN_180046160(param_3), (char)uVar6 != '\0')) {
      DAT_180086d54 = 1;
      lVar14 = 4;
      puVar13 = (undefined8 *)&DAT_180087d70;
      DAT_180086038 = param_2;
      do {
        uVar9 = *(undefined8 *)(param_3 + 2);
        *puVar13 = *(undefined8 *)param_3;
        puVar13[1] = uVar9;
        uVar9 = *(undefined8 *)(param_3 + 6);
        puVar13[2] = *(undefined8 *)(param_3 + 4);
        puVar13[3] = uVar9;
        uVar9 = *(undefined8 *)(param_3 + 10);
        puVar13[4] = *(undefined8 *)(param_3 + 8);
        puVar13[5] = uVar9;
        uVar9 = *(undefined8 *)(param_3 + 0xe);
        puVar13[6] = *(undefined8 *)(param_3 + 0xc);
        puVar13[7] = uVar9;
        uVar9 = *(undefined8 *)(param_3 + 0x12);
        puVar13[8] = *(undefined8 *)(param_3 + 0x10);
        puVar13[9] = uVar9;
        uVar9 = *(undefined8 *)(param_3 + 0x16);
        puVar13[10] = *(undefined8 *)(param_3 + 0x14);
        puVar13[0xb] = uVar9;
        uVar9 = *(undefined8 *)(param_3 + 0x1a);
        puVar13[0xc] = *(undefined8 *)(param_3 + 0x18);
        puVar13[0xd] = uVar9;
        uVar9 = *(undefined8 *)(param_3 + 0x1e);
        puVar13[0xe] = *(undefined8 *)(param_3 + 0x1c);
        puVar13[0xf] = uVar9;
        param_3 = param_3 + 0x20;
        lVar14 = lVar14 + -1;
        puVar13 = puVar13 + 0x10;
      } while (lVar14 != 0);
      return (LPCRITICAL_SECTION)0x1;
    }
  }
  else {
    uVar6 = DAT_180086038 + 1;
    uVar17 = param_2;
    if (uVar6 == param_2) {
      lVar14 = 4;
      puVar13 = (undefined8 *)&DAT_180087f70;
      do {
        uVar9 = *(undefined8 *)(piVar4 + 2);
        *puVar13 = *(undefined8 *)piVar4;
        puVar13[1] = uVar9;
        uVar9 = *(undefined8 *)(piVar4 + 6);
        puVar13[2] = *(undefined8 *)(piVar4 + 4);
        puVar13[3] = uVar9;
        uVar9 = *(undefined8 *)(piVar4 + 10);
        puVar13[4] = *(undefined8 *)(piVar4 + 8);
        puVar13[5] = uVar9;
        uVar9 = *(undefined8 *)(piVar4 + 0xe);
        puVar13[6] = *(undefined8 *)(piVar4 + 0xc);
        puVar13[7] = uVar9;
        uVar9 = *(undefined8 *)(piVar4 + 0x12);
        puVar13[8] = *(undefined8 *)(piVar4 + 0x10);
        puVar13[9] = uVar9;
        uVar9 = *(undefined8 *)(piVar4 + 0x16);
        puVar13[10] = *(undefined8 *)(piVar4 + 0x14);
        puVar13[0xb] = uVar9;
        uVar9 = *(undefined8 *)(piVar4 + 0x1a);
        puVar13[0xc] = *(undefined8 *)(piVar4 + 0x18);
        puVar13[0xd] = uVar9;
        uVar9 = *(undefined8 *)(piVar4 + 0x1e);
        puVar13[0xe] = *(undefined8 *)(piVar4 + 0x1c);
        puVar13[0xf] = uVar9;
        piVar4 = piVar4 + 0x20;
        lVar14 = lVar14 + -1;
        puVar13 = puVar13 + 0x10;
        uVar17 = DAT_180086038;
      } while (lVar14 != 0);
    }
    DAT_180086d54 = 0;
    DAT_180086038 = 0xffffffffffffffff;
    bVar18 = uVar6 != param_2;
    piVar4 = (int *)&DAT_180087d70;
    param_2 = uVar17;
    if (bVar18) {
      piVar4 = param_3;
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
  if (0x400 < iVar2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
    uVar16 = (ulonglong)uVar3;
  }
  uVar3 = (uint)uVar16;
  FUN_180041cf0(local_50,piVar4,uVar3,0);
  p_Var5 = (LPCRITICAL_SECTION)(param_1 + 0x7a8);
  local_res10 = p_Var5;
  EnterCriticalSection(p_Var5);
  FUN_180027bd0(*(longlong **)(param_1 + 0xe0),param_2,local_50);
  LeaveCriticalSection(p_Var5);
  bVar18 = FUN_180041c50(local_50);
  if ((int)CONCAT71(extraout_var,bVar18) != 0) {
    *(longlong *)(param_1 + 0x7a0) = *(longlong *)(param_1 + 0x7a0) + 1;
    FUN_180041a20((longlong)piVar4,uVar3);
    iVar2 = FUN_180044b50((longlong)piVar4);
    if (iVar2 == 0) {
      iVar2 = FUN_180044bb0(param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_180044b90(param_3);
        if (iVar2 == 0) {
          iVar2 = FUN_180044b70(param_3);
          if (iVar2 == 0) {
            FUN_18000be00(param_1,param_2,local_50,param_3,local_res20);
            goto LAB_18000c84c;
          }
          plVar7 = *(longlong **)(param_1 + 0xf0);
          if (499999 < (ulonglong)plVar7[1]) goto LAB_18000c84c;
          p_Var8 = (LPCRITICAL_SECTION)FUN_18002be40(0x20);
          p_Var5 = p_Var11;
          local_res18 = p_Var8;
          if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
            local_60[0] = p_Var8;
            FUN_180040cb0((longlong *)&p_Var8->LockCount);
            p_Var5 = p_Var8;
          }
          local_res10 = p_Var5;
          uVar9 = FUN_180039ec0(&p_Var5->DebugInfo,piVar4,uVar3,param_2);
          if ((int)uVar9 == 0) {
            if (local_res10 != (LPCRITICAL_SECTION)0x0) {
              FUN_180026880(local_res10);
            }
            goto LAB_18000c84c;
          }
          lVar14 = *plVar7;
          plVar15 = *(longlong **)(lVar14 + 8);
          lVar10 = FUN_1800143b0(p_Var5,lVar14,(longlong)plVar15,&local_res10);
          lVar12 = plVar7[1];
          if (lVar12 == 0xaaaaaaaaaaaaaa9) {
            std::_Xlength_error("list<T> too long");
            pcVar1 = (code *)swi(3);
            p_Var11 = (LPCRITICAL_SECTION)(*pcVar1)();
            return p_Var11;
          }
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0xe8);
          if (499999 < (ulonglong)plVar7[1]) goto LAB_18000c84c;
          p_Var8 = (LPCRITICAL_SECTION)FUN_18002be40(0x20);
          p_Var5 = p_Var11;
          local_res18 = p_Var8;
          if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
            local_60[0] = p_Var8;
            FUN_180040cb0((longlong *)&p_Var8->LockCount);
            p_Var5 = p_Var8;
          }
          local_res10 = p_Var5;
          uVar9 = FUN_180039ec0(&p_Var5->DebugInfo,piVar4,uVar3,param_2);
          if ((int)uVar9 == 0) {
            if (local_res10 != (LPCRITICAL_SECTION)0x0) {
              FUN_180026880(local_res10);
            }
            goto LAB_18000c84c;
          }
          lVar14 = *plVar7;
          plVar15 = *(longlong **)(lVar14 + 8);
          lVar10 = FUN_1800143b0(p_Var5,lVar14,(longlong)plVar15,&local_res10);
          lVar12 = plVar7[1];
          if (lVar12 == 0xaaaaaaaaaaaaaa9) {
            std::_Xlength_error("list<T> too long");
            pcVar1 = (code *)swi(3);
            p_Var11 = (LPCRITICAL_SECTION)(*pcVar1)();
            return p_Var11;
          }
        }
        plVar7[1] = lVar12 + 1;
        *(longlong *)(lVar14 + 8) = lVar10;
        *plVar15 = lVar10;
      }
      else {
        FUN_180028c00(*(longlong **)(param_1 + 0xf8),param_2,piVar4,uVar3);
      }
    }
    else {
      local_res18 = (LPCRITICAL_SECTION)FUN_18002be40(0x50);
      p_Var5 = p_Var11;
      if (local_res18 != (LPCRITICAL_SECTION)0x0) {
        p_Var5 = (LPCRITICAL_SECTION)FUN_180038e40((undefined8 *)local_res18);
      }
      local_res10 = p_Var5;
      bVar18 = FUN_180038f40(&p_Var5->DebugInfo,(longlong)piVar4,uVar16,param_2);
      p_Var5 = local_res10;
      if ((int)CONCAT71(extraout_var_00,bVar18) == 0) {
        if (local_res10 != (LPCRITICAL_SECTION)0x0) {
          FUN_180038ec0((longlong)local_res10);
          free(p_Var5);
        }
      }
      else {
        FUN_1800140e0((longlong *)(param_1 + 0x150),local_60,uVar16,(longlong *)&local_res10);
        FUN_18000ba40(param_1,(longlong *)local_res10);
        if ((*(int *)(param_1 + 0x118) != 0) &&
           (plVar7 = FUN_18000d1d0(param_1,piVar4,uVar3,param_2,0,0,'\x01'),
           plVar7 != (longlong *)0x0)) {
          FUN_18000f2b0(param_1,plVar7,'\x01','\x01','\x01');
        }
      }
    }
  }
LAB_18000c84c:
  bVar18 = FUN_180041c50(local_50);
  if ((int)CONCAT71(extraout_var_01,bVar18) == 0) {
    p_Var11 = (LPCRITICAL_SECTION)0x2;
  }
  FUN_180041c70(local_50);
  return p_Var11;
}

