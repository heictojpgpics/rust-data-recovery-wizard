// Function: FUN_180032cb0
// Address: 180032cb0
// Size: 1008 bytes


/* WARNING: Removing unreachable block (ram,0x000180032fc0) */
/* WARNING: Removing unreachable block (ram,0x000180032fc8) */

void FUN_180032cb0(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  void *pvVar9;
  void *pvVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong *local_58;
  void *pvStack_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  
  local_58 = (ulonglong *)0x0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_58 = (ulonglong *)FUN_18002be40(0x10);
  *local_58 = 0;
  local_58[1] = 0;
  *local_58 = (ulonglong)&local_58;
  if ((((int)local_38 + (int)local_40 & 1U) == 0) && (local_48 <= local_38 + 2U >> 1)) {
    FUN_1800331d0((longlong)&local_58,local_40);
  }
  local_40 = local_40 & local_48 * 2 - 1;
  uVar11 = local_40 + local_38;
  pvVar9 = (void *)(local_48 - 1 & uVar11 >> 1);
  lVar8 = (longlong)pvVar9 * 8;
  if (*(longlong *)((longlong)pvStack_50 + lVar8) == 0) {
    uVar5 = FUN_18002be40(0x10);
    *(undefined8 *)((longlong)pvStack_50 + lVar8) = uVar5;
    pvVar9 = pvStack_50;
  }
  puVar6 = (undefined8 *)
           FUN_180001100(pvVar9,*(longlong *)((longlong)pvStack_50 + lVar8) +
                                (ulonglong)((uint)uVar11 & 1) * 8);
  *puVar6 = param_1;
  local_38 = local_38 + 1;
  while (local_38 != 0) {
    uVar11 = 0;
    if (local_58 != (ulonglong *)0x0) {
      uVar11 = *local_58;
    }
    plVar7 = *(longlong **)
              (*(longlong *)
                (*(longlong *)(uVar11 + 8) + (*(longlong *)(uVar11 + 0x10) - 1U & local_40 >> 1) * 8
                ) + (ulonglong)((uint)local_40 & 1) * 8);
    local_38 = local_38 + -1;
    if (local_38 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = local_40 + 1;
    }
    plVar2 = (longlong *)plVar7[6];
    if (plVar2 != (longlong *)0x0) {
      bVar12 = *(byte *)(plVar7 + 0xe) & 3;
      if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
        uVar3 = *(ushort *)((longlong)plVar2 + 0x23);
      }
      else {
        uVar3 = (*(code *)((undefined **)*plVar2)[7])(plVar2);
      }
      if ((uVar3 & 0x10) == 0) {
        iVar4 = (**(code **)(*plVar7 + 8))(plVar7);
        if (iVar4 == 0) {
          *param_2 = *param_2 + 1;
        }
        if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
          lVar8 = *(longlong *)((longlong)plVar2 + 0x1b);
        }
        else {
          lVar8 = (*(code *)((undefined **)*plVar2)[3])(plVar2);
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + lVar8;
        if (bVar12 == 2) {
          iVar4 = (**(code **)(*plVar7 + 8))(plVar7);
          if (iVar4 == 0) {
            param_2[1] = param_2[1] + 1;
          }
          if ((undefined **)*plVar2 == CNTFSFileProperties::vftable) {
            lVar8 = *(longlong *)((longlong)plVar2 + 0x1b);
          }
          else {
            lVar8 = (*(code *)((undefined **)*plVar2)[3])(plVar2);
          }
          *(longlong *)(param_2 + 4) = *(longlong *)(param_2 + 4) + lVar8;
        }
        if (((uVar3 & 0x800) != 0) && (param_2[6] = param_2[6] + 1, bVar12 == 2)) {
          param_2[7] = param_2[7] + 1;
        }
        if (((uVar3 & 0x40) != 0) && (param_2[8] = param_2[8] + 1, bVar12 == 2)) {
          param_2[9] = param_2[9] + 1;
        }
      }
      if (param_2[10] != 0) {
        *(byte *)(plVar7 + 0xe) = *(byte *)(plVar7 + 0xe) & 0xfc | *(byte *)(param_2 + 0xb);
      }
    }
    for (lVar8 = plVar7[2]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x18)) {
      if ((((char)local_40 + (char)local_38 & 1U) == 0) && (local_48 <= local_38 + 2U >> 1)) {
        FUN_1800331d0((longlong)&local_58,local_38);
      }
      local_40 = local_40 & local_48 * 2 - 1;
      uVar11 = local_40 + local_38;
      pvVar9 = (void *)(local_48 - 1 & uVar11 >> 1);
      lVar1 = (longlong)pvVar9 * 8;
      if (*(longlong *)(lVar1 + (longlong)pvStack_50) == 0) {
        uVar5 = FUN_18002be40(0x10);
        *(undefined8 *)(lVar1 + (longlong)pvStack_50) = uVar5;
        pvVar9 = pvStack_50;
      }
      plVar7 = (longlong *)
               FUN_180001100(pvVar9,*(longlong *)(lVar1 + (longlong)pvStack_50) +
                                    (ulonglong)((uint)uVar11 & 1) * 8);
      *plVar7 = lVar8;
      local_38 = local_38 + 1;
    }
  }
  local_38 = 0;
  pvVar9 = pvStack_50;
  uVar11 = local_48;
  while (uVar11 != 0) {
    uVar11 = uVar11 - 1;
    pvVar10 = *(void **)((longlong)pvVar9 + uVar11 * 8);
    if (pvVar10 != (void *)0x0) {
      free(pvVar10);
      pvVar9 = pvStack_50;
    }
  }
  if (pvVar9 != (void *)0x0) {
    pvVar10 = pvVar9;
    if ((0xfff < local_48 * 8) &&
       (pvVar10 = *(void **)((longlong)pvVar9 - 8),
       0x1f < (ulonglong)((longlong)pvVar9 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar10);
  }
  local_48 = 0;
  pvStack_50 = (void *)0x0;
  free(local_58);
  return;
}

