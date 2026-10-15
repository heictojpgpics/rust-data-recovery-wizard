// Function: FUN_1800365f0
// Address: 1800365f0
// Size: 917 bytes


void FUN_1800365f0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  LPCWSTR pWVar1;
  longlong *plVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined8 *_Memory;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  LPSTR _Memory_00;
  void *_Memory_01;
  longlong lVar9;
  longlong *plVar10;
  size_t sVar11;
  short *psVar12;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  longlong local_490 [2];
  longlong local_480;
  ulonglong local_478;
  undefined4 local_468;
  short local_6a [17];
  ulonglong local_48;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_498 = 0xfffffffffffffffe;
  local_48 = DAT_180086010 ^ (ulonglong)auStack_4c8;
  if (((param_2 != 0) && (param_3 != 0)) &&
     (_Memory = (undefined8 *)FUN_18002be40(0x30), local_4a0 = _Memory, _Memory != (undefined8 *)0x0
     )) {
    puVar8 = (undefined8 *)0x0;
    *_Memory = 0;
    _Memory[1] = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[5] = 0;
    _Memory[4] = param_4;
    *(undefined4 *)((longlong)_Memory + 0x14) = param_5;
    iVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    iVar4 = iVar4 * *(int *)((longlong)_Memory + 0x14);
    *(int *)(_Memory + 2) = iVar4;
    if ((iVar4 != 0) && (plVar2 = *(longlong **)(param_3 + 0x30), plVar2 != (longlong *)0x0)) {
      if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
        lVar9 = *(longlong *)((longlong)plVar2 + 0x1b);
      }
      else {
        lVar9 = (*(code *)((undefined **)*plVar2)[3])(plVar2);
      }
      _Memory[3] = lVar9;
      if (lVar9 != 0) {
        if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
          puVar6 = puVar8;
          if ((ushort *)plVar2[9] != (ushort *)0x0) {
            puVar6 = FUN_180033aa0((ushort *)plVar2[9]);
          }
        }
        else {
          puVar6 = (undefined8 *)(*(code *)((undefined **)*plVar2)[0xf])(plVar2);
        }
        if (puVar6 != (undefined8 *)0x0) {
          _Memory[1] = param_3;
          *_Memory = param_1;
          uVar7 = FUN_18002be40((longlong)(*(int *)(_Memory + 2) << 3));
          _Memory[5] = uVar7;
          (**(code **)*puVar6)(puVar6);
          memset(&local_468,0,0x418);
          local_4a0 = (undefined8 *)((ulonglong)local_4a0 & 0xffffffff00000000);
          if (((0 < (longlong)_Memory[3]) &&
              (uVar7 = FUN_180038020(_Memory,&local_468,(uint *)&local_4a0), (int)uVar7 != 0)) &&
             (0 < (int)local_4a0)) {
            local_4a8 = 1;
            local_4a0 = (undefined8 *)CONCAT44(local_4a0._4_4_,2);
            if ((local_468 == 1) || (local_468 == 2)) {
              iVar4 = 0x1ff;
              psVar12 = local_6a;
              puVar6 = puVar8;
              do {
                uVar5 = (uint)puVar6 + 1;
                if (*psVar12 == 0) {
                  uVar5 = (uint)puVar6;
                }
                puVar6 = (undefined8 *)(ulonglong)uVar5;
                if (*psVar12 == 0x5c) {
                  pWVar1 = (LPCWSTR)((longlong)&local_468 + (longlong)iVar4 * 2 + 2);
                  if ((pWVar1 != (LPCWSTR)0x0) &&
                     (*(undefined2 *)((longlong)&local_468 + (longlong)(int)(uVar5 + iVar4) * 2) = 0
                     , puVar6 = puVar8, -1 < iVar4)) goto LAB_180036810;
                  break;
                }
                psVar12 = psVar12 + -1;
                iVar4 = iVar4 + -1;
              } while (-1 < iVar4);
            }
          }
LAB_180036917:
          if ((void *)_Memory[5] != (void *)0x0) {
            free((void *)_Memory[5]);
            _Memory[5] = 0;
          }
          *_Memory = 0;
          _Memory[1] = 0;
          free(_Memory);
          goto LAB_180036948;
        }
      }
    }
    FUN_180036990(_Memory);
  }
LAB_180036948:
  __security_check_cookie(local_48 ^ (ulonglong)auStack_4c8);
  return;
LAB_180036810:
  if ((*(short *)((longlong)&local_468 + (longlong)puVar8 * 2) != 0x3a) ||
     ((iVar4 <= (int)puVar6 || (*(short *)((longlong)&local_468 + (longlong)puVar8 * 2 + 2) != 0x5c)
      ))) goto LAB_180036824;
  sVar11 = 0xffffffffffffffff;
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (pWVar1[lVar9] != L'\0');
  _Memory_00 = FUN_180006610(pWVar1,lVar9,(longlong *)&local_4a0);
  local_480 = 0;
  local_478 = 0xf;
  local_490[0]._0_1_ = 0;
  FUN_1800026c0(local_490,&DAT_18004c788,0);
  if (_Memory_00 != (LPSTR)0x0) {
    do {
      sVar11 = sVar11 + 1;
    } while (_Memory_00[sVar11] != '\0');
    FUN_1800026c0(local_490,_Memory_00,sVar11);
    free(_Memory_00);
  }
  if ((local_480 != 0) && (plVar2 = *(longlong **)(param_2 + 0x30), plVar2 != (longlong *)0x0)) {
    plVar10 = local_490;
    if (0xf < local_478) {
      plVar10 = (longlong *)CONCAT71(local_490[0]._1_7_,(undefined1)local_490[0]);
    }
    (**(code **)(*plVar2 + 8))(plVar2,plVar10);
  }
  if (0xf < local_478) {
    pvVar3 = (void *)CONCAT71(local_490[0]._1_7_,(undefined1)local_490[0]);
    _Memory_01 = pvVar3;
    if ((0xfff < local_478 + 1) &&
       (_Memory_01 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory_01)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory_01);
  }
  *(byte *)(param_2 + 0x74) = *(byte *)(param_2 + 0x74) | 4;
  goto LAB_180036917;
LAB_180036824:
  puVar6 = (undefined8 *)(ulonglong)((int)puVar6 + 1);
  puVar8 = (undefined8 *)((longlong)puVar8 + 1);
  if ((longlong)iVar4 < (longlong)puVar8) goto LAB_180036917;
  goto LAB_180036810;
}

