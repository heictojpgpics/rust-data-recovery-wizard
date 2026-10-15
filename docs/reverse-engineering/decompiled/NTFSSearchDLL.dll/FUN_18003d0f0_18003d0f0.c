// Function: FUN_18003d0f0
// Address: 18003d0f0
// Size: 735 bytes


void FUN_18003d0f0(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  ulonglong uVar12;
  void *_Memory;
  ulonglong uVar13;
  undefined1 uVar14;
  code *pcVar15;
  undefined1 auStackY_a8 [32];
  undefined1 local_78;
  undefined1 local_77 [3];
  undefined4 local_74;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50 [4];
  ulonglong local_30;
  
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_180086010 ^ (ulonglong)auStackY_a8;
  local_74 = 0;
  local_70 = (undefined8 *)0x0;
  puVar3 = FUN_180031070();
  local_70 = puVar3;
  plVar4 = FUN_180002f90();
  FUN_180002650((undefined1 *)local_50);
  local_74 = 1;
  lVar5 = FUN_1800025d0((longlong)param_2);
  lVar6 = FUN_180002cc0(0x180072f00);
  uVar12 = lVar5 + lVar6;
  puVar7 = (undefined8 *)FUN_180002680(local_50);
  uVar13 = puVar7[2];
  uVar8 = uVar13;
  if (uVar13 <= uVar12) {
    uVar1 = puVar7[3];
    if (uVar1 != uVar12) {
      if (uVar1 < uVar12) {
        FUN_18003d8e0(local_50,uVar12 - uVar13);
        puVar7[2] = uVar13;
      }
      else if ((uVar12 < 0x10) && (0xf < uVar1)) {
        pvVar2 = (void *)*puVar7;
        uVar8 = uVar13 + 1;
        FUN_180001120(puVar7,pvVar2,uVar8);
        local_68 = puVar7[3] + 1;
        _Memory = pvVar2;
        if (0xfff < local_68) {
          local_68 = puVar7[3] + 0x28;
          _Memory = *(void **)((longlong)pvVar2 + -8);
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(_Memory);
        puVar7[3] = 0xf;
        uVar13 = puVar7[2];
      }
    }
  }
  uVar14 = (undefined1)uVar8;
  uVar8 = FUN_180002cc0(0x180072f00);
  if (puVar7[3] - uVar13 < uVar8) {
    FUN_18003d6d0(local_50,uVar8,uVar14,"LostDir",uVar8);
  }
  else {
    puVar7[2] = uVar13 + uVar8;
    puVar9 = puVar7;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar9 = (undefined8 *)*puVar7;
    }
    uVar12 = uVar8;
    memmove((void *)(uVar13 + (longlong)puVar9),"LostDir",uVar8);
    uVar14 = (undefined1)uVar12;
    local_78 = 0;
    FUN_180001150((undefined1 *)((longlong)(uVar13 + (longlong)puVar9) + uVar8),&local_78);
  }
  puVar9 = (undefined8 *)FUN_180002680(param_2);
  uVar13 = puVar9[2];
  if (0xf < (ulonglong)puVar9[3]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  lVar5 = puVar7[2];
  if ((ulonglong)(puVar7[3] - lVar5) < uVar13) {
    FUN_18003d6d0(local_50,uVar13,uVar14,puVar9,uVar13);
  }
  else {
    puVar7[2] = uVar13 + lVar5;
    if (0xf < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    memmove((void *)((longlong)puVar7 + lVar5),puVar9,uVar13);
    local_77[0] = 0;
    FUN_180001150((undefined1 *)((longlong)puVar7 + lVar5 + uVar13),local_77);
  }
  pcVar15 = *(code **)(*plVar4 + 8);
  puVar7 = FUN_1800025e0(local_50);
  (*pcVar15)(plVar4,puVar7);
  (**(code **)(*plVar4 + 0x40))(plVar4,0x10);
  piVar10 = _errno();
  puVar7 = FUN_1800025e0(param_2);
  *piVar10 = 0;
  uVar11 = strtoll(puVar7,&local_60,10);
  if (puVar7 == local_60) {
    std::_Xinvalid_argument("invalid stoll argument");
    uVar11 = extraout_RAX;
  }
  if (*piVar10 == 0x22) {
    std::_Xout_of_range("stoll argument out of range");
    uVar11 = extraout_RAX_00;
  }
  puVar3[10] = uVar11;
  puVar3[9] = 0xffffffffffffffff;
  puVar3[6] = plVar4;
  local_74 = 0;
  FUN_1800025f0(local_50);
  __security_check_cookie(local_30 ^ (ulonglong)auStackY_a8);
  return;
}

